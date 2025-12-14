// SPDX-License-Identifier: MIT
// MyCPU is freely redistributable under the MIT License. See the file
// "LICENSE" for information on usage and redistribution of this file.

package riscv.core.fivestage_final

import chisel3._
import riscv.Parameters

/**
 * Advanced Hazard Detection and Control Unit: Maximum optimization
 *
 * Most sophisticated hazard detection supporting early branch resolution
 * in ID stage with comprehensive forwarding support. Achieves best
 * performance through aggressive optimization.
 */
class Control extends Module {
  val io = IO(new Bundle {
    val jump_flag              = Input(Bool())                               // id.io.if_jump_flag (Branch taken)
    val jump_instruction_id    = Input(Bool())                               // id.io.ctrl_jump_instruction (JALR in ID)
    val rs1_id                 = Input(UInt(Parameters.PhysicalRegisterAddrWidth))
    val rs2_id                 = Input(UInt(Parameters.PhysicalRegisterAddrWidth))
    val memory_read_enable_ex  = Input(Bool())                               // Load in EX
    val rd_ex                  = Input(UInt(Parameters.PhysicalRegisterAddrWidth))
    val memory_read_enable_mem = Input(Bool())                               // Load in MEM
    val rd_mem                 = Input(UInt(Parameters.PhysicalRegisterAddrWidth))

    val if_flush = Output(Bool())
    val id_flush = Output(Bool())
    val pc_stall = Output(Bool())
    val if_stall = Output(Bool())
  })

  // Initialize control signals to default (no stall/flush) state
  io.if_flush := false.B
  io.id_flush := false.B
  io.pc_stall := false.B
  io.if_stall := false.B

  // Helper function for dependency check:
  // Checks if the destination register 'rd' conflicts with either source register in ID
  def conflict(rd: UInt): Bool = {
    (rd === io.rs1_id) || (rd === io.rs2_id)
  }

  // ============================================================
  // [CA25: Exercise 19] Pipeline Hazard Detection
  // ============================================================

  // Complex hazard detection for early branch resolution in ID stage
  when(
    // ============ Complex Hazard Detection Logic ============

    // --- Condition 1: EX stage hazards (1-cycle dependencies) ---
    (
      // 1. Jump in ID needs register value, OR
      // 2. Load in EX (load-use hazard)
      (io.jump_instruction_id || io.memory_read_enable_ex) && // Either:
      io.rd_ex =/= 0.U &&                                     // 3. Destination is not x0
      conflict(io.rd_ex)                                      // 4. Destination matches ID source
    )

      || // OR

    // --- Condition 2: MEM stage load with jump dependency (2-cycle) ---
    (
      io.jump_instruction_id &&                               // 1. Jump instruction in ID
      io.memory_read_enable_mem &&                            // 2. Load instruction in MEM
      io.rd_mem =/= 0.U &&                                    // 3. Load destination not x0
      conflict(io.rd_mem)                                     // 4. Load dest matches jump source
    )
  ) {
    // Stall action: Insert bubble and freeze pipeline
    // - Flush ID/EX register (insert NOP bubble)
    // - Freeze PC (don't fetch next instruction)
    // - Freeze IF/ID (hold current fetch result)
    io.id_flush := true.B
    io.pc_stall := true.B
    io.if_stall := true.B

  }.elsewhen(io.jump_flag) {
    // ============ Control Hazard (Branch Taken) ============
    // Branch resolved in ID stage - only 1 cycle penalty
    // Only flush IF stage (not ID) since branch resolved early
    // Hint: Branch resolved in ID stage, discard wrong-path instruction
    io.if_flush := true.B
    // Note: No ID flush needed - branch already resolved in ID!
  }

  // ============================================================
  // [CA25: Exercise 21] Hazard Detection Summary and Analysis
  // ============================================================
  // (Note: The answers are left as comments for structure, per the original exercise format.)

  // Q1: Why do we need to stall for load-use hazards?
  // A: [Student answer here]
  // A stall is needed for a load-use hazard because the result of the Load instruction is not available until the Memory (MEM) stage, but the subsequent instruction in the Instruction Decode (ID) stage needs to read it. Stalling delays the dependent instruction by one cycle, giving the load instruction enough time to forward the data.

  // Q2: What is the difference between "stall" and "flush" operations?
  // A: [Student answer here]
  // Stall (Bubble/NOP Insertion) resolves Data Hazards by freezing the PC/IF/ID and forcing a NOP into the ID/EX register. Flush (Cancel) resolves Control Hazards by discarding an instruction fetched down the wrong path.

  // Q3: Why does jump instruction with register dependency need stall?
  // A: [Student answer here]
  // JALR requires the target address (from r_s1) to be calculated in the ID stage. If r_s1 is being written by a prior instruction (Data Hazard), a stall is needed until the correct value can be forwarded to the ID stage to calculate the next PC.

  // Q4: In this design, why is branch penalty only 1 cycle instead of 2?
  // A: [Student answer here]
  // The branch penalty is only 1 cycle because the design implements early branch resolution in the ID stage. By resolving in ID, only the single incorrect instruction in the IF/ID register needs to be flushed (discarded), resulting in a 1-cycle penalty.

  // Q5: What would happen if we removed the hazard detection logic entirely?
  // A: [Student answer here]
  // The processor would fail to execute code correctly. Data Hazards would lead to incorrect computation results, and Control Hazards would lead to instructions from the wrong code path being executed.

  // Q6: Complete the stall condition summary:
  // Stall is needed when:
  // 1. (EX stage condition) An instruction in ID reads the destination of a Load or JALR instruction currently in the EX stage.
  // 2. (MEM stage condition) A JALR instruction in ID reads the destination of a Load instruction currently in the MEM stage.
  // Flush is needed when:
  // 1. (Branch/Jump condition) A Branch instruction in the ID stage evaluates to Taken (when io.jump_flag is true).
}