// SPDX-License-Identifier: MIT
// MyCPU is freely redistributable under the MIT License. See the file
// "LICENSE" for information on usage and redistribution of this file.

package riscv.core

import chisel3._
import chisel3.util._
import riscv.Parameters

// ALU operation types supported by the processor
object ALUFunctions extends ChiselEnum {
  val zero, add, sub, sll, slt, xor, or, and, srl, sra, sltu = Value
}

// Arithmetic Logic Unit: performs arithmetic and logical operations
//
// Implements all RV32I ALU operations:
// - Arithmetic: ADD, SUB
// - Logical: AND, OR, XOR
// - Shift: SLL (logical left), SRL (logical right), SRA (arithmetic right)
// - Comparison: SLT (signed), SLTU (unsigned)
// - Special: ZERO (always outputs 0, used for non-ALU instructions)
//
// All operations are combinational, producing results in the same cycle.
class ALU extends Module {
  val io = IO(new Bundle {
    val func = Input(ALUFunctions())

    val op1 = Input(UInt(Parameters.DataWidth))
    val op2 = Input(UInt(Parameters.DataWidth))

    val result = Output(UInt(Parameters.DataWidth))
  })

  // 1. Define shamt (Shift Amount) from op2's low 5 bits
  // This value is used for SLL, SRL, and SRA operations.
  val shamt = io.op2(4, 0)

  // 2. Initialize result to a default (usually zero for the 'zero' function)
  io.result := 0.U

  // ============================================================
  // [CA25: Exercise 16] ALU Operation Implementation
  // ============================================================

  switch(io.func) {
    // --- Arithmetic Operations ---
    is(ALUFunctions.add) {
      io.result := io.op1 + io.op2
    }
    is(ALUFunctions.sub) {
      io.result := io.op1 - io.op2
    }

    // --- Shift Operations ---
    is(ALUFunctions.sll) {
      // Logical Left Shift: Fill low bits with 0s
      io.result := io.op1 << shamt
    }
    is(ALUFunctions.srl) {
      // Logical Right Shift: Fill high bits with 0s
      io.result := io.op1 >> shamt
    }
    is(ALUFunctions.sra) {
      // Arithmetic Right Shift: Preserve the sign bit (MSB)
      // 1. Convert op1 to signed type (asSInt)
      // 2. Perform arithmetic right shift (>>)
      // 3. Convert back to unsigned type (asUInt)
      io.result := (io.op1.asSInt >> shamt).asUInt
    }

    // --- Comparison Operations ---
    is(ALUFunctions.slt) {
      // Signed Comparison (Set Less Than)
      // If op1 < op2 (signed), result is 1.U, otherwise 0.U
      io.result := (io.op1.asSInt < io.op2.asSInt).asUInt
    }
    is(ALUFunctions.sltu) {
      // Unsigned Comparison (Set Less Than Unsigned)
      // If op1 < op2 (unsigned), result is 1.U, otherwise 0.U
      io.result := (io.op1 < io.op2).asUInt
    }

    // --- Logical Operations ---
    is(ALUFunctions.xor) {
      // Exclusive OR
      io.result := io.op1 ^ io.op2
    }
    is(ALUFunctions.or) {
      // Inclusive OR
      io.result := io.op1 | io.op2
    }
    is(ALUFunctions.and) {
      // AND
      io.result := io.op1 & io.op2
    }
    
    // Default case (ALUFunctions.zero or others)
    is(ALUFunctions.zero) {
        io.result := 0.U
    }
    
  }
}