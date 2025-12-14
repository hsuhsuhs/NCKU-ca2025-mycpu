module RegisterFile(
  input         clock,
  input         reset,
  input         io_write_enable, // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 12:14]
  input  [4:0]  io_write_address, // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 12:14]
  input  [31:0] io_write_data, // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 12:14]
  input  [4:0]  io_read_address1, // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 12:14]
  input  [4:0]  io_read_address2, // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 12:14]
  output [31:0] io_read_data1, // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 12:14]
  output [31:0] io_read_data2, // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 12:14]
  input  [4:0]  io_debug_read_address, // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 12:14]
  output [31:0] io_debug_read_data // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 12:14]
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
  reg [31:0] registers_0; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
  reg [31:0] registers_1; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
  reg [31:0] registers_2; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
  reg [31:0] registers_3; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
  reg [31:0] registers_4; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
  reg [31:0] registers_5; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
  reg [31:0] registers_6; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
  reg [31:0] registers_7; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
  reg [31:0] registers_8; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
  reg [31:0] registers_9; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
  reg [31:0] registers_10; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
  reg [31:0] registers_11; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
  reg [31:0] registers_12; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
  reg [31:0] registers_13; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
  reg [31:0] registers_14; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
  reg [31:0] registers_15; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
  reg [31:0] registers_16; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
  reg [31:0] registers_17; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
  reg [31:0] registers_18; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
  reg [31:0] registers_19; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
  reg [31:0] registers_20; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
  reg [31:0] registers_21; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
  reg [31:0] registers_22; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
  reg [31:0] registers_23; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
  reg [31:0] registers_24; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
  reg [31:0] registers_25; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
  reg [31:0] registers_26; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
  reg [31:0] registers_27; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
  reg [31:0] registers_28; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
  reg [31:0] registers_29; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
  reg [31:0] registers_30; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
  wire [4:0] _T_5 = io_write_address - 5'h1; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 31:34]
  wire  _io_read_data1_T = io_read_address1 == 5'h0; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 38:22]
  wire [4:0] _io_read_data1_T_2 = io_read_address1 - 5'h1; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 40:32]
  wire [31:0] _GEN_94 = 5'h1 == _io_read_data1_T_2 ? registers_1 : registers_0; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_95 = 5'h2 == _io_read_data1_T_2 ? registers_2 : _GEN_94; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_96 = 5'h3 == _io_read_data1_T_2 ? registers_3 : _GEN_95; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_97 = 5'h4 == _io_read_data1_T_2 ? registers_4 : _GEN_96; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_98 = 5'h5 == _io_read_data1_T_2 ? registers_5 : _GEN_97; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_99 = 5'h6 == _io_read_data1_T_2 ? registers_6 : _GEN_98; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_100 = 5'h7 == _io_read_data1_T_2 ? registers_7 : _GEN_99; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_101 = 5'h8 == _io_read_data1_T_2 ? registers_8 : _GEN_100; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_102 = 5'h9 == _io_read_data1_T_2 ? registers_9 : _GEN_101; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_103 = 5'ha == _io_read_data1_T_2 ? registers_10 : _GEN_102; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_104 = 5'hb == _io_read_data1_T_2 ? registers_11 : _GEN_103; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_105 = 5'hc == _io_read_data1_T_2 ? registers_12 : _GEN_104; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_106 = 5'hd == _io_read_data1_T_2 ? registers_13 : _GEN_105; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_107 = 5'he == _io_read_data1_T_2 ? registers_14 : _GEN_106; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_108 = 5'hf == _io_read_data1_T_2 ? registers_15 : _GEN_107; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_109 = 5'h10 == _io_read_data1_T_2 ? registers_16 : _GEN_108; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_110 = 5'h11 == _io_read_data1_T_2 ? registers_17 : _GEN_109; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_111 = 5'h12 == _io_read_data1_T_2 ? registers_18 : _GEN_110; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_112 = 5'h13 == _io_read_data1_T_2 ? registers_19 : _GEN_111; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_113 = 5'h14 == _io_read_data1_T_2 ? registers_20 : _GEN_112; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_114 = 5'h15 == _io_read_data1_T_2 ? registers_21 : _GEN_113; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_115 = 5'h16 == _io_read_data1_T_2 ? registers_22 : _GEN_114; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_116 = 5'h17 == _io_read_data1_T_2 ? registers_23 : _GEN_115; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_117 = 5'h18 == _io_read_data1_T_2 ? registers_24 : _GEN_116; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_118 = 5'h19 == _io_read_data1_T_2 ? registers_25 : _GEN_117; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_119 = 5'h1a == _io_read_data1_T_2 ? registers_26 : _GEN_118; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_120 = 5'h1b == _io_read_data1_T_2 ? registers_27 : _GEN_119; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_121 = 5'h1c == _io_read_data1_T_2 ? registers_28 : _GEN_120; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_122 = 5'h1d == _io_read_data1_T_2 ? registers_29 : _GEN_121; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire [31:0] _GEN_123 = 5'h1e == _io_read_data1_T_2 ? registers_30 : _GEN_122; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 37:{23,23}]
  wire  _io_read_data2_T = io_read_address2 == 5'h0; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 44:22]
  wire [4:0] _io_read_data2_T_2 = io_read_address2 - 5'h1; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 46:32]
  wire [31:0] _GEN_125 = 5'h1 == _io_read_data2_T_2 ? registers_1 : registers_0; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_126 = 5'h2 == _io_read_data2_T_2 ? registers_2 : _GEN_125; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_127 = 5'h3 == _io_read_data2_T_2 ? registers_3 : _GEN_126; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_128 = 5'h4 == _io_read_data2_T_2 ? registers_4 : _GEN_127; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_129 = 5'h5 == _io_read_data2_T_2 ? registers_5 : _GEN_128; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_130 = 5'h6 == _io_read_data2_T_2 ? registers_6 : _GEN_129; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_131 = 5'h7 == _io_read_data2_T_2 ? registers_7 : _GEN_130; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_132 = 5'h8 == _io_read_data2_T_2 ? registers_8 : _GEN_131; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_133 = 5'h9 == _io_read_data2_T_2 ? registers_9 : _GEN_132; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_134 = 5'ha == _io_read_data2_T_2 ? registers_10 : _GEN_133; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_135 = 5'hb == _io_read_data2_T_2 ? registers_11 : _GEN_134; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_136 = 5'hc == _io_read_data2_T_2 ? registers_12 : _GEN_135; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_137 = 5'hd == _io_read_data2_T_2 ? registers_13 : _GEN_136; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_138 = 5'he == _io_read_data2_T_2 ? registers_14 : _GEN_137; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_139 = 5'hf == _io_read_data2_T_2 ? registers_15 : _GEN_138; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_140 = 5'h10 == _io_read_data2_T_2 ? registers_16 : _GEN_139; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_141 = 5'h11 == _io_read_data2_T_2 ? registers_17 : _GEN_140; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_142 = 5'h12 == _io_read_data2_T_2 ? registers_18 : _GEN_141; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_143 = 5'h13 == _io_read_data2_T_2 ? registers_19 : _GEN_142; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_144 = 5'h14 == _io_read_data2_T_2 ? registers_20 : _GEN_143; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_145 = 5'h15 == _io_read_data2_T_2 ? registers_21 : _GEN_144; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_146 = 5'h16 == _io_read_data2_T_2 ? registers_22 : _GEN_145; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_147 = 5'h17 == _io_read_data2_T_2 ? registers_23 : _GEN_146; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_148 = 5'h18 == _io_read_data2_T_2 ? registers_24 : _GEN_147; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_149 = 5'h19 == _io_read_data2_T_2 ? registers_25 : _GEN_148; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_150 = 5'h1a == _io_read_data2_T_2 ? registers_26 : _GEN_149; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_151 = 5'h1b == _io_read_data2_T_2 ? registers_27 : _GEN_150; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_152 = 5'h1c == _io_read_data2_T_2 ? registers_28 : _GEN_151; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_153 = 5'h1d == _io_read_data2_T_2 ? registers_29 : _GEN_152; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire [31:0] _GEN_154 = 5'h1e == _io_read_data2_T_2 ? registers_30 : _GEN_153; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 43:{23,23}]
  wire  _io_debug_read_data_T = io_debug_read_address == 5'h0; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 50:27]
  wire [4:0] _io_debug_read_data_T_2 = io_debug_read_address - 5'h1; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 52:37]
  wire [31:0] _GEN_156 = 5'h1 == _io_debug_read_data_T_2 ? registers_1 : registers_0; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_157 = 5'h2 == _io_debug_read_data_T_2 ? registers_2 : _GEN_156; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_158 = 5'h3 == _io_debug_read_data_T_2 ? registers_3 : _GEN_157; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_159 = 5'h4 == _io_debug_read_data_T_2 ? registers_4 : _GEN_158; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_160 = 5'h5 == _io_debug_read_data_T_2 ? registers_5 : _GEN_159; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_161 = 5'h6 == _io_debug_read_data_T_2 ? registers_6 : _GEN_160; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_162 = 5'h7 == _io_debug_read_data_T_2 ? registers_7 : _GEN_161; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_163 = 5'h8 == _io_debug_read_data_T_2 ? registers_8 : _GEN_162; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_164 = 5'h9 == _io_debug_read_data_T_2 ? registers_9 : _GEN_163; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_165 = 5'ha == _io_debug_read_data_T_2 ? registers_10 : _GEN_164; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_166 = 5'hb == _io_debug_read_data_T_2 ? registers_11 : _GEN_165; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_167 = 5'hc == _io_debug_read_data_T_2 ? registers_12 : _GEN_166; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_168 = 5'hd == _io_debug_read_data_T_2 ? registers_13 : _GEN_167; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_169 = 5'he == _io_debug_read_data_T_2 ? registers_14 : _GEN_168; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_170 = 5'hf == _io_debug_read_data_T_2 ? registers_15 : _GEN_169; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_171 = 5'h10 == _io_debug_read_data_T_2 ? registers_16 : _GEN_170; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_172 = 5'h11 == _io_debug_read_data_T_2 ? registers_17 : _GEN_171; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_173 = 5'h12 == _io_debug_read_data_T_2 ? registers_18 : _GEN_172; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_174 = 5'h13 == _io_debug_read_data_T_2 ? registers_19 : _GEN_173; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_175 = 5'h14 == _io_debug_read_data_T_2 ? registers_20 : _GEN_174; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_176 = 5'h15 == _io_debug_read_data_T_2 ? registers_21 : _GEN_175; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_177 = 5'h16 == _io_debug_read_data_T_2 ? registers_22 : _GEN_176; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_178 = 5'h17 == _io_debug_read_data_T_2 ? registers_23 : _GEN_177; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_179 = 5'h18 == _io_debug_read_data_T_2 ? registers_24 : _GEN_178; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_180 = 5'h19 == _io_debug_read_data_T_2 ? registers_25 : _GEN_179; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_181 = 5'h1a == _io_debug_read_data_T_2 ? registers_26 : _GEN_180; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_182 = 5'h1b == _io_debug_read_data_T_2 ? registers_27 : _GEN_181; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_183 = 5'h1c == _io_debug_read_data_T_2 ? registers_28 : _GEN_182; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_184 = 5'h1d == _io_debug_read_data_T_2 ? registers_29 : _GEN_183; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  wire [31:0] _GEN_185 = 5'h1e == _io_debug_read_data_T_2 ? registers_30 : _GEN_184; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 49:{28,28}]
  assign io_read_data1 = _io_read_data1_T ? 32'h0 : _GEN_123; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 37:23]
  assign io_read_data2 = _io_read_data2_T ? 32'h0 : _GEN_154; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 43:23]
  assign io_debug_read_data = _io_debug_read_data_T ? 32'h0 : _GEN_185; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 49:28]
  always @(posedge clock) begin
    if (reset) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
      registers_0 <= 32'h0; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
    end else if (~reset) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 29:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 30:55]
        if (5'h0 == _T_5) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 31:41]
          registers_0 <= io_write_data; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 31:41]
        end
      end
    end
    if (reset) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
      registers_1 <= 32'h0; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
    end else if (~reset) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 29:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 30:55]
        if (5'h1 == _T_5) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 31:41]
          registers_1 <= io_write_data; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 31:41]
        end
      end
    end
    if (reset) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
      registers_2 <= 32'h0; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
    end else if (~reset) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 29:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 30:55]
        if (5'h2 == _T_5) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 31:41]
          registers_2 <= io_write_data; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 31:41]
        end
      end
    end
    if (reset) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
      registers_3 <= 32'h0; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
    end else if (~reset) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 29:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 30:55]
        if (5'h3 == _T_5) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 31:41]
          registers_3 <= io_write_data; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 31:41]
        end
      end
    end
    if (reset) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
      registers_4 <= 32'h0; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
    end else if (~reset) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 29:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 30:55]
        if (5'h4 == _T_5) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 31:41]
          registers_4 <= io_write_data; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 31:41]
        end
      end
    end
    if (reset) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
      registers_5 <= 32'h0; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
    end else if (~reset) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 29:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 30:55]
        if (5'h5 == _T_5) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 31:41]
          registers_5 <= io_write_data; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 31:41]
        end
      end
    end
    if (reset) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
      registers_6 <= 32'h0; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
    end else if (~reset) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 29:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 30:55]
        if (5'h6 == _T_5) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 31:41]
          registers_6 <= io_write_data; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 31:41]
        end
      end
    end
    if (reset) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
      registers_7 <= 32'h0; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
    end else if (~reset) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 29:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 30:55]
        if (5'h7 == _T_5) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 31:41]
          registers_7 <= io_write_data; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 31:41]
        end
      end
    end
    if (reset) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
      registers_8 <= 32'h0; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
    end else if (~reset) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 29:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 30:55]
        if (5'h8 == _T_5) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 31:41]
          registers_8 <= io_write_data; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 31:41]
        end
      end
    end
    if (reset) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
      registers_9 <= 32'h0; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
    end else if (~reset) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 29:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 30:55]
        if (5'h9 == _T_5) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 31:41]
          registers_9 <= io_write_data; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 31:41]
        end
      end
    end
    if (reset) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
      registers_10 <= 32'h0; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
    end else if (~reset) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 29:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 30:55]
        if (5'ha == _T_5) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 31:41]
          registers_10 <= io_write_data; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 31:41]
        end
      end
    end
    if (reset) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
      registers_11 <= 32'h0; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
    end else if (~reset) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 29:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 30:55]
        if (5'hb == _T_5) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 31:41]
          registers_11 <= io_write_data; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 31:41]
        end
      end
    end
    if (reset) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
      registers_12 <= 32'h0; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
    end else if (~reset) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 29:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 30:55]
        if (5'hc == _T_5) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 31:41]
          registers_12 <= io_write_data; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 31:41]
        end
      end
    end
    if (reset) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
      registers_13 <= 32'h0; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
    end else if (~reset) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 29:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 30:55]
        if (5'hd == _T_5) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 31:41]
          registers_13 <= io_write_data; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 31:41]
        end
      end
    end
    if (reset) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
      registers_14 <= 32'h0; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
    end else if (~reset) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 29:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 30:55]
        if (5'he == _T_5) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 31:41]
          registers_14 <= io_write_data; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 31:41]
        end
      end
    end
    if (reset) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
      registers_15 <= 32'h0; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
    end else if (~reset) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 29:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 30:55]
        if (5'hf == _T_5) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 31:41]
          registers_15 <= io_write_data; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 31:41]
        end
      end
    end
    if (reset) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
      registers_16 <= 32'h0; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
    end else if (~reset) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 29:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 30:55]
        if (5'h10 == _T_5) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 31:41]
          registers_16 <= io_write_data; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 31:41]
        end
      end
    end
    if (reset) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
      registers_17 <= 32'h0; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
    end else if (~reset) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 29:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 30:55]
        if (5'h11 == _T_5) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 31:41]
          registers_17 <= io_write_data; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 31:41]
        end
      end
    end
    if (reset) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
      registers_18 <= 32'h0; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
    end else if (~reset) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 29:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 30:55]
        if (5'h12 == _T_5) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 31:41]
          registers_18 <= io_write_data; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 31:41]
        end
      end
    end
    if (reset) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
      registers_19 <= 32'h0; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
    end else if (~reset) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 29:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 30:55]
        if (5'h13 == _T_5) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 31:41]
          registers_19 <= io_write_data; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 31:41]
        end
      end
    end
    if (reset) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
      registers_20 <= 32'h0; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
    end else if (~reset) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 29:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 30:55]
        if (5'h14 == _T_5) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 31:41]
          registers_20 <= io_write_data; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 31:41]
        end
      end
    end
    if (reset) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
      registers_21 <= 32'h0; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
    end else if (~reset) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 29:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 30:55]
        if (5'h15 == _T_5) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 31:41]
          registers_21 <= io_write_data; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 31:41]
        end
      end
    end
    if (reset) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
      registers_22 <= 32'h0; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
    end else if (~reset) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 29:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 30:55]
        if (5'h16 == _T_5) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 31:41]
          registers_22 <= io_write_data; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 31:41]
        end
      end
    end
    if (reset) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
      registers_23 <= 32'h0; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
    end else if (~reset) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 29:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 30:55]
        if (5'h17 == _T_5) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 31:41]
          registers_23 <= io_write_data; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 31:41]
        end
      end
    end
    if (reset) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
      registers_24 <= 32'h0; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
    end else if (~reset) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 29:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 30:55]
        if (5'h18 == _T_5) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 31:41]
          registers_24 <= io_write_data; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 31:41]
        end
      end
    end
    if (reset) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
      registers_25 <= 32'h0; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
    end else if (~reset) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 29:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 30:55]
        if (5'h19 == _T_5) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 31:41]
          registers_25 <= io_write_data; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 31:41]
        end
      end
    end
    if (reset) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
      registers_26 <= 32'h0; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
    end else if (~reset) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 29:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 30:55]
        if (5'h1a == _T_5) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 31:41]
          registers_26 <= io_write_data; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 31:41]
        end
      end
    end
    if (reset) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
      registers_27 <= 32'h0; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
    end else if (~reset) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 29:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 30:55]
        if (5'h1b == _T_5) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 31:41]
          registers_27 <= io_write_data; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 31:41]
        end
      end
    end
    if (reset) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
      registers_28 <= 32'h0; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
    end else if (~reset) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 29:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 30:55]
        if (5'h1c == _T_5) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 31:41]
          registers_28 <= io_write_data; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 31:41]
        end
      end
    end
    if (reset) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
      registers_29 <= 32'h0; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
    end else if (~reset) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 29:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 30:55]
        if (5'h1d == _T_5) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 31:41]
          registers_29 <= io_write_data; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 31:41]
        end
      end
    end
    if (reset) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
      registers_30 <= 32'h0; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 26:26]
    end else if (~reset) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 29:23]
      if (io_write_enable & io_write_address != 5'h0) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 30:55]
        if (5'h1e == _T_5) begin // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 31:41]
          registers_30 <= io_write_data; // @[0-minimal/src/main/scala/riscv/core/RegisterFile.scala 31:41]
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
  input         io_jump_flag_id, // @[0-minimal/src/main/scala/riscv/core/InstructionFetch.scala 16:14]
  input  [31:0] io_jump_address_id, // @[0-minimal/src/main/scala/riscv/core/InstructionFetch.scala 16:14]
  input  [31:0] io_instruction_read_data, // @[0-minimal/src/main/scala/riscv/core/InstructionFetch.scala 16:14]
  input         io_instruction_valid, // @[0-minimal/src/main/scala/riscv/core/InstructionFetch.scala 16:14]
  output [31:0] io_instruction_address, // @[0-minimal/src/main/scala/riscv/core/InstructionFetch.scala 16:14]
  output [31:0] io_instruction // @[0-minimal/src/main/scala/riscv/core/InstructionFetch.scala 16:14]
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] pc; // @[0-minimal/src/main/scala/riscv/core/InstructionFetch.scala 26:19]
  wire [31:0] _pc_T_1 = pc + 32'h4; // @[0-minimal/src/main/scala/riscv/core/InstructionFetch.scala 30:67]
  assign io_instruction_address = pc; // @[0-minimal/src/main/scala/riscv/core/InstructionFetch.scala 36:26]
  assign io_instruction = io_instruction_valid ? io_instruction_read_data : 32'h13; // @[0-minimal/src/main/scala/riscv/core/InstructionFetch.scala 28:30 29:20 34:20]
  always @(posedge clock) begin
    if (reset) begin // @[0-minimal/src/main/scala/riscv/core/InstructionFetch.scala 26:19]
      pc <= 32'h1000; // @[0-minimal/src/main/scala/riscv/core/InstructionFetch.scala 26:19]
    end else if (io_instruction_valid) begin // @[0-minimal/src/main/scala/riscv/core/InstructionFetch.scala 28:30]
      if (io_jump_flag_id) begin // @[0-minimal/src/main/scala/riscv/core/InstructionFetch.scala 30:26]
        pc <= io_jump_address_id;
      end else begin
        pc <= _pc_T_1;
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
  input  [31:0] io_instruction, // @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 38:14]
  output [4:0]  io_regs_reg1_read_address, // @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 38:14]
  output [4:0]  io_regs_reg2_read_address, // @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 38:14]
  output [31:0] io_ex_immediate, // @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 38:14]
  output        io_ex_aluop1_source, // @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 38:14]
  output        io_ex_aluop2_source, // @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 38:14]
  output        io_memory_read_enable, // @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 38:14]
  output        io_memory_write_enable, // @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 38:14]
  output [1:0]  io_wb_reg_write_source, // @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 38:14]
  output        io_reg_write_enable, // @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 38:14]
  output [4:0]  io_reg_write_address // @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 38:14]
);
  wire [6:0] opcode = io_instruction[6:0]; // @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 54:32]
  wire [4:0] rs1 = io_instruction[19:15]; // @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 55:32]
  wire [4:0] rs2 = io_instruction[24:20]; // @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 56:32]
  wire [4:0] rd = io_instruction[11:7]; // @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 57:32]
  wire  isLoad = opcode == 7'h3; // @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 60:24]
  wire  isStore = opcode == 7'h23; // @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 61:24]
  wire  isOpImm = opcode == 7'h13; // @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 62:24]
  wire  isAuipc = opcode == 7'h17; // @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 63:24]
  wire  isJalr = opcode == 7'h67; // @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 64:24]
  wire  _usesRs1_T_1 = isLoad | isStore | isOpImm; // @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 67:36]
  wire  usesRs1 = isLoad | isStore | isOpImm | isJalr; // @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 67:47]
  wire [1:0] _GEN_0 = isJalr ? 2'h2 : 2'h0; // @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 75:22 76:14 72:29]
  wire [19:0] _immI_T_1 = io_instruction[31] ? 20'hfffff : 20'h0; // @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 87:22]
  wire [31:0] immI = {_immI_T_1,io_instruction[31:20]}; // @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 87:17]
  wire [31:0] immS = {_immI_T_1,io_instruction[31:25],rd}; // @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 88:17]
  wire [31:0] immU = {io_instruction[31:12],12'h0}; // @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 89:17]
  wire [31:0] _immediate_T_1 = 7'h23 == opcode ? immS : immI; // @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 91:42]
  assign io_regs_reg1_read_address = usesRs1 ? rs1 : 5'h0; // @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 98:35]
  assign io_regs_reg2_read_address = isStore ? rs2 : 5'h0; // @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 99:35]
  assign io_ex_immediate = 7'h17 == opcode ? immU : _immediate_T_1; // @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 91:42]
  assign io_ex_aluop1_source = opcode == 7'h17; // @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 63:24]
  assign io_ex_aluop2_source = _usesRs1_T_1 | isAuipc | isJalr; // @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 83:64]
  assign io_memory_read_enable = opcode == 7'h3; // @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 60:24]
  assign io_memory_write_enable = opcode == 7'h23; // @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 61:24]
  assign io_wb_reg_write_source = isLoad ? 2'h1 : _GEN_0; // @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 73:16 74:14]
  assign io_reg_write_enable = isLoad | isOpImm | isAuipc | isJalr; // @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 69:47]
  assign io_reg_write_address = io_instruction[11:7]; // @[0-minimal/src/main/scala/riscv/core/InstructionDecode.scala 57:32]
endmodule
module Execute(
  input  [31:0] io_instruction, // @[0-minimal/src/main/scala/riscv/core/Execute.scala 13:14]
  input  [31:0] io_instruction_address, // @[0-minimal/src/main/scala/riscv/core/Execute.scala 13:14]
  input  [31:0] io_reg1_data, // @[0-minimal/src/main/scala/riscv/core/Execute.scala 13:14]
  input  [31:0] io_reg2_data, // @[0-minimal/src/main/scala/riscv/core/Execute.scala 13:14]
  input  [31:0] io_immediate, // @[0-minimal/src/main/scala/riscv/core/Execute.scala 13:14]
  input         io_aluop1_source, // @[0-minimal/src/main/scala/riscv/core/Execute.scala 13:14]
  input         io_aluop2_source, // @[0-minimal/src/main/scala/riscv/core/Execute.scala 13:14]
  output [31:0] io_mem_alu_result, // @[0-minimal/src/main/scala/riscv/core/Execute.scala 13:14]
  output        io_if_jump_flag, // @[0-minimal/src/main/scala/riscv/core/Execute.scala 13:14]
  output [31:0] io_if_jump_address // @[0-minimal/src/main/scala/riscv/core/Execute.scala 13:14]
);
  wire [6:0] opcode = io_instruction[6:0]; // @[0-minimal/src/main/scala/riscv/core/Execute.scala 27:30]
  wire [31:0] aluOp1 = io_aluop1_source ? io_instruction_address : io_reg1_data; // @[0-minimal/src/main/scala/riscv/core/Execute.scala 30:22]
  wire [31:0] aluOp2 = io_aluop2_source ? io_immediate : io_reg2_data; // @[0-minimal/src/main/scala/riscv/core/Execute.scala 31:22]
  wire [31:0] aluResult = aluOp1 + aluOp2; // @[0-minimal/src/main/scala/riscv/core/Execute.scala 32:26]
  assign io_mem_alu_result = aluOp1 + aluOp2; // @[0-minimal/src/main/scala/riscv/core/Execute.scala 32:26]
  assign io_if_jump_flag = opcode == 7'h67; // @[0-minimal/src/main/scala/riscv/core/Execute.scala 37:27]
  assign io_if_jump_address = {aluResult[31:1],1'h0}; // @[0-minimal/src/main/scala/riscv/core/Execute.scala 38:23]
endmodule
module MemoryAccess(
  input  [31:0] io_alu_result, // @[0-minimal/src/main/scala/riscv/core/MemoryAccess.scala 14:14]
  input  [31:0] io_reg2_data, // @[0-minimal/src/main/scala/riscv/core/MemoryAccess.scala 14:14]
  input         io_memory_read_enable, // @[0-minimal/src/main/scala/riscv/core/MemoryAccess.scala 14:14]
  input         io_memory_write_enable, // @[0-minimal/src/main/scala/riscv/core/MemoryAccess.scala 14:14]
  output [31:0] io_wb_memory_read_data, // @[0-minimal/src/main/scala/riscv/core/MemoryAccess.scala 14:14]
  output [31:0] io_memory_bundle_address, // @[0-minimal/src/main/scala/riscv/core/MemoryAccess.scala 14:14]
  output [31:0] io_memory_bundle_write_data, // @[0-minimal/src/main/scala/riscv/core/MemoryAccess.scala 14:14]
  output        io_memory_bundle_write_enable, // @[0-minimal/src/main/scala/riscv/core/MemoryAccess.scala 14:14]
  output        io_memory_bundle_write_strobe_0, // @[0-minimal/src/main/scala/riscv/core/MemoryAccess.scala 14:14]
  output        io_memory_bundle_write_strobe_1, // @[0-minimal/src/main/scala/riscv/core/MemoryAccess.scala 14:14]
  output        io_memory_bundle_write_strobe_2, // @[0-minimal/src/main/scala/riscv/core/MemoryAccess.scala 14:14]
  output        io_memory_bundle_write_strobe_3, // @[0-minimal/src/main/scala/riscv/core/MemoryAccess.scala 14:14]
  input  [31:0] io_memory_bundle_read_data // @[0-minimal/src/main/scala/riscv/core/MemoryAccess.scala 14:14]
);
  wire [31:0] _GEN_1 = io_memory_write_enable ? io_reg2_data : 32'h0; // @[0-minimal/src/main/scala/riscv/core/MemoryAccess.scala 26:33 34:38 37:35]
  assign io_wb_memory_read_data = io_memory_read_enable ? io_memory_bundle_read_data : 32'h0; // @[0-minimal/src/main/scala/riscv/core/MemoryAccess.scala 31:31 33:28 29:33]
  assign io_memory_bundle_address = io_alu_result; // @[0-minimal/src/main/scala/riscv/core/MemoryAccess.scala 27:33]
  assign io_memory_bundle_write_data = io_memory_read_enable ? 32'h0 : _GEN_1; // @[0-minimal/src/main/scala/riscv/core/MemoryAccess.scala 31:31 26:33]
  assign io_memory_bundle_write_enable = io_memory_read_enable ? 1'h0 : io_memory_write_enable; // @[0-minimal/src/main/scala/riscv/core/MemoryAccess.scala 31:31 25:33]
  assign io_memory_bundle_write_strobe_0 = io_memory_read_enable ? 1'h0 : io_memory_write_enable; // @[0-minimal/src/main/scala/riscv/core/MemoryAccess.scala 31:31 28:33]
  assign io_memory_bundle_write_strobe_1 = io_memory_read_enable ? 1'h0 : io_memory_write_enable; // @[0-minimal/src/main/scala/riscv/core/MemoryAccess.scala 31:31 28:33]
  assign io_memory_bundle_write_strobe_2 = io_memory_read_enable ? 1'h0 : io_memory_write_enable; // @[0-minimal/src/main/scala/riscv/core/MemoryAccess.scala 31:31 28:33]
  assign io_memory_bundle_write_strobe_3 = io_memory_read_enable ? 1'h0 : io_memory_write_enable; // @[0-minimal/src/main/scala/riscv/core/MemoryAccess.scala 31:31 28:33]
endmodule
module WriteBack(
  input  [31:0] io_instruction_address, // @[0-minimal/src/main/scala/riscv/core/WriteBack.scala 13:14]
  input  [31:0] io_alu_result, // @[0-minimal/src/main/scala/riscv/core/WriteBack.scala 13:14]
  input  [31:0] io_memory_read_data, // @[0-minimal/src/main/scala/riscv/core/WriteBack.scala 13:14]
  input  [1:0]  io_regs_write_source, // @[0-minimal/src/main/scala/riscv/core/WriteBack.scala 13:14]
  output [31:0] io_regs_write_data // @[0-minimal/src/main/scala/riscv/core/WriteBack.scala 13:14]
);
  wire [31:0] _io_regs_write_data_T_1 = io_instruction_address + 32'h4; // @[0-minimal/src/main/scala/riscv/core/WriteBack.scala 23:72]
  wire [31:0] _io_regs_write_data_T_3 = 2'h1 == io_regs_write_source ? io_memory_read_data : io_alu_result; // @[0-minimal/src/main/scala/riscv/core/WriteBack.scala 20:71]
  assign io_regs_write_data = 2'h2 == io_regs_write_source ? _io_regs_write_data_T_1 : _io_regs_write_data_T_3; // @[0-minimal/src/main/scala/riscv/core/WriteBack.scala 20:71]
endmodule
module CPU(
  input         clock,
  input         reset,
  output [31:0] io_instruction_address, // @[0-minimal/src/main/scala/riscv/core/CPU.scala 14:14]
  input  [31:0] io_instruction, // @[0-minimal/src/main/scala/riscv/core/CPU.scala 14:14]
  output [31:0] io_memory_bundle_address, // @[0-minimal/src/main/scala/riscv/core/CPU.scala 14:14]
  output [31:0] io_memory_bundle_write_data, // @[0-minimal/src/main/scala/riscv/core/CPU.scala 14:14]
  output        io_memory_bundle_write_enable, // @[0-minimal/src/main/scala/riscv/core/CPU.scala 14:14]
  output        io_memory_bundle_write_strobe_0, // @[0-minimal/src/main/scala/riscv/core/CPU.scala 14:14]
  output        io_memory_bundle_write_strobe_1, // @[0-minimal/src/main/scala/riscv/core/CPU.scala 14:14]
  output        io_memory_bundle_write_strobe_2, // @[0-minimal/src/main/scala/riscv/core/CPU.scala 14:14]
  output        io_memory_bundle_write_strobe_3, // @[0-minimal/src/main/scala/riscv/core/CPU.scala 14:14]
  input  [31:0] io_memory_bundle_read_data, // @[0-minimal/src/main/scala/riscv/core/CPU.scala 14:14]
  input         io_instruction_valid, // @[0-minimal/src/main/scala/riscv/core/CPU.scala 14:14]
  input  [4:0]  io_debug_read_address, // @[0-minimal/src/main/scala/riscv/core/CPU.scala 14:14]
  output [31:0] io_debug_read_data // @[0-minimal/src/main/scala/riscv/core/CPU.scala 14:14]
);
  wire  regs_clock; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 17:26]
  wire  regs_reset; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 17:26]
  wire  regs_io_write_enable; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 17:26]
  wire [4:0] regs_io_write_address; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 17:26]
  wire [31:0] regs_io_write_data; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 17:26]
  wire [4:0] regs_io_read_address1; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 17:26]
  wire [4:0] regs_io_read_address2; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 17:26]
  wire [31:0] regs_io_read_data1; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 17:26]
  wire [31:0] regs_io_read_data2; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 17:26]
  wire [4:0] regs_io_debug_read_address; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 17:26]
  wire [31:0] regs_io_debug_read_data; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 17:26]
  wire  inst_fetch_clock; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 18:26]
  wire  inst_fetch_reset; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 18:26]
  wire  inst_fetch_io_jump_flag_id; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 18:26]
  wire [31:0] inst_fetch_io_jump_address_id; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 18:26]
  wire [31:0] inst_fetch_io_instruction_read_data; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 18:26]
  wire  inst_fetch_io_instruction_valid; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 18:26]
  wire [31:0] inst_fetch_io_instruction_address; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 18:26]
  wire [31:0] inst_fetch_io_instruction; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 18:26]
  wire [31:0] id_io_instruction; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 19:26]
  wire [4:0] id_io_regs_reg1_read_address; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 19:26]
  wire [4:0] id_io_regs_reg2_read_address; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 19:26]
  wire [31:0] id_io_ex_immediate; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 19:26]
  wire  id_io_ex_aluop1_source; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 19:26]
  wire  id_io_ex_aluop2_source; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 19:26]
  wire  id_io_memory_read_enable; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 19:26]
  wire  id_io_memory_write_enable; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 19:26]
  wire [1:0] id_io_wb_reg_write_source; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 19:26]
  wire  id_io_reg_write_enable; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 19:26]
  wire [4:0] id_io_reg_write_address; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 19:26]
  wire [31:0] ex_io_instruction; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 20:26]
  wire [31:0] ex_io_instruction_address; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 20:26]
  wire [31:0] ex_io_reg1_data; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 20:26]
  wire [31:0] ex_io_reg2_data; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 20:26]
  wire [31:0] ex_io_immediate; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 20:26]
  wire  ex_io_aluop1_source; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 20:26]
  wire  ex_io_aluop2_source; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 20:26]
  wire [31:0] ex_io_mem_alu_result; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 20:26]
  wire  ex_io_if_jump_flag; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 20:26]
  wire [31:0] ex_io_if_jump_address; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 20:26]
  wire [31:0] mem_io_alu_result; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 21:26]
  wire [31:0] mem_io_reg2_data; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 21:26]
  wire  mem_io_memory_read_enable; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 21:26]
  wire  mem_io_memory_write_enable; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 21:26]
  wire [31:0] mem_io_wb_memory_read_data; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 21:26]
  wire [31:0] mem_io_memory_bundle_address; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 21:26]
  wire [31:0] mem_io_memory_bundle_write_data; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 21:26]
  wire  mem_io_memory_bundle_write_enable; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 21:26]
  wire  mem_io_memory_bundle_write_strobe_0; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 21:26]
  wire  mem_io_memory_bundle_write_strobe_1; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 21:26]
  wire  mem_io_memory_bundle_write_strobe_2; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 21:26]
  wire  mem_io_memory_bundle_write_strobe_3; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 21:26]
  wire [31:0] mem_io_memory_bundle_read_data; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 21:26]
  wire [31:0] wb_io_instruction_address; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 22:26]
  wire [31:0] wb_io_alu_result; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 22:26]
  wire [31:0] wb_io_memory_read_data; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 22:26]
  wire [1:0] wb_io_regs_write_source; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 22:26]
  wire [31:0] wb_io_regs_write_data; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 22:26]
  RegisterFile regs ( // @[0-minimal/src/main/scala/riscv/core/CPU.scala 17:26]
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
  InstructionFetch inst_fetch ( // @[0-minimal/src/main/scala/riscv/core/CPU.scala 18:26]
    .clock(inst_fetch_clock),
    .reset(inst_fetch_reset),
    .io_jump_flag_id(inst_fetch_io_jump_flag_id),
    .io_jump_address_id(inst_fetch_io_jump_address_id),
    .io_instruction_read_data(inst_fetch_io_instruction_read_data),
    .io_instruction_valid(inst_fetch_io_instruction_valid),
    .io_instruction_address(inst_fetch_io_instruction_address),
    .io_instruction(inst_fetch_io_instruction)
  );
  InstructionDecode id ( // @[0-minimal/src/main/scala/riscv/core/CPU.scala 19:26]
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
    .io_reg_write_address(id_io_reg_write_address)
  );
  Execute ex ( // @[0-minimal/src/main/scala/riscv/core/CPU.scala 20:26]
    .io_instruction(ex_io_instruction),
    .io_instruction_address(ex_io_instruction_address),
    .io_reg1_data(ex_io_reg1_data),
    .io_reg2_data(ex_io_reg2_data),
    .io_immediate(ex_io_immediate),
    .io_aluop1_source(ex_io_aluop1_source),
    .io_aluop2_source(ex_io_aluop2_source),
    .io_mem_alu_result(ex_io_mem_alu_result),
    .io_if_jump_flag(ex_io_if_jump_flag),
    .io_if_jump_address(ex_io_if_jump_address)
  );
  MemoryAccess mem ( // @[0-minimal/src/main/scala/riscv/core/CPU.scala 21:26]
    .io_alu_result(mem_io_alu_result),
    .io_reg2_data(mem_io_reg2_data),
    .io_memory_read_enable(mem_io_memory_read_enable),
    .io_memory_write_enable(mem_io_memory_write_enable),
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
  WriteBack wb ( // @[0-minimal/src/main/scala/riscv/core/CPU.scala 22:26]
    .io_instruction_address(wb_io_instruction_address),
    .io_alu_result(wb_io_alu_result),
    .io_memory_read_data(wb_io_memory_read_data),
    .io_regs_write_source(wb_io_regs_write_source),
    .io_regs_write_data(wb_io_regs_write_data)
  );
  assign io_instruction_address = inst_fetch_io_instruction_address; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 29:39]
  assign io_memory_bundle_address = mem_io_memory_bundle_address; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 57:20]
  assign io_memory_bundle_write_data = mem_io_memory_bundle_write_data; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 57:20]
  assign io_memory_bundle_write_enable = mem_io_memory_bundle_write_enable; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 57:20]
  assign io_memory_bundle_write_strobe_0 = mem_io_memory_bundle_write_strobe_0; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 57:20]
  assign io_memory_bundle_write_strobe_1 = mem_io_memory_bundle_write_strobe_1; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 57:20]
  assign io_memory_bundle_write_strobe_2 = mem_io_memory_bundle_write_strobe_2; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 57:20]
  assign io_memory_bundle_write_strobe_3 = mem_io_memory_bundle_write_strobe_3; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 57:20]
  assign io_debug_read_data = regs_io_debug_read_data; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 38:30]
  assign regs_clock = clock;
  assign regs_reset = reset;
  assign regs_io_write_enable = id_io_reg_write_enable; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 32:30]
  assign regs_io_write_address = id_io_reg_write_address; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 33:30]
  assign regs_io_write_data = wb_io_regs_write_data; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 34:30]
  assign regs_io_read_address1 = id_io_regs_reg1_read_address; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 35:30]
  assign regs_io_read_address2 = id_io_regs_reg2_read_address; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 36:30]
  assign regs_io_debug_read_address = io_debug_read_address; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 37:30]
  assign inst_fetch_clock = clock;
  assign inst_fetch_reset = reset;
  assign inst_fetch_io_jump_flag_id = ex_io_if_jump_flag; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 26:39]
  assign inst_fetch_io_jump_address_id = ex_io_if_jump_address; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 25:39]
  assign inst_fetch_io_instruction_read_data = io_instruction; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 28:39]
  assign inst_fetch_io_instruction_valid = io_instruction_valid; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 27:39]
  assign id_io_instruction = inst_fetch_io_instruction; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 41:21]
  assign ex_io_instruction = inst_fetch_io_instruction; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 47:29]
  assign ex_io_instruction_address = inst_fetch_io_instruction_address; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 48:29]
  assign ex_io_reg1_data = regs_io_read_data1; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 49:29]
  assign ex_io_reg2_data = regs_io_read_data2; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 50:29]
  assign ex_io_immediate = id_io_ex_immediate; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 46:29]
  assign ex_io_aluop1_source = id_io_ex_aluop1_source; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 44:29]
  assign ex_io_aluop2_source = id_io_ex_aluop2_source; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 45:29]
  assign mem_io_alu_result = ex_io_mem_alu_result; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 53:30]
  assign mem_io_reg2_data = regs_io_read_data2; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 54:30]
  assign mem_io_memory_read_enable = id_io_memory_read_enable; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 55:30]
  assign mem_io_memory_write_enable = id_io_memory_write_enable; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 56:30]
  assign mem_io_memory_bundle_read_data = io_memory_bundle_read_data; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 57:20]
  assign wb_io_instruction_address = inst_fetch_io_instruction_address; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 60:29]
  assign wb_io_alu_result = ex_io_mem_alu_result; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 61:29]
  assign wb_io_memory_read_data = mem_io_wb_memory_read_data; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 62:29]
  assign wb_io_regs_write_source = id_io_wb_reg_write_source; // @[0-minimal/src/main/scala/riscv/core/CPU.scala 63:29]
endmodule
module Top(
  input         clock,
  input         reset,
  output [31:0] io_instruction_address, // @[0-minimal/src/main/scala/board/Top.scala 15:14]
  input  [31:0] io_instruction, // @[0-minimal/src/main/scala/board/Top.scala 15:14]
  output [31:0] io_memory_bundle_address, // @[0-minimal/src/main/scala/board/Top.scala 15:14]
  output [31:0] io_memory_bundle_write_data, // @[0-minimal/src/main/scala/board/Top.scala 15:14]
  output        io_memory_bundle_write_enable, // @[0-minimal/src/main/scala/board/Top.scala 15:14]
  output        io_memory_bundle_write_strobe_0, // @[0-minimal/src/main/scala/board/Top.scala 15:14]
  output        io_memory_bundle_write_strobe_1, // @[0-minimal/src/main/scala/board/Top.scala 15:14]
  output        io_memory_bundle_write_strobe_2, // @[0-minimal/src/main/scala/board/Top.scala 15:14]
  output        io_memory_bundle_write_strobe_3, // @[0-minimal/src/main/scala/board/Top.scala 15:14]
  input  [31:0] io_memory_bundle_read_data, // @[0-minimal/src/main/scala/board/Top.scala 15:14]
  input         io_instruction_valid, // @[0-minimal/src/main/scala/board/Top.scala 15:14]
  input  [4:0]  io_debug_read_address, // @[0-minimal/src/main/scala/board/Top.scala 15:14]
  output [31:0] io_debug_read_data // @[0-minimal/src/main/scala/board/Top.scala 15:14]
);
  wire  cpu_clock; // @[0-minimal/src/main/scala/board/Top.scala 17:19]
  wire  cpu_reset; // @[0-minimal/src/main/scala/board/Top.scala 17:19]
  wire [31:0] cpu_io_instruction_address; // @[0-minimal/src/main/scala/board/Top.scala 17:19]
  wire [31:0] cpu_io_instruction; // @[0-minimal/src/main/scala/board/Top.scala 17:19]
  wire [31:0] cpu_io_memory_bundle_address; // @[0-minimal/src/main/scala/board/Top.scala 17:19]
  wire [31:0] cpu_io_memory_bundle_write_data; // @[0-minimal/src/main/scala/board/Top.scala 17:19]
  wire  cpu_io_memory_bundle_write_enable; // @[0-minimal/src/main/scala/board/Top.scala 17:19]
  wire  cpu_io_memory_bundle_write_strobe_0; // @[0-minimal/src/main/scala/board/Top.scala 17:19]
  wire  cpu_io_memory_bundle_write_strobe_1; // @[0-minimal/src/main/scala/board/Top.scala 17:19]
  wire  cpu_io_memory_bundle_write_strobe_2; // @[0-minimal/src/main/scala/board/Top.scala 17:19]
  wire  cpu_io_memory_bundle_write_strobe_3; // @[0-minimal/src/main/scala/board/Top.scala 17:19]
  wire [31:0] cpu_io_memory_bundle_read_data; // @[0-minimal/src/main/scala/board/Top.scala 17:19]
  wire  cpu_io_instruction_valid; // @[0-minimal/src/main/scala/board/Top.scala 17:19]
  wire [4:0] cpu_io_debug_read_address; // @[0-minimal/src/main/scala/board/Top.scala 17:19]
  wire [31:0] cpu_io_debug_read_data; // @[0-minimal/src/main/scala/board/Top.scala 17:19]
  CPU cpu ( // @[0-minimal/src/main/scala/board/Top.scala 17:19]
    .clock(cpu_clock),
    .reset(cpu_reset),
    .io_instruction_address(cpu_io_instruction_address),
    .io_instruction(cpu_io_instruction),
    .io_memory_bundle_address(cpu_io_memory_bundle_address),
    .io_memory_bundle_write_data(cpu_io_memory_bundle_write_data),
    .io_memory_bundle_write_enable(cpu_io_memory_bundle_write_enable),
    .io_memory_bundle_write_strobe_0(cpu_io_memory_bundle_write_strobe_0),
    .io_memory_bundle_write_strobe_1(cpu_io_memory_bundle_write_strobe_1),
    .io_memory_bundle_write_strobe_2(cpu_io_memory_bundle_write_strobe_2),
    .io_memory_bundle_write_strobe_3(cpu_io_memory_bundle_write_strobe_3),
    .io_memory_bundle_read_data(cpu_io_memory_bundle_read_data),
    .io_instruction_valid(cpu_io_instruction_valid),
    .io_debug_read_address(cpu_io_debug_read_address),
    .io_debug_read_data(cpu_io_debug_read_data)
  );
  assign io_instruction_address = cpu_io_instruction_address; // @[0-minimal/src/main/scala/board/Top.scala 23:28]
  assign io_memory_bundle_address = cpu_io_memory_bundle_address; // @[0-minimal/src/main/scala/board/Top.scala 22:20]
  assign io_memory_bundle_write_data = cpu_io_memory_bundle_write_data; // @[0-minimal/src/main/scala/board/Top.scala 22:20]
  assign io_memory_bundle_write_enable = cpu_io_memory_bundle_write_enable; // @[0-minimal/src/main/scala/board/Top.scala 22:20]
  assign io_memory_bundle_write_strobe_0 = cpu_io_memory_bundle_write_strobe_0; // @[0-minimal/src/main/scala/board/Top.scala 22:20]
  assign io_memory_bundle_write_strobe_1 = cpu_io_memory_bundle_write_strobe_1; // @[0-minimal/src/main/scala/board/Top.scala 22:20]
  assign io_memory_bundle_write_strobe_2 = cpu_io_memory_bundle_write_strobe_2; // @[0-minimal/src/main/scala/board/Top.scala 22:20]
  assign io_memory_bundle_write_strobe_3 = cpu_io_memory_bundle_write_strobe_3; // @[0-minimal/src/main/scala/board/Top.scala 22:20]
  assign io_debug_read_data = cpu_io_debug_read_data; // @[0-minimal/src/main/scala/board/Top.scala 19:29]
  assign cpu_clock = clock;
  assign cpu_reset = reset;
  assign cpu_io_instruction = io_instruction; // @[0-minimal/src/main/scala/board/Top.scala 24:28]
  assign cpu_io_memory_bundle_read_data = io_memory_bundle_read_data; // @[0-minimal/src/main/scala/board/Top.scala 22:20]
  assign cpu_io_instruction_valid = io_instruction_valid; // @[0-minimal/src/main/scala/board/Top.scala 25:28]
  assign cpu_io_debug_read_address = io_debug_read_address; // @[0-minimal/src/main/scala/board/Top.scala 18:29]
endmodule
