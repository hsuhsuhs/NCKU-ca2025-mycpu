// SPDX-License-Identifier: MIT
// MyCPU is freely redistributable under the MIT License. See the file
// "LICENSE" for information on usage and redistribution of this file.

package riscv.core

import chisel3._
import chisel3.util._
import peripheral.RAMBundle
import riscv.Parameters

// Memory Access stage: handles load/store operations with proper byte/halfword/word alignment
class MemoryAccess extends Module {
  val io = IO(new Bundle() {
    val alu_result        = Input(UInt(Parameters.DataWidth))
    val reg2_data         = Input(UInt(Parameters.DataWidth))
    val memory_read_enable  = Input(Bool())
    val memory_write_enable = Input(Bool())
    val funct3            = Input(UInt(3.W))

    val wb_memory_read_data = Output(UInt(Parameters.DataWidth))

    val memory_bundle = Flipped(new RAMBundle)
  })
  val mem_address_index = io.alu_result(log2Up(Parameters.WordSize) - 1, 0).asUInt

  io.memory_bundle.write_enable := false.B
  io.memory_bundle.write_data   := 0.U
  io.memory_bundle.address      := io.alu_result
  io.memory_bundle.write_strobe := VecInit(Seq.fill(Parameters.WordSize)(false.B))
  io.wb_memory_read_data        := 0.U

  // ============================================================
  // [CA25: Exercise 12] Load Data Extension - Sign and Zero Extension
  // ============================================================
  when(io.memory_read_enable) {
    // Optimized load logic: extract bytes/halfwords based on address alignment
    val data  = io.memory_bundle.read_data
    val bytes = Wire(Vec(Parameters.WordSize, UInt(Parameters.ByteWidth)))
    for (i <- 0 until Parameters.WordSize) {
      bytes(i) := data((i + 1) * Parameters.ByteBits - 1, i * Parameters.ByteBits)
    }
    // Select byte based on lower 2 address bits (mem_address_index)
    val byte = bytes(mem_address_index)
    // Select halfword based on bit 1 of address (word-aligned halfwords)
    val half = Mux(mem_address_index(1), Cat(bytes(3), bytes(2)), Cat(bytes(1), bytes(0)))

    // Complete sign/zero extension for load operations
    io.wb_memory_read_data := MuxLookup(io.funct3, 0.U)(
      Seq(
        // Complete LB (sign-extend byte)
        // Note: The original code provided MuxLookup for LB to handle unaligned memory access.
        // We complete the case for index 3, and fix the index 2 case:
        InstructionsTypeL.lb -> MuxLookup(mem_address_index, Cat(Fill(24, data(31)), data(31, 24)))(
          Seq(
            0.U -> Cat(Fill(24, data(7)), data(7, 0)),     // Index 0: bytes 0 (data[7:0]), sign bit data[7]
            1.U -> Cat(Fill(24, data(15)), data(15, 8)),  // Index 1: bytes 1 (data[15:8]), sign bit data[15]
            2.U -> Cat(Fill(24, data(23)), data(23, 16)), // Index 2: bytes 2 (data[23:16]), sign bit data[23]
            3.U -> Cat(Fill(24, data(31)), data(31, 24))  // Index 3: bytes 3 (data[31:24]), sign bit data[31]
          )
        ),

        // Complete LBU (zero-extend byte)
        // Note: The original code provided MuxLookup for LBU to handle unaligned memory access.
        // We complete the case for index 3, and fix the index 2 case:
        InstructionsTypeL.lbu -> MuxLookup(mem_address_index, Cat(0.U(24.W), data(31, 24)))(
          Seq(
            0.U -> Cat(0.U(24.W), data(7, 0)),    // Index 0: bytes 0 (data[7:0])
            1.U -> Cat(0.U(24.W), data(15, 8)),   // Index 1: bytes 1 (data[15:8])
            2.U -> Cat(0.U(24.W), data(23, 16)),  // Index 2: bytes 2 (data[23:16])
            3.U -> Cat(0.U(24.W), data(31, 24))   // Index 3: bytes 3 (data[31:24])
          )
        ),

        // Complete LH (sign-extend halfword)
        InstructionsTypeL.lh -> Mux(
          mem_address_index(1) === 0.U, // Aligned to lower halfword (index 0 or 1)
          Cat(Fill(16, data(15)), data(15, 0)), // Lower halfword (data[15:0]), sign bit data[15]
          Cat(Fill(16, data(31)), data(31, 16)) // Upper halfword (data[31:16]), sign bit data[31]
        ),

        // Complete LHU (zero-extend halfword)
        InstructionsTypeL.lhu -> Mux(
          mem_address_index(1) === 0.U, // Aligned to lower halfword (index 0 or 1)
          Cat(0.U(16.W), data(15, 0)), // Lower halfword (data[15:0])
          Cat(0.U(16.W), data(31, 16)) // Upper halfword (data[31:16])
        ),

        // LW: Load full word, no extension needed (completed example)
        InstructionsTypeL.lw -> data
      )
    )
  // ============================================================
  // [CA25: Exercise 13] Store Data Alignment - Byte Strobes and Shifting
  // ============================================================
  }.elsewhen(io.memory_write_enable) {
    io.memory_bundle.write_data      := io.reg2_data
    io.memory_bundle.write_enable    := true.B
    io.memory_bundle.write_strobe    := VecInit(Seq.fill(Parameters.WordSize)(false.B))

    when(io.funct3 === InstructionsTypeS.sb) {
      // Complete store byte logic
      // 1. Enable single byte strobe at appropriate position
      // 2. Shift byte data (reg2_data[7:0]) to correct position based on address index
      io.memory_bundle.write_strobe(mem_address_index) := true.B
      // The shift amount is mem_address_index * 8. Since 8 = 2^3, this is mem_address_index << 3.
      io.memory_bundle.write_data := io.reg2_data(Parameters.ByteBits - 1, 0) << (mem_address_index << 3.U)

    }.elsewhen(io.funct3 === InstructionsTypeS.sh) {
      // Complete store halfword logic
      when(mem_address_index(1) === 0.U) {
        // Lower halfword (bytes 0-1). mem_address_index is 0 or 1.
        // Enable strobes for bytes 0 and 1.
        for (i <- 0 until Parameters.WordSize / 2) {
          io.memory_bundle.write_strobe(i) := true.B
        }
        // Data is already aligned to the lower halfword (bits 15:0), so no shifting needed.
        io.memory_bundle.write_data := io.reg2_data(
          Parameters.WordSize / 2 * Parameters.ByteBits - 1, // 16 - 1 = 15
          0
        )
      }.otherwise {
        // Upper halfword (bytes 2-3). mem_address_index is 2 or 3.
        // Enable strobes for bytes 2 and 3.
        for (i <- Parameters.WordSize / 2 until Parameters.WordSize) {
          io.memory_bundle.write_strobe(i) := true.B
        }
        // Shift data (reg2_data[15:0]) left by 16 bits.
        io.memory_bundle.write_data := io.reg2_data(
          Parameters.WordSize / 2 * Parameters.ByteBits - 1,
          0
        ) << (Parameters.WordSize / 2 * Parameters.ByteBits) // Shift left by 16
      }

    }.elsewhen(io.funct3 === InstructionsTypeS.sw) {
      // Store word: enable all byte strobes, no shifting needed (completed example)
      for (i <- 0 until Parameters.WordSize) {
        io.memory_bundle.write_strobe(i) := true.B
      }
    }
  }
}