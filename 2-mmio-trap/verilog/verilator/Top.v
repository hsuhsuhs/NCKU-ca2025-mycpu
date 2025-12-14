module RegisterFile(
  input         clock,
  input         reset,
  input         io_write_enable, // @[common/src/main/scala/riscv/core/RegisterFile.scala 21:14]
  input  [4:0]  io_write_address, // @[common/src/main/scala/riscv/core/RegisterFile.scala 21:14]
  input  [31:0] io_write_data, // @[common/src/main/scala/riscv/core/RegisterFile.scala 21:14]
  input  [4:0]  io_read_address1, // @[common/src/main/scala/riscv/core/RegisterFile.scala 21:14]
  input  [4:0]  io_read_address2, // @[common/src/main/scala/riscv/core/RegisterFile.scala 21:14]
  output [31:0] io_read_data1, // @[common/src/main/scala/riscv/core/RegisterFile.scala 21:14]
  output [31:0] io_read_data2, // @[common/src/main/scala/riscv/core/RegisterFile.scala 21:14]
  input  [4:0]  io_debug_read_address, // @[common/src/main/scala/riscv/core/RegisterFile.scala 21:14]
  output [31:0] io_debug_read_data // @[common/src/main/scala/riscv/core/RegisterFile.scala 21:14]
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_11;
  reg [31:0] _RAND_12;
  reg [31:0] _RAND_13;
  reg [31:0] _RAND_14;
  reg [31:0] _RAND_15;
  reg [31:0] _RAND_16;
  reg [31:0] _RAND_17;
  reg [31:0] _RAND_18;
  reg [31:0] _RAND_19;
  reg [31:0] _RAND_20;
  reg [31:0] _RAND_21;
  reg [31:0] _RAND_22;
  reg [31:0] _RAND_23;
  reg [31:0] _RAND_24;
  reg [31:0] _RAND_25;
  reg [31:0] _RAND_26;
  reg [31:0] _RAND_27;
  reg [31:0] _RAND_28;
  reg [31:0] _RAND_29;
  reg [31:0] _RAND_30;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] registers_0; // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
  reg [31:0] registers_1; // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
  reg [31:0] registers_2; // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
  reg [31:0] registers_3; // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
  reg [31:0] registers_4; // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
  reg [31:0] registers_5; // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
  reg [31:0] registers_6; // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
  reg [31:0] registers_7; // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
  reg [31:0] registers_8; // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
  reg [31:0] registers_9; // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
  reg [31:0] registers_10; // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
  reg [31:0] registers_11; // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
  reg [31:0] registers_12; // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
  reg [31:0] registers_13; // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
  reg [31:0] registers_14; // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
  reg [31:0] registers_15; // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
  reg [31:0] registers_16; // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
  reg [31:0] registers_17; // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
  reg [31:0] registers_18; // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
  reg [31:0] registers_19; // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
  reg [31:0] registers_20; // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
  reg [31:0] registers_21; // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
  reg [31:0] registers_22; // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
  reg [31:0] registers_23; // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
  reg [31:0] registers_24; // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
  reg [31:0] registers_25; // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
  reg [31:0] registers_26; // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
  reg [31:0] registers_27; // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
  reg [31:0] registers_28; // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
  reg [31:0] registers_29; // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
  reg [31:0] registers_30; // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
  wire [4:0] _T_5 = io_write_address - 5'h1; // @[common/src/main/scala/riscv/core/RegisterFile.scala 41:34]
  wire  _io_read_data1_T = io_read_address1 == 5'h0; // @[common/src/main/scala/riscv/core/RegisterFile.scala 46:22]
  wire [4:0] _io_read_data1_T_2 = io_read_address1 - 5'h1; // @[common/src/main/scala/riscv/core/RegisterFile.scala 48:32]
  wire [31:0] _GEN_94 = 5'h1 == _io_read_data1_T_2 ? registers_1 : registers_0; // @[common/src/main/scala/riscv/core/RegisterFile.scala 45:{23,23}]
  wire [31:0] _GEN_95 = 5'h2 == _io_read_data1_T_2 ? registers_2 : _GEN_94; // @[common/src/main/scala/riscv/core/RegisterFile.scala 45:{23,23}]
  wire [31:0] _GEN_96 = 5'h3 == _io_read_data1_T_2 ? registers_3 : _GEN_95; // @[common/src/main/scala/riscv/core/RegisterFile.scala 45:{23,23}]
  wire [31:0] _GEN_97 = 5'h4 == _io_read_data1_T_2 ? registers_4 : _GEN_96; // @[common/src/main/scala/riscv/core/RegisterFile.scala 45:{23,23}]
  wire [31:0] _GEN_98 = 5'h5 == _io_read_data1_T_2 ? registers_5 : _GEN_97; // @[common/src/main/scala/riscv/core/RegisterFile.scala 45:{23,23}]
  wire [31:0] _GEN_99 = 5'h6 == _io_read_data1_T_2 ? registers_6 : _GEN_98; // @[common/src/main/scala/riscv/core/RegisterFile.scala 45:{23,23}]
  wire [31:0] _GEN_100 = 5'h7 == _io_read_data1_T_2 ? registers_7 : _GEN_99; // @[common/src/main/scala/riscv/core/RegisterFile.scala 45:{23,23}]
  wire [31:0] _GEN_101 = 5'h8 == _io_read_data1_T_2 ? registers_8 : _GEN_100; // @[common/src/main/scala/riscv/core/RegisterFile.scala 45:{23,23}]
  wire [31:0] _GEN_102 = 5'h9 == _io_read_data1_T_2 ? registers_9 : _GEN_101; // @[common/src/main/scala/riscv/core/RegisterFile.scala 45:{23,23}]
  wire [31:0] _GEN_103 = 5'ha == _io_read_data1_T_2 ? registers_10 : _GEN_102; // @[common/src/main/scala/riscv/core/RegisterFile.scala 45:{23,23}]
  wire [31:0] _GEN_104 = 5'hb == _io_read_data1_T_2 ? registers_11 : _GEN_103; // @[common/src/main/scala/riscv/core/RegisterFile.scala 45:{23,23}]
  wire [31:0] _GEN_105 = 5'hc == _io_read_data1_T_2 ? registers_12 : _GEN_104; // @[common/src/main/scala/riscv/core/RegisterFile.scala 45:{23,23}]
  wire [31:0] _GEN_106 = 5'hd == _io_read_data1_T_2 ? registers_13 : _GEN_105; // @[common/src/main/scala/riscv/core/RegisterFile.scala 45:{23,23}]
  wire [31:0] _GEN_107 = 5'he == _io_read_data1_T_2 ? registers_14 : _GEN_106; // @[common/src/main/scala/riscv/core/RegisterFile.scala 45:{23,23}]
  wire [31:0] _GEN_108 = 5'hf == _io_read_data1_T_2 ? registers_15 : _GEN_107; // @[common/src/main/scala/riscv/core/RegisterFile.scala 45:{23,23}]
  wire [31:0] _GEN_109 = 5'h10 == _io_read_data1_T_2 ? registers_16 : _GEN_108; // @[common/src/main/scala/riscv/core/RegisterFile.scala 45:{23,23}]
  wire [31:0] _GEN_110 = 5'h11 == _io_read_data1_T_2 ? registers_17 : _GEN_109; // @[common/src/main/scala/riscv/core/RegisterFile.scala 45:{23,23}]
  wire [31:0] _GEN_111 = 5'h12 == _io_read_data1_T_2 ? registers_18 : _GEN_110; // @[common/src/main/scala/riscv/core/RegisterFile.scala 45:{23,23}]
  wire [31:0] _GEN_112 = 5'h13 == _io_read_data1_T_2 ? registers_19 : _GEN_111; // @[common/src/main/scala/riscv/core/RegisterFile.scala 45:{23,23}]
  wire [31:0] _GEN_113 = 5'h14 == _io_read_data1_T_2 ? registers_20 : _GEN_112; // @[common/src/main/scala/riscv/core/RegisterFile.scala 45:{23,23}]
  wire [31:0] _GEN_114 = 5'h15 == _io_read_data1_T_2 ? registers_21 : _GEN_113; // @[common/src/main/scala/riscv/core/RegisterFile.scala 45:{23,23}]
  wire [31:0] _GEN_115 = 5'h16 == _io_read_data1_T_2 ? registers_22 : _GEN_114; // @[common/src/main/scala/riscv/core/RegisterFile.scala 45:{23,23}]
  wire [31:0] _GEN_116 = 5'h17 == _io_read_data1_T_2 ? registers_23 : _GEN_115; // @[common/src/main/scala/riscv/core/RegisterFile.scala 45:{23,23}]
  wire [31:0] _GEN_117 = 5'h18 == _io_read_data1_T_2 ? registers_24 : _GEN_116; // @[common/src/main/scala/riscv/core/RegisterFile.scala 45:{23,23}]
  wire [31:0] _GEN_118 = 5'h19 == _io_read_data1_T_2 ? registers_25 : _GEN_117; // @[common/src/main/scala/riscv/core/RegisterFile.scala 45:{23,23}]
  wire [31:0] _GEN_119 = 5'h1a == _io_read_data1_T_2 ? registers_26 : _GEN_118; // @[common/src/main/scala/riscv/core/RegisterFile.scala 45:{23,23}]
  wire [31:0] _GEN_120 = 5'h1b == _io_read_data1_T_2 ? registers_27 : _GEN_119; // @[common/src/main/scala/riscv/core/RegisterFile.scala 45:{23,23}]
  wire [31:0] _GEN_121 = 5'h1c == _io_read_data1_T_2 ? registers_28 : _GEN_120; // @[common/src/main/scala/riscv/core/RegisterFile.scala 45:{23,23}]
  wire [31:0] _GEN_122 = 5'h1d == _io_read_data1_T_2 ? registers_29 : _GEN_121; // @[common/src/main/scala/riscv/core/RegisterFile.scala 45:{23,23}]
  wire [31:0] _GEN_123 = 5'h1e == _io_read_data1_T_2 ? registers_30 : _GEN_122; // @[common/src/main/scala/riscv/core/RegisterFile.scala 45:{23,23}]
  wire  _io_read_data2_T = io_read_address2 == 5'h0; // @[common/src/main/scala/riscv/core/RegisterFile.scala 52:22]
  wire [4:0] _io_read_data2_T_2 = io_read_address2 - 5'h1; // @[common/src/main/scala/riscv/core/RegisterFile.scala 54:32]
  wire [31:0] _GEN_125 = 5'h1 == _io_read_data2_T_2 ? registers_1 : registers_0; // @[common/src/main/scala/riscv/core/RegisterFile.scala 51:{23,23}]
  wire [31:0] _GEN_126 = 5'h2 == _io_read_data2_T_2 ? registers_2 : _GEN_125; // @[common/src/main/scala/riscv/core/RegisterFile.scala 51:{23,23}]
  wire [31:0] _GEN_127 = 5'h3 == _io_read_data2_T_2 ? registers_3 : _GEN_126; // @[common/src/main/scala/riscv/core/RegisterFile.scala 51:{23,23}]
  wire [31:0] _GEN_128 = 5'h4 == _io_read_data2_T_2 ? registers_4 : _GEN_127; // @[common/src/main/scala/riscv/core/RegisterFile.scala 51:{23,23}]
  wire [31:0] _GEN_129 = 5'h5 == _io_read_data2_T_2 ? registers_5 : _GEN_128; // @[common/src/main/scala/riscv/core/RegisterFile.scala 51:{23,23}]
  wire [31:0] _GEN_130 = 5'h6 == _io_read_data2_T_2 ? registers_6 : _GEN_129; // @[common/src/main/scala/riscv/core/RegisterFile.scala 51:{23,23}]
  wire [31:0] _GEN_131 = 5'h7 == _io_read_data2_T_2 ? registers_7 : _GEN_130; // @[common/src/main/scala/riscv/core/RegisterFile.scala 51:{23,23}]
  wire [31:0] _GEN_132 = 5'h8 == _io_read_data2_T_2 ? registers_8 : _GEN_131; // @[common/src/main/scala/riscv/core/RegisterFile.scala 51:{23,23}]
  wire [31:0] _GEN_133 = 5'h9 == _io_read_data2_T_2 ? registers_9 : _GEN_132; // @[common/src/main/scala/riscv/core/RegisterFile.scala 51:{23,23}]
  wire [31:0] _GEN_134 = 5'ha == _io_read_data2_T_2 ? registers_10 : _GEN_133; // @[common/src/main/scala/riscv/core/RegisterFile.scala 51:{23,23}]
  wire [31:0] _GEN_135 = 5'hb == _io_read_data2_T_2 ? registers_11 : _GEN_134; // @[common/src/main/scala/riscv/core/RegisterFile.scala 51:{23,23}]
  wire [31:0] _GEN_136 = 5'hc == _io_read_data2_T_2 ? registers_12 : _GEN_135; // @[common/src/main/scala/riscv/core/RegisterFile.scala 51:{23,23}]
  wire [31:0] _GEN_137 = 5'hd == _io_read_data2_T_2 ? registers_13 : _GEN_136; // @[common/src/main/scala/riscv/core/RegisterFile.scala 51:{23,23}]
  wire [31:0] _GEN_138 = 5'he == _io_read_data2_T_2 ? registers_14 : _GEN_137; // @[common/src/main/scala/riscv/core/RegisterFile.scala 51:{23,23}]
  wire [31:0] _GEN_139 = 5'hf == _io_read_data2_T_2 ? registers_15 : _GEN_138; // @[common/src/main/scala/riscv/core/RegisterFile.scala 51:{23,23}]
  wire [31:0] _GEN_140 = 5'h10 == _io_read_data2_T_2 ? registers_16 : _GEN_139; // @[common/src/main/scala/riscv/core/RegisterFile.scala 51:{23,23}]
  wire [31:0] _GEN_141 = 5'h11 == _io_read_data2_T_2 ? registers_17 : _GEN_140; // @[common/src/main/scala/riscv/core/RegisterFile.scala 51:{23,23}]
  wire [31:0] _GEN_142 = 5'h12 == _io_read_data2_T_2 ? registers_18 : _GEN_141; // @[common/src/main/scala/riscv/core/RegisterFile.scala 51:{23,23}]
  wire [31:0] _GEN_143 = 5'h13 == _io_read_data2_T_2 ? registers_19 : _GEN_142; // @[common/src/main/scala/riscv/core/RegisterFile.scala 51:{23,23}]
  wire [31:0] _GEN_144 = 5'h14 == _io_read_data2_T_2 ? registers_20 : _GEN_143; // @[common/src/main/scala/riscv/core/RegisterFile.scala 51:{23,23}]
  wire [31:0] _GEN_145 = 5'h15 == _io_read_data2_T_2 ? registers_21 : _GEN_144; // @[common/src/main/scala/riscv/core/RegisterFile.scala 51:{23,23}]
  wire [31:0] _GEN_146 = 5'h16 == _io_read_data2_T_2 ? registers_22 : _GEN_145; // @[common/src/main/scala/riscv/core/RegisterFile.scala 51:{23,23}]
  wire [31:0] _GEN_147 = 5'h17 == _io_read_data2_T_2 ? registers_23 : _GEN_146; // @[common/src/main/scala/riscv/core/RegisterFile.scala 51:{23,23}]
  wire [31:0] _GEN_148 = 5'h18 == _io_read_data2_T_2 ? registers_24 : _GEN_147; // @[common/src/main/scala/riscv/core/RegisterFile.scala 51:{23,23}]
  wire [31:0] _GEN_149 = 5'h19 == _io_read_data2_T_2 ? registers_25 : _GEN_148; // @[common/src/main/scala/riscv/core/RegisterFile.scala 51:{23,23}]
  wire [31:0] _GEN_150 = 5'h1a == _io_read_data2_T_2 ? registers_26 : _GEN_149; // @[common/src/main/scala/riscv/core/RegisterFile.scala 51:{23,23}]
  wire [31:0] _GEN_151 = 5'h1b == _io_read_data2_T_2 ? registers_27 : _GEN_150; // @[common/src/main/scala/riscv/core/RegisterFile.scala 51:{23,23}]
  wire [31:0] _GEN_152 = 5'h1c == _io_read_data2_T_2 ? registers_28 : _GEN_151; // @[common/src/main/scala/riscv/core/RegisterFile.scala 51:{23,23}]
  wire [31:0] _GEN_153 = 5'h1d == _io_read_data2_T_2 ? registers_29 : _GEN_152; // @[common/src/main/scala/riscv/core/RegisterFile.scala 51:{23,23}]
  wire [31:0] _GEN_154 = 5'h1e == _io_read_data2_T_2 ? registers_30 : _GEN_153; // @[common/src/main/scala/riscv/core/RegisterFile.scala 51:{23,23}]
  wire  _io_debug_read_data_T = io_debug_read_address == 5'h0; // @[common/src/main/scala/riscv/core/RegisterFile.scala 58:27]
  wire [4:0] _io_debug_read_data_T_2 = io_debug_read_address - 5'h1; // @[common/src/main/scala/riscv/core/RegisterFile.scala 60:37]
  wire [31:0] _GEN_156 = 5'h1 == _io_debug_read_data_T_2 ? registers_1 : registers_0; // @[common/src/main/scala/riscv/core/RegisterFile.scala 57:{28,28}]
  wire [31:0] _GEN_157 = 5'h2 == _io_debug_read_data_T_2 ? registers_2 : _GEN_156; // @[common/src/main/scala/riscv/core/RegisterFile.scala 57:{28,28}]
  wire [31:0] _GEN_158 = 5'h3 == _io_debug_read_data_T_2 ? registers_3 : _GEN_157; // @[common/src/main/scala/riscv/core/RegisterFile.scala 57:{28,28}]
  wire [31:0] _GEN_159 = 5'h4 == _io_debug_read_data_T_2 ? registers_4 : _GEN_158; // @[common/src/main/scala/riscv/core/RegisterFile.scala 57:{28,28}]
  wire [31:0] _GEN_160 = 5'h5 == _io_debug_read_data_T_2 ? registers_5 : _GEN_159; // @[common/src/main/scala/riscv/core/RegisterFile.scala 57:{28,28}]
  wire [31:0] _GEN_161 = 5'h6 == _io_debug_read_data_T_2 ? registers_6 : _GEN_160; // @[common/src/main/scala/riscv/core/RegisterFile.scala 57:{28,28}]
  wire [31:0] _GEN_162 = 5'h7 == _io_debug_read_data_T_2 ? registers_7 : _GEN_161; // @[common/src/main/scala/riscv/core/RegisterFile.scala 57:{28,28}]
  wire [31:0] _GEN_163 = 5'h8 == _io_debug_read_data_T_2 ? registers_8 : _GEN_162; // @[common/src/main/scala/riscv/core/RegisterFile.scala 57:{28,28}]
  wire [31:0] _GEN_164 = 5'h9 == _io_debug_read_data_T_2 ? registers_9 : _GEN_163; // @[common/src/main/scala/riscv/core/RegisterFile.scala 57:{28,28}]
  wire [31:0] _GEN_165 = 5'ha == _io_debug_read_data_T_2 ? registers_10 : _GEN_164; // @[common/src/main/scala/riscv/core/RegisterFile.scala 57:{28,28}]
  wire [31:0] _GEN_166 = 5'hb == _io_debug_read_data_T_2 ? registers_11 : _GEN_165; // @[common/src/main/scala/riscv/core/RegisterFile.scala 57:{28,28}]
  wire [31:0] _GEN_167 = 5'hc == _io_debug_read_data_T_2 ? registers_12 : _GEN_166; // @[common/src/main/scala/riscv/core/RegisterFile.scala 57:{28,28}]
  wire [31:0] _GEN_168 = 5'hd == _io_debug_read_data_T_2 ? registers_13 : _GEN_167; // @[common/src/main/scala/riscv/core/RegisterFile.scala 57:{28,28}]
  wire [31:0] _GEN_169 = 5'he == _io_debug_read_data_T_2 ? registers_14 : _GEN_168; // @[common/src/main/scala/riscv/core/RegisterFile.scala 57:{28,28}]
  wire [31:0] _GEN_170 = 5'hf == _io_debug_read_data_T_2 ? registers_15 : _GEN_169; // @[common/src/main/scala/riscv/core/RegisterFile.scala 57:{28,28}]
  wire [31:0] _GEN_171 = 5'h10 == _io_debug_read_data_T_2 ? registers_16 : _GEN_170; // @[common/src/main/scala/riscv/core/RegisterFile.scala 57:{28,28}]
  wire [31:0] _GEN_172 = 5'h11 == _io_debug_read_data_T_2 ? registers_17 : _GEN_171; // @[common/src/main/scala/riscv/core/RegisterFile.scala 57:{28,28}]
  wire [31:0] _GEN_173 = 5'h12 == _io_debug_read_data_T_2 ? registers_18 : _GEN_172; // @[common/src/main/scala/riscv/core/RegisterFile.scala 57:{28,28}]
  wire [31:0] _GEN_174 = 5'h13 == _io_debug_read_data_T_2 ? registers_19 : _GEN_173; // @[common/src/main/scala/riscv/core/RegisterFile.scala 57:{28,28}]
  wire [31:0] _GEN_175 = 5'h14 == _io_debug_read_data_T_2 ? registers_20 : _GEN_174; // @[common/src/main/scala/riscv/core/RegisterFile.scala 57:{28,28}]
  wire [31:0] _GEN_176 = 5'h15 == _io_debug_read_data_T_2 ? registers_21 : _GEN_175; // @[common/src/main/scala/riscv/core/RegisterFile.scala 57:{28,28}]
  wire [31:0] _GEN_177 = 5'h16 == _io_debug_read_data_T_2 ? registers_22 : _GEN_176; // @[common/src/main/scala/riscv/core/RegisterFile.scala 57:{28,28}]
  wire [31:0] _GEN_178 = 5'h17 == _io_debug_read_data_T_2 ? registers_23 : _GEN_177; // @[common/src/main/scala/riscv/core/RegisterFile.scala 57:{28,28}]
  wire [31:0] _GEN_179 = 5'h18 == _io_debug_read_data_T_2 ? registers_24 : _GEN_178; // @[common/src/main/scala/riscv/core/RegisterFile.scala 57:{28,28}]
  wire [31:0] _GEN_180 = 5'h19 == _io_debug_read_data_T_2 ? registers_25 : _GEN_179; // @[common/src/main/scala/riscv/core/RegisterFile.scala 57:{28,28}]
  wire [31:0] _GEN_181 = 5'h1a == _io_debug_read_data_T_2 ? registers_26 : _GEN_180; // @[common/src/main/scala/riscv/core/RegisterFile.scala 57:{28,28}]
  wire [31:0] _GEN_182 = 5'h1b == _io_debug_read_data_T_2 ? registers_27 : _GEN_181; // @[common/src/main/scala/riscv/core/RegisterFile.scala 57:{28,28}]
  wire [31:0] _GEN_183 = 5'h1c == _io_debug_read_data_T_2 ? registers_28 : _GEN_182; // @[common/src/main/scala/riscv/core/RegisterFile.scala 57:{28,28}]
  wire [31:0] _GEN_184 = 5'h1d == _io_debug_read_data_T_2 ? registers_29 : _GEN_183; // @[common/src/main/scala/riscv/core/RegisterFile.scala 57:{28,28}]
  wire [31:0] _GEN_185 = 5'h1e == _io_debug_read_data_T_2 ? registers_30 : _GEN_184; // @[common/src/main/scala/riscv/core/RegisterFile.scala 57:{28,28}]
  assign io_read_data1 = _io_read_data1_T ? 32'h0 : _GEN_123; // @[common/src/main/scala/riscv/core/RegisterFile.scala 45:23]
  assign io_read_data2 = _io_read_data2_T ? 32'h0 : _GEN_154; // @[common/src/main/scala/riscv/core/RegisterFile.scala 51:23]
  assign io_debug_read_data = _io_debug_read_data_T ? 32'h0 : _GEN_185; // @[common/src/main/scala/riscv/core/RegisterFile.scala 57:28]
  always @(posedge clock) begin
    if (reset) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
      registers_0 <= 32'h0; // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
    end else if (~reset) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 38:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 39:55]
        if (5'h0 == _T_5) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 41:41]
          registers_0 <= io_write_data; // @[common/src/main/scala/riscv/core/RegisterFile.scala 41:41]
        end
      end
    end
    if (reset) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
      registers_1 <= 32'h0; // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
    end else if (~reset) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 38:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 39:55]
        if (5'h1 == _T_5) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 41:41]
          registers_1 <= io_write_data; // @[common/src/main/scala/riscv/core/RegisterFile.scala 41:41]
        end
      end
    end
    if (reset) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
      registers_2 <= 32'h0; // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
    end else if (~reset) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 38:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 39:55]
        if (5'h2 == _T_5) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 41:41]
          registers_2 <= io_write_data; // @[common/src/main/scala/riscv/core/RegisterFile.scala 41:41]
        end
      end
    end
    if (reset) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
      registers_3 <= 32'h0; // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
    end else if (~reset) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 38:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 39:55]
        if (5'h3 == _T_5) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 41:41]
          registers_3 <= io_write_data; // @[common/src/main/scala/riscv/core/RegisterFile.scala 41:41]
        end
      end
    end
    if (reset) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
      registers_4 <= 32'h0; // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
    end else if (~reset) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 38:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 39:55]
        if (5'h4 == _T_5) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 41:41]
          registers_4 <= io_write_data; // @[common/src/main/scala/riscv/core/RegisterFile.scala 41:41]
        end
      end
    end
    if (reset) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
      registers_5 <= 32'h0; // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
    end else if (~reset) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 38:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 39:55]
        if (5'h5 == _T_5) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 41:41]
          registers_5 <= io_write_data; // @[common/src/main/scala/riscv/core/RegisterFile.scala 41:41]
        end
      end
    end
    if (reset) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
      registers_6 <= 32'h0; // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
    end else if (~reset) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 38:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 39:55]
        if (5'h6 == _T_5) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 41:41]
          registers_6 <= io_write_data; // @[common/src/main/scala/riscv/core/RegisterFile.scala 41:41]
        end
      end
    end
    if (reset) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
      registers_7 <= 32'h0; // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
    end else if (~reset) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 38:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 39:55]
        if (5'h7 == _T_5) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 41:41]
          registers_7 <= io_write_data; // @[common/src/main/scala/riscv/core/RegisterFile.scala 41:41]
        end
      end
    end
    if (reset) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
      registers_8 <= 32'h0; // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
    end else if (~reset) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 38:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 39:55]
        if (5'h8 == _T_5) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 41:41]
          registers_8 <= io_write_data; // @[common/src/main/scala/riscv/core/RegisterFile.scala 41:41]
        end
      end
    end
    if (reset) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
      registers_9 <= 32'h0; // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
    end else if (~reset) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 38:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 39:55]
        if (5'h9 == _T_5) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 41:41]
          registers_9 <= io_write_data; // @[common/src/main/scala/riscv/core/RegisterFile.scala 41:41]
        end
      end
    end
    if (reset) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
      registers_10 <= 32'h0; // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
    end else if (~reset) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 38:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 39:55]
        if (5'ha == _T_5) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 41:41]
          registers_10 <= io_write_data; // @[common/src/main/scala/riscv/core/RegisterFile.scala 41:41]
        end
      end
    end
    if (reset) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
      registers_11 <= 32'h0; // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
    end else if (~reset) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 38:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 39:55]
        if (5'hb == _T_5) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 41:41]
          registers_11 <= io_write_data; // @[common/src/main/scala/riscv/core/RegisterFile.scala 41:41]
        end
      end
    end
    if (reset) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
      registers_12 <= 32'h0; // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
    end else if (~reset) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 38:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 39:55]
        if (5'hc == _T_5) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 41:41]
          registers_12 <= io_write_data; // @[common/src/main/scala/riscv/core/RegisterFile.scala 41:41]
        end
      end
    end
    if (reset) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
      registers_13 <= 32'h0; // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
    end else if (~reset) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 38:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 39:55]
        if (5'hd == _T_5) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 41:41]
          registers_13 <= io_write_data; // @[common/src/main/scala/riscv/core/RegisterFile.scala 41:41]
        end
      end
    end
    if (reset) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
      registers_14 <= 32'h0; // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
    end else if (~reset) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 38:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 39:55]
        if (5'he == _T_5) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 41:41]
          registers_14 <= io_write_data; // @[common/src/main/scala/riscv/core/RegisterFile.scala 41:41]
        end
      end
    end
    if (reset) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
      registers_15 <= 32'h0; // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
    end else if (~reset) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 38:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 39:55]
        if (5'hf == _T_5) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 41:41]
          registers_15 <= io_write_data; // @[common/src/main/scala/riscv/core/RegisterFile.scala 41:41]
        end
      end
    end
    if (reset) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
      registers_16 <= 32'h0; // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
    end else if (~reset) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 38:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 39:55]
        if (5'h10 == _T_5) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 41:41]
          registers_16 <= io_write_data; // @[common/src/main/scala/riscv/core/RegisterFile.scala 41:41]
        end
      end
    end
    if (reset) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
      registers_17 <= 32'h0; // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
    end else if (~reset) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 38:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 39:55]
        if (5'h11 == _T_5) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 41:41]
          registers_17 <= io_write_data; // @[common/src/main/scala/riscv/core/RegisterFile.scala 41:41]
        end
      end
    end
    if (reset) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
      registers_18 <= 32'h0; // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
    end else if (~reset) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 38:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 39:55]
        if (5'h12 == _T_5) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 41:41]
          registers_18 <= io_write_data; // @[common/src/main/scala/riscv/core/RegisterFile.scala 41:41]
        end
      end
    end
    if (reset) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
      registers_19 <= 32'h0; // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
    end else if (~reset) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 38:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 39:55]
        if (5'h13 == _T_5) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 41:41]
          registers_19 <= io_write_data; // @[common/src/main/scala/riscv/core/RegisterFile.scala 41:41]
        end
      end
    end
    if (reset) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
      registers_20 <= 32'h0; // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
    end else if (~reset) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 38:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 39:55]
        if (5'h14 == _T_5) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 41:41]
          registers_20 <= io_write_data; // @[common/src/main/scala/riscv/core/RegisterFile.scala 41:41]
        end
      end
    end
    if (reset) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
      registers_21 <= 32'h0; // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
    end else if (~reset) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 38:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 39:55]
        if (5'h15 == _T_5) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 41:41]
          registers_21 <= io_write_data; // @[common/src/main/scala/riscv/core/RegisterFile.scala 41:41]
        end
      end
    end
    if (reset) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
      registers_22 <= 32'h0; // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
    end else if (~reset) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 38:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 39:55]
        if (5'h16 == _T_5) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 41:41]
          registers_22 <= io_write_data; // @[common/src/main/scala/riscv/core/RegisterFile.scala 41:41]
        end
      end
    end
    if (reset) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
      registers_23 <= 32'h0; // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
    end else if (~reset) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 38:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 39:55]
        if (5'h17 == _T_5) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 41:41]
          registers_23 <= io_write_data; // @[common/src/main/scala/riscv/core/RegisterFile.scala 41:41]
        end
      end
    end
    if (reset) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
      registers_24 <= 32'h0; // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
    end else if (~reset) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 38:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 39:55]
        if (5'h18 == _T_5) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 41:41]
          registers_24 <= io_write_data; // @[common/src/main/scala/riscv/core/RegisterFile.scala 41:41]
        end
      end
    end
    if (reset) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
      registers_25 <= 32'h0; // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
    end else if (~reset) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 38:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 39:55]
        if (5'h19 == _T_5) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 41:41]
          registers_25 <= io_write_data; // @[common/src/main/scala/riscv/core/RegisterFile.scala 41:41]
        end
      end
    end
    if (reset) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
      registers_26 <= 32'h0; // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
    end else if (~reset) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 38:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 39:55]
        if (5'h1a == _T_5) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 41:41]
          registers_26 <= io_write_data; // @[common/src/main/scala/riscv/core/RegisterFile.scala 41:41]
        end
      end
    end
    if (reset) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
      registers_27 <= 32'h0; // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
    end else if (~reset) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 38:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 39:55]
        if (5'h1b == _T_5) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 41:41]
          registers_27 <= io_write_data; // @[common/src/main/scala/riscv/core/RegisterFile.scala 41:41]
        end
      end
    end
    if (reset) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
      registers_28 <= 32'h0; // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
    end else if (~reset) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 38:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 39:55]
        if (5'h1c == _T_5) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 41:41]
          registers_28 <= io_write_data; // @[common/src/main/scala/riscv/core/RegisterFile.scala 41:41]
        end
      end
    end
    if (reset) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
      registers_29 <= 32'h0; // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
    end else if (~reset) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 38:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 39:55]
        if (5'h1d == _T_5) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 41:41]
          registers_29 <= io_write_data; // @[common/src/main/scala/riscv/core/RegisterFile.scala 41:41]
        end
      end
    end
    if (reset) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
      registers_30 <= 32'h0; // @[common/src/main/scala/riscv/core/RegisterFile.scala 36:26]
    end else if (~reset) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 38:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 39:55]
        if (5'h1e == _T_5) begin // @[common/src/main/scala/riscv/core/RegisterFile.scala 41:41]
          registers_30 <= io_write_data; // @[common/src/main/scala/riscv/core/RegisterFile.scala 41:41]
        end
      end
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  registers_0 = _RAND_0[31:0];
  _RAND_1 = {1{`RANDOM}};
  registers_1 = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  registers_2 = _RAND_2[31:0];
  _RAND_3 = {1{`RANDOM}};
  registers_3 = _RAND_3[31:0];
  _RAND_4 = {1{`RANDOM}};
  registers_4 = _RAND_4[31:0];
  _RAND_5 = {1{`RANDOM}};
  registers_5 = _RAND_5[31:0];
  _RAND_6 = {1{`RANDOM}};
  registers_6 = _RAND_6[31:0];
  _RAND_7 = {1{`RANDOM}};
  registers_7 = _RAND_7[31:0];
  _RAND_8 = {1{`RANDOM}};
  registers_8 = _RAND_8[31:0];
  _RAND_9 = {1{`RANDOM}};
  registers_9 = _RAND_9[31:0];
  _RAND_10 = {1{`RANDOM}};
  registers_10 = _RAND_10[31:0];
  _RAND_11 = {1{`RANDOM}};
  registers_11 = _RAND_11[31:0];
  _RAND_12 = {1{`RANDOM}};
  registers_12 = _RAND_12[31:0];
  _RAND_13 = {1{`RANDOM}};
  registers_13 = _RAND_13[31:0];
  _RAND_14 = {1{`RANDOM}};
  registers_14 = _RAND_14[31:0];
  _RAND_15 = {1{`RANDOM}};
  registers_15 = _RAND_15[31:0];
  _RAND_16 = {1{`RANDOM}};
  registers_16 = _RAND_16[31:0];
  _RAND_17 = {1{`RANDOM}};
  registers_17 = _RAND_17[31:0];
  _RAND_18 = {1{`RANDOM}};
  registers_18 = _RAND_18[31:0];
  _RAND_19 = {1{`RANDOM}};
  registers_19 = _RAND_19[31:0];
  _RAND_20 = {1{`RANDOM}};
  registers_20 = _RAND_20[31:0];
  _RAND_21 = {1{`RANDOM}};
  registers_21 = _RAND_21[31:0];
  _RAND_22 = {1{`RANDOM}};
  registers_22 = _RAND_22[31:0];
  _RAND_23 = {1{`RANDOM}};
  registers_23 = _RAND_23[31:0];
  _RAND_24 = {1{`RANDOM}};
  registers_24 = _RAND_24[31:0];
  _RAND_25 = {1{`RANDOM}};
  registers_25 = _RAND_25[31:0];
  _RAND_26 = {1{`RANDOM}};
  registers_26 = _RAND_26[31:0];
  _RAND_27 = {1{`RANDOM}};
  registers_27 = _RAND_27[31:0];
  _RAND_28 = {1{`RANDOM}};
  registers_28 = _RAND_28[31:0];
  _RAND_29 = {1{`RANDOM}};
  registers_29 = _RAND_29[31:0];
  _RAND_30 = {1{`RANDOM}};
  registers_30 = _RAND_30[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module InstructionFetch(
  input         clock,
  input         reset,
  input         io_jump_flag_id, // @[2-mmio-trap/src/main/scala/riscv/core/InstructionFetch.scala 17:14]
  input  [31:0] io_jump_address_id, // @[2-mmio-trap/src/main/scala/riscv/core/InstructionFetch.scala 17:14]
  input         io_interrupt_assert, // @[2-mmio-trap/src/main/scala/riscv/core/InstructionFetch.scala 17:14]
  input  [31:0] io_interrupt_handler_address, // @[2-mmio-trap/src/main/scala/riscv/core/InstructionFetch.scala 17:14]
  input  [31:0] io_instruction_read_data, // @[2-mmio-trap/src/main/scala/riscv/core/InstructionFetch.scala 17:14]
  input         io_instruction_valid, // @[2-mmio-trap/src/main/scala/riscv/core/InstructionFetch.scala 17:14]
  output [31:0] io_instruction_address, // @[2-mmio-trap/src/main/scala/riscv/core/InstructionFetch.scala 17:14]
  output [31:0] io_instruction // @[2-mmio-trap/src/main/scala/riscv/core/InstructionFetch.scala 17:14]
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] pc; // @[2-mmio-trap/src/main/scala/riscv/core/InstructionFetch.scala 30:19]
  wire [31:0] next_pc_sequential = pc + 32'h4; // @[2-mmio-trap/src/main/scala/riscv/core/InstructionFetch.scala 47:31]
  assign io_instruction_address = pc; // @[2-mmio-trap/src/main/scala/riscv/core/InstructionFetch.scala 87:26]
  assign io_instruction = io_instruction_valid ? io_instruction_read_data : 32'h13; // @[2-mmio-trap/src/main/scala/riscv/core/InstructionFetch.scala 60:30 61:20 85:20]
  always @(posedge clock) begin
    if (reset) begin // @[2-mmio-trap/src/main/scala/riscv/core/InstructionFetch.scala 30:19]
      pc <= 32'h1000; // @[2-mmio-trap/src/main/scala/riscv/core/InstructionFetch.scala 30:19]
    end else if (io_instruction_valid) begin // @[2-mmio-trap/src/main/scala/riscv/core/InstructionFetch.scala 60:30]
      if (io_interrupt_assert) begin // @[2-mmio-trap/src/main/scala/riscv/core/InstructionFetch.scala 71:14]
        pc <= io_interrupt_handler_address;
      end else if (io_jump_flag_id) begin // @[2-mmio-trap/src/main/scala/riscv/core/InstructionFetch.scala 74:10]
        pc <= io_jump_address_id;
      end else begin
        pc <= next_pc_sequential;
      end
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  pc = _RAND_0[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module InstructionDecode(
  input  [31:0] io_instruction, // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 156:14]
  output [4:0]  io_regs_reg1_read_address, // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 156:14]
  output [4:0]  io_regs_reg2_read_address, // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 156:14]
  output [31:0] io_ex_immediate, // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 156:14]
  output        io_ex_aluop1_source, // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 156:14]
  output        io_ex_aluop2_source, // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 156:14]
  output        io_memory_read_enable, // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 156:14]
  output        io_memory_write_enable, // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 156:14]
  output [1:0]  io_wb_reg_write_source, // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 156:14]
  output        io_reg_write_enable, // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 156:14]
  output [4:0]  io_reg_write_address, // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 156:14]
  output [11:0] io_csr_reg_address, // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 156:14]
  output        io_csr_reg_write_enable // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 156:14]
);
  wire [6:0] opcode = io_instruction[6:0]; // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 174:32]
  wire [2:0] funct3 = io_instruction[14:12]; // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 175:32]
  wire [4:0] rs1 = io_instruction[19:15]; // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 176:32]
  wire [4:0] rs2 = io_instruction[24:20]; // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 177:32]
  wire [4:0] rd = io_instruction[11:7]; // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 178:32]
  wire  isLoad = opcode == 7'h3; // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 180:26]
  wire  isStore = opcode == 7'h23; // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 181:26]
  wire  isOpImm = opcode == 7'h13; // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 182:26]
  wire  isOp = opcode == 7'h33; // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 183:26]
  wire  isLui = opcode == 7'h37; // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 184:26]
  wire  isAuipc = opcode == 7'h17; // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 185:26]
  wire  isJal = opcode == 7'h6f; // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 186:26]
  wire  isJalr = opcode == 7'h67; // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 187:26]
  wire  isBranch = opcode == 7'h63; // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 188:26]
  wire  isSystem = opcode == 7'h73; // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 190:26]
  wire  isCsr = isSystem & funct3 != 3'h0; // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 191:28]
  wire  csrImmIsZero = rs1 == 5'h0; // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 194:33]
  wire  csrUsesImmediate = funct3[2] & isCsr; // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 196:36]
  wire  _csrSourceZero_T_1 = ~csrUsesImmediate; // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 197:63]
  wire  csrSourceZero = csrUsesImmediate & csrImmIsZero | ~csrUsesImmediate & csrImmIsZero; // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 197:59]
  wire  _usesRs1_T_1 = isLoad | isStore | isOpImm; // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 199:35]
  wire  usesRs1 = isLoad | isStore | isOpImm | isOp | isBranch | isJalr | isCsr & _csrSourceZero_T_1; // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 199:76]
  wire  usesRs2 = isStore | isOp | isBranch; // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 200:33]
  wire  _regWrite_T = isLoad | isOpImm; // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 202:26]
  wire [1:0] _GEN_0 = isJal | isJalr ? 2'h3 : 2'h0; // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 229:30 230:14 219:29]
  wire [1:0] _GEN_1 = isCsr ? 2'h2 : _GEN_0; // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 225:20 226:14]
  wire  _T_4 = _regWrite_T | isJalr; // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 257:26]
  wire [1:0] _GEN_6 = isStore ? 2'h2 : {{1'd0}, _T_4}; // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 260:17 261:13]
  wire [1:0] _GEN_7 = isBranch ? 2'h3 : _GEN_6; // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 263:18 264:13]
  wire [2:0] _GEN_8 = isLui | isAuipc ? 3'h4 : {{1'd0}, _GEN_7}; // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 266:26 267:13]
  wire [2:0] immKind = isJal ? 3'h5 : _GEN_8; // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 269:15 270:13]
  wire  _csrWrites_T_1 = funct3 == 3'h5; // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 286:15]
  wire  _csrWrites_T_2 = funct3 == 3'h1 | _csrWrites_T_1; // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 285:44]
  wire  _csrWrites_T_5 = funct3 == 3'h3; // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 288:16]
  wire  _csrWrites_T_6 = funct3 == 3'h2 | _csrWrites_T_5; // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 287:64]
  wire  _csrWrites_T_7 = funct3 == 3'h6; // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 289:16]
  wire  _csrWrites_T_8 = _csrWrites_T_6 | _csrWrites_T_7; // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 288:46]
  wire  _csrWrites_T_9 = funct3 == 3'h7; // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 290:16]
  wire  _csrWrites_T_10 = _csrWrites_T_8 | _csrWrites_T_9; // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 289:47]
  wire  _csrWrites_T_11 = ~csrSourceZero & _csrWrites_T_10; // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 287:23]
  wire  _csrWrites_T_12 = _csrWrites_T_2 | _csrWrites_T_11; // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 286:47]
  wire [19:0] _immI_T_1 = io_instruction[31] ? 20'hfffff : 20'h0; // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 306:9]
  wire [31:0] immI = {_immI_T_1,io_instruction[31:20]}; // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 305:17]
  wire [31:0] immS = {_immI_T_1,io_instruction[31:25],rd}; // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 316:17]
  wire [18:0] _immB_T_1 = io_instruction[31] ? 19'h7ffff : 19'h0; // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 330:9]
  wire [31:0] immB = {_immB_T_1,io_instruction[31],io_instruction[7],io_instruction[30:25],io_instruction[11:8],1'h0}; // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 329:17]
  wire [31:0] immU = {io_instruction[31:12],12'h0}; // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 342:17]
  wire [10:0] _immJ_T_1 = io_instruction[31] ? 11'h7ff : 11'h0; // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 352:9]
  wire [31:0] immJ = {_immJ_T_1,io_instruction[31],io_instruction[19:12],io_instruction[20],io_instruction[30:21],1'h0}; // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 351:17]
  wire [31:0] _immediate_T_7 = 3'h1 == immKind ? immI : 32'h0; // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 360:72]
  wire [31:0] _immediate_T_9 = 3'h2 == immKind ? immS : _immediate_T_7; // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 360:72]
  wire [31:0] _immediate_T_11 = 3'h3 == immKind ? immB : _immediate_T_9; // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 360:72]
  wire [31:0] _immediate_T_13 = 3'h4 == immKind ? immU : _immediate_T_11; // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 360:72]
  assign io_regs_reg1_read_address = usesRs1 ? rs1 : 5'h0; // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 273:35]
  assign io_regs_reg2_read_address = usesRs2 ? rs2 : 5'h0; // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 274:35]
  assign io_ex_immediate = 3'h5 == immKind ? immJ : _immediate_T_13; // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 360:72]
  assign io_ex_aluop1_source = isBranch | isAuipc | isJal; // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 240:28]
  assign io_ex_aluop2_source = _usesRs1_T_1 | isBranch | isLui | isAuipc | isJal | isJalr; // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 248:75]
  assign io_memory_read_enable = opcode == 7'h3; // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 180:26]
  assign io_memory_write_enable = opcode == 7'h23; // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 181:26]
  assign io_wb_reg_write_source = isLoad ? 2'h1 : _GEN_1; // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 221:16 222:14]
  assign io_reg_write_enable = (isLoad | isOpImm | isOp | isLui | isAuipc | isJal | isJalr | isCsr) & rd != 5'h0; // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 202:94]
  assign io_reg_write_address = io_instruction[11:7]; // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 178:32]
  assign io_csr_reg_address = io_instruction[31:20]; // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 283:36]
  assign io_csr_reg_write_enable = isCsr & _csrWrites_T_12; // @[2-mmio-trap/src/main/scala/riscv/core/InstructionDecode.scala 284:25]
endmodule
module ALU(
  input  [3:0]  io_func, // @[common/src/main/scala/riscv/core/ALU.scala 27:14]
  input  [31:0] io_op1, // @[common/src/main/scala/riscv/core/ALU.scala 27:14]
  input  [31:0] io_op2, // @[common/src/main/scala/riscv/core/ALU.scala 27:14]
  output [31:0] io_result // @[common/src/main/scala/riscv/core/ALU.scala 27:14]
);
  wire [31:0] _io_result_T_1 = io_op1 + io_op2; // @[common/src/main/scala/riscv/core/ALU.scala 39:27]
  wire [31:0] _io_result_T_3 = io_op1 - io_op2; // @[common/src/main/scala/riscv/core/ALU.scala 42:27]
  wire [62:0] _GEN_10 = {{31'd0}, io_op1}; // @[common/src/main/scala/riscv/core/ALU.scala 45:27]
  wire [62:0] _io_result_T_5 = _GEN_10 << io_op2[4:0]; // @[common/src/main/scala/riscv/core/ALU.scala 45:27]
  wire [31:0] _io_result_T_6 = io_op1; // @[common/src/main/scala/riscv/core/ALU.scala 48:27]
  wire [31:0] _io_result_T_7 = io_op2; // @[common/src/main/scala/riscv/core/ALU.scala 48:43]
  wire [31:0] _io_result_T_9 = io_op1 ^ io_op2; // @[common/src/main/scala/riscv/core/ALU.scala 51:27]
  wire [31:0] _io_result_T_10 = io_op1 | io_op2; // @[common/src/main/scala/riscv/core/ALU.scala 54:27]
  wire [31:0] _io_result_T_11 = io_op1 & io_op2; // @[common/src/main/scala/riscv/core/ALU.scala 57:27]
  wire [31:0] _io_result_T_13 = io_op1 >> io_op2[4:0]; // @[common/src/main/scala/riscv/core/ALU.scala 60:27]
  wire [31:0] _io_result_T_17 = $signed(io_op1) >>> io_op2[4:0]; // @[common/src/main/scala/riscv/core/ALU.scala 63:52]
  wire  _GEN_0 = 4'ha == io_func & io_op1 < io_op2; // @[common/src/main/scala/riscv/core/ALU.scala 36:13 37:19 66:17]
  wire [31:0] _GEN_1 = 4'h9 == io_func ? _io_result_T_17 : {{31'd0}, _GEN_0}; // @[common/src/main/scala/riscv/core/ALU.scala 37:19 63:17]
  wire [31:0] _GEN_2 = 4'h8 == io_func ? _io_result_T_13 : _GEN_1; // @[common/src/main/scala/riscv/core/ALU.scala 37:19 60:17]
  wire [31:0] _GEN_3 = 4'h7 == io_func ? _io_result_T_11 : _GEN_2; // @[common/src/main/scala/riscv/core/ALU.scala 37:19 57:17]
  wire [31:0] _GEN_4 = 4'h6 == io_func ? _io_result_T_10 : _GEN_3; // @[common/src/main/scala/riscv/core/ALU.scala 37:19 54:17]
  wire [31:0] _GEN_5 = 4'h5 == io_func ? _io_result_T_9 : _GEN_4; // @[common/src/main/scala/riscv/core/ALU.scala 37:19 51:17]
  wire [31:0] _GEN_6 = 4'h4 == io_func ? {{31'd0}, $signed(_io_result_T_6) < $signed(_io_result_T_7)} : _GEN_5; // @[common/src/main/scala/riscv/core/ALU.scala 37:19 48:17]
  wire [62:0] _GEN_7 = 4'h3 == io_func ? _io_result_T_5 : {{31'd0}, _GEN_6}; // @[common/src/main/scala/riscv/core/ALU.scala 37:19 45:17]
  wire [62:0] _GEN_8 = 4'h2 == io_func ? {{31'd0}, _io_result_T_3} : _GEN_7; // @[common/src/main/scala/riscv/core/ALU.scala 37:19 42:17]
  wire [62:0] _GEN_9 = 4'h1 == io_func ? {{31'd0}, _io_result_T_1} : _GEN_8; // @[common/src/main/scala/riscv/core/ALU.scala 37:19 39:17]
  assign io_result = _GEN_9[31:0];
endmodule
module ALUControl(
  input  [6:0] io_opcode, // @[2-mmio-trap/src/main/scala/riscv/core/ALUControl.scala 21:14]
  input  [2:0] io_funct3, // @[2-mmio-trap/src/main/scala/riscv/core/ALUControl.scala 21:14]
  input  [6:0] io_funct7, // @[2-mmio-trap/src/main/scala/riscv/core/ALUControl.scala 21:14]
  output [3:0] io_alu_funct // @[2-mmio-trap/src/main/scala/riscv/core/ALUControl.scala 21:14]
);
  wire  funct7_5 = io_funct7[5]; // @[2-mmio-trap/src/main/scala/riscv/core/ALUControl.scala 43:27]
  wire [3:0] _io_alu_funct_T = funct7_5 ? 4'h9 : 4'h8; // @[2-mmio-trap/src/main/scala/riscv/core/ALUControl.scala 69:41]
  wire  _io_alu_funct_T_1 = 3'h1 == io_funct3; // @[2-mmio-trap/src/main/scala/riscv/core/ALUControl.scala 51:62]
  wire [1:0] _io_alu_funct_T_2 = 3'h1 == io_funct3 ? 2'h3 : 2'h1; // @[2-mmio-trap/src/main/scala/riscv/core/ALUControl.scala 51:62]
  wire  _io_alu_funct_T_3 = 3'h2 == io_funct3; // @[2-mmio-trap/src/main/scala/riscv/core/ALUControl.scala 51:62]
  wire [2:0] _io_alu_funct_T_4 = 3'h2 == io_funct3 ? 3'h4 : {{1'd0}, _io_alu_funct_T_2}; // @[2-mmio-trap/src/main/scala/riscv/core/ALUControl.scala 51:62]
  wire  _io_alu_funct_T_5 = 3'h3 == io_funct3; // @[2-mmio-trap/src/main/scala/riscv/core/ALUControl.scala 51:62]
  wire [3:0] _io_alu_funct_T_6 = 3'h3 == io_funct3 ? 4'ha : {{1'd0}, _io_alu_funct_T_4}; // @[2-mmio-trap/src/main/scala/riscv/core/ALUControl.scala 51:62]
  wire  _io_alu_funct_T_7 = 3'h4 == io_funct3; // @[2-mmio-trap/src/main/scala/riscv/core/ALUControl.scala 51:62]
  wire [3:0] _io_alu_funct_T_8 = 3'h4 == io_funct3 ? 4'h5 : _io_alu_funct_T_6; // @[2-mmio-trap/src/main/scala/riscv/core/ALUControl.scala 51:62]
  wire  _io_alu_funct_T_9 = 3'h6 == io_funct3; // @[2-mmio-trap/src/main/scala/riscv/core/ALUControl.scala 51:62]
  wire [3:0] _io_alu_funct_T_10 = 3'h6 == io_funct3 ? 4'h6 : _io_alu_funct_T_8; // @[2-mmio-trap/src/main/scala/riscv/core/ALUControl.scala 51:62]
  wire  _io_alu_funct_T_11 = 3'h7 == io_funct3; // @[2-mmio-trap/src/main/scala/riscv/core/ALUControl.scala 51:62]
  wire [3:0] _io_alu_funct_T_12 = 3'h7 == io_funct3 ? 4'h7 : _io_alu_funct_T_10; // @[2-mmio-trap/src/main/scala/riscv/core/ALUControl.scala 51:62]
  wire  _io_alu_funct_T_13 = 3'h5 == io_funct3; // @[2-mmio-trap/src/main/scala/riscv/core/ALUControl.scala 51:62]
  wire [3:0] _io_alu_funct_T_14 = 3'h5 == io_funct3 ? _io_alu_funct_T : _io_alu_funct_T_12; // @[2-mmio-trap/src/main/scala/riscv/core/ALUControl.scala 51:62]
  wire [1:0] _io_alu_funct_T_15 = funct7_5 ? 2'h2 : 2'h1; // @[2-mmio-trap/src/main/scala/riscv/core/ALUControl.scala 82:43]
  wire [1:0] _io_alu_funct_T_18 = _io_alu_funct_T_1 ? 2'h3 : _io_alu_funct_T_15; // @[2-mmio-trap/src/main/scala/riscv/core/ALUControl.scala 76:62]
  wire [2:0] _io_alu_funct_T_20 = _io_alu_funct_T_3 ? 3'h4 : {{1'd0}, _io_alu_funct_T_18}; // @[2-mmio-trap/src/main/scala/riscv/core/ALUControl.scala 76:62]
  wire [3:0] _io_alu_funct_T_22 = _io_alu_funct_T_5 ? 4'ha : {{1'd0}, _io_alu_funct_T_20}; // @[2-mmio-trap/src/main/scala/riscv/core/ALUControl.scala 76:62]
  wire [3:0] _io_alu_funct_T_24 = _io_alu_funct_T_7 ? 4'h5 : _io_alu_funct_T_22; // @[2-mmio-trap/src/main/scala/riscv/core/ALUControl.scala 76:62]
  wire [3:0] _io_alu_funct_T_26 = _io_alu_funct_T_9 ? 4'h6 : _io_alu_funct_T_24; // @[2-mmio-trap/src/main/scala/riscv/core/ALUControl.scala 76:62]
  wire [3:0] _io_alu_funct_T_28 = _io_alu_funct_T_11 ? 4'h7 : _io_alu_funct_T_26; // @[2-mmio-trap/src/main/scala/riscv/core/ALUControl.scala 76:62]
  wire [3:0] _io_alu_funct_T_30 = _io_alu_funct_T_13 ? _io_alu_funct_T : _io_alu_funct_T_28; // @[2-mmio-trap/src/main/scala/riscv/core/ALUControl.scala 76:62]
  wire [3:0] _GEN_0 = 7'h33 == io_opcode ? _io_alu_funct_T_30 : 4'h1; // @[2-mmio-trap/src/main/scala/riscv/core/ALUControl.scala 46:16 48:21 76:20]
  assign io_alu_funct = 7'h13 == io_opcode ? _io_alu_funct_T_14 : _GEN_0; // @[2-mmio-trap/src/main/scala/riscv/core/ALUControl.scala 48:21 51:20]
endmodule
module Execute(
  input  [31:0] io_instruction, // @[2-mmio-trap/src/main/scala/riscv/core/Execute.scala 55:14]
  input  [31:0] io_instruction_address, // @[2-mmio-trap/src/main/scala/riscv/core/Execute.scala 55:14]
  input  [31:0] io_reg1_data, // @[2-mmio-trap/src/main/scala/riscv/core/Execute.scala 55:14]
  input  [31:0] io_reg2_data, // @[2-mmio-trap/src/main/scala/riscv/core/Execute.scala 55:14]
  input  [31:0] io_immediate, // @[2-mmio-trap/src/main/scala/riscv/core/Execute.scala 55:14]
  input         io_aluop1_source, // @[2-mmio-trap/src/main/scala/riscv/core/Execute.scala 55:14]
  input         io_aluop2_source, // @[2-mmio-trap/src/main/scala/riscv/core/Execute.scala 55:14]
  input  [31:0] io_csr_reg_read_data, // @[2-mmio-trap/src/main/scala/riscv/core/Execute.scala 55:14]
  output [31:0] io_mem_alu_result, // @[2-mmio-trap/src/main/scala/riscv/core/Execute.scala 55:14]
  output [31:0] io_csr_reg_write_data, // @[2-mmio-trap/src/main/scala/riscv/core/Execute.scala 55:14]
  output        io_if_jump_flag, // @[2-mmio-trap/src/main/scala/riscv/core/Execute.scala 55:14]
  output [31:0] io_if_jump_address // @[2-mmio-trap/src/main/scala/riscv/core/Execute.scala 55:14]
);
  wire [3:0] alu_io_func; // @[2-mmio-trap/src/main/scala/riscv/core/Execute.scala 76:24]
  wire [31:0] alu_io_op1; // @[2-mmio-trap/src/main/scala/riscv/core/Execute.scala 76:24]
  wire [31:0] alu_io_op2; // @[2-mmio-trap/src/main/scala/riscv/core/Execute.scala 76:24]
  wire [31:0] alu_io_result; // @[2-mmio-trap/src/main/scala/riscv/core/Execute.scala 76:24]
  wire [6:0] alu_ctrl_io_opcode; // @[2-mmio-trap/src/main/scala/riscv/core/Execute.scala 77:24]
  wire [2:0] alu_ctrl_io_funct3; // @[2-mmio-trap/src/main/scala/riscv/core/Execute.scala 77:24]
  wire [6:0] alu_ctrl_io_funct7; // @[2-mmio-trap/src/main/scala/riscv/core/Execute.scala 77:24]
  wire [3:0] alu_ctrl_io_alu_funct; // @[2-mmio-trap/src/main/scala/riscv/core/Execute.scala 77:24]
  wire [6:0] opcode = io_instruction[6:0]; // @[2-mmio-trap/src/main/scala/riscv/core/Execute.scala 72:30]
  wire [2:0] funct3 = io_instruction[14:12]; // @[2-mmio-trap/src/main/scala/riscv/core/Execute.scala 73:30]
  wire [31:0] csrSourceImmediate = {27'h0,io_instruction[19:15]}; // @[2-mmio-trap/src/main/scala/riscv/core/Execute.scala 105:31]
  wire [31:0] csrSource = funct3[2] ? csrSourceImmediate : io_reg1_data; // @[2-mmio-trap/src/main/scala/riscv/core/Execute.scala 106:31]
  wire [31:0] _csrResult_T = io_csr_reg_read_data | csrSource; // @[2-mmio-trap/src/main/scala/riscv/core/Execute.scala 111:59]
  wire [31:0] _csrResult_T_2 = ~csrSource; // @[2-mmio-trap/src/main/scala/riscv/core/Execute.scala 113:62]
  wire [31:0] _csrResult_T_3 = io_csr_reg_read_data & _csrResult_T_2; // @[2-mmio-trap/src/main/scala/riscv/core/Execute.scala 113:59]
  wire  _csrResult_T_6 = 3'h1 == funct3; // @[2-mmio-trap/src/main/scala/riscv/core/Execute.scala 107:47]
  wire  _csrResult_T_8 = 3'h5 == funct3; // @[2-mmio-trap/src/main/scala/riscv/core/Execute.scala 107:47]
  wire [31:0] _csrResult_T_11 = 3'h2 == funct3 ? _csrResult_T : csrSource; // @[2-mmio-trap/src/main/scala/riscv/core/Execute.scala 107:47]
  wire  _csrResult_T_12 = 3'h6 == funct3; // @[2-mmio-trap/src/main/scala/riscv/core/Execute.scala 107:47]
  wire [31:0] _csrResult_T_13 = 3'h6 == funct3 ? _csrResult_T : _csrResult_T_11; // @[2-mmio-trap/src/main/scala/riscv/core/Execute.scala 107:47]
  wire [31:0] _csrResult_T_15 = 3'h3 == funct3 ? _csrResult_T_3 : _csrResult_T_13; // @[2-mmio-trap/src/main/scala/riscv/core/Execute.scala 107:47]
  wire  _csrResult_T_16 = 3'h7 == funct3; // @[2-mmio-trap/src/main/scala/riscv/core/Execute.scala 107:47]
  wire  _branchCondition_T = io_reg1_data == io_reg2_data; // @[2-mmio-trap/src/main/scala/riscv/core/Execute.scala 133:41]
  wire  _branchCondition_T_1 = io_reg1_data != io_reg2_data; // @[2-mmio-trap/src/main/scala/riscv/core/Execute.scala 134:41]
  wire  _branchCondition_T_2 = $signed(io_reg1_data) < $signed(io_reg2_data); // @[2-mmio-trap/src/main/scala/riscv/core/Execute.scala 137:41]
  wire  _branchCondition_T_3 = $signed(io_reg1_data) >= $signed(io_reg2_data); // @[2-mmio-trap/src/main/scala/riscv/core/Execute.scala 138:41]
  wire  _branchCondition_T_4 = io_reg1_data < io_reg2_data; // @[2-mmio-trap/src/main/scala/riscv/core/Execute.scala 141:41]
  wire  _branchCondition_T_5 = io_reg1_data >= io_reg2_data; // @[2-mmio-trap/src/main/scala/riscv/core/Execute.scala 142:41]
  wire  _branchCondition_T_9 = _csrResult_T_6 ? _branchCondition_T_1 : 3'h0 == funct3 & _branchCondition_T; // @[2-mmio-trap/src/main/scala/riscv/core/Execute.scala 128:51]
  wire  _branchCondition_T_11 = 3'h4 == funct3 ? _branchCondition_T_2 : _branchCondition_T_9; // @[2-mmio-trap/src/main/scala/riscv/core/Execute.scala 128:51]
  wire  _branchCondition_T_13 = _csrResult_T_8 ? _branchCondition_T_3 : _branchCondition_T_11; // @[2-mmio-trap/src/main/scala/riscv/core/Execute.scala 128:51]
  wire  _branchCondition_T_15 = _csrResult_T_12 ? _branchCondition_T_4 : _branchCondition_T_13; // @[2-mmio-trap/src/main/scala/riscv/core/Execute.scala 128:51]
  wire  branchCondition = _csrResult_T_16 ? _branchCondition_T_5 : _branchCondition_T_15; // @[2-mmio-trap/src/main/scala/riscv/core/Execute.scala 128:51]
  wire  isBranch = opcode == 7'h63; // @[2-mmio-trap/src/main/scala/riscv/core/Execute.scala 145:25]
  wire  isJal = opcode == 7'h6f; // @[2-mmio-trap/src/main/scala/riscv/core/Execute.scala 146:25]
  wire  isJalr = opcode == 7'h67; // @[2-mmio-trap/src/main/scala/riscv/core/Execute.scala 147:25]
  wire [31:0] branchTarget = $signed(io_instruction_address) + $signed(io_immediate); // @[2-mmio-trap/src/main/scala/riscv/core/Execute.scala 160:76]
  wire [31:0] jalrSum = $signed(io_reg1_data) + $signed(io_immediate); // @[2-mmio-trap/src/main/scala/riscv/core/Execute.scala 167:66]
  wire [31:0] jalrTarget = {jalrSum[31:1],1'h0}; // @[2-mmio-trap/src/main/scala/riscv/core/Execute.scala 172:25]
  wire  branchTaken = isBranch & branchCondition; // @[2-mmio-trap/src/main/scala/riscv/core/Execute.scala 174:30]
  ALU alu ( // @[2-mmio-trap/src/main/scala/riscv/core/Execute.scala 76:24]
    .io_func(alu_io_func),
    .io_op1(alu_io_op1),
    .io_op2(alu_io_op2),
    .io_result(alu_io_result)
  );
  ALUControl alu_ctrl ( // @[2-mmio-trap/src/main/scala/riscv/core/Execute.scala 77:24]
    .io_opcode(alu_ctrl_io_opcode),
    .io_funct3(alu_ctrl_io_funct3),
    .io_funct7(alu_ctrl_io_funct7),
    .io_alu_funct(alu_ctrl_io_alu_funct)
  );
  assign io_mem_alu_result = alu_io_result; // @[2-mmio-trap/src/main/scala/riscv/core/Execute.scala 102:21]
  assign io_csr_reg_write_data = 3'h7 == funct3 ? _csrResult_T_3 : _csrResult_T_15; // @[2-mmio-trap/src/main/scala/riscv/core/Execute.scala 107:47]
  assign io_if_jump_flag = branchTaken | isJal | isJalr; // @[2-mmio-trap/src/main/scala/riscv/core/Execute.scala 175:46]
  assign io_if_jump_address = isJalr ? jalrTarget : branchTarget; // @[2-mmio-trap/src/main/scala/riscv/core/Execute.scala 176:28]
  assign alu_io_func = alu_ctrl_io_alu_funct; // @[2-mmio-trap/src/main/scala/riscv/core/Execute.scala 96:15]
  assign alu_io_op1 = io_aluop1_source ? io_instruction_address : io_reg1_data; // @[2-mmio-trap/src/main/scala/riscv/core/Execute.scala 97:19]
  assign alu_io_op2 = io_aluop2_source ? io_immediate : io_reg2_data; // @[2-mmio-trap/src/main/scala/riscv/core/Execute.scala 98:19]
  assign alu_ctrl_io_opcode = io_instruction[6:0]; // @[2-mmio-trap/src/main/scala/riscv/core/Execute.scala 72:30]
  assign alu_ctrl_io_funct3 = io_instruction[14:12]; // @[2-mmio-trap/src/main/scala/riscv/core/Execute.scala 73:30]
  assign alu_ctrl_io_funct7 = io_instruction[31:25]; // @[2-mmio-trap/src/main/scala/riscv/core/Execute.scala 81:39]
endmodule
module MemoryAccess(
  input  [31:0] io_alu_result, // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 14:14]
  input  [31:0] io_reg2_data, // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 14:14]
  input         io_memory_read_enable, // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 14:14]
  input         io_memory_write_enable, // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 14:14]
  input  [2:0]  io_funct3, // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 14:14]
  output [31:0] io_wb_memory_read_data, // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 14:14]
  output [31:0] io_memory_bundle_address, // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 14:14]
  output [31:0] io_memory_bundle_write_data, // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 14:14]
  output        io_memory_bundle_write_enable, // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 14:14]
  output        io_memory_bundle_write_strobe_0, // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 14:14]
  output        io_memory_bundle_write_strobe_1, // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 14:14]
  output        io_memory_bundle_write_strobe_2, // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 14:14]
  output        io_memory_bundle_write_strobe_3, // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 14:14]
  input  [31:0] io_memory_bundle_read_data // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 14:14]
);
  wire [1:0] mem_address_index = io_alu_result[1:0]; // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 25:40]
  wire [23:0] _io_wb_memory_read_data_T_5 = io_memory_bundle_read_data[7] ? 24'hffffff : 24'h0; // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 56:28]
  wire [31:0] _io_wb_memory_read_data_T_7 = {_io_wb_memory_read_data_T_5,io_memory_bundle_read_data[7:0]}; // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 56:23]
  wire [23:0] _io_wb_memory_read_data_T_9 = io_memory_bundle_read_data[15] ? 24'hffffff : 24'h0; // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 57:28]
  wire [31:0] _io_wb_memory_read_data_T_11 = {_io_wb_memory_read_data_T_9,io_memory_bundle_read_data[15:8]}; // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 57:23]
  wire [23:0] _io_wb_memory_read_data_T_13 = io_memory_bundle_read_data[23] ? 24'hffffff : 24'h0; // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 58:28]
  wire [31:0] _io_wb_memory_read_data_T_15 = {_io_wb_memory_read_data_T_13,io_memory_bundle_read_data[23:16]}; // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 58:23]
  wire [23:0] _io_wb_memory_read_data_T_17 = io_memory_bundle_read_data[31] ? 24'hffffff : 24'h0; // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 59:28]
  wire [31:0] _io_wb_memory_read_data_T_19 = {_io_wb_memory_read_data_T_17,io_memory_bundle_read_data[31:24]}; // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 59:23]
  wire  _io_wb_memory_read_data_T_20 = 2'h1 == mem_address_index; // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 54:100]
  wire [31:0] _io_wb_memory_read_data_T_21 = 2'h1 == mem_address_index ? _io_wb_memory_read_data_T_11 :
    _io_wb_memory_read_data_T_7; // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 54:100]
  wire  _io_wb_memory_read_data_T_22 = 2'h2 == mem_address_index; // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 54:100]
  wire [31:0] _io_wb_memory_read_data_T_23 = 2'h2 == mem_address_index ? _io_wb_memory_read_data_T_15 :
    _io_wb_memory_read_data_T_21; // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 54:100]
  wire  _io_wb_memory_read_data_T_24 = 2'h3 == mem_address_index; // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 54:100]
  wire [31:0] _io_wb_memory_read_data_T_25 = 2'h3 == mem_address_index ? _io_wb_memory_read_data_T_19 :
    _io_wb_memory_read_data_T_23; // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 54:100]
  wire [31:0] _io_wb_memory_read_data_T_29 = {24'h0,io_memory_bundle_read_data[7:0]}; // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 68:23]
  wire [31:0] _io_wb_memory_read_data_T_31 = {24'h0,io_memory_bundle_read_data[15:8]}; // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 69:23]
  wire [31:0] _io_wb_memory_read_data_T_33 = {24'h0,io_memory_bundle_read_data[23:16]}; // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 70:23]
  wire [31:0] _io_wb_memory_read_data_T_35 = {24'h0,io_memory_bundle_read_data[31:24]}; // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 71:23]
  wire [31:0] _io_wb_memory_read_data_T_37 = _io_wb_memory_read_data_T_20 ? _io_wb_memory_read_data_T_31 :
    _io_wb_memory_read_data_T_29; // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 66:92]
  wire [31:0] _io_wb_memory_read_data_T_39 = _io_wb_memory_read_data_T_22 ? _io_wb_memory_read_data_T_33 :
    _io_wb_memory_read_data_T_37; // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 66:92]
  wire [31:0] _io_wb_memory_read_data_T_41 = _io_wb_memory_read_data_T_24 ? _io_wb_memory_read_data_T_35 :
    _io_wb_memory_read_data_T_39; // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 66:92]
  wire  _io_wb_memory_read_data_T_43 = ~mem_address_index[1]; // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 77:32]
  wire [15:0] _io_wb_memory_read_data_T_45 = io_memory_bundle_read_data[15] ? 16'hffff : 16'h0; // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 78:19]
  wire [31:0] _io_wb_memory_read_data_T_47 = {_io_wb_memory_read_data_T_45,io_memory_bundle_read_data[15:0]}; // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 78:14]
  wire [15:0] _io_wb_memory_read_data_T_49 = io_memory_bundle_read_data[31] ? 16'hffff : 16'h0; // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 79:19]
  wire [31:0] _io_wb_memory_read_data_T_51 = {_io_wb_memory_read_data_T_49,io_memory_bundle_read_data[31:16]}; // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 79:14]
  wire [31:0] _io_wb_memory_read_data_T_52 = _io_wb_memory_read_data_T_43 ? _io_wb_memory_read_data_T_47 :
    _io_wb_memory_read_data_T_51; // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 76:36]
  wire [31:0] _io_wb_memory_read_data_T_56 = {16'h0,io_memory_bundle_read_data[15:0]}; // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 85:14]
  wire [31:0] _io_wb_memory_read_data_T_58 = {16'h0,io_memory_bundle_read_data[31:16]}; // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 86:14]
  wire [31:0] _io_wb_memory_read_data_T_59 = _io_wb_memory_read_data_T_43 ? _io_wb_memory_read_data_T_56 :
    _io_wb_memory_read_data_T_58; // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 83:37]
  wire [31:0] _io_wb_memory_read_data_T_61 = 3'h0 == io_funct3 ? _io_wb_memory_read_data_T_25 : 32'h0; // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 49:56]
  wire [31:0] _io_wb_memory_read_data_T_63 = 3'h4 == io_funct3 ? _io_wb_memory_read_data_T_41 :
    _io_wb_memory_read_data_T_61; // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 49:56]
  wire [31:0] _io_wb_memory_read_data_T_65 = 3'h1 == io_funct3 ? _io_wb_memory_read_data_T_52 :
    _io_wb_memory_read_data_T_63; // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 49:56]
  wire [31:0] _io_wb_memory_read_data_T_67 = 3'h5 == io_funct3 ? _io_wb_memory_read_data_T_59 :
    _io_wb_memory_read_data_T_65; // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 49:56]
  wire [31:0] _io_wb_memory_read_data_T_69 = 3'h2 == io_funct3 ? io_memory_bundle_read_data :
    _io_wb_memory_read_data_T_67; // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 49:56]
  wire  _GEN_0 = 2'h0 == mem_address_index; // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 105:{56,56} 99:38]
  wire [4:0] _io_memory_bundle_write_data_T_1 = {mem_address_index, 3'h0}; // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 107:101]
  wire [38:0] _GEN_36 = {{31'd0}, io_reg2_data[7:0]}; // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 107:79]
  wire [38:0] _io_memory_bundle_write_data_T_2 = _GEN_36 << _io_memory_bundle_write_data_T_1; // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 107:79]
  wire [31:0] _io_memory_bundle_write_data_T_5 = {io_reg2_data[15:0], 16'h0}; // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 132:11]
  wire [31:0] _GEN_6 = _io_wb_memory_read_data_T_43 ? {{16'd0}, io_reg2_data[15:0]} : _io_memory_bundle_write_data_T_5; // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 111:42 118:37 129:37]
  wire  _GEN_7 = _io_wb_memory_read_data_T_43 ? 1'h0 : 1'h1; // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 111:42 99:38 126:44]
  wire  _T_4 = io_funct3 == 3'h2; // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 135:26]
  wire  _GEN_13 = io_funct3 == 3'h1 ? _io_wb_memory_read_data_T_43 : _T_4; // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 109:52]
  wire [31:0] _GEN_15 = io_funct3 == 3'h1 ? _GEN_6 : io_reg2_data; // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 109:52 97:38]
  wire  _GEN_16 = io_funct3 == 3'h1 ? _GEN_7 : _T_4; // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 109:52]
  wire  _GEN_18 = io_funct3 == 3'h0 ? _GEN_0 : _GEN_13; // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 101:46]
  wire  _GEN_19 = io_funct3 == 3'h0 ? _io_wb_memory_read_data_T_20 : _GEN_13; // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 101:46]
  wire  _GEN_20 = io_funct3 == 3'h0 ? _io_wb_memory_read_data_T_22 : _GEN_16; // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 101:46]
  wire  _GEN_21 = io_funct3 == 3'h0 ? _io_wb_memory_read_data_T_24 : _GEN_16; // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 101:46]
  wire [38:0] _GEN_22 = io_funct3 == 3'h0 ? _io_memory_bundle_write_data_T_2 : {{7'd0}, _GEN_15}; // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 101:46 107:35]
  wire [38:0] _GEN_23 = io_memory_write_enable ? _GEN_22 : 39'h0; // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 28:33 96:38]
  wire  _GEN_25 = io_memory_write_enable & _GEN_18; // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 30:33 96:38]
  wire  _GEN_26 = io_memory_write_enable & _GEN_19; // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 30:33 96:38]
  wire  _GEN_27 = io_memory_write_enable & _GEN_20; // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 30:33 96:38]
  wire  _GEN_28 = io_memory_write_enable & _GEN_21; // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 30:33 96:38]
  wire [38:0] _GEN_30 = io_memory_read_enable ? 39'h0 : _GEN_23; // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 36:31 28:33]
  assign io_wb_memory_read_data = io_memory_read_enable ? _io_wb_memory_read_data_T_69 : 32'h0; // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 36:31 49:28 31:33]
  assign io_memory_bundle_address = io_alu_result; // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 29:33]
  assign io_memory_bundle_write_data = _GEN_30[31:0];
  assign io_memory_bundle_write_enable = io_memory_read_enable ? 1'h0 : io_memory_write_enable; // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 36:31 27:33]
  assign io_memory_bundle_write_strobe_0 = io_memory_read_enable ? 1'h0 : _GEN_25; // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 36:31 30:33]
  assign io_memory_bundle_write_strobe_1 = io_memory_read_enable ? 1'h0 : _GEN_26; // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 36:31 30:33]
  assign io_memory_bundle_write_strobe_2 = io_memory_read_enable ? 1'h0 : _GEN_27; // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 36:31 30:33]
  assign io_memory_bundle_write_strobe_3 = io_memory_read_enable ? 1'h0 : _GEN_28; // @[2-mmio-trap/src/main/scala/riscv/core/MemoryAccess.scala 36:31 30:33]
endmodule
module WriteBack(
  input  [31:0] io_instruction_address, // @[2-mmio-trap/src/main/scala/riscv/core/WriteBack.scala 23:14]
  input  [31:0] io_alu_result, // @[2-mmio-trap/src/main/scala/riscv/core/WriteBack.scala 23:14]
  input  [31:0] io_memory_read_data, // @[2-mmio-trap/src/main/scala/riscv/core/WriteBack.scala 23:14]
  input  [31:0] io_csr_read_data, // @[2-mmio-trap/src/main/scala/riscv/core/WriteBack.scala 23:14]
  input  [1:0]  io_regs_write_source, // @[2-mmio-trap/src/main/scala/riscv/core/WriteBack.scala 23:14]
  output [31:0] io_regs_write_data // @[2-mmio-trap/src/main/scala/riscv/core/WriteBack.scala 23:14]
);
  wire [31:0] _io_regs_write_data_T_1 = io_instruction_address + 32'h4; // @[2-mmio-trap/src/main/scala/riscv/core/WriteBack.scala 62:72]
  wire [31:0] _io_regs_write_data_T_3 = 2'h1 == io_regs_write_source ? io_memory_read_data : io_alu_result; // @[2-mmio-trap/src/main/scala/riscv/core/WriteBack.scala 55:71]
  wire [31:0] _io_regs_write_data_T_5 = 2'h2 == io_regs_write_source ? io_csr_read_data : _io_regs_write_data_T_3; // @[2-mmio-trap/src/main/scala/riscv/core/WriteBack.scala 55:71]
  assign io_regs_write_data = 2'h3 == io_regs_write_source ? _io_regs_write_data_T_1 : _io_regs_write_data_T_5; // @[2-mmio-trap/src/main/scala/riscv/core/WriteBack.scala 55:71]
endmodule
module CSR(
  input         clock,
  input         reset,
  input  [11:0] io_reg_read_address_id, // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 92:14]
  input         io_reg_write_enable_id, // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 92:14]
  input  [11:0] io_reg_write_address_id, // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 92:14]
  input  [31:0] io_reg_write_data_ex, // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 92:14]
  input  [11:0] io_debug_reg_read_address, // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 92:14]
  output [31:0] io_debug_reg_read_data, // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 92:14]
  output [31:0] io_reg_read_data, // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 92:14]
  output [31:0] io_clint_access_bundle_mstatus, // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 92:14]
  output [31:0] io_clint_access_bundle_mepc, // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 92:14]
  output [31:0] io_clint_access_bundle_mcause, // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 92:14]
  output [31:0] io_clint_access_bundle_mtvec, // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 92:14]
  output [31:0] io_clint_access_bundle_mie, // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 92:14]
  input  [31:0] io_clint_access_bundle_mstatus_write_data, // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 92:14]
  input  [31:0] io_clint_access_bundle_mepc_write_data, // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 92:14]
  input  [31:0] io_clint_access_bundle_mcause_write_data, // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 92:14]
  input         io_clint_access_bundle_direct_write_enable // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 92:14]
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [63:0] _RAND_6;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] mstatus; // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 105:25]
  reg [31:0] mie; // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 106:25]
  reg [31:0] mtvec; // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 107:25]
  reg [31:0] mscratch; // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 108:25]
  reg [31:0] mepc; // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 109:25]
  reg [31:0] mcause; // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 110:25]
  reg [63:0] cycles; // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 111:25]
  wire [63:0] _cycles_T_1 = cycles + 64'h1; // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 141:20]
  wire [31:0] _io_reg_read_data_T_1 = 12'h300 == io_reg_read_address_id ? mstatus : 32'h0; // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 145:67]
  wire [31:0] _io_reg_read_data_T_3 = 12'h304 == io_reg_read_address_id ? mie : _io_reg_read_data_T_1; // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 145:67]
  wire [31:0] _io_reg_read_data_T_5 = 12'h305 == io_reg_read_address_id ? mtvec : _io_reg_read_data_T_3; // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 145:67]
  wire [31:0] _io_reg_read_data_T_7 = 12'h340 == io_reg_read_address_id ? mscratch : _io_reg_read_data_T_5; // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 145:67]
  wire [31:0] _io_reg_read_data_T_9 = 12'h341 == io_reg_read_address_id ? mepc : _io_reg_read_data_T_7; // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 145:67]
  wire [31:0] _io_reg_read_data_T_11 = 12'h342 == io_reg_read_address_id ? mcause : _io_reg_read_data_T_9; // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 145:67]
  wire [31:0] _io_reg_read_data_T_13 = 12'hc00 == io_reg_read_address_id ? cycles[31:0] : _io_reg_read_data_T_11; // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 145:67]
  wire [31:0] _io_debug_reg_read_data_T_1 = 12'h300 == io_debug_reg_read_address ? mstatus : 32'h0; // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 146:70]
  wire [31:0] _io_debug_reg_read_data_T_3 = 12'h304 == io_debug_reg_read_address ? mie : _io_debug_reg_read_data_T_1; // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 146:70]
  wire [31:0] _io_debug_reg_read_data_T_5 = 12'h305 == io_debug_reg_read_address ? mtvec : _io_debug_reg_read_data_T_3; // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 146:70]
  wire [31:0] _io_debug_reg_read_data_T_7 = 12'h340 == io_debug_reg_read_address ? mscratch :
    _io_debug_reg_read_data_T_5; // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 146:70]
  wire [31:0] _io_debug_reg_read_data_T_9 = 12'h341 == io_debug_reg_read_address ? mepc : _io_debug_reg_read_data_T_7; // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 146:70]
  wire [31:0] _io_debug_reg_read_data_T_11 = 12'h342 == io_debug_reg_read_address ? mcause : _io_debug_reg_read_data_T_9
    ; // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 146:70]
  wire [31:0] _io_debug_reg_read_data_T_13 = 12'hc00 == io_debug_reg_read_address ? cycles[31:0] :
    _io_debug_reg_read_data_T_11; // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 146:70]
  wire [31:0] _GEN_0 = io_reg_write_address_id == 12'h342 ? io_reg_write_data_ex : mcause; // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 181:64 182:14 110:25]
  wire [31:0] _GEN_1 = io_reg_write_address_id == 12'h341 ? io_reg_write_data_ex : mepc; // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 179:62 180:12 109:25]
  wire [31:0] _GEN_2 = io_reg_write_address_id == 12'h341 ? mcause : _GEN_0; // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 110:25 179:62]
  wire [31:0] _GEN_12 = io_reg_write_address_id == 12'h340 ? io_reg_write_data_ex : mscratch; // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 196:66 197:16 108:25]
  assign io_debug_reg_read_data = 12'hc80 == io_debug_reg_read_address ? cycles[63:32] : _io_debug_reg_read_data_T_13; // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 146:70]
  assign io_reg_read_data = 12'hc80 == io_reg_read_address_id ? cycles[63:32] : _io_reg_read_data_T_13; // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 145:67]
  assign io_clint_access_bundle_mstatus = mstatus; // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 149:34]
  assign io_clint_access_bundle_mepc = mepc; // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 152:34]
  assign io_clint_access_bundle_mcause = mcause; // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 151:34]
  assign io_clint_access_bundle_mtvec = mtvec; // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 150:34]
  assign io_clint_access_bundle_mie = mie; // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 153:34]
  always @(posedge clock) begin
    if (reset) begin // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 105:25]
      mstatus <= 32'h0; // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 105:25]
    end else if (io_clint_access_bundle_direct_write_enable) begin // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 168:52]
      mstatus <= io_clint_access_bundle_mstatus_write_data; // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 171:13]
    end else if (io_reg_write_enable_id) begin // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 174:38]
      if (io_reg_write_address_id == 12'h300) begin // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 177:59]
        mstatus <= io_reg_write_data_ex; // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 178:15]
      end
    end
    if (reset) begin // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 106:25]
      mie <= 32'h0; // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 106:25]
    end else if (io_reg_write_enable_id) begin // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 190:32]
      if (io_reg_write_address_id == 12'h304) begin // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 192:55]
        mie <= io_reg_write_data_ex; // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 193:11]
      end
    end
    if (reset) begin // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 107:25]
      mtvec <= 32'h0; // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 107:25]
    end else if (io_reg_write_enable_id) begin // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 190:32]
      if (!(io_reg_write_address_id == 12'h304)) begin // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 192:55]
        if (io_reg_write_address_id == 12'h305) begin // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 194:63]
          mtvec <= io_reg_write_data_ex; // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 195:13]
        end
      end
    end
    if (reset) begin // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 108:25]
      mscratch <= 32'h0; // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 108:25]
    end else if (io_reg_write_enable_id) begin // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 190:32]
      if (!(io_reg_write_address_id == 12'h304)) begin // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 192:55]
        if (!(io_reg_write_address_id == 12'h305)) begin // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 194:63]
          mscratch <= _GEN_12;
        end
      end
    end
    if (reset) begin // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 109:25]
      mepc <= 32'h0; // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 109:25]
    end else if (io_clint_access_bundle_direct_write_enable) begin // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 168:52]
      mepc <= io_clint_access_bundle_mepc_write_data; // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 172:13]
    end else if (io_reg_write_enable_id) begin // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 174:38]
      if (!(io_reg_write_address_id == 12'h300)) begin // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 177:59]
        mepc <= _GEN_1;
      end
    end
    if (reset) begin // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 110:25]
      mcause <= 32'h0; // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 110:25]
    end else if (io_clint_access_bundle_direct_write_enable) begin // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 168:52]
      mcause <= io_clint_access_bundle_mcause_write_data; // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 173:13]
    end else if (io_reg_write_enable_id) begin // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 174:38]
      if (!(io_reg_write_address_id == 12'h300)) begin // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 177:59]
        mcause <= _GEN_2;
      end
    end
    if (reset) begin // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 111:25]
      cycles <= 64'h0; // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 111:25]
    end else begin
      cycles <= _cycles_T_1; // @[2-mmio-trap/src/main/scala/riscv/core/CSR.scala 141:10]
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  mstatus = _RAND_0[31:0];
  _RAND_1 = {1{`RANDOM}};
  mie = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  mtvec = _RAND_2[31:0];
  _RAND_3 = {1{`RANDOM}};
  mscratch = _RAND_3[31:0];
  _RAND_4 = {1{`RANDOM}};
  mepc = _RAND_4[31:0];
  _RAND_5 = {1{`RANDOM}};
  mcause = _RAND_5[31:0];
  _RAND_6 = {2{`RANDOM}};
  cycles = _RAND_6[63:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module CLINT(
  input  [31:0] io_interrupt_flag, // @[2-mmio-trap/src/main/scala/riscv/core/CLINT.scala 67:14]
  input  [31:0] io_instruction, // @[2-mmio-trap/src/main/scala/riscv/core/CLINT.scala 67:14]
  input  [31:0] io_instruction_address, // @[2-mmio-trap/src/main/scala/riscv/core/CLINT.scala 67:14]
  input         io_jump_flag, // @[2-mmio-trap/src/main/scala/riscv/core/CLINT.scala 67:14]
  input  [31:0] io_jump_address, // @[2-mmio-trap/src/main/scala/riscv/core/CLINT.scala 67:14]
  output [31:0] io_interrupt_handler_address, // @[2-mmio-trap/src/main/scala/riscv/core/CLINT.scala 67:14]
  output        io_interrupt_assert, // @[2-mmio-trap/src/main/scala/riscv/core/CLINT.scala 67:14]
  input  [31:0] io_csr_bundle_mstatus, // @[2-mmio-trap/src/main/scala/riscv/core/CLINT.scala 67:14]
  input  [31:0] io_csr_bundle_mepc, // @[2-mmio-trap/src/main/scala/riscv/core/CLINT.scala 67:14]
  input  [31:0] io_csr_bundle_mcause, // @[2-mmio-trap/src/main/scala/riscv/core/CLINT.scala 67:14]
  input  [31:0] io_csr_bundle_mtvec, // @[2-mmio-trap/src/main/scala/riscv/core/CLINT.scala 67:14]
  input  [31:0] io_csr_bundle_mie, // @[2-mmio-trap/src/main/scala/riscv/core/CLINT.scala 67:14]
  output [31:0] io_csr_bundle_mstatus_write_data, // @[2-mmio-trap/src/main/scala/riscv/core/CLINT.scala 67:14]
  output [31:0] io_csr_bundle_mepc_write_data, // @[2-mmio-trap/src/main/scala/riscv/core/CLINT.scala 67:14]
  output [31:0] io_csr_bundle_mcause_write_data, // @[2-mmio-trap/src/main/scala/riscv/core/CLINT.scala 67:14]
  output        io_csr_bundle_direct_write_enable // @[2-mmio-trap/src/main/scala/riscv/core/CLINT.scala 67:14]
);
  wire  interrupt_enable_global = io_csr_bundle_mstatus[3]; // @[2-mmio-trap/src/main/scala/riscv/core/CLINT.scala 82:56]
  wire  interrupt_enable_timer = io_csr_bundle_mie[7]; // @[2-mmio-trap/src/main/scala/riscv/core/CLINT.scala 83:52]
  wire  interrupt_enable_external = io_csr_bundle_mie[11]; // @[2-mmio-trap/src/main/scala/riscv/core/CLINT.scala 84:52]
  wire [31:0] _instruction_address_T_1 = io_instruction_address + 32'h4; // @[2-mmio-trap/src/main/scala/riscv/core/CLINT.scala 89:28]
  wire [31:0] instruction_address = io_jump_flag ? io_jump_address : _instruction_address_T_1; // @[2-mmio-trap/src/main/scala/riscv/core/CLINT.scala 86:32]
  wire  mpie = io_csr_bundle_mstatus[7]; // @[2-mmio-trap/src/main/scala/riscv/core/CLINT.scala 91:35]
  wire  _interrupt_source_enabled_T = io_interrupt_flag == 32'h1; // @[2-mmio-trap/src/main/scala/riscv/core/CLINT.scala 117:23]
  wire  interrupt_source_enabled = _interrupt_source_enabled_T ? interrupt_enable_timer : interrupt_enable_external; // @[2-mmio-trap/src/main/scala/riscv/core/CLINT.scala 116:37]
  wire [31:0] _io_csr_bundle_mstatus_write_data_T_4 = {io_csr_bundle_mstatus[31:13],2'h3,io_csr_bundle_mstatus[10:8],
    interrupt_enable_global,io_csr_bundle_mstatus[6:4],1'h0,io_csr_bundle_mstatus[2:0]}; // @[2-mmio-trap/src/main/scala/riscv/core/CLINT.scala 133:10]
  wire [30:0] _io_csr_bundle_mcause_write_data_T_1 = 32'h1 == io_interrupt_flag ? 31'h7 : 31'hb; // @[2-mmio-trap/src/main/scala/riscv/core/CLINT.scala 149:10]
  wire [31:0] _io_csr_bundle_mcause_write_data_T_2 = {1'h1,_io_csr_bundle_mcause_write_data_T_1}; // @[2-mmio-trap/src/main/scala/riscv/core/CLINT.scala 144:10]
  wire [30:0] _io_csr_bundle_mcause_write_data_T_4 = 32'h100073 == io_instruction ? 31'h3 : 31'h0; // @[2-mmio-trap/src/main/scala/riscv/core/CLINT.scala 172:37]
  wire [30:0] _io_csr_bundle_mcause_write_data_T_6 = 32'h73 == io_instruction ? 31'hb :
    _io_csr_bundle_mcause_write_data_T_4; // @[2-mmio-trap/src/main/scala/riscv/core/CLINT.scala 172:37]
  wire [31:0] _io_csr_bundle_mcause_write_data_T_7 = {1'h0,_io_csr_bundle_mcause_write_data_T_6}; // @[2-mmio-trap/src/main/scala/riscv/core/CLINT.scala 170:43]
  wire  _T_6 = io_instruction == 32'h30200073; // @[2-mmio-trap/src/main/scala/riscv/core/CLINT.scala 197:29]
  wire [31:0] _io_csr_bundle_mstatus_write_data_T_14 = {io_csr_bundle_mstatus[31:13],2'h3,io_csr_bundle_mstatus[10:8],1'h1
    ,io_csr_bundle_mstatus[6:4],mpie,io_csr_bundle_mstatus[2:0]}; // @[2-mmio-trap/src/main/scala/riscv/core/CLINT.scala 208:10]
  wire [31:0] _GEN_1 = io_instruction == 32'h30200073 ? io_csr_bundle_mepc : io_csr_bundle_mtvec; // @[2-mmio-trap/src/main/scala/riscv/core/CLINT.scala 197:55 199:34 222:39]
  wire [31:0] _GEN_2 = io_instruction == 32'h30200073 ? _io_csr_bundle_mstatus_write_data_T_14 : io_csr_bundle_mstatus; // @[2-mmio-trap/src/main/scala/riscv/core/CLINT.scala 197:55 207:38 223:39]
  wire  _GEN_5 = io_instruction == 32'h100073 | io_instruction == 32'h73 | _T_6; // @[2-mmio-trap/src/main/scala/riscv/core/CLINT.scala 156:101 157:34]
  wire [31:0] _GEN_6 = io_instruction == 32'h100073 | io_instruction == 32'h73 ? io_csr_bundle_mtvec : _GEN_1; // @[2-mmio-trap/src/main/scala/riscv/core/CLINT.scala 156:101 158:34]
  wire [31:0] _GEN_7 = io_instruction == 32'h100073 | io_instruction == 32'h73 ? _io_csr_bundle_mstatus_write_data_T_4
     : _GEN_2; // @[2-mmio-trap/src/main/scala/riscv/core/CLINT.scala 156:101 159:38]
  wire [31:0] _GEN_8 = io_instruction == 32'h100073 | io_instruction == 32'h73 ? instruction_address :
    io_csr_bundle_mepc; // @[2-mmio-trap/src/main/scala/riscv/core/CLINT.scala 156:101 169:35]
  wire [31:0] _GEN_9 = io_instruction == 32'h100073 | io_instruction == 32'h73 ? _io_csr_bundle_mcause_write_data_T_7 :
    io_csr_bundle_mcause; // @[2-mmio-trap/src/main/scala/riscv/core/CLINT.scala 156:101 170:37]
  assign io_interrupt_handler_address = io_interrupt_flag != 32'h0 & interrupt_enable_global & interrupt_source_enabled
     ? io_csr_bundle_mtvec : _GEN_6; // @[2-mmio-trap/src/main/scala/riscv/core/CLINT.scala 122:105 124:34]
  assign io_interrupt_assert = io_interrupt_flag != 32'h0 & interrupt_enable_global & interrupt_source_enabled | _GEN_5; // @[2-mmio-trap/src/main/scala/riscv/core/CLINT.scala 122:105 123:34]
  assign io_csr_bundle_mstatus_write_data = io_interrupt_flag != 32'h0 & interrupt_enable_global &
    interrupt_source_enabled ? _io_csr_bundle_mstatus_write_data_T_4 : _GEN_7; // @[2-mmio-trap/src/main/scala/riscv/core/CLINT.scala 122:105 132:38]
  assign io_csr_bundle_mepc_write_data = io_interrupt_flag != 32'h0 & interrupt_enable_global & interrupt_source_enabled
     ? instruction_address : _GEN_8; // @[2-mmio-trap/src/main/scala/riscv/core/CLINT.scala 122:105 142:35]
  assign io_csr_bundle_mcause_write_data = io_interrupt_flag != 32'h0 & interrupt_enable_global &
    interrupt_source_enabled ? _io_csr_bundle_mcause_write_data_T_2 : _GEN_9; // @[2-mmio-trap/src/main/scala/riscv/core/CLINT.scala 122:105 143:37]
  assign io_csr_bundle_direct_write_enable = io_interrupt_flag != 32'h0 & interrupt_enable_global &
    interrupt_source_enabled | _GEN_5; // @[2-mmio-trap/src/main/scala/riscv/core/CLINT.scala 122:105 123:34]
endmodule
module CPU(
  input         clock,
  input         reset,
  output [31:0] io_instruction_address, // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 58:14]
  input  [31:0] io_instruction, // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 58:14]
  input         io_instruction_valid, // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 58:14]
  input  [31:0] io_interrupt_flag, // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 58:14]
  output [31:0] io_memory_bundle_address, // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 58:14]
  output [31:0] io_memory_bundle_write_data, // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 58:14]
  output        io_memory_bundle_write_enable, // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 58:14]
  output        io_memory_bundle_write_strobe_0, // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 58:14]
  output        io_memory_bundle_write_strobe_1, // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 58:14]
  output        io_memory_bundle_write_strobe_2, // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 58:14]
  output        io_memory_bundle_write_strobe_3, // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 58:14]
  input  [31:0] io_memory_bundle_read_data, // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 58:14]
  output [2:0]  io_deviceSelect, // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 58:14]
  input  [4:0]  io_regs_debug_read_address, // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 58:14]
  output [31:0] io_regs_debug_read_data, // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 58:14]
  input  [11:0] io_csr_regs_debug_read_address, // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 58:14]
  output [31:0] io_csr_regs_debug_read_data // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 58:14]
);
  wire  regs_clock; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 61:26]
  wire  regs_reset; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 61:26]
  wire  regs_io_write_enable; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 61:26]
  wire [4:0] regs_io_write_address; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 61:26]
  wire [31:0] regs_io_write_data; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 61:26]
  wire [4:0] regs_io_read_address1; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 61:26]
  wire [4:0] regs_io_read_address2; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 61:26]
  wire [31:0] regs_io_read_data1; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 61:26]
  wire [31:0] regs_io_read_data2; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 61:26]
  wire [4:0] regs_io_debug_read_address; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 61:26]
  wire [31:0] regs_io_debug_read_data; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 61:26]
  wire  inst_fetch_clock; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 62:26]
  wire  inst_fetch_reset; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 62:26]
  wire  inst_fetch_io_jump_flag_id; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 62:26]
  wire [31:0] inst_fetch_io_jump_address_id; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 62:26]
  wire  inst_fetch_io_interrupt_assert; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 62:26]
  wire [31:0] inst_fetch_io_interrupt_handler_address; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 62:26]
  wire [31:0] inst_fetch_io_instruction_read_data; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 62:26]
  wire  inst_fetch_io_instruction_valid; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 62:26]
  wire [31:0] inst_fetch_io_instruction_address; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 62:26]
  wire [31:0] inst_fetch_io_instruction; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 62:26]
  wire [31:0] id_io_instruction; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 63:26]
  wire [4:0] id_io_regs_reg1_read_address; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 63:26]
  wire [4:0] id_io_regs_reg2_read_address; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 63:26]
  wire [31:0] id_io_ex_immediate; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 63:26]
  wire  id_io_ex_aluop1_source; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 63:26]
  wire  id_io_ex_aluop2_source; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 63:26]
  wire  id_io_memory_read_enable; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 63:26]
  wire  id_io_memory_write_enable; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 63:26]
  wire [1:0] id_io_wb_reg_write_source; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 63:26]
  wire  id_io_reg_write_enable; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 63:26]
  wire [4:0] id_io_reg_write_address; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 63:26]
  wire [11:0] id_io_csr_reg_address; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 63:26]
  wire  id_io_csr_reg_write_enable; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 63:26]
  wire [31:0] ex_io_instruction; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 64:26]
  wire [31:0] ex_io_instruction_address; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 64:26]
  wire [31:0] ex_io_reg1_data; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 64:26]
  wire [31:0] ex_io_reg2_data; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 64:26]
  wire [31:0] ex_io_immediate; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 64:26]
  wire  ex_io_aluop1_source; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 64:26]
  wire  ex_io_aluop2_source; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 64:26]
  wire [31:0] ex_io_csr_reg_read_data; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 64:26]
  wire [31:0] ex_io_mem_alu_result; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 64:26]
  wire [31:0] ex_io_csr_reg_write_data; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 64:26]
  wire  ex_io_if_jump_flag; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 64:26]
  wire [31:0] ex_io_if_jump_address; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 64:26]
  wire [31:0] mem_io_alu_result; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 65:26]
  wire [31:0] mem_io_reg2_data; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 65:26]
  wire  mem_io_memory_read_enable; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 65:26]
  wire  mem_io_memory_write_enable; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 65:26]
  wire [2:0] mem_io_funct3; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 65:26]
  wire [31:0] mem_io_wb_memory_read_data; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 65:26]
  wire [31:0] mem_io_memory_bundle_address; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 65:26]
  wire [31:0] mem_io_memory_bundle_write_data; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 65:26]
  wire  mem_io_memory_bundle_write_enable; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 65:26]
  wire  mem_io_memory_bundle_write_strobe_0; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 65:26]
  wire  mem_io_memory_bundle_write_strobe_1; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 65:26]
  wire  mem_io_memory_bundle_write_strobe_2; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 65:26]
  wire  mem_io_memory_bundle_write_strobe_3; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 65:26]
  wire [31:0] mem_io_memory_bundle_read_data; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 65:26]
  wire [31:0] wb_io_instruction_address; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 66:26]
  wire [31:0] wb_io_alu_result; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 66:26]
  wire [31:0] wb_io_memory_read_data; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 66:26]
  wire [31:0] wb_io_csr_read_data; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 66:26]
  wire [1:0] wb_io_regs_write_source; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 66:26]
  wire [31:0] wb_io_regs_write_data; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 66:26]
  wire  csr_regs_clock; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 69:24]
  wire  csr_regs_reset; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 69:24]
  wire [11:0] csr_regs_io_reg_read_address_id; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 69:24]
  wire  csr_regs_io_reg_write_enable_id; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 69:24]
  wire [11:0] csr_regs_io_reg_write_address_id; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 69:24]
  wire [31:0] csr_regs_io_reg_write_data_ex; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 69:24]
  wire [11:0] csr_regs_io_debug_reg_read_address; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 69:24]
  wire [31:0] csr_regs_io_debug_reg_read_data; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 69:24]
  wire [31:0] csr_regs_io_reg_read_data; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 69:24]
  wire [31:0] csr_regs_io_clint_access_bundle_mstatus; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 69:24]
  wire [31:0] csr_regs_io_clint_access_bundle_mepc; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 69:24]
  wire [31:0] csr_regs_io_clint_access_bundle_mcause; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 69:24]
  wire [31:0] csr_regs_io_clint_access_bundle_mtvec; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 69:24]
  wire [31:0] csr_regs_io_clint_access_bundle_mie; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 69:24]
  wire [31:0] csr_regs_io_clint_access_bundle_mstatus_write_data; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 69:24]
  wire [31:0] csr_regs_io_clint_access_bundle_mepc_write_data; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 69:24]
  wire [31:0] csr_regs_io_clint_access_bundle_mcause_write_data; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 69:24]
  wire  csr_regs_io_clint_access_bundle_direct_write_enable; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 69:24]
  wire [31:0] clint_io_interrupt_flag; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 70:24]
  wire [31:0] clint_io_instruction; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 70:24]
  wire [31:0] clint_io_instruction_address; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 70:24]
  wire  clint_io_jump_flag; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 70:24]
  wire [31:0] clint_io_jump_address; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 70:24]
  wire [31:0] clint_io_interrupt_handler_address; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 70:24]
  wire  clint_io_interrupt_assert; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 70:24]
  wire [31:0] clint_io_csr_bundle_mstatus; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 70:24]
  wire [31:0] clint_io_csr_bundle_mepc; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 70:24]
  wire [31:0] clint_io_csr_bundle_mcause; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 70:24]
  wire [31:0] clint_io_csr_bundle_mtvec; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 70:24]
  wire [31:0] clint_io_csr_bundle_mie; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 70:24]
  wire [31:0] clint_io_csr_bundle_mstatus_write_data; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 70:24]
  wire [31:0] clint_io_csr_bundle_mepc_write_data; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 70:24]
  wire [31:0] clint_io_csr_bundle_mcause_write_data; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 70:24]
  wire  clint_io_csr_bundle_direct_write_enable; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 70:24]
  RegisterFile regs ( // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 61:26]
    .clock(regs_clock),
    .reset(regs_reset),
    .io_write_enable(regs_io_write_enable),
    .io_write_address(regs_io_write_address),
    .io_write_data(regs_io_write_data),
    .io_read_address1(regs_io_read_address1),
    .io_read_address2(regs_io_read_address2),
    .io_read_data1(regs_io_read_data1),
    .io_read_data2(regs_io_read_data2),
    .io_debug_read_address(regs_io_debug_read_address),
    .io_debug_read_data(regs_io_debug_read_data)
  );
  InstructionFetch inst_fetch ( // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 62:26]
    .clock(inst_fetch_clock),
    .reset(inst_fetch_reset),
    .io_jump_flag_id(inst_fetch_io_jump_flag_id),
    .io_jump_address_id(inst_fetch_io_jump_address_id),
    .io_interrupt_assert(inst_fetch_io_interrupt_assert),
    .io_interrupt_handler_address(inst_fetch_io_interrupt_handler_address),
    .io_instruction_read_data(inst_fetch_io_instruction_read_data),
    .io_instruction_valid(inst_fetch_io_instruction_valid),
    .io_instruction_address(inst_fetch_io_instruction_address),
    .io_instruction(inst_fetch_io_instruction)
  );
  InstructionDecode id ( // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 63:26]
    .io_instruction(id_io_instruction),
    .io_regs_reg1_read_address(id_io_regs_reg1_read_address),
    .io_regs_reg2_read_address(id_io_regs_reg2_read_address),
    .io_ex_immediate(id_io_ex_immediate),
    .io_ex_aluop1_source(id_io_ex_aluop1_source),
    .io_ex_aluop2_source(id_io_ex_aluop2_source),
    .io_memory_read_enable(id_io_memory_read_enable),
    .io_memory_write_enable(id_io_memory_write_enable),
    .io_wb_reg_write_source(id_io_wb_reg_write_source),
    .io_reg_write_enable(id_io_reg_write_enable),
    .io_reg_write_address(id_io_reg_write_address),
    .io_csr_reg_address(id_io_csr_reg_address),
    .io_csr_reg_write_enable(id_io_csr_reg_write_enable)
  );
  Execute ex ( // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 64:26]
    .io_instruction(ex_io_instruction),
    .io_instruction_address(ex_io_instruction_address),
    .io_reg1_data(ex_io_reg1_data),
    .io_reg2_data(ex_io_reg2_data),
    .io_immediate(ex_io_immediate),
    .io_aluop1_source(ex_io_aluop1_source),
    .io_aluop2_source(ex_io_aluop2_source),
    .io_csr_reg_read_data(ex_io_csr_reg_read_data),
    .io_mem_alu_result(ex_io_mem_alu_result),
    .io_csr_reg_write_data(ex_io_csr_reg_write_data),
    .io_if_jump_flag(ex_io_if_jump_flag),
    .io_if_jump_address(ex_io_if_jump_address)
  );
  MemoryAccess mem ( // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 65:26]
    .io_alu_result(mem_io_alu_result),
    .io_reg2_data(mem_io_reg2_data),
    .io_memory_read_enable(mem_io_memory_read_enable),
    .io_memory_write_enable(mem_io_memory_write_enable),
    .io_funct3(mem_io_funct3),
    .io_wb_memory_read_data(mem_io_wb_memory_read_data),
    .io_memory_bundle_address(mem_io_memory_bundle_address),
    .io_memory_bundle_write_data(mem_io_memory_bundle_write_data),
    .io_memory_bundle_write_enable(mem_io_memory_bundle_write_enable),
    .io_memory_bundle_write_strobe_0(mem_io_memory_bundle_write_strobe_0),
    .io_memory_bundle_write_strobe_1(mem_io_memory_bundle_write_strobe_1),
    .io_memory_bundle_write_strobe_2(mem_io_memory_bundle_write_strobe_2),
    .io_memory_bundle_write_strobe_3(mem_io_memory_bundle_write_strobe_3),
    .io_memory_bundle_read_data(mem_io_memory_bundle_read_data)
  );
  WriteBack wb ( // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 66:26]
    .io_instruction_address(wb_io_instruction_address),
    .io_alu_result(wb_io_alu_result),
    .io_memory_read_data(wb_io_memory_read_data),
    .io_csr_read_data(wb_io_csr_read_data),
    .io_regs_write_source(wb_io_regs_write_source),
    .io_regs_write_data(wb_io_regs_write_data)
  );
  CSR csr_regs ( // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 69:24]
    .clock(csr_regs_clock),
    .reset(csr_regs_reset),
    .io_reg_read_address_id(csr_regs_io_reg_read_address_id),
    .io_reg_write_enable_id(csr_regs_io_reg_write_enable_id),
    .io_reg_write_address_id(csr_regs_io_reg_write_address_id),
    .io_reg_write_data_ex(csr_regs_io_reg_write_data_ex),
    .io_debug_reg_read_address(csr_regs_io_debug_reg_read_address),
    .io_debug_reg_read_data(csr_regs_io_debug_reg_read_data),
    .io_reg_read_data(csr_regs_io_reg_read_data),
    .io_clint_access_bundle_mstatus(csr_regs_io_clint_access_bundle_mstatus),
    .io_clint_access_bundle_mepc(csr_regs_io_clint_access_bundle_mepc),
    .io_clint_access_bundle_mcause(csr_regs_io_clint_access_bundle_mcause),
    .io_clint_access_bundle_mtvec(csr_regs_io_clint_access_bundle_mtvec),
    .io_clint_access_bundle_mie(csr_regs_io_clint_access_bundle_mie),
    .io_clint_access_bundle_mstatus_write_data(csr_regs_io_clint_access_bundle_mstatus_write_data),
    .io_clint_access_bundle_mepc_write_data(csr_regs_io_clint_access_bundle_mepc_write_data),
    .io_clint_access_bundle_mcause_write_data(csr_regs_io_clint_access_bundle_mcause_write_data),
    .io_clint_access_bundle_direct_write_enable(csr_regs_io_clint_access_bundle_direct_write_enable)
  );
  CLINT clint ( // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 70:24]
    .io_interrupt_flag(clint_io_interrupt_flag),
    .io_instruction(clint_io_instruction),
    .io_instruction_address(clint_io_instruction_address),
    .io_jump_flag(clint_io_jump_flag),
    .io_jump_address(clint_io_jump_address),
    .io_interrupt_handler_address(clint_io_interrupt_handler_address),
    .io_interrupt_assert(clint_io_interrupt_assert),
    .io_csr_bundle_mstatus(clint_io_csr_bundle_mstatus),
    .io_csr_bundle_mepc(clint_io_csr_bundle_mepc),
    .io_csr_bundle_mcause(clint_io_csr_bundle_mcause),
    .io_csr_bundle_mtvec(clint_io_csr_bundle_mtvec),
    .io_csr_bundle_mie(clint_io_csr_bundle_mie),
    .io_csr_bundle_mstatus_write_data(clint_io_csr_bundle_mstatus_write_data),
    .io_csr_bundle_mepc_write_data(clint_io_csr_bundle_mepc_write_data),
    .io_csr_bundle_mcause_write_data(clint_io_csr_bundle_mcause_write_data),
    .io_csr_bundle_direct_write_enable(clint_io_csr_bundle_direct_write_enable)
  );
  assign io_instruction_address = inst_fetch_io_instruction_address; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 86:43]
  assign io_memory_bundle_address = {3'h0,mem_io_memory_bundle_address[28:0]}; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 117:34]
  assign io_memory_bundle_write_data = mem_io_memory_bundle_write_data; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 122:33]
  assign io_memory_bundle_write_enable = mem_io_memory_bundle_write_enable; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 121:33]
  assign io_memory_bundle_write_strobe_0 = mem_io_memory_bundle_write_strobe_0; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 123:33]
  assign io_memory_bundle_write_strobe_1 = mem_io_memory_bundle_write_strobe_1; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 123:33]
  assign io_memory_bundle_write_strobe_2 = mem_io_memory_bundle_write_strobe_2; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 123:33]
  assign io_memory_bundle_write_strobe_3 = mem_io_memory_bundle_write_strobe_3; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 123:33]
  assign io_deviceSelect = mem_io_memory_bundle_address[31:29]; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 78:13]
  assign io_regs_debug_read_data = regs_io_debug_read_data; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 72:38]
  assign io_csr_regs_debug_read_data = csr_regs_io_debug_reg_read_data; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 73:38]
  assign regs_clock = clock;
  assign regs_reset = reset;
  assign regs_io_write_enable = id_io_reg_write_enable; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 88:25]
  assign regs_io_write_address = id_io_reg_write_address; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 89:25]
  assign regs_io_write_data = wb_io_regs_write_data; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 90:25]
  assign regs_io_read_address1 = id_io_regs_reg1_read_address; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 91:25]
  assign regs_io_read_address2 = id_io_regs_reg2_read_address; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 92:25]
  assign regs_io_debug_read_address = io_regs_debug_read_address; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 74:38]
  assign inst_fetch_clock = clock;
  assign inst_fetch_reset = reset;
  assign inst_fetch_io_jump_flag_id = ex_io_if_jump_flag; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 81:43]
  assign inst_fetch_io_jump_address_id = ex_io_if_jump_address; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 80:43]
  assign inst_fetch_io_interrupt_assert = clint_io_interrupt_assert; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 82:43]
  assign inst_fetch_io_interrupt_handler_address = clint_io_interrupt_handler_address; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 83:43]
  assign inst_fetch_io_instruction_read_data = io_instruction; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 85:43]
  assign inst_fetch_io_instruction_valid = io_instruction_valid; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 84:43]
  assign id_io_instruction = inst_fetch_io_instruction; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 94:21]
  assign ex_io_instruction = inst_fetch_io_instruction; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 102:29]
  assign ex_io_instruction_address = inst_fetch_io_instruction_address; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 103:29]
  assign ex_io_reg1_data = regs_io_read_data1; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 104:29]
  assign ex_io_reg2_data = regs_io_read_data2; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 105:29]
  assign ex_io_immediate = id_io_ex_immediate; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 106:29]
  assign ex_io_aluop1_source = id_io_ex_aluop1_source; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 107:29]
  assign ex_io_aluop2_source = id_io_ex_aluop2_source; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 108:29]
  assign ex_io_csr_reg_read_data = csr_regs_io_reg_read_data; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 109:29]
  assign mem_io_alu_result = ex_io_mem_alu_result; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 111:30]
  assign mem_io_reg2_data = regs_io_read_data2; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 112:30]
  assign mem_io_memory_read_enable = id_io_memory_read_enable; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 113:30]
  assign mem_io_memory_write_enable = id_io_memory_write_enable; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 114:30]
  assign mem_io_funct3 = inst_fetch_io_instruction[14:12]; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 115:58]
  assign mem_io_memory_bundle_read_data = io_memory_bundle_read_data; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 124:34]
  assign wb_io_instruction_address = inst_fetch_io_instruction_address; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 126:29]
  assign wb_io_alu_result = ex_io_mem_alu_result; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 127:29]
  assign wb_io_memory_read_data = mem_io_wb_memory_read_data; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 128:29]
  assign wb_io_csr_read_data = csr_regs_io_reg_read_data; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 130:29]
  assign wb_io_regs_write_source = id_io_wb_reg_write_source; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 129:29]
  assign csr_regs_clock = clock;
  assign csr_regs_reset = reset;
  assign csr_regs_io_reg_read_address_id = id_io_csr_reg_address; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 97:36]
  assign csr_regs_io_reg_write_enable_id = id_io_csr_reg_write_enable; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 100:36]
  assign csr_regs_io_reg_write_address_id = id_io_csr_reg_address; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 99:36]
  assign csr_regs_io_reg_write_data_ex = ex_io_csr_reg_write_data; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 98:36]
  assign csr_regs_io_debug_reg_read_address = io_csr_regs_debug_read_address; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 75:38]
  assign csr_regs_io_clint_access_bundle_mstatus_write_data = clint_io_csr_bundle_mstatus_write_data; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 96:35]
  assign csr_regs_io_clint_access_bundle_mepc_write_data = clint_io_csr_bundle_mepc_write_data; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 96:35]
  assign csr_regs_io_clint_access_bundle_mcause_write_data = clint_io_csr_bundle_mcause_write_data; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 96:35]
  assign csr_regs_io_clint_access_bundle_direct_write_enable = clint_io_csr_bundle_direct_write_enable; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 96:35]
  assign clint_io_interrupt_flag = io_interrupt_flag; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 134:32]
  assign clint_io_instruction = inst_fetch_io_instruction; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 132:32]
  assign clint_io_instruction_address = inst_fetch_io_instruction_address; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 133:32]
  assign clint_io_jump_flag = ex_io_if_jump_flag; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 135:32]
  assign clint_io_jump_address = ex_io_if_jump_address; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 136:32]
  assign clint_io_csr_bundle_mstatus = csr_regs_io_clint_access_bundle_mstatus; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 96:35]
  assign clint_io_csr_bundle_mepc = csr_regs_io_clint_access_bundle_mepc; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 96:35]
  assign clint_io_csr_bundle_mcause = csr_regs_io_clint_access_bundle_mcause; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 96:35]
  assign clint_io_csr_bundle_mtvec = csr_regs_io_clint_access_bundle_mtvec; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 96:35]
  assign clint_io_csr_bundle_mie = csr_regs_io_clint_access_bundle_mie; // @[2-mmio-trap/src/main/scala/riscv/core/CPU.scala 96:35]
endmodule
module VGA(
  input         clock,
  input         reset,
  input  [31:0] io_bundle_address, // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 35:14]
  input  [31:0] io_bundle_write_data, // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 35:14]
  input         io_bundle_write_enable, // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 35:14]
  output [31:0] io_bundle_read_data, // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 35:14]
  input         io_pixClock, // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 35:14]
  output        io_hsync, // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 35:14]
  output        io_vsync, // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 35:14]
  output [5:0]  io_rrggbb, // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 35:14]
  output        io_activevideo, // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 35:14]
  output [9:0]  io_x_pos, // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 35:14]
  output [9:0]  io_y_pos // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 35:14]
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_11;
  reg [31:0] _RAND_12;
  reg [31:0] _RAND_13;
  reg [31:0] _RAND_14;
  reg [31:0] _RAND_15;
  reg [31:0] _RAND_16;
  reg [31:0] _RAND_17;
  reg [31:0] _RAND_18;
  reg [31:0] _RAND_19;
  reg [31:0] _RAND_20;
  reg [31:0] _RAND_21;
  reg [31:0] _RAND_22;
  reg [31:0] _RAND_23;
  reg [31:0] _RAND_24;
  reg [31:0] _RAND_25;
  reg [31:0] _RAND_26;
  reg [31:0] _RAND_27;
  reg [31:0] _RAND_28;
  reg [31:0] _RAND_29;
  reg [31:0] _RAND_30;
  reg [31:0] _RAND_31;
  reg [31:0] _RAND_32;
  reg [31:0] _RAND_33;
  reg [31:0] _RAND_34;
  reg [31:0] _RAND_35;
  reg [31:0] _RAND_36;
  reg [31:0] _RAND_37;
  reg [31:0] _RAND_38;
  reg [31:0] _RAND_39;
  reg [31:0] _RAND_40;
  reg [31:0] _RAND_41;
  reg [31:0] _RAND_42;
  reg [31:0] _RAND_43;
  reg [31:0] _RAND_44;
  reg [31:0] _RAND_45;
  reg [31:0] _RAND_46;
  reg [31:0] _RAND_47;
  reg [31:0] _RAND_48;
  reg [31:0] _RAND_49;
  reg [31:0] _RAND_50;
  reg [31:0] _RAND_51;
  reg [31:0] _RAND_52;
  reg [31:0] _RAND_53;
  reg [31:0] _RAND_54;
  reg [31:0] _RAND_55;
  reg [31:0] _RAND_56;
  reg [31:0] _RAND_57;
  reg [31:0] _RAND_58;
  reg [31:0] _RAND_59;
  reg [31:0] _RAND_60;
  reg [31:0] _RAND_61;
  reg [31:0] _RAND_62;
  reg [31:0] _RAND_63;
  reg [31:0] _RAND_64;
  reg [31:0] _RAND_65;
  reg [31:0] _RAND_66;
  reg [31:0] _RAND_67;
  reg [31:0] _RAND_68;
  reg [31:0] _RAND_69;
  reg [31:0] _RAND_70;
  reg [31:0] _RAND_71;
  reg [31:0] _RAND_72;
  reg [31:0] _RAND_73;
  reg [31:0] _RAND_74;
  reg [31:0] _RAND_75;
  reg [31:0] _RAND_76;
  reg [31:0] _RAND_77;
`endif // RANDOMIZE_REG_INIT
  wire  framebuffer_clka; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 80:27]
  wire  framebuffer_wea; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 80:27]
  wire [12:0] framebuffer_addra; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 80:27]
  wire [31:0] framebuffer_dina; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 80:27]
  wire  framebuffer_clkb; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 80:27]
  wire [12:0] framebuffer_addrb; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 80:27]
  wire [31:0] framebuffer_doutb; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 80:27]
  reg [31:0] ctrlReg; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 86:30]
  reg [31:0] intrStatusReg; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 87:30]
  reg [31:0] uploadAddrReg; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 88:30]
  reg [5:0] paletteReg_0; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 91:23]
  reg [5:0] paletteReg_1; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 91:23]
  reg [5:0] paletteReg_2; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 91:23]
  reg [5:0] paletteReg_3; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 91:23]
  reg [5:0] paletteReg_4; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 91:23]
  reg [5:0] paletteReg_5; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 91:23]
  reg [5:0] paletteReg_6; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 91:23]
  reg [5:0] paletteReg_7; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 91:23]
  reg [5:0] paletteReg_8; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 91:23]
  reg [5:0] paletteReg_9; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 91:23]
  reg [5:0] paletteReg_10; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 91:23]
  reg [5:0] paletteReg_11; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 91:23]
  reg [5:0] paletteReg_12; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 91:23]
  reg [5:0] paletteReg_13; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 91:23]
  reg [5:0] paletteReg_14; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 91:23]
  reg [5:0] paletteReg_15; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 91:23]
  wire [3:0] ctrl_frame_sel = ctrlReg[7:4]; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 97:31]
  wire  ctrl_vblank_ie = ctrlReg[8]; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 98:31]
  wire [15:0] upload_pix_addr = uploadAddrReg[15:0]; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 107:40]
  wire [3:0] upload_frame = uploadAddrReg[19:16]; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 108:40]
  wire [31:0] addr = io_bundle_address & 32'hff; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 111:46]
  wire  addr_ctrl = addr == 32'h4; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 113:33]
  wire  addr_intr_status = addr == 32'hc; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 115:33]
  wire  addr_upload_addr = addr == 32'h10; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 116:33]
  wire  addr_stream_data = addr == 32'h14; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 117:33]
  wire  addr_palette = addr >= 32'h20 & addr < 32'h60; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 118:45]
  wire [31:0] _palette_idx_T_1 = addr - 32'h20; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 119:34]
  wire [29:0] palette_idx = _palette_idx_T_1[31:2]; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 119:44]
  reg  vblank_sync1; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 122:36]
  reg  vblank_synced; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 123:36]
  reg [3:0] curr_frame_sync1; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 124:36]
  reg [3:0] curr_frame_synced; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 125:36]
  reg  vblank_prev; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 134:37]
  wire  vblank_rising_edge = vblank_synced & ~vblank_prev; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 135:44]
  wire [31:0] _GEN_0 = vblank_rising_edge & ctrl_vblank_ie ? 32'h1 : intrStatusReg; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 137:48 138:21 87:30]
  wire [32:0] _io_bundle_read_data_T = {24'h0,curr_frame_synced,2'h0,1'h0,vblank_synced,vblank_synced}; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 148:22]
  wire [30:0] _io_bundle_read_data_T_2 = 32'h0 == addr ? 31'h56474131 : 31'h0; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 144:48]
  wire [31:0] _io_bundle_read_data_T_4 = 32'h4 == addr ? ctrlReg : {{1'd0}, _io_bundle_read_data_T_2}; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 144:48]
  wire [32:0] _io_bundle_read_data_T_6 = 32'h8 == addr ? _io_bundle_read_data_T : {{1'd0}, _io_bundle_read_data_T_4}; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 144:48]
  wire [32:0] _io_bundle_read_data_T_8 = 32'hc == addr ? {{1'd0}, intrStatusReg} : _io_bundle_read_data_T_6; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 144:48]
  wire [32:0] _io_bundle_read_data_T_10 = 32'h10 == addr ? {{1'd0}, uploadAddrReg} : _io_bundle_read_data_T_8; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 144:48]
  wire [32:0] _io_bundle_read_data_T_12 = 32'h20 == addr ? {{27'd0}, paletteReg_0} : _io_bundle_read_data_T_10; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 144:48]
  wire [32:0] _io_bundle_read_data_T_14 = 32'h24 == addr ? {{27'd0}, paletteReg_1} : _io_bundle_read_data_T_12; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 144:48]
  wire [32:0] _io_bundle_read_data_T_16 = 32'h28 == addr ? {{27'd0}, paletteReg_2} : _io_bundle_read_data_T_14; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 144:48]
  wire [32:0] _io_bundle_read_data_T_18 = 32'h2c == addr ? {{27'd0}, paletteReg_3} : _io_bundle_read_data_T_16; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 144:48]
  wire [32:0] _io_bundle_read_data_T_20 = 32'h30 == addr ? {{27'd0}, paletteReg_4} : _io_bundle_read_data_T_18; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 144:48]
  wire [32:0] _io_bundle_read_data_T_22 = 32'h34 == addr ? {{27'd0}, paletteReg_5} : _io_bundle_read_data_T_20; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 144:48]
  wire [32:0] _io_bundle_read_data_T_24 = 32'h38 == addr ? {{27'd0}, paletteReg_6} : _io_bundle_read_data_T_22; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 144:48]
  wire [32:0] _io_bundle_read_data_T_26 = 32'h3c == addr ? {{27'd0}, paletteReg_7} : _io_bundle_read_data_T_24; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 144:48]
  wire [32:0] _io_bundle_read_data_T_28 = 32'h40 == addr ? {{27'd0}, paletteReg_8} : _io_bundle_read_data_T_26; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 144:48]
  wire [32:0] _io_bundle_read_data_T_30 = 32'h44 == addr ? {{27'd0}, paletteReg_9} : _io_bundle_read_data_T_28; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 144:48]
  wire [32:0] _io_bundle_read_data_T_32 = 32'h48 == addr ? {{27'd0}, paletteReg_10} : _io_bundle_read_data_T_30; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 144:48]
  wire [32:0] _io_bundle_read_data_T_34 = 32'h4c == addr ? {{27'd0}, paletteReg_11} : _io_bundle_read_data_T_32; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 144:48]
  wire [32:0] _io_bundle_read_data_T_36 = 32'h50 == addr ? {{27'd0}, paletteReg_12} : _io_bundle_read_data_T_34; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 144:48]
  wire [32:0] _io_bundle_read_data_T_38 = 32'h54 == addr ? {{27'd0}, paletteReg_13} : _io_bundle_read_data_T_36; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 144:48]
  wire [32:0] _io_bundle_read_data_T_40 = 32'h58 == addr ? {{27'd0}, paletteReg_14} : _io_bundle_read_data_T_38; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 144:48]
  wire [32:0] _io_bundle_read_data_T_42 = 32'h5c == addr ? {{27'd0}, paletteReg_15} : _io_bundle_read_data_T_40; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 144:48]
  wire [3:0] requested_frame = io_bundle_write_data[7:4]; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 174:51]
  wire  display_enable = io_bundle_write_data[0]; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 175:51]
  wire [31:0] _ctrlReg_T_3 = {ctrlReg[31:8],ctrl_frame_sel,3'h0,display_enable}; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 180:25]
  wire [31:0] _intrStatusReg_T = ~io_bundle_write_data; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 184:42]
  wire [31:0] _intrStatusReg_T_1 = intrStatusReg & _intrStatusReg_T; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 184:40]
  wire [12:0] word_offset = upload_pix_addr[15:3]; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 191:51]
  wire [13:0] frame_base = upload_frame * 10'h200; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 192:46]
  wire [13:0] _GEN_160 = {{1'd0}, word_offset}; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 193:44]
  wire [13:0] fb_addr = frame_base + _GEN_160; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 193:44]
  wire [15:0] next_addr = upload_pix_addr + 16'h8; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 201:44]
  wire [15:0] wrapped_addr = next_addr >= 16'h1000 ? 16'h0 : next_addr; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 202:31]
  wire [19:0] _uploadAddrReg_T = {upload_frame,wrapped_addr}; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 203:29]
  wire [5:0] _GEN_2 = 4'h0 == palette_idx[3:0] ? io_bundle_write_data[5:0] : paletteReg_0; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 205:{33,33} 91:23]
  wire [5:0] _GEN_3 = 4'h1 == palette_idx[3:0] ? io_bundle_write_data[5:0] : paletteReg_1; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 205:{33,33} 91:23]
  wire [5:0] _GEN_4 = 4'h2 == palette_idx[3:0] ? io_bundle_write_data[5:0] : paletteReg_2; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 205:{33,33} 91:23]
  wire [5:0] _GEN_5 = 4'h3 == palette_idx[3:0] ? io_bundle_write_data[5:0] : paletteReg_3; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 205:{33,33} 91:23]
  wire [5:0] _GEN_6 = 4'h4 == palette_idx[3:0] ? io_bundle_write_data[5:0] : paletteReg_4; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 205:{33,33} 91:23]
  wire [5:0] _GEN_7 = 4'h5 == palette_idx[3:0] ? io_bundle_write_data[5:0] : paletteReg_5; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 205:{33,33} 91:23]
  wire [5:0] _GEN_8 = 4'h6 == palette_idx[3:0] ? io_bundle_write_data[5:0] : paletteReg_6; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 205:{33,33} 91:23]
  wire [5:0] _GEN_9 = 4'h7 == palette_idx[3:0] ? io_bundle_write_data[5:0] : paletteReg_7; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 205:{33,33} 91:23]
  wire [5:0] _GEN_10 = 4'h8 == palette_idx[3:0] ? io_bundle_write_data[5:0] : paletteReg_8; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 205:{33,33} 91:23]
  wire [5:0] _GEN_11 = 4'h9 == palette_idx[3:0] ? io_bundle_write_data[5:0] : paletteReg_9; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 205:{33,33} 91:23]
  wire [5:0] _GEN_12 = 4'ha == palette_idx[3:0] ? io_bundle_write_data[5:0] : paletteReg_10; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 205:{33,33} 91:23]
  wire [5:0] _GEN_13 = 4'hb == palette_idx[3:0] ? io_bundle_write_data[5:0] : paletteReg_11; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 205:{33,33} 91:23]
  wire [5:0] _GEN_14 = 4'hc == palette_idx[3:0] ? io_bundle_write_data[5:0] : paletteReg_12; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 205:{33,33} 91:23]
  wire [5:0] _GEN_15 = 4'hd == palette_idx[3:0] ? io_bundle_write_data[5:0] : paletteReg_13; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 205:{33,33} 91:23]
  wire [5:0] _GEN_16 = 4'he == palette_idx[3:0] ? io_bundle_write_data[5:0] : paletteReg_14; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 205:{33,33} 91:23]
  wire [5:0] _GEN_17 = 4'hf == palette_idx[3:0] ? io_bundle_write_data[5:0] : paletteReg_15; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 205:{33,33} 91:23]
  wire [5:0] _GEN_18 = addr_palette ? _GEN_2 : paletteReg_0; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 204:32 91:23]
  wire [5:0] _GEN_19 = addr_palette ? _GEN_3 : paletteReg_1; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 204:32 91:23]
  wire [5:0] _GEN_20 = addr_palette ? _GEN_4 : paletteReg_2; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 204:32 91:23]
  wire [5:0] _GEN_21 = addr_palette ? _GEN_5 : paletteReg_3; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 204:32 91:23]
  wire [5:0] _GEN_22 = addr_palette ? _GEN_6 : paletteReg_4; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 204:32 91:23]
  wire [5:0] _GEN_23 = addr_palette ? _GEN_7 : paletteReg_5; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 204:32 91:23]
  wire [5:0] _GEN_24 = addr_palette ? _GEN_8 : paletteReg_6; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 204:32 91:23]
  wire [5:0] _GEN_25 = addr_palette ? _GEN_9 : paletteReg_7; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 204:32 91:23]
  wire [5:0] _GEN_26 = addr_palette ? _GEN_10 : paletteReg_8; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 204:32 91:23]
  wire [5:0] _GEN_27 = addr_palette ? _GEN_11 : paletteReg_9; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 204:32 91:23]
  wire [5:0] _GEN_28 = addr_palette ? _GEN_12 : paletteReg_10; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 204:32 91:23]
  wire [5:0] _GEN_29 = addr_palette ? _GEN_13 : paletteReg_11; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 204:32 91:23]
  wire [5:0] _GEN_30 = addr_palette ? _GEN_14 : paletteReg_12; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 204:32 91:23]
  wire [5:0] _GEN_31 = addr_palette ? _GEN_15 : paletteReg_13; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 204:32 91:23]
  wire [5:0] _GEN_32 = addr_palette ? _GEN_16 : paletteReg_14; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 204:32 91:23]
  wire [5:0] _GEN_33 = addr_palette ? _GEN_17 : paletteReg_15; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 204:32 91:23]
  wire [13:0] _GEN_35 = addr_stream_data ? fb_addr : 14'h0; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 187:36 197:23 166:36]
  wire [31:0] _GEN_36 = addr_stream_data ? io_bundle_write_data : 32'h0; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 187:36 198:23 167:36]
  wire [31:0] _GEN_37 = addr_stream_data ? {{12'd0}, _uploadAddrReg_T} : uploadAddrReg; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 187:36 203:23 88:30]
  wire [5:0] _GEN_38 = addr_stream_data ? paletteReg_0 : _GEN_18; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 187:36 91:23]
  wire [5:0] _GEN_39 = addr_stream_data ? paletteReg_1 : _GEN_19; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 187:36 91:23]
  wire [5:0] _GEN_40 = addr_stream_data ? paletteReg_2 : _GEN_20; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 187:36 91:23]
  wire [5:0] _GEN_41 = addr_stream_data ? paletteReg_3 : _GEN_21; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 187:36 91:23]
  wire [5:0] _GEN_42 = addr_stream_data ? paletteReg_4 : _GEN_22; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 187:36 91:23]
  wire [5:0] _GEN_43 = addr_stream_data ? paletteReg_5 : _GEN_23; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 187:36 91:23]
  wire [5:0] _GEN_44 = addr_stream_data ? paletteReg_6 : _GEN_24; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 187:36 91:23]
  wire [5:0] _GEN_45 = addr_stream_data ? paletteReg_7 : _GEN_25; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 187:36 91:23]
  wire [5:0] _GEN_46 = addr_stream_data ? paletteReg_8 : _GEN_26; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 187:36 91:23]
  wire [5:0] _GEN_47 = addr_stream_data ? paletteReg_9 : _GEN_27; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 187:36 91:23]
  wire [5:0] _GEN_48 = addr_stream_data ? paletteReg_10 : _GEN_28; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 187:36 91:23]
  wire [5:0] _GEN_49 = addr_stream_data ? paletteReg_11 : _GEN_29; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 187:36 91:23]
  wire [5:0] _GEN_50 = addr_stream_data ? paletteReg_12 : _GEN_30; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 187:36 91:23]
  wire [5:0] _GEN_51 = addr_stream_data ? paletteReg_13 : _GEN_31; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 187:36 91:23]
  wire [5:0] _GEN_52 = addr_stream_data ? paletteReg_14 : _GEN_32; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 187:36 91:23]
  wire [5:0] _GEN_53 = addr_stream_data ? paletteReg_15 : _GEN_33; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 187:36 91:23]
  wire [31:0] _GEN_54 = addr_upload_addr ? io_bundle_write_data : _GEN_37; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 185:36 186:23]
  wire  _GEN_55 = addr_upload_addr ? 1'h0 : addr_stream_data; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 165:36 185:36]
  wire [13:0] _GEN_56 = addr_upload_addr ? 14'h0 : _GEN_35; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 166:36 185:36]
  wire [31:0] _GEN_57 = addr_upload_addr ? 32'h0 : _GEN_36; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 167:36 185:36]
  wire  _GEN_76 = addr_intr_status ? 1'h0 : _GEN_55; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 165:36 182:36]
  wire [13:0] _GEN_77 = addr_intr_status ? 14'h0 : _GEN_56; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 166:36 182:36]
  wire [31:0] _GEN_78 = addr_intr_status ? 32'h0 : _GEN_57; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 167:36 182:36]
  wire  _GEN_98 = addr_ctrl ? 1'h0 : _GEN_76; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 171:23 165:36]
  wire [13:0] _GEN_99 = addr_ctrl ? 14'h0 : _GEN_77; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 171:23 166:36]
  wire [31:0] _GEN_100 = addr_ctrl ? 32'h0 : _GEN_78; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 171:23 167:36]
  wire [13:0] _GEN_121 = io_bundle_write_enable ? _GEN_99 : 14'h0; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 170:34 166:36]
  reg [9:0] h_count; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 218:26]
  reg [9:0] v_count; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 219:26]
  wire [9:0] _v_count_T_1 = v_count + 10'h1; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 228:28]
  wire [9:0] _h_count_T_1 = h_count + 10'h1; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 231:26]
  wire  h_sync_pulse = h_count >= 10'h298 & h_count < 10'h2c0; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 236:57]
  wire  v_sync_pulse = v_count >= 10'h1e9 & v_count < 10'h1ec; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 237:57]
  reg  hsync_d1; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 238:31]
  reg  vsync_d1; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 239:31]
  reg  io_hsync_REG; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 240:24]
  reg  io_vsync_REG; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 241:24]
  reg [9:0] x_px; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 250:23]
  reg [9:0] y_px; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 251:23]
  wire  _in_display_x_T = x_px >= 10'h80; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 254:30]
  wire  in_display_x = x_px >= 10'h80 & x_px < 10'h200; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 254:48]
  wire  _in_display_y_T = y_px >= 10'h30; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 255:30]
  wire  in_display_y = y_px >= 10'h30 & y_px < 10'h1b0; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 255:47]
  wire [9:0] _rel_x_T_2 = x_px - 10'h80; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 260:49]
  wire [9:0] rel_x = _in_display_x_T ? _rel_x_T_2 : 10'h0; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 260:20]
  wire [9:0] _rel_y_T_2 = y_px - 10'h30; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 261:48]
  wire [9:0] rel_y = _in_display_y_T ? _rel_y_T_2 : 10'h0; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 261:20]
  wire [23:0] frame_x_mult = rel_x * 14'h2aab; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 268:30]
  wire [7:0] frame_x_div = frame_x_mult[23:16]; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 269:36]
  wire [23:0] frame_y_mult = rel_y * 14'h2aab; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 270:30]
  wire [7:0] frame_y_div = frame_y_mult[23:16]; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 271:36]
  wire [5:0] frame_x = frame_x_div >= 8'h40 ? 6'h3f : frame_x_div[5:0]; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 274:22]
  wire [5:0] frame_y = frame_y_div >= 8'h40 ? 6'h3f : frame_y_div[5:0]; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 275:22]
  reg [3:0] curr_frame_sync1_1; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 279:35]
  reg [3:0] curr_frame; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 280:35]
  reg  display_enabled_sync1; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 282:40]
  reg  display_enabled; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 283:40]
  reg  blanking_sync1; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 285:33]
  reg  blanking; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 286:33]
  reg [5:0] palette_sync1_0; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 290:32]
  reg [5:0] palette_sync1_1; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 290:32]
  reg [5:0] palette_sync1_2; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 290:32]
  reg [5:0] palette_sync1_3; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 290:32]
  reg [5:0] palette_sync1_4; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 290:32]
  reg [5:0] palette_sync1_5; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 290:32]
  reg [5:0] palette_sync1_6; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 290:32]
  reg [5:0] palette_sync1_7; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 290:32]
  reg [5:0] palette_sync1_8; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 290:32]
  reg [5:0] palette_sync1_9; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 290:32]
  reg [5:0] palette_sync1_10; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 290:32]
  reg [5:0] palette_sync1_11; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 290:32]
  reg [5:0] palette_sync1_12; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 290:32]
  reg [5:0] palette_sync1_13; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 290:32]
  reg [5:0] palette_sync1_14; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 290:32]
  reg [5:0] palette_sync1_15; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 290:32]
  reg [5:0] palette_sync_0; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 292:31]
  reg [5:0] palette_sync_1; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 292:31]
  reg [5:0] palette_sync_2; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 292:31]
  reg [5:0] palette_sync_3; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 292:31]
  reg [5:0] palette_sync_4; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 292:31]
  reg [5:0] palette_sync_5; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 292:31]
  reg [5:0] palette_sync_6; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 292:31]
  reg [5:0] palette_sync_7; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 292:31]
  reg [5:0] palette_sync_8; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 292:31]
  reg [5:0] palette_sync_9; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 292:31]
  reg [5:0] palette_sync_10; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 292:31]
  reg [5:0] palette_sync_11; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 292:31]
  reg [5:0] palette_sync_12; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 292:31]
  reg [5:0] palette_sync_13; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 292:31]
  reg [5:0] palette_sync_14; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 292:31]
  reg [5:0] palette_sync_15; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 292:31]
  reg  in_display_d1; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 299:37]
  reg  h_active_d1; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 307:30]
  reg  v_active_d1; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 308:30]
  reg  h_active_d2; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 309:30]
  reg  v_active_d2; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 310:30]
  wire [12:0] _pixel_idx_T = frame_y * 7'h40; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 314:33]
  wire [12:0] _GEN_161 = {{7'd0}, frame_x}; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 314:49]
  wire [12:0] pixel_idx = _pixel_idx_T + _GEN_161; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 314:49]
  wire [9:0] word_offset_1 = pixel_idx[12:3]; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 315:35]
  wire [13:0] frame_base_1 = curr_frame * 10'h200; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 317:36]
  wire [13:0] _GEN_162 = {{4'd0}, word_offset_1}; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 318:36]
  wire [13:0] fb_read_addr = frame_base_1 + _GEN_162; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 318:36]
  reg [2:0] pixel_in_word_d1; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 326:35]
  wire [3:0] _pixel_4bit_T_9 = 3'h0 == pixel_in_word_d1 ? framebuffer_doutb[3:0] : 4'h0; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 331:51]
  wire [3:0] _pixel_4bit_T_11 = 3'h1 == pixel_in_word_d1 ? framebuffer_doutb[7:4] : _pixel_4bit_T_9; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 331:51]
  wire [3:0] _pixel_4bit_T_13 = 3'h2 == pixel_in_word_d1 ? framebuffer_doutb[11:8] : _pixel_4bit_T_11; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 331:51]
  wire [3:0] _pixel_4bit_T_15 = 3'h3 == pixel_in_word_d1 ? framebuffer_doutb[15:12] : _pixel_4bit_T_13; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 331:51]
  wire [3:0] _pixel_4bit_T_17 = 3'h4 == pixel_in_word_d1 ? framebuffer_doutb[19:16] : _pixel_4bit_T_15; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 331:51]
  wire [3:0] _pixel_4bit_T_19 = 3'h5 == pixel_in_word_d1 ? framebuffer_doutb[23:20] : _pixel_4bit_T_17; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 331:51]
  wire [3:0] _pixel_4bit_T_21 = 3'h6 == pixel_in_word_d1 ? framebuffer_doutb[27:24] : _pixel_4bit_T_19; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 331:51]
  wire [3:0] pixel_4bit = 3'h7 == pixel_in_word_d1 ? framebuffer_doutb[31:28] : _pixel_4bit_T_21; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 331:51]
  wire [5:0] _GEN_143 = 4'h1 == pixel_4bit ? palette_sync_1 : palette_sync_0; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 351:{20,20}]
  wire [5:0] _GEN_144 = 4'h2 == pixel_4bit ? palette_sync_2 : _GEN_143; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 351:{20,20}]
  wire [5:0] _GEN_145 = 4'h3 == pixel_4bit ? palette_sync_3 : _GEN_144; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 351:{20,20}]
  wire [5:0] _GEN_146 = 4'h4 == pixel_4bit ? palette_sync_4 : _GEN_145; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 351:{20,20}]
  wire [5:0] _GEN_147 = 4'h5 == pixel_4bit ? palette_sync_5 : _GEN_146; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 351:{20,20}]
  wire [5:0] _GEN_148 = 4'h6 == pixel_4bit ? palette_sync_6 : _GEN_147; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 351:{20,20}]
  wire [5:0] _GEN_149 = 4'h7 == pixel_4bit ? palette_sync_7 : _GEN_148; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 351:{20,20}]
  wire [5:0] _GEN_150 = 4'h8 == pixel_4bit ? palette_sync_8 : _GEN_149; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 351:{20,20}]
  wire [5:0] _GEN_151 = 4'h9 == pixel_4bit ? palette_sync_9 : _GEN_150; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 351:{20,20}]
  wire [5:0] _GEN_152 = 4'ha == pixel_4bit ? palette_sync_10 : _GEN_151; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 351:{20,20}]
  wire [5:0] _GEN_153 = 4'hb == pixel_4bit ? palette_sync_11 : _GEN_152; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 351:{20,20}]
  wire [5:0] _GEN_154 = 4'hc == pixel_4bit ? palette_sync_12 : _GEN_153; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 351:{20,20}]
  wire [5:0] _GEN_155 = 4'hd == pixel_4bit ? palette_sync_13 : _GEN_154; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 351:{20,20}]
  wire [5:0] _GEN_156 = 4'he == pixel_4bit ? palette_sync_14 : _GEN_155; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 351:{20,20}]
  wire [5:0] _GEN_157 = 4'hf == pixel_4bit ? palette_sync_15 : _GEN_156; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 351:{20,20}]
  wire [5:0] _GEN_158 = display_enabled & in_display_d1 ? _GEN_157 : 6'h1; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 350:50 351:20 353:20]
  wire [5:0] output_color = blanking ? 6'h0 : _GEN_158; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 348:20 349:20]
  reg [9:0] x_px_d1; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 364:26]
  reg [9:0] y_px_d1; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 365:26]
  TrueDualPortRAM32 #(.ADDR_WIDTH(13), .DEPTH(6144)) framebuffer ( // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 80:27]
    .clka(framebuffer_clka),
    .wea(framebuffer_wea),
    .addra(framebuffer_addra),
    .dina(framebuffer_dina),
    .clkb(framebuffer_clkb),
    .addrb(framebuffer_addrb),
    .doutb(framebuffer_doutb)
  );
  assign io_bundle_read_data = _io_bundle_read_data_T_42[31:0]; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 144:25]
  assign io_hsync = io_hsync_REG; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 240:14]
  assign io_vsync = io_vsync_REG; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 241:14]
  assign io_rrggbb = h_active_d2 & v_active_d2 ? output_color : 6'h0; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 357:21]
  assign io_activevideo = h_active_d2 & v_active_d2; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 360:35]
  assign io_x_pos = x_px_d1; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 366:14]
  assign io_y_pos = y_px_d1; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 367:14]
  assign framebuffer_clka = clock; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 162:25]
  assign framebuffer_wea = io_bundle_write_enable & _GEN_98; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 170:34 165:36]
  assign framebuffer_addra = _GEN_121[12:0]; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 166:36]
  assign framebuffer_dina = io_bundle_write_enable ? _GEN_100 : 32'h0; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 170:34 167:36]
  assign framebuffer_clkb = io_pixClock; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 321:26]
  assign framebuffer_addrb = fb_read_addr[12:0]; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 322:26]
  always @(posedge clock) begin
    if (reset) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 86:30]
      ctrlReg <= 32'h0; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 86:30]
    end else if (io_bundle_write_enable) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 170:34]
      if (addr_ctrl) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 171:23]
        if (requested_frame < 4'hc) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 176:38]
          ctrlReg <= io_bundle_write_data; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 177:19]
        end else begin
          ctrlReg <= _ctrlReg_T_3; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 180:19]
        end
      end
    end
    if (reset) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 87:30]
      intrStatusReg <= 32'h0; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 87:30]
    end else if (io_bundle_write_enable) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 170:34]
      if (addr_ctrl) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 171:23]
        intrStatusReg <= _GEN_0;
      end else if (addr_intr_status) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 182:36]
        intrStatusReg <= _intrStatusReg_T_1; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 184:23]
      end else begin
        intrStatusReg <= _GEN_0;
      end
    end else begin
      intrStatusReg <= _GEN_0;
    end
    if (reset) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 88:30]
      uploadAddrReg <= 32'h0; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 88:30]
    end else if (io_bundle_write_enable) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 170:34]
      if (!(addr_ctrl)) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 171:23]
        if (!(addr_intr_status)) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 182:36]
          uploadAddrReg <= _GEN_54;
        end
      end
    end
    if (io_bundle_write_enable) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 170:34]
      if (!(addr_ctrl)) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 171:23]
        if (!(addr_intr_status)) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 182:36]
          if (!(addr_upload_addr)) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 185:36]
            paletteReg_0 <= _GEN_38;
          end
        end
      end
    end
    if (io_bundle_write_enable) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 170:34]
      if (!(addr_ctrl)) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 171:23]
        if (!(addr_intr_status)) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 182:36]
          if (!(addr_upload_addr)) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 185:36]
            paletteReg_1 <= _GEN_39;
          end
        end
      end
    end
    if (io_bundle_write_enable) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 170:34]
      if (!(addr_ctrl)) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 171:23]
        if (!(addr_intr_status)) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 182:36]
          if (!(addr_upload_addr)) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 185:36]
            paletteReg_2 <= _GEN_40;
          end
        end
      end
    end
    if (io_bundle_write_enable) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 170:34]
      if (!(addr_ctrl)) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 171:23]
        if (!(addr_intr_status)) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 182:36]
          if (!(addr_upload_addr)) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 185:36]
            paletteReg_3 <= _GEN_41;
          end
        end
      end
    end
    if (io_bundle_write_enable) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 170:34]
      if (!(addr_ctrl)) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 171:23]
        if (!(addr_intr_status)) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 182:36]
          if (!(addr_upload_addr)) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 185:36]
            paletteReg_4 <= _GEN_42;
          end
        end
      end
    end
    if (io_bundle_write_enable) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 170:34]
      if (!(addr_ctrl)) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 171:23]
        if (!(addr_intr_status)) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 182:36]
          if (!(addr_upload_addr)) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 185:36]
            paletteReg_5 <= _GEN_43;
          end
        end
      end
    end
    if (io_bundle_write_enable) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 170:34]
      if (!(addr_ctrl)) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 171:23]
        if (!(addr_intr_status)) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 182:36]
          if (!(addr_upload_addr)) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 185:36]
            paletteReg_6 <= _GEN_44;
          end
        end
      end
    end
    if (io_bundle_write_enable) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 170:34]
      if (!(addr_ctrl)) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 171:23]
        if (!(addr_intr_status)) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 182:36]
          if (!(addr_upload_addr)) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 185:36]
            paletteReg_7 <= _GEN_45;
          end
        end
      end
    end
    if (io_bundle_write_enable) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 170:34]
      if (!(addr_ctrl)) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 171:23]
        if (!(addr_intr_status)) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 182:36]
          if (!(addr_upload_addr)) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 185:36]
            paletteReg_8 <= _GEN_46;
          end
        end
      end
    end
    if (io_bundle_write_enable) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 170:34]
      if (!(addr_ctrl)) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 171:23]
        if (!(addr_intr_status)) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 182:36]
          if (!(addr_upload_addr)) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 185:36]
            paletteReg_9 <= _GEN_47;
          end
        end
      end
    end
    if (io_bundle_write_enable) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 170:34]
      if (!(addr_ctrl)) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 171:23]
        if (!(addr_intr_status)) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 182:36]
          if (!(addr_upload_addr)) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 185:36]
            paletteReg_10 <= _GEN_48;
          end
        end
      end
    end
    if (io_bundle_write_enable) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 170:34]
      if (!(addr_ctrl)) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 171:23]
        if (!(addr_intr_status)) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 182:36]
          if (!(addr_upload_addr)) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 185:36]
            paletteReg_11 <= _GEN_49;
          end
        end
      end
    end
    if (io_bundle_write_enable) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 170:34]
      if (!(addr_ctrl)) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 171:23]
        if (!(addr_intr_status)) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 182:36]
          if (!(addr_upload_addr)) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 185:36]
            paletteReg_12 <= _GEN_50;
          end
        end
      end
    end
    if (io_bundle_write_enable) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 170:34]
      if (!(addr_ctrl)) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 171:23]
        if (!(addr_intr_status)) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 182:36]
          if (!(addr_upload_addr)) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 185:36]
            paletteReg_13 <= _GEN_51;
          end
        end
      end
    end
    if (io_bundle_write_enable) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 170:34]
      if (!(addr_ctrl)) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 171:23]
        if (!(addr_intr_status)) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 182:36]
          if (!(addr_upload_addr)) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 185:36]
            paletteReg_14 <= _GEN_52;
          end
        end
      end
    end
    if (io_bundle_write_enable) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 170:34]
      if (!(addr_ctrl)) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 171:23]
        if (!(addr_intr_status)) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 182:36]
          if (!(addr_upload_addr)) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 185:36]
            paletteReg_15 <= _GEN_53;
          end
        end
      end
    end
    vblank_sync1 <= v_count >= 10'h1e0; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 370:29]
    vblank_synced <= vblank_sync1; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 123:36]
    curr_frame_sync1 <= curr_frame; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 102:29 374:21]
    curr_frame_synced <= curr_frame_sync1; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 125:36]
    vblank_prev <= vblank_synced; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 134:37]
  end
  always @(posedge io_pixClock) begin
    if (reset) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 218:26]
      h_count <= 10'h0; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 218:26]
    end else if (h_count == 10'h33f) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 222:39]
      h_count <= 10'h0; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 223:15]
    end else begin
      h_count <= _h_count_T_1; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 231:15]
    end
    if (reset) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 219:26]
      v_count <= 10'h0; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 219:26]
    end else if (h_count == 10'h33f) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 222:39]
      if (v_count == 10'h207) begin // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 225:41]
        v_count <= 10'h0; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 226:17]
      end else begin
        v_count <= _v_count_T_1; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 228:17]
      end
    end
    hsync_d1 <= ~h_sync_pulse; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 238:32]
    vsync_d1 <= ~v_sync_pulse; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 239:32]
    io_hsync_REG <= hsync_d1; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 240:24]
    io_vsync_REG <= vsync_d1; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 241:24]
    x_px <= h_count; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 250:23]
    y_px <= v_count; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 251:23]
    curr_frame_sync1_1 <= ctrlReg[7:4]; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 97:31]
    curr_frame <= curr_frame_sync1_1; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 280:35]
    display_enabled_sync1 <= ctrlReg[0]; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 94:31]
    display_enabled <= display_enabled_sync1; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 283:40]
    blanking_sync1 <= ctrlReg[1]; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 95:31]
    blanking <= blanking_sync1; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 286:33]
    palette_sync1_0 <= paletteReg_0; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 290:32]
    palette_sync1_1 <= paletteReg_1; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 290:32]
    palette_sync1_2 <= paletteReg_2; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 290:32]
    palette_sync1_3 <= paletteReg_3; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 290:32]
    palette_sync1_4 <= paletteReg_4; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 290:32]
    palette_sync1_5 <= paletteReg_5; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 290:32]
    palette_sync1_6 <= paletteReg_6; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 290:32]
    palette_sync1_7 <= paletteReg_7; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 290:32]
    palette_sync1_8 <= paletteReg_8; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 290:32]
    palette_sync1_9 <= paletteReg_9; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 290:32]
    palette_sync1_10 <= paletteReg_10; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 290:32]
    palette_sync1_11 <= paletteReg_11; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 290:32]
    palette_sync1_12 <= paletteReg_12; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 290:32]
    palette_sync1_13 <= paletteReg_13; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 290:32]
    palette_sync1_14 <= paletteReg_14; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 290:32]
    palette_sync1_15 <= paletteReg_15; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 290:32]
    palette_sync_0 <= palette_sync1_0; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 292:31]
    palette_sync_1 <= palette_sync1_1; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 292:31]
    palette_sync_2 <= palette_sync1_2; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 292:31]
    palette_sync_3 <= palette_sync1_3; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 292:31]
    palette_sync_4 <= palette_sync1_4; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 292:31]
    palette_sync_5 <= palette_sync1_5; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 292:31]
    palette_sync_6 <= palette_sync1_6; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 292:31]
    palette_sync_7 <= palette_sync1_7; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 292:31]
    palette_sync_8 <= palette_sync1_8; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 292:31]
    palette_sync_9 <= palette_sync1_9; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 292:31]
    palette_sync_10 <= palette_sync1_10; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 292:31]
    palette_sync_11 <= palette_sync1_11; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 292:31]
    palette_sync_12 <= palette_sync1_12; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 292:31]
    palette_sync_13 <= palette_sync1_13; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 292:31]
    palette_sync_14 <= palette_sync1_14; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 292:31]
    palette_sync_15 <= palette_sync1_15; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 292:31]
    in_display_d1 <= in_display_x & in_display_y; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 256:37]
    h_active_d1 <= h_count < 10'h280; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 244:28]
    v_active_d1 <= v_count < 10'h1e0; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 245:28]
    h_active_d2 <= h_active_d1; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 309:30]
    v_active_d2 <= v_active_d1; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 310:30]
    pixel_in_word_d1 <= pixel_idx[2:0]; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 316:34]
    x_px_d1 <= x_px; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 364:26]
    y_px_d1 <= y_px; // @[2-mmio-trap/src/main/scala/peripheral/VGA.scala 365:26]
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  ctrlReg = _RAND_0[31:0];
  _RAND_1 = {1{`RANDOM}};
  intrStatusReg = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  uploadAddrReg = _RAND_2[31:0];
  _RAND_3 = {1{`RANDOM}};
  paletteReg_0 = _RAND_3[5:0];
  _RAND_4 = {1{`RANDOM}};
  paletteReg_1 = _RAND_4[5:0];
  _RAND_5 = {1{`RANDOM}};
  paletteReg_2 = _RAND_5[5:0];
  _RAND_6 = {1{`RANDOM}};
  paletteReg_3 = _RAND_6[5:0];
  _RAND_7 = {1{`RANDOM}};
  paletteReg_4 = _RAND_7[5:0];
  _RAND_8 = {1{`RANDOM}};
  paletteReg_5 = _RAND_8[5:0];
  _RAND_9 = {1{`RANDOM}};
  paletteReg_6 = _RAND_9[5:0];
  _RAND_10 = {1{`RANDOM}};
  paletteReg_7 = _RAND_10[5:0];
  _RAND_11 = {1{`RANDOM}};
  paletteReg_8 = _RAND_11[5:0];
  _RAND_12 = {1{`RANDOM}};
  paletteReg_9 = _RAND_12[5:0];
  _RAND_13 = {1{`RANDOM}};
  paletteReg_10 = _RAND_13[5:0];
  _RAND_14 = {1{`RANDOM}};
  paletteReg_11 = _RAND_14[5:0];
  _RAND_15 = {1{`RANDOM}};
  paletteReg_12 = _RAND_15[5:0];
  _RAND_16 = {1{`RANDOM}};
  paletteReg_13 = _RAND_16[5:0];
  _RAND_17 = {1{`RANDOM}};
  paletteReg_14 = _RAND_17[5:0];
  _RAND_18 = {1{`RANDOM}};
  paletteReg_15 = _RAND_18[5:0];
  _RAND_19 = {1{`RANDOM}};
  vblank_sync1 = _RAND_19[0:0];
  _RAND_20 = {1{`RANDOM}};
  vblank_synced = _RAND_20[0:0];
  _RAND_21 = {1{`RANDOM}};
  curr_frame_sync1 = _RAND_21[3:0];
  _RAND_22 = {1{`RANDOM}};
  curr_frame_synced = _RAND_22[3:0];
  _RAND_23 = {1{`RANDOM}};
  vblank_prev = _RAND_23[0:0];
  _RAND_24 = {1{`RANDOM}};
  h_count = _RAND_24[9:0];
  _RAND_25 = {1{`RANDOM}};
  v_count = _RAND_25[9:0];
  _RAND_26 = {1{`RANDOM}};
  hsync_d1 = _RAND_26[0:0];
  _RAND_27 = {1{`RANDOM}};
  vsync_d1 = _RAND_27[0:0];
  _RAND_28 = {1{`RANDOM}};
  io_hsync_REG = _RAND_28[0:0];
  _RAND_29 = {1{`RANDOM}};
  io_vsync_REG = _RAND_29[0:0];
  _RAND_30 = {1{`RANDOM}};
  x_px = _RAND_30[9:0];
  _RAND_31 = {1{`RANDOM}};
  y_px = _RAND_31[9:0];
  _RAND_32 = {1{`RANDOM}};
  curr_frame_sync1_1 = _RAND_32[3:0];
  _RAND_33 = {1{`RANDOM}};
  curr_frame = _RAND_33[3:0];
  _RAND_34 = {1{`RANDOM}};
  display_enabled_sync1 = _RAND_34[0:0];
  _RAND_35 = {1{`RANDOM}};
  display_enabled = _RAND_35[0:0];
  _RAND_36 = {1{`RANDOM}};
  blanking_sync1 = _RAND_36[0:0];
  _RAND_37 = {1{`RANDOM}};
  blanking = _RAND_37[0:0];
  _RAND_38 = {1{`RANDOM}};
  palette_sync1_0 = _RAND_38[5:0];
  _RAND_39 = {1{`RANDOM}};
  palette_sync1_1 = _RAND_39[5:0];
  _RAND_40 = {1{`RANDOM}};
  palette_sync1_2 = _RAND_40[5:0];
  _RAND_41 = {1{`RANDOM}};
  palette_sync1_3 = _RAND_41[5:0];
  _RAND_42 = {1{`RANDOM}};
  palette_sync1_4 = _RAND_42[5:0];
  _RAND_43 = {1{`RANDOM}};
  palette_sync1_5 = _RAND_43[5:0];
  _RAND_44 = {1{`RANDOM}};
  palette_sync1_6 = _RAND_44[5:0];
  _RAND_45 = {1{`RANDOM}};
  palette_sync1_7 = _RAND_45[5:0];
  _RAND_46 = {1{`RANDOM}};
  palette_sync1_8 = _RAND_46[5:0];
  _RAND_47 = {1{`RANDOM}};
  palette_sync1_9 = _RAND_47[5:0];
  _RAND_48 = {1{`RANDOM}};
  palette_sync1_10 = _RAND_48[5:0];
  _RAND_49 = {1{`RANDOM}};
  palette_sync1_11 = _RAND_49[5:0];
  _RAND_50 = {1{`RANDOM}};
  palette_sync1_12 = _RAND_50[5:0];
  _RAND_51 = {1{`RANDOM}};
  palette_sync1_13 = _RAND_51[5:0];
  _RAND_52 = {1{`RANDOM}};
  palette_sync1_14 = _RAND_52[5:0];
  _RAND_53 = {1{`RANDOM}};
  palette_sync1_15 = _RAND_53[5:0];
  _RAND_54 = {1{`RANDOM}};
  palette_sync_0 = _RAND_54[5:0];
  _RAND_55 = {1{`RANDOM}};
  palette_sync_1 = _RAND_55[5:0];
  _RAND_56 = {1{`RANDOM}};
  palette_sync_2 = _RAND_56[5:0];
  _RAND_57 = {1{`RANDOM}};
  palette_sync_3 = _RAND_57[5:0];
  _RAND_58 = {1{`RANDOM}};
  palette_sync_4 = _RAND_58[5:0];
  _RAND_59 = {1{`RANDOM}};
  palette_sync_5 = _RAND_59[5:0];
  _RAND_60 = {1{`RANDOM}};
  palette_sync_6 = _RAND_60[5:0];
  _RAND_61 = {1{`RANDOM}};
  palette_sync_7 = _RAND_61[5:0];
  _RAND_62 = {1{`RANDOM}};
  palette_sync_8 = _RAND_62[5:0];
  _RAND_63 = {1{`RANDOM}};
  palette_sync_9 = _RAND_63[5:0];
  _RAND_64 = {1{`RANDOM}};
  palette_sync_10 = _RAND_64[5:0];
  _RAND_65 = {1{`RANDOM}};
  palette_sync_11 = _RAND_65[5:0];
  _RAND_66 = {1{`RANDOM}};
  palette_sync_12 = _RAND_66[5:0];
  _RAND_67 = {1{`RANDOM}};
  palette_sync_13 = _RAND_67[5:0];
  _RAND_68 = {1{`RANDOM}};
  palette_sync_14 = _RAND_68[5:0];
  _RAND_69 = {1{`RANDOM}};
  palette_sync_15 = _RAND_69[5:0];
  _RAND_70 = {1{`RANDOM}};
  in_display_d1 = _RAND_70[0:0];
  _RAND_71 = {1{`RANDOM}};
  h_active_d1 = _RAND_71[0:0];
  _RAND_72 = {1{`RANDOM}};
  v_active_d1 = _RAND_72[0:0];
  _RAND_73 = {1{`RANDOM}};
  h_active_d2 = _RAND_73[0:0];
  _RAND_74 = {1{`RANDOM}};
  v_active_d2 = _RAND_74[0:0];
  _RAND_75 = {1{`RANDOM}};
  pixel_in_word_d1 = _RAND_75[2:0];
  _RAND_76 = {1{`RANDOM}};
  x_px_d1 = _RAND_76[9:0];
  _RAND_77 = {1{`RANDOM}};
  y_px_d1 = _RAND_77[9:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module Top(
  input         clock,
  input         reset,
  output [31:0] io_instruction_address, // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 26:14]
  input  [31:0] io_instruction, // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 26:14]
  input         io_instruction_valid, // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 26:14]
  input  [31:0] io_interrupt_flag, // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 26:14]
  output [31:0] io_memory_bundle_address, // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 26:14]
  output [31:0] io_memory_bundle_write_data, // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 26:14]
  output        io_memory_bundle_write_enable, // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 26:14]
  output        io_memory_bundle_write_strobe_0, // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 26:14]
  output        io_memory_bundle_write_strobe_1, // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 26:14]
  output        io_memory_bundle_write_strobe_2, // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 26:14]
  output        io_memory_bundle_write_strobe_3, // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 26:14]
  input  [31:0] io_memory_bundle_read_data, // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 26:14]
  output [2:0]  io_deviceSelect, // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 26:14]
  input  [4:0]  io_regs_debug_read_address, // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 26:14]
  output [31:0] io_regs_debug_read_data, // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 26:14]
  input  [11:0] io_csr_regs_debug_read_address, // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 26:14]
  output [31:0] io_csr_regs_debug_read_data, // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 26:14]
  input         io_vga_pixclk, // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 26:14]
  output        io_vga_hsync, // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 26:14]
  output        io_vga_vsync, // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 26:14]
  output [5:0]  io_vga_rrggbb, // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 26:14]
  output        io_vga_activevideo, // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 26:14]
  output [9:0]  io_vga_x_pos, // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 26:14]
  output [9:0]  io_vga_y_pos // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 26:14]
);
  wire  cpu_clock; // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 28:19]
  wire  cpu_reset; // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 28:19]
  wire [31:0] cpu_io_instruction_address; // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 28:19]
  wire [31:0] cpu_io_instruction; // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 28:19]
  wire  cpu_io_instruction_valid; // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 28:19]
  wire [31:0] cpu_io_interrupt_flag; // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 28:19]
  wire [31:0] cpu_io_memory_bundle_address; // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 28:19]
  wire [31:0] cpu_io_memory_bundle_write_data; // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 28:19]
  wire  cpu_io_memory_bundle_write_enable; // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 28:19]
  wire  cpu_io_memory_bundle_write_strobe_0; // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 28:19]
  wire  cpu_io_memory_bundle_write_strobe_1; // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 28:19]
  wire  cpu_io_memory_bundle_write_strobe_2; // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 28:19]
  wire  cpu_io_memory_bundle_write_strobe_3; // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 28:19]
  wire [31:0] cpu_io_memory_bundle_read_data; // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 28:19]
  wire [2:0] cpu_io_deviceSelect; // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 28:19]
  wire [4:0] cpu_io_regs_debug_read_address; // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 28:19]
  wire [31:0] cpu_io_regs_debug_read_data; // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 28:19]
  wire [11:0] cpu_io_csr_regs_debug_read_address; // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 28:19]
  wire [31:0] cpu_io_csr_regs_debug_read_data; // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 28:19]
  wire  vga_clock; // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 29:19]
  wire  vga_reset; // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 29:19]
  wire [31:0] vga_io_bundle_address; // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 29:19]
  wire [31:0] vga_io_bundle_write_data; // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 29:19]
  wire  vga_io_bundle_write_enable; // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 29:19]
  wire [31:0] vga_io_bundle_read_data; // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 29:19]
  wire  vga_io_pixClock; // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 29:19]
  wire  vga_io_hsync; // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 29:19]
  wire  vga_io_vsync; // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 29:19]
  wire [5:0] vga_io_rrggbb; // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 29:19]
  wire  vga_io_activevideo; // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 29:19]
  wire [9:0] vga_io_x_pos; // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 29:19]
  wire [9:0] vga_io_y_pos; // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 29:19]
  wire  _cpu_io_memory_bundle_read_data_T = cpu_io_deviceSelect == 3'h1; // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 56:25]
  CPU cpu ( // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 28:19]
    .clock(cpu_clock),
    .reset(cpu_reset),
    .io_instruction_address(cpu_io_instruction_address),
    .io_instruction(cpu_io_instruction),
    .io_instruction_valid(cpu_io_instruction_valid),
    .io_interrupt_flag(cpu_io_interrupt_flag),
    .io_memory_bundle_address(cpu_io_memory_bundle_address),
    .io_memory_bundle_write_data(cpu_io_memory_bundle_write_data),
    .io_memory_bundle_write_enable(cpu_io_memory_bundle_write_enable),
    .io_memory_bundle_write_strobe_0(cpu_io_memory_bundle_write_strobe_0),
    .io_memory_bundle_write_strobe_1(cpu_io_memory_bundle_write_strobe_1),
    .io_memory_bundle_write_strobe_2(cpu_io_memory_bundle_write_strobe_2),
    .io_memory_bundle_write_strobe_3(cpu_io_memory_bundle_write_strobe_3),
    .io_memory_bundle_read_data(cpu_io_memory_bundle_read_data),
    .io_deviceSelect(cpu_io_deviceSelect),
    .io_regs_debug_read_address(cpu_io_regs_debug_read_address),
    .io_regs_debug_read_data(cpu_io_regs_debug_read_data),
    .io_csr_regs_debug_read_address(cpu_io_csr_regs_debug_read_address),
    .io_csr_regs_debug_read_data(cpu_io_csr_regs_debug_read_data)
  );
  VGA vga ( // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 29:19]
    .clock(vga_clock),
    .reset(vga_reset),
    .io_bundle_address(vga_io_bundle_address),
    .io_bundle_write_data(vga_io_bundle_write_data),
    .io_bundle_write_enable(vga_io_bundle_write_enable),
    .io_bundle_read_data(vga_io_bundle_read_data),
    .io_pixClock(vga_io_pixClock),
    .io_hsync(vga_io_hsync),
    .io_vsync(vga_io_vsync),
    .io_rrggbb(vga_io_rrggbb),
    .io_activevideo(vga_io_activevideo),
    .io_x_pos(vga_io_x_pos),
    .io_y_pos(vga_io_y_pos)
  );
  assign io_instruction_address = cpu_io_instruction_address; // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 41:28]
  assign io_memory_bundle_address = cpu_io_memory_bundle_address; // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 49:33]
  assign io_memory_bundle_write_data = cpu_io_memory_bundle_write_data; // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 51:33]
  assign io_memory_bundle_write_enable = cpu_io_memory_bundle_write_enable; // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 50:33]
  assign io_memory_bundle_write_strobe_0 = cpu_io_memory_bundle_write_strobe_0; // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 52:33]
  assign io_memory_bundle_write_strobe_1 = cpu_io_memory_bundle_write_strobe_1; // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 52:33]
  assign io_memory_bundle_write_strobe_2 = cpu_io_memory_bundle_write_strobe_2; // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 52:33]
  assign io_memory_bundle_write_strobe_3 = cpu_io_memory_bundle_write_strobe_3; // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 52:33]
  assign io_deviceSelect = cpu_io_deviceSelect; // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 38:19]
  assign io_regs_debug_read_data = cpu_io_regs_debug_read_data; // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 35:38]
  assign io_csr_regs_debug_read_data = cpu_io_csr_regs_debug_read_data; // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 34:38]
  assign io_vga_hsync = vga_io_hsync; // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 63:30]
  assign io_vga_vsync = vga_io_vsync; // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 64:30]
  assign io_vga_rrggbb = vga_io_rrggbb; // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 65:30]
  assign io_vga_activevideo = vga_io_activevideo; // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 66:30]
  assign io_vga_x_pos = vga_io_x_pos; // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 67:30]
  assign io_vga_y_pos = vga_io_y_pos; // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 68:30]
  assign cpu_clock = clock;
  assign cpu_reset = reset;
  assign cpu_io_instruction = io_instruction; // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 42:28]
  assign cpu_io_instruction_valid = io_instruction_valid; // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 43:28]
  assign cpu_io_interrupt_flag = io_interrupt_flag; // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 44:28]
  assign cpu_io_memory_bundle_read_data = _cpu_io_memory_bundle_read_data_T ? vga_io_bundle_read_data :
    io_memory_bundle_read_data; // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 55:40]
  assign cpu_io_regs_debug_read_address = io_regs_debug_read_address; // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 32:38]
  assign cpu_io_csr_regs_debug_read_address = io_csr_regs_debug_read_address; // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 33:38]
  assign vga_clock = clock;
  assign vga_reset = reset;
  assign vga_io_bundle_address = cpu_io_memory_bundle_address; // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 71:30]
  assign vga_io_bundle_write_data = cpu_io_memory_bundle_write_data; // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 72:30]
  assign vga_io_bundle_write_enable = _cpu_io_memory_bundle_read_data_T & cpu_io_memory_bundle_write_enable; // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 74:36]
  assign vga_io_pixClock = io_vga_pixclk; // @[2-mmio-trap/src/main/scala/board/verilator/Top.scala 62:30]
endmodule
