// SPDX-License-Identifier: MIT
// MyCPU is freely redistributable under the MIT License. See the file
// "LICENSE" for information on usage and redistribution of this file.

package riscv.core.fivestage_final

import chisel3._
import riscv.core.PipelineRegister
import riscv.Parameters

/**
 * IF2ID: Pipeline register between Instruction Fetch and Instruction Decode stages
 *
 * Pipeline Stage Boundary: IF → ID
 *
 * Key Responsibilities:
 * - Buffer instruction from IF stage to ID stage
 * - Buffer instruction address (PC) for control flow tracking
 * - Buffer interrupt flags for trap handling coordination
 * - Support pipeline stalls (freeze current values when hazard detected)
 * - Support pipeline flushes (clear invalid instructions on branch misprediction)
 *
 * Control Signals:
 * - stall: Freeze register contents (hold current instruction when ID/EX busy)
 * - flush: Clear register contents to NOP (discard wrong-path instructions)
 *
 * Flush vs Stall:
 * - Flush: Insert bubble (NOP) when branch taken or exception occurs
 *   - Sets instruction to NOP (0x00000013 = ADDI x0, x0, 0)
 *   - Used after control hazards to discard fetched but incorrect instructions
 * - Stall: Hold current value when downstream stage not ready
 *   - Keeps same instruction for another cycle
 *   - Used for data hazards (load-use, register dependencies)
 *
 * Example - Branch Taken:
 * 1. Branch instruction resolves in EX stage
 * 2. IF fetched wrong-path instruction (sequential PC)
 * 3. Control unit asserts flush signal
 * 4. IF2ID outputs NOP, discarding wrong-path instruction
 * 5. IF restarts with correct target address
 *
 * Example - Load-Use Hazard:
 * 1. Load instruction in EX stage
 * 2. Next instruction in ID needs load result
 * 3. Control unit asserts stall signal
 * 4. IF2ID holds current instruction
 * 5. Pipeline inserts bubble (1-cycle delay)
 */
class IF2ID extends Module {
  val io = IO(new Bundle {
    val stall               = Input(Bool())
    val flush               = Input(Bool())
    val instruction         = Input(UInt(Parameters.InstructionWidth))
    val instruction_address = Input(UInt(Parameters.AddrWidth))
    val interrupt_flag      = Input(UInt(Parameters.InterruptFlagWidth))

    val output_instruction         = Output(UInt(Parameters.DataWidth))
    val output_instruction_address = Output(UInt(Parameters.AddrWidth))
    val output_interrupt_flag      = Output(UInt(Parameters.InterruptFlagWidth))
  })

  // ============================================================
  // [CA25: Exercise 20] Pipeline Register Flush Logic
  // ============================================================

  // --- 1. For instruction register (Flush to NOP) ---
  // The NOP instruction in RISC-V is ADDI x0, x0, 0 (0x00000013)
  val instruction = Module(new PipelineRegister(defaultValue = InstructionsNop.nop))
  instruction.io.in             := io.instruction
  instruction.io.stall          := io.stall
  instruction.io.flush          := io.flush
  io.output_instruction         := instruction.io.out

  // --- 2. For instruction address register (Flush to Entry Address) ---
  // Flushing PC address to ProgramCounter.EntryAddress or 0.U is common, here we use 0.U for simplicity.
  // Note: Depending on the specific ProgramCounter implementation, ProgramCounter.EntryAddress might be required.
  val instruction_address = Module(new PipelineRegister(defaultValue = 0.U(Parameters.AddrWidth))) // or ProgramCounter.EntryAddress
  instruction_address.io.in             := io.instruction_address
  instruction_address.io.stall          := io.stall
  instruction_address.io.flush          := io.flush
  io.output_instruction_address := instruction_address.io.out

  // --- 3. For interrupt flag register (Flush to 0/No Interrupt) ---
  val interrupt_flag = Module(new PipelineRegister(defaultValue = 0.U(Parameters.InterruptFlagWidth)))
  interrupt_flag.io.in             := io.interrupt_flag
  interrupt_flag.io.stall          := io.stall
  interrupt_flag.io.flush          := io.flush
  io.output_interrupt_flag := interrupt_flag.io.out
}
