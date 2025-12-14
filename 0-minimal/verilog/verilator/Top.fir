FIRRTL version 1.2.0
circuit Top :
  module RegisterFile :
    input clock : Clock
    input reset : Reset
    output io : { flip write_enable : UInt<1>, flip write_address : UInt<5>, flip write_data : UInt<32>, flip read_address1 : UInt<5>, flip read_address2 : UInt<5>, read_data1 : UInt<32>, read_data2 : UInt<32>, flip debug_read_address : UInt<5>, debug_read_data : UInt<32>} @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 12:14]

    wire _registers_WIRE : UInt<32>[31] @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:34]
    _registers_WIRE[0] <= UInt<32>("h0") @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:34]
    _registers_WIRE[1] <= UInt<32>("h0") @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:34]
    _registers_WIRE[2] <= UInt<32>("h0") @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:34]
    _registers_WIRE[3] <= UInt<32>("h0") @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:34]
    _registers_WIRE[4] <= UInt<32>("h0") @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:34]
    _registers_WIRE[5] <= UInt<32>("h0") @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:34]
    _registers_WIRE[6] <= UInt<32>("h0") @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:34]
    _registers_WIRE[7] <= UInt<32>("h0") @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:34]
    _registers_WIRE[8] <= UInt<32>("h0") @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:34]
    _registers_WIRE[9] <= UInt<32>("h0") @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:34]
    _registers_WIRE[10] <= UInt<32>("h0") @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:34]
    _registers_WIRE[11] <= UInt<32>("h0") @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:34]
    _registers_WIRE[12] <= UInt<32>("h0") @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:34]
    _registers_WIRE[13] <= UInt<32>("h0") @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:34]
    _registers_WIRE[14] <= UInt<32>("h0") @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:34]
    _registers_WIRE[15] <= UInt<32>("h0") @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:34]
    _registers_WIRE[16] <= UInt<32>("h0") @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:34]
    _registers_WIRE[17] <= UInt<32>("h0") @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:34]
    _registers_WIRE[18] <= UInt<32>("h0") @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:34]
    _registers_WIRE[19] <= UInt<32>("h0") @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:34]
    _registers_WIRE[20] <= UInt<32>("h0") @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:34]
    _registers_WIRE[21] <= UInt<32>("h0") @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:34]
    _registers_WIRE[22] <= UInt<32>("h0") @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:34]
    _registers_WIRE[23] <= UInt<32>("h0") @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:34]
    _registers_WIRE[24] <= UInt<32>("h0") @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:34]
    _registers_WIRE[25] <= UInt<32>("h0") @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:34]
    _registers_WIRE[26] <= UInt<32>("h0") @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:34]
    _registers_WIRE[27] <= UInt<32>("h0") @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:34]
    _registers_WIRE[28] <= UInt<32>("h0") @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:34]
    _registers_WIRE[29] <= UInt<32>("h0") @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:34]
    _registers_WIRE[30] <= UInt<32>("h0") @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:34]
    reg registers : UInt<32>[31], clock with :
      reset => (reset, _registers_WIRE) @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
    node _T = asUInt(reset) @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 29:15]
    node _T_1 = eq(_T, UInt<1>("h0")) @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 29:8]
    when _T_1 : @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 29:23]
      node _T_2 = neq(io.write_address, UInt<1>("h0")) @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 30:46]
      node _T_3 = and(io.write_enable, _T_2) @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 30:26]
      when _T_3 : @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 30:55]
        node _T_4 = sub(io.write_address, UInt<1>("h1")) @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 31:34]
        node _T_5 = tail(_T_4, 1) @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 31:34]
        registers[_T_5] <= io.write_data @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 31:41]
    node _io_read_data1_T = eq(io.read_address1, UInt<1>("h0")) @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 38:22]
    node _io_read_data1_T_1 = sub(io.read_address1, UInt<1>("h1")) @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 40:32]
    node _io_read_data1_T_2 = tail(_io_read_data1_T_1, 1) @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 40:32]
    node _io_read_data1_T_3 = mux(_io_read_data1_T, UInt<1>("h0"), registers[_io_read_data1_T_2]) @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 37:23]
    io.read_data1 <= _io_read_data1_T_3 @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 37:17]
    node _io_read_data2_T = eq(io.read_address2, UInt<1>("h0")) @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 44:22]
    node _io_read_data2_T_1 = sub(io.read_address2, UInt<1>("h1")) @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 46:32]
    node _io_read_data2_T_2 = tail(_io_read_data2_T_1, 1) @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 46:32]
    node _io_read_data2_T_3 = mux(_io_read_data2_T, UInt<1>("h0"), registers[_io_read_data2_T_2]) @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 43:23]
    io.read_data2 <= _io_read_data2_T_3 @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 43:17]
    node _io_debug_read_data_T = eq(io.debug_read_address, UInt<1>("h0")) @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 50:27]
    node _io_debug_read_data_T_1 = sub(io.debug_read_address, UInt<1>("h1")) @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 52:37]
    node _io_debug_read_data_T_2 = tail(_io_debug_read_data_T_1, 1) @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 52:37]
    node _io_debug_read_data_T_3 = mux(_io_debug_read_data_T, UInt<1>("h0"), registers[_io_debug_read_data_T_2]) @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 49:28]
    io.debug_read_data <= _io_debug_read_data_T_3 @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 49:22]

  module InstructionFetch :
    input clock : Clock
    input reset : Reset
    output io : { flip jump_flag_id : UInt<1>, flip jump_address_id : UInt<32>, flip instruction_read_data : UInt<32>, flip instruction_valid : UInt<1>, instruction_address : UInt<32>, instruction : UInt<32>} @[0-minimal/src/main/scala/riscv/core/InstructionFetch.scala 16:14]

    reg pc : UInt<32>, clock with :
      reset => (reset, UInt<32>("h1000")) @[0-minimal/src/main/scala/riscv/core/InstructionFetch.scala 26:19]
    when io.instruction_valid : @[0-minimal/src/main/scala/riscv/core/InstructionFetch.scala 28:30]
      io.instruction <= io.instruction_read_data @[0-minimal/src/main/scala/riscv/core/InstructionFetch.scala 29:20]
      node _pc_T = add(pc, UInt<3>("h4")) @[0-minimal/src/main/scala/riscv/core/InstructionFetch.scala 30:67]
      node _pc_T_1 = tail(_pc_T, 1) @[0-minimal/src/main/scala/riscv/core/InstructionFetch.scala 30:67]
      node _pc_T_2 = mux(io.jump_flag_id, io.jump_address_id, _pc_T_1) @[0-minimal/src/main/scala/riscv/core/InstructionFetch.scala 30:26]
      pc <= _pc_T_2 @[0-minimal/src/main/scala/riscv/core/InstructionFetch.scala 30:20]
    else :
      pc <= pc @[0-minimal/src/main/scala/riscv/core/InstructionFetch.scala 33:20]
      io.instruction <= UInt<5>("h13") @[0-minimal/src/main/scala/riscv/core/InstructionFetch.scala 34:20]
    io.instruction_address <= pc @[0-minimal/src/main/scala/riscv/core/InstructionFetch.scala 36:26]

  module InstructionDecode :
    input clock : Clock
    input reset : Reset
    output io : { flip instruction : UInt<32>, regs_reg1_read_address : UInt<5>, regs_reg2_read_address : UInt<5>, ex_immediate : UInt<32>, ex_aluop1_source : UInt<1>, ex_aluop2_source : UInt<1>, memory_read_enable : UInt<1>, memory_write_enable : UInt<1>, wb_reg_write_source : UInt<2>, reg_write_enable : UInt<1>, reg_write_address : UInt<5>} @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 38:14]

    node opcode = bits(io.instruction, 6, 0) @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 54:32]
    node rs1 = bits(io.instruction, 19, 15) @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 55:32]
    node rs2 = bits(io.instruction, 24, 20) @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 56:32]
    node rd = bits(io.instruction, 11, 7) @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 57:32]
    node isLoad = eq(opcode, UInt<7>("h3")) @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 60:24]
    node isStore = eq(opcode, UInt<7>("h23")) @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 61:24]
    node isOpImm = eq(opcode, UInt<7>("h13")) @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 62:24]
    node isAuipc = eq(opcode, UInt<7>("h17")) @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 63:24]
    node isJalr = eq(opcode, UInt<7>("h67")) @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 64:24]
    node _usesRs1_T = or(isLoad, isStore) @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 67:25]
    node _usesRs1_T_1 = or(_usesRs1_T, isOpImm) @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 67:36]
    node usesRs1 = or(_usesRs1_T_1, isJalr) @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 67:47]
    node _regWrite_T = or(isLoad, isOpImm) @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 69:25]
    node _regWrite_T_1 = or(_regWrite_T, isAuipc) @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 69:36]
    node regWrite = or(_regWrite_T_1, isJalr) @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 69:47]
    wire wbSource : UInt<2> @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 72:29]
    wbSource <= UInt<2>("h0") @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 72:29]
    when isLoad : @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 73:16]
      wbSource <= UInt<2>("h1") @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 74:14]
    else :
      when isJalr : @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 75:22]
        wbSource <= UInt<2>("h2") @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 76:14]
    node aluOp1Sel = mux(isAuipc, UInt<1>("h1"), UInt<1>("h0")) @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 80:22]
    node _needsImmediate_T = or(isLoad, isStore) @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 83:31]
    node _needsImmediate_T_1 = or(_needsImmediate_T, isOpImm) @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 83:42]
    node _needsImmediate_T_2 = or(_needsImmediate_T_1, isAuipc) @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 83:53]
    node needsImmediate = or(_needsImmediate_T_2, isJalr) @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 83:64]
    node aluOp2Sel = mux(needsImmediate, UInt<1>("h1"), UInt<1>("h0")) @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 84:27]
    node _immI_T = bits(io.instruction, 31, 31) @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 87:60]
    node _immI_T_1 = mux(_immI_T, UInt<20>("hfffff"), UInt<20>("h0")) @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 87:22]
    node _immI_T_2 = bits(io.instruction, 31, 20) @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 87:78]
    node immI = cat(_immI_T_1, _immI_T_2) @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 87:17]
    node _immS_T = bits(io.instruction, 31, 31) @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 88:60]
    node _immS_T_1 = mux(_immS_T, UInt<20>("hfffff"), UInt<20>("h0")) @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 88:22]
    node _immS_T_2 = bits(io.instruction, 31, 25) @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 88:78]
    node _immS_T_3 = bits(io.instruction, 11, 7) @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 88:99]
    node immS_hi = cat(_immS_T_1, _immS_T_2) @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 88:17]
    node immS = cat(immS_hi, _immS_T_3) @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 88:17]
    node _immU_T = bits(io.instruction, 31, 12) @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 89:29]
    node immU = cat(_immU_T, UInt<12>("h0")) @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 89:17]
    node _immediate_T = eq(UInt<7>("h23"), opcode) @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 91:42]
    node _immediate_T_1 = mux(_immediate_T, immS, immI) @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 91:42]
    node _immediate_T_2 = eq(UInt<7>("h17"), opcode) @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 91:42]
    node immediate = mux(_immediate_T_2, immU, _immediate_T_1) @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 91:42]
    node _io_regs_reg1_read_address_T = mux(usesRs1, rs1, UInt<1>("h0")) @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 98:35]
    io.regs_reg1_read_address <= _io_regs_reg1_read_address_T @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 98:29]
    node _io_regs_reg2_read_address_T = mux(isStore, rs2, UInt<1>("h0")) @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 99:35]
    io.regs_reg2_read_address <= _io_regs_reg2_read_address_T @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 99:29]
    io.ex_immediate <= immediate @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 100:29]
    io.ex_aluop1_source <= aluOp1Sel @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 101:29]
    io.ex_aluop2_source <= aluOp2Sel @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 102:29]
    io.memory_read_enable <= isLoad @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 103:29]
    io.memory_write_enable <= isStore @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 104:29]
    io.wb_reg_write_source <= wbSource @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 105:29]
    io.reg_write_enable <= regWrite @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 106:29]
    io.reg_write_address <= rd @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 107:29]

  module Execute :
    input clock : Clock
    input reset : Reset
    output io : { flip instruction : UInt<32>, flip instruction_address : UInt<32>, flip reg1_data : UInt<32>, flip reg2_data : UInt<32>, flip immediate : UInt<32>, flip aluop1_source : UInt<1>, flip aluop2_source : UInt<1>, mem_alu_result : UInt<32>, if_jump_flag : UInt<1>, if_jump_address : UInt<32>} @[0-minimal/src/main/scala/riscv/core/Execute.scala 13:14]

    node opcode = bits(io.instruction, 6, 0) @[0-minimal/src/main/scala/riscv/core/Execute.scala 27:30]
    node _aluOp1_T = eq(io.aluop1_source, UInt<1>("h1")) @[0-minimal/src/main/scala/riscv/core/Execute.scala 30:40]
    node aluOp1 = mux(_aluOp1_T, io.instruction_address, io.reg1_data) @[0-minimal/src/main/scala/riscv/core/Execute.scala 30:22]
    node _aluOp2_T = eq(io.aluop2_source, UInt<1>("h1")) @[0-minimal/src/main/scala/riscv/core/Execute.scala 31:40]
    node aluOp2 = mux(_aluOp2_T, io.immediate, io.reg2_data) @[0-minimal/src/main/scala/riscv/core/Execute.scala 31:22]
    node _aluResult_T = add(aluOp1, aluOp2) @[0-minimal/src/main/scala/riscv/core/Execute.scala 32:26]
    node aluResult = tail(_aluResult_T, 1) @[0-minimal/src/main/scala/riscv/core/Execute.scala 32:26]
    io.mem_alu_result <= aluResult @[0-minimal/src/main/scala/riscv/core/Execute.scala 34:21]
    node isJalr = eq(opcode, UInt<7>("h67")) @[0-minimal/src/main/scala/riscv/core/Execute.scala 37:27]
    node _jalrTarget_T = bits(aluResult, 31, 1) @[0-minimal/src/main/scala/riscv/core/Execute.scala 38:33]
    node jalrTarget = cat(_jalrTarget_T, UInt<1>("h0")) @[0-minimal/src/main/scala/riscv/core/Execute.scala 38:23]
    io.if_jump_flag <= isJalr @[0-minimal/src/main/scala/riscv/core/Execute.scala 40:22]
    io.if_jump_address <= jalrTarget @[0-minimal/src/main/scala/riscv/core/Execute.scala 41:22]

  module MemoryAccess :
    input clock : Clock
    input reset : Reset
    output io : { flip alu_result : UInt<32>, flip reg2_data : UInt<32>, flip memory_read_enable : UInt<1>, flip memory_write_enable : UInt<1>, wb_memory_read_data : UInt<32>, flip memory_bundle : { flip address : UInt<32>, flip write_data : UInt<32>, flip write_enable : UInt<1>, flip write_strobe : UInt<1>[4], read_data : UInt<32>}} @[0-minimal/src/main/scala/riscv/core/MemoryAccess.scala 14:14]

    io.memory_bundle.write_enable <= UInt<1>("h0") @[0-minimal/src/main/scala/riscv/core/MemoryAccess.scala 25:33]
    io.memory_bundle.write_data <= UInt<1>("h0") @[0-minimal/src/main/scala/riscv/core/MemoryAccess.scala 26:33]
    io.memory_bundle.address <= io.alu_result @[0-minimal/src/main/scala/riscv/core/MemoryAccess.scala 27:33]
    wire _WIRE : UInt<1>[4] @[0-minimal/src/main/scala/riscv/core/MemoryAccess.scala 28:43]
    _WIRE[0] <= UInt<1>("h0") @[0-minimal/src/main/scala/riscv/core/MemoryAccess.scala 28:43]
    _WIRE[1] <= UInt<1>("h0") @[0-minimal/src/main/scala/riscv/core/MemoryAccess.scala 28:43]
    _WIRE[2] <= UInt<1>("h0") @[0-minimal/src/main/scala/riscv/core/MemoryAccess.scala 28:43]
    _WIRE[3] <= UInt<1>("h0") @[0-minimal/src/main/scala/riscv/core/MemoryAccess.scala 28:43]
    io.memory_bundle.write_strobe <= _WIRE @[0-minimal/src/main/scala/riscv/core/MemoryAccess.scala 28:33]
    io.wb_memory_read_data <= UInt<1>("h0") @[0-minimal/src/main/scala/riscv/core/MemoryAccess.scala 29:33]
    when io.memory_read_enable : @[0-minimal/src/main/scala/riscv/core/MemoryAccess.scala 31:31]
      io.wb_memory_read_data <= io.memory_bundle.read_data @[0-minimal/src/main/scala/riscv/core/MemoryAccess.scala 33:28]
    else :
      when io.memory_write_enable : @[0-minimal/src/main/scala/riscv/core/MemoryAccess.scala 34:38]
        io.memory_bundle.write_enable <= UInt<1>("h1") @[0-minimal/src/main/scala/riscv/core/MemoryAccess.scala 36:35]
        io.memory_bundle.write_data <= io.reg2_data @[0-minimal/src/main/scala/riscv/core/MemoryAccess.scala 37:35]
        wire _WIRE_1 : UInt<1>[4] @[0-minimal/src/main/scala/riscv/core/MemoryAccess.scala 38:45]
        _WIRE_1[0] <= UInt<1>("h1") @[0-minimal/src/main/scala/riscv/core/MemoryAccess.scala 38:45]
        _WIRE_1[1] <= UInt<1>("h1") @[0-minimal/src/main/scala/riscv/core/MemoryAccess.scala 38:45]
        _WIRE_1[2] <= UInt<1>("h1") @[0-minimal/src/main/scala/riscv/core/MemoryAccess.scala 38:45]
        _WIRE_1[3] <= UInt<1>("h1") @[0-minimal/src/main/scala/riscv/core/MemoryAccess.scala 38:45]
        io.memory_bundle.write_strobe <= _WIRE_1 @[0-minimal/src/main/scala/riscv/core/MemoryAccess.scala 38:35]


  module WriteBack :
    input clock : Clock
    input reset : Reset
    output io : { flip instruction_address : UInt<32>, flip alu_result : UInt<32>, flip memory_read_data : UInt<32>, flip regs_write_source : UInt<2>, regs_write_data : UInt<32>} @[0-minimal/src/main/scala/riscv/core/WriteBack.scala 13:14]

    node _io_regs_write_data_T = add(io.instruction_address, UInt<3>("h4")) @[0-minimal/src/main/scala/riscv/core/WriteBack.scala 23:72]
    node _io_regs_write_data_T_1 = tail(_io_regs_write_data_T, 1) @[0-minimal/src/main/scala/riscv/core/WriteBack.scala 23:72]
    node _io_regs_write_data_T_2 = eq(UInt<2>("h1"), io.regs_write_source) @[0-minimal/src/main/scala/riscv/core/WriteBack.scala 20:71]
    node _io_regs_write_data_T_3 = mux(_io_regs_write_data_T_2, io.memory_read_data, io.alu_result) @[0-minimal/src/main/scala/riscv/core/WriteBack.scala 20:71]
    node _io_regs_write_data_T_4 = eq(UInt<2>("h2"), io.regs_write_source) @[0-minimal/src/main/scala/riscv/core/WriteBack.scala 20:71]
    node _io_regs_write_data_T_5 = mux(_io_regs_write_data_T_4, _io_regs_write_data_T_1, _io_regs_write_data_T_3) @[0-minimal/src/main/scala/riscv/core/WriteBack.scala 20:71]
    io.regs_write_data <= _io_regs_write_data_T_5 @[0-minimal/src/main/scala/riscv/core/WriteBack.scala 20:22]

  module CPU :
    input clock : Clock
    input reset : Reset
    output io : { instruction_address : UInt<32>, flip instruction : UInt<32>, flip memory_bundle : { flip address : UInt<32>, flip write_data : UInt<32>, flip write_enable : UInt<1>, flip write_strobe : UInt<1>[4], read_data : UInt<32>}, flip instruction_valid : UInt<1>, flip debug_read_address : UInt<5>, debug_read_data : UInt<32>} @[0-minimal/src/main/scala/riscv/core/CPU.scala 14:14]

    inst regs of RegisterFile @[0-minimal/src/main/scala/riscv/core/CPU.scala 17:26]
    regs.clock <= clock
    regs.reset <= reset
    inst inst_fetch of InstructionFetch @[0-minimal/src/main/scala/riscv/core/CPU.scala 18:26]
    inst_fetch.clock <= clock
    inst_fetch.reset <= reset
    inst id of InstructionDecode @[0-minimal/src/main/scala/riscv/core/CPU.scala 19:26]
    id.clock <= clock
    id.reset <= reset
    inst ex of Execute @[0-minimal/src/main/scala/riscv/core/CPU.scala 20:26]
    ex.clock <= clock
    ex.reset <= reset
    inst mem of MemoryAccess @[0-minimal/src/main/scala/riscv/core/CPU.scala 21:26]
    mem.clock <= clock
    mem.reset <= reset
    inst wb of WriteBack @[0-minimal/src/main/scala/riscv/core/CPU.scala 22:26]
    wb.clock <= clock
    wb.reset <= reset
    inst_fetch.io.jump_address_id <= ex.io.if_jump_address @[0-minimal/src/main/scala/riscv/core/CPU.scala 25:39]
    inst_fetch.io.jump_flag_id <= ex.io.if_jump_flag @[0-minimal/src/main/scala/riscv/core/CPU.scala 26:39]
    inst_fetch.io.instruction_valid <= io.instruction_valid @[0-minimal/src/main/scala/riscv/core/CPU.scala 27:39]
    inst_fetch.io.instruction_read_data <= io.instruction @[0-minimal/src/main/scala/riscv/core/CPU.scala 28:39]
    io.instruction_address <= inst_fetch.io.instruction_address @[0-minimal/src/main/scala/riscv/core/CPU.scala 29:39]
    regs.io.write_enable <= id.io.reg_write_enable @[0-minimal/src/main/scala/riscv/core/CPU.scala 32:30]
    regs.io.write_address <= id.io.reg_write_address @[0-minimal/src/main/scala/riscv/core/CPU.scala 33:30]
    regs.io.write_data <= wb.io.regs_write_data @[0-minimal/src/main/scala/riscv/core/CPU.scala 34:30]
    regs.io.read_address1 <= id.io.regs_reg1_read_address @[0-minimal/src/main/scala/riscv/core/CPU.scala 35:30]
    regs.io.read_address2 <= id.io.regs_reg2_read_address @[0-minimal/src/main/scala/riscv/core/CPU.scala 36:30]
    regs.io.debug_read_address <= io.debug_read_address @[0-minimal/src/main/scala/riscv/core/CPU.scala 37:30]
    io.debug_read_data <= regs.io.debug_read_data @[0-minimal/src/main/scala/riscv/core/CPU.scala 38:30]
    id.io.instruction <= inst_fetch.io.instruction @[0-minimal/src/main/scala/riscv/core/CPU.scala 41:21]
    ex.io.aluop1_source <= id.io.ex_aluop1_source @[0-minimal/src/main/scala/riscv/core/CPU.scala 44:29]
    ex.io.aluop2_source <= id.io.ex_aluop2_source @[0-minimal/src/main/scala/riscv/core/CPU.scala 45:29]
    ex.io.immediate <= id.io.ex_immediate @[0-minimal/src/main/scala/riscv/core/CPU.scala 46:29]
    ex.io.instruction <= inst_fetch.io.instruction @[0-minimal/src/main/scala/riscv/core/CPU.scala 47:29]
    ex.io.instruction_address <= inst_fetch.io.instruction_address @[0-minimal/src/main/scala/riscv/core/CPU.scala 48:29]
    ex.io.reg1_data <= regs.io.read_data1 @[0-minimal/src/main/scala/riscv/core/CPU.scala 49:29]
    ex.io.reg2_data <= regs.io.read_data2 @[0-minimal/src/main/scala/riscv/core/CPU.scala 50:29]
    mem.io.alu_result <= ex.io.mem_alu_result @[0-minimal/src/main/scala/riscv/core/CPU.scala 53:30]
    mem.io.reg2_data <= regs.io.read_data2 @[0-minimal/src/main/scala/riscv/core/CPU.scala 54:30]
    mem.io.memory_read_enable <= id.io.memory_read_enable @[0-minimal/src/main/scala/riscv/core/CPU.scala 55:30]
    mem.io.memory_write_enable <= id.io.memory_write_enable @[0-minimal/src/main/scala/riscv/core/CPU.scala 56:30]
    mem.io.memory_bundle <= io.memory_bundle @[0-minimal/src/main/scala/riscv/core/CPU.scala 57:20]
    wb.io.instruction_address <= inst_fetch.io.instruction_address @[0-minimal/src/main/scala/riscv/core/CPU.scala 60:29]
    wb.io.alu_result <= ex.io.mem_alu_result @[0-minimal/src/main/scala/riscv/core/CPU.scala 61:29]
    wb.io.memory_read_data <= mem.io.wb_memory_read_data @[0-minimal/src/main/scala/riscv/core/CPU.scala 62:29]
    wb.io.regs_write_source <= id.io.wb_reg_write_source @[0-minimal/src/main/scala/riscv/core/CPU.scala 63:29]

  module Top :
    input clock : Clock
    input reset : UInt<1>
    output io : { instruction_address : UInt<32>, flip instruction : UInt<32>, flip memory_bundle : { flip address : UInt<32>, flip write_data : UInt<32>, flip write_enable : UInt<1>, flip write_strobe : UInt<1>[4], read_data : UInt<32>}, flip instruction_valid : UInt<1>, flip debug_read_address : UInt<5>, debug_read_data : UInt<32>} @[0-minimal/src/main/scala/board/Top.scala 15:14]

    inst cpu of CPU @[0-minimal/src/main/scala/board/Top.scala 17:19]
    cpu.clock <= clock
    cpu.reset <= reset
    cpu.io.debug_read_address <= io.debug_read_address @[0-minimal/src/main/scala/board/Top.scala 18:29]
    io.debug_read_data <= cpu.io.debug_read_data @[0-minimal/src/main/scala/board/Top.scala 19:29]
    cpu.io.memory_bundle <= io.memory_bundle @[0-minimal/src/main/scala/board/Top.scala 22:20]
    io.instruction_address <= cpu.io.instruction_address @[0-minimal/src/main/scala/board/Top.scala 23:28]
    cpu.io.instruction <= io.instruction @[0-minimal/src/main/scala/board/Top.scala 24:28]
    cpu.io.instruction_valid <= io.instruction_valid @[0-minimal/src/main/scala/board/Top.scala 25:28]

