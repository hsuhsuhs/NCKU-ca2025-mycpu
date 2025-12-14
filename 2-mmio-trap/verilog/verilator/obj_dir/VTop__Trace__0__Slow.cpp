// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTop__Syms.h"


VL_ATTR_COLD void VTop___024root__trace_init_sub__TOP__0(VTop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_init_sub__TOP__0\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("$rootio", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+230,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+231,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+232,0,"io_instruction_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+233,0,"io_instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+234,0,"io_instruction_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+235,0,"io_interrupt_flag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+236,0,"io_memory_bundle_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+237,0,"io_memory_bundle_write_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+238,0,"io_memory_bundle_write_enable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+239,0,"io_memory_bundle_write_strobe_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+240,0,"io_memory_bundle_write_strobe_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+241,0,"io_memory_bundle_write_strobe_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+242,0,"io_memory_bundle_write_strobe_3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+243,0,"io_memory_bundle_read_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+244,0,"io_deviceSelect",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+245,0,"io_regs_debug_read_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+246,0,"io_regs_debug_read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+247,0,"io_csr_regs_debug_read_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+248,0,"io_csr_regs_debug_read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+249,0,"io_vga_pixclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+250,0,"io_vga_hsync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+251,0,"io_vga_vsync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+252,0,"io_vga_rrggbb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+253,0,"io_vga_activevideo",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+254,0,"io_vga_x_pos",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+255,0,"io_vga_y_pos",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->popPrefix();
    tracep->pushPrefix("Top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+230,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+231,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+232,0,"io_instruction_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+233,0,"io_instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+234,0,"io_instruction_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+235,0,"io_interrupt_flag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+236,0,"io_memory_bundle_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+237,0,"io_memory_bundle_write_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+238,0,"io_memory_bundle_write_enable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+239,0,"io_memory_bundle_write_strobe_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+240,0,"io_memory_bundle_write_strobe_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+241,0,"io_memory_bundle_write_strobe_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+242,0,"io_memory_bundle_write_strobe_3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+243,0,"io_memory_bundle_read_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+244,0,"io_deviceSelect",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+245,0,"io_regs_debug_read_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+246,0,"io_regs_debug_read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+247,0,"io_csr_regs_debug_read_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+248,0,"io_csr_regs_debug_read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+249,0,"io_vga_pixclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+250,0,"io_vga_hsync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+251,0,"io_vga_vsync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+252,0,"io_vga_rrggbb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+253,0,"io_vga_activevideo",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+254,0,"io_vga_x_pos",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+255,0,"io_vga_y_pos",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+230,0,"cpu_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+231,0,"cpu_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+146,0,"cpu_io_instruction_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+233,0,"cpu_io_instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+234,0,"cpu_io_instruction_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+235,0,"cpu_io_interrupt_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+236,0,"cpu_io_memory_bundle_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+237,0,"cpu_io_memory_bundle_write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+238,0,"cpu_io_memory_bundle_write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+239,0,"cpu_io_memory_bundle_write_strobe_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+240,0,"cpu_io_memory_bundle_write_strobe_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+241,0,"cpu_io_memory_bundle_write_strobe_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+242,0,"cpu_io_memory_bundle_write_strobe_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+61,0,"cpu_io_memory_bundle_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+244,0,"cpu_io_deviceSelect",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+245,0,"cpu_io_regs_debug_read_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+246,0,"cpu_io_regs_debug_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+247,0,"cpu_io_csr_regs_debug_read_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+248,0,"cpu_io_csr_regs_debug_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+230,0,"vga_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+231,0,"vga_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+236,0,"vga_io_bundle_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+237,0,"vga_io_bundle_write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+62,0,"vga_io_bundle_write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+63,0,"vga_io_bundle_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+249,0,"vga_io_pixClock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"vga_io_hsync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"vga_io_vsync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+252,0,"vga_io_rrggbb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+253,0,"vga_io_activevideo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+81,0,"vga_io_x_pos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+82,0,"vga_io_y_pos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->pushPrefix("cpu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+230,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+231,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+146,0,"io_instruction_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+233,0,"io_instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+234,0,"io_instruction_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+235,0,"io_interrupt_flag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+236,0,"io_memory_bundle_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+237,0,"io_memory_bundle_write_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+238,0,"io_memory_bundle_write_enable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+239,0,"io_memory_bundle_write_strobe_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+240,0,"io_memory_bundle_write_strobe_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+241,0,"io_memory_bundle_write_strobe_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+242,0,"io_memory_bundle_write_strobe_3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+61,0,"io_memory_bundle_read_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+244,0,"io_deviceSelect",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+245,0,"io_regs_debug_read_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+246,0,"io_regs_debug_read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+247,0,"io_csr_regs_debug_read_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+248,0,"io_csr_regs_debug_read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+230,0,"regs_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+231,0,"regs_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"regs_io_write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"regs_io_write_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+64,0,"regs_io_write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"regs_io_read_address1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+5,0,"regs_io_read_address2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+42,0,"regs_io_read_data1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+43,0,"regs_io_read_data2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+245,0,"regs_io_debug_read_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+246,0,"regs_io_debug_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+230,0,"inst_fetch_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+231,0,"inst_fetch_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"inst_fetch_io_jump_flag_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+45,0,"inst_fetch_io_jump_address_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+46,0,"inst_fetch_io_interrupt_assert",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"inst_fetch_io_interrupt_handler_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+233,0,"inst_fetch_io_instruction_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+234,0,"inst_fetch_io_instruction_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+146,0,"inst_fetch_io_instruction_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"inst_fetch_io_instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"id_io_instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"id_io_regs_reg1_read_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+5,0,"id_io_regs_reg2_read_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+7,0,"id_io_ex_immediate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+8,0,"id_io_ex_aluop1_source",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"id_io_ex_aluop2_source",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"id_io_memory_read_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"id_io_memory_write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"id_io_wb_reg_write_source",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+2,0,"id_io_reg_write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"id_io_reg_write_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+13,0,"id_io_csr_reg_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+14,0,"id_io_csr_reg_write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"ex_io_instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+146,0,"ex_io_instruction_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"ex_io_reg1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+43,0,"ex_io_reg2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"ex_io_immediate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+8,0,"ex_io_aluop1_source",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"ex_io_aluop2_source",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+48,0,"ex_io_csr_reg_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"ex_io_mem_alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"ex_io_csr_reg_write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+44,0,"ex_io_if_jump_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+45,0,"ex_io_if_jump_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"mem_io_alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+43,0,"mem_io_reg2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+10,0,"mem_io_memory_read_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"mem_io_memory_write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+15,0,"mem_io_funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+66,0,"mem_io_wb_memory_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"mem_io_memory_bundle_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+237,0,"mem_io_memory_bundle_write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+238,0,"mem_io_memory_bundle_write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+239,0,"mem_io_memory_bundle_write_strobe_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+240,0,"mem_io_memory_bundle_write_strobe_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+241,0,"mem_io_memory_bundle_write_strobe_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+242,0,"mem_io_memory_bundle_write_strobe_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+61,0,"mem_io_memory_bundle_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+146,0,"wb_io_instruction_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"wb_io_alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"wb_io_memory_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"wb_io_csr_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"wb_io_regs_write_source",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+64,0,"wb_io_regs_write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+230,0,"csr_regs_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+231,0,"csr_regs_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"csr_regs_io_reg_read_address_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+14,0,"csr_regs_io_reg_write_enable_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"csr_regs_io_reg_write_address_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+49,0,"csr_regs_io_reg_write_data_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+247,0,"csr_regs_io_debug_reg_read_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+248,0,"csr_regs_io_debug_reg_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"csr_regs_io_reg_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+147,0,"csr_regs_io_clint_access_bundle_mstatus",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+148,0,"csr_regs_io_clint_access_bundle_mepc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+149,0,"csr_regs_io_clint_access_bundle_mcause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+150,0,"csr_regs_io_clint_access_bundle_mtvec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+151,0,"csr_regs_io_clint_access_bundle_mie",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+50,0,"csr_regs_io_clint_access_bundle_mstatus_write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"csr_regs_io_clint_access_bundle_mepc_write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+256,0,"csr_regs_io_clint_access_bundle_mcause_write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+46,0,"csr_regs_io_clint_access_bundle_direct_write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+235,0,"clint_io_interrupt_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"clint_io_instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+146,0,"clint_io_instruction_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+44,0,"clint_io_jump_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+45,0,"clint_io_jump_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"clint_io_interrupt_handler_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+46,0,"clint_io_interrupt_assert",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+147,0,"clint_io_csr_bundle_mstatus",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+148,0,"clint_io_csr_bundle_mepc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+149,0,"clint_io_csr_bundle_mcause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+150,0,"clint_io_csr_bundle_mtvec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+151,0,"clint_io_csr_bundle_mie",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+50,0,"clint_io_csr_bundle_mstatus_write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"clint_io_csr_bundle_mepc_write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+256,0,"clint_io_csr_bundle_mcause_write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+46,0,"clint_io_csr_bundle_direct_write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("clint", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+235,0,"io_interrupt_flag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"io_instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+146,0,"io_instruction_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+44,0,"io_jump_flag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+45,0,"io_jump_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"io_interrupt_handler_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+46,0,"io_interrupt_assert",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+147,0,"io_csr_bundle_mstatus",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+148,0,"io_csr_bundle_mepc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+149,0,"io_csr_bundle_mcause",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+150,0,"io_csr_bundle_mtvec",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+151,0,"io_csr_bundle_mie",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+50,0,"io_csr_bundle_mstatus_write_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"io_csr_bundle_mepc_write_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+256,0,"io_csr_bundle_mcause_write_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+46,0,"io_csr_bundle_direct_write_enable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"interrupt_enable_global",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"interrupt_enable_timer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"interrupt_enable_external",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+52,0,"instruction_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+155,0,"mpie",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"interrupt_source_enabled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("csr_regs", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+230,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+231,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"io_reg_read_address_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+14,0,"io_reg_write_enable_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"io_reg_write_address_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+49,0,"io_reg_write_data_ex",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+247,0,"io_debug_reg_read_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+248,0,"io_debug_reg_read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"io_reg_read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+147,0,"io_clint_access_bundle_mstatus",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+148,0,"io_clint_access_bundle_mepc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+149,0,"io_clint_access_bundle_mcause",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+150,0,"io_clint_access_bundle_mtvec",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+151,0,"io_clint_access_bundle_mie",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+50,0,"io_clint_access_bundle_mstatus_write_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"io_clint_access_bundle_mepc_write_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+256,0,"io_clint_access_bundle_mcause_write_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+46,0,"io_clint_access_bundle_direct_write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+147,0,"mstatus",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+151,0,"mie",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+150,0,"mtvec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+156,0,"mscratch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+148,0,"mepc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+149,0,"mcause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+157,0,"cycles",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("ex", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+6,0,"io_instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+146,0,"io_instruction_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"io_reg1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+43,0,"io_reg2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"io_immediate",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+8,0,"io_aluop1_source",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"io_aluop2_source",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+48,0,"io_csr_reg_read_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"io_mem_alu_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"io_csr_reg_write_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+44,0,"io_if_jump_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+45,0,"io_if_jump_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"alu_io_func",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+53,0,"alu_io_op1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+54,0,"alu_io_op2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"alu_io_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"alu_ctrl_io_opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+15,0,"alu_ctrl_io_funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+18,0,"alu_ctrl_io_funct7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+16,0,"alu_ctrl_io_alu_funct",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+17,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+15,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+19,0,"csrSourceImmediate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,0,"csrSource",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+56,0,"branchCondition",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"isBranch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"isJal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"isJalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+57,0,"branchTarget",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"jalrSum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"jalrTarget",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+60,0,"branchTaken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("alu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+16,0,"io_func",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+53,0,"io_op1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+54,0,"io_op2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"io_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("alu_ctrl", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+17,0,"io_opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+15,0,"io_funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+18,0,"io_funct7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+16,0,"io_alu_funct",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+23,0,"funct7_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("id", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+6,0,"io_instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"io_regs_reg1_read_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+5,0,"io_regs_reg2_read_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+7,0,"io_ex_immediate",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+8,0,"io_ex_aluop1_source",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"io_ex_aluop2_source",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"io_memory_read_enable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"io_memory_write_enable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"io_wb_reg_write_source",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+2,0,"io_reg_write_enable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"io_reg_write_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+13,0,"io_csr_reg_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+14,0,"io_csr_reg_write_enable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+15,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+24,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+25,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+3,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+10,0,"isLoad",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"isStore",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"isOpImm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"isOp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"isLui",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"isAuipc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"isJal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"isJalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"isBranch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"isSystem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"isCsr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"csrImmIsZero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"csrUsesImmediate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"csrSourceZero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"usesRs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"usesRs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"immKind",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+37,0,"immI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"immS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"immB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"immU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"immJ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("inst_fetch", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+230,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+231,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"io_jump_flag_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+45,0,"io_jump_address_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+46,0,"io_interrupt_assert",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"io_interrupt_handler_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+233,0,"io_instruction_read_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+234,0,"io_instruction_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+146,0,"io_instruction_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"io_instruction",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+146,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+159,0,"next_pc_sequential",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+65,0,"io_alu_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+43,0,"io_reg2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+10,0,"io_memory_read_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"io_memory_write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+15,0,"io_funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+66,0,"io_wb_memory_read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"io_memory_bundle_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+237,0,"io_memory_bundle_write_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+238,0,"io_memory_bundle_write_enable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+239,0,"io_memory_bundle_write_strobe_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+240,0,"io_memory_bundle_write_strobe_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+241,0,"io_memory_bundle_write_strobe_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+242,0,"io_memory_bundle_write_strobe_3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+61,0,"io_memory_bundle_read_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"mem_address_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("regs", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+230,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+231,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"io_write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"io_write_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+64,0,"io_write_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,0,"io_read_address1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+5,0,"io_read_address2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+42,0,"io_read_data1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+43,0,"io_read_data2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+245,0,"io_debug_read_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+246,0,"io_debug_read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+160,0,"registers_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+161,0,"registers_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+162,0,"registers_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+163,0,"registers_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+164,0,"registers_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+165,0,"registers_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+166,0,"registers_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+167,0,"registers_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+168,0,"registers_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+169,0,"registers_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+170,0,"registers_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+171,0,"registers_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+172,0,"registers_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+173,0,"registers_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+174,0,"registers_14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+175,0,"registers_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+176,0,"registers_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+177,0,"registers_17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+178,0,"registers_18",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+179,0,"registers_19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+180,0,"registers_20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+181,0,"registers_21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+182,0,"registers_22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+183,0,"registers_23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+184,0,"registers_24",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+185,0,"registers_25",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+186,0,"registers_26",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+187,0,"registers_27",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+188,0,"registers_28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+189,0,"registers_29",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+190,0,"registers_30",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("wb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+146,0,"io_instruction_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"io_alu_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"io_memory_read_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"io_csr_read_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"io_regs_write_source",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+64,0,"io_regs_write_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("vga", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+230,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+231,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+236,0,"io_bundle_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+237,0,"io_bundle_write_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+62,0,"io_bundle_write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+63,0,"io_bundle_read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+249,0,"io_pixClock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"io_hsync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"io_vsync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+252,0,"io_rrggbb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+253,0,"io_activevideo",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+81,0,"io_x_pos",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+82,0,"io_y_pos",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+230,0,"framebuffer_clka",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"framebuffer_wea",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+69,0,"framebuffer_addra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+258,0,"framebuffer_dina",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+249,0,"framebuffer_clkb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+259,0,"framebuffer_addrb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+83,0,"framebuffer_doutb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+227,0,"ctrlReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"intrStatusReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+192,0,"uploadAddrReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+193,0,"paletteReg_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+194,0,"paletteReg_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+195,0,"paletteReg_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+196,0,"paletteReg_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+197,0,"paletteReg_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+198,0,"paletteReg_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+199,0,"paletteReg_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+200,0,"paletteReg_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+201,0,"paletteReg_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+202,0,"paletteReg_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+203,0,"paletteReg_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+204,0,"paletteReg_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+205,0,"paletteReg_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+206,0,"paletteReg_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+207,0,"paletteReg_14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+208,0,"paletteReg_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+228,0,"ctrl_frame_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+229,0,"ctrl_vblank_ie",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+209,0,"upload_pix_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+210,0,"upload_frame",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+70,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+71,0,"addr_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"addr_intr_status",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"addr_upload_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"addr_stream_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"addr_palette",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+76,0,"palette_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBit(c+211,0,"vblank_sync1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+212,0,"vblank_synced",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+213,0,"curr_frame_sync1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+214,0,"curr_frame_synced",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+215,0,"vblank_prev",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+216,0,"vblank_rising_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+77,0,"requested_frame",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+78,0,"display_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+217,0,"word_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+218,0,"frame_base",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+219,0,"fb_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+220,0,"next_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+221,0,"wrapped_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+84,0,"h_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+222,0,"v_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+85,0,"h_sync_pulse",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+223,0,"v_sync_pulse",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"hsync_d1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"vsync_d1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"io_hsync_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"io_vsync_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+88,0,"x_px",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+89,0,"y_px",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+90,0,"in_display_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"in_display_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+92,0,"rel_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+93,0,"rel_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+94,0,"frame_x_mult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+95,0,"frame_x_div",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+96,0,"frame_y_mult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+97,0,"frame_y_div",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+98,0,"frame_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+99,0,"frame_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+224,0,"curr_frame_sync1_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+225,0,"curr_frame",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+100,0,"display_enabled_sync1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"display_enabled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"blanking_sync1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"blanking",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+104,0,"palette_sync1_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+105,0,"palette_sync1_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+106,0,"palette_sync1_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+107,0,"palette_sync1_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+108,0,"palette_sync1_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+109,0,"palette_sync1_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+110,0,"palette_sync1_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+111,0,"palette_sync1_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+112,0,"palette_sync1_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+113,0,"palette_sync1_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+114,0,"palette_sync1_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+115,0,"palette_sync1_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+116,0,"palette_sync1_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+117,0,"palette_sync1_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+118,0,"palette_sync1_14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+119,0,"palette_sync1_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+120,0,"palette_sync_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+121,0,"palette_sync_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+122,0,"palette_sync_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+123,0,"palette_sync_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+124,0,"palette_sync_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+125,0,"palette_sync_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+126,0,"palette_sync_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+127,0,"palette_sync_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+128,0,"palette_sync_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+129,0,"palette_sync_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+130,0,"palette_sync_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+131,0,"palette_sync_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+132,0,"palette_sync_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+133,0,"palette_sync_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+134,0,"palette_sync_14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+135,0,"palette_sync_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+136,0,"in_display_d1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"h_active_d1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"v_active_d1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"h_active_d2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"v_active_d2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+141,0,"pixel_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+142,0,"word_offset_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+226,0,"frame_base_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+260,0,"fb_read_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+143,0,"pixel_in_word_d1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+144,0,"pixel_4bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+145,0,"output_color",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+81,0,"x_px_d1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+82,0,"y_px_d1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->pushPrefix("framebuffer", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+261,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+262,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+230,0,"clka",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"wea",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+69,0,"addra",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+258,0,"dina",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+249,0,"clkb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+259,0,"addrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+83,0,"doutb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VTop___024root__trace_init_top(VTop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_init_top\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VTop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VTop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VTop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VTop___024root__trace_register(VTop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_register\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&VTop___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&VTop___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&VTop___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&VTop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VTop___024root__trace_const_0_sub_0(VTop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_const_0\n"); );
    // Body
    VTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTop___024root*>(voidSelf);
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VTop___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTop___024root__trace_const_0_sub_0(VTop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_const_0_sub_0\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+261,(0x00001800U),32);
    bufp->fullIData(oldp+262,(0x0000000dU),32);
}

VL_ATTR_COLD void VTop___024root__trace_full_0_sub_0(VTop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_full_0\n"); );
    // Body
    VTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTop___024root*>(voidSelf);
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VTop___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTop___024root__trace_full_0_sub_0(VTop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_full_0_sub_0\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+1,(vlSelfRef.Top__DOT__vga__DOT__framebuffer__DOT__i),32);
    bufp->fullBit(oldp+2,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_write_enable));
    bufp->fullCData(oldp+3,((0x0000001fU & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                            >> 7U))),5);
    bufp->fullCData(oldp+4,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_address1),5);
    bufp->fullCData(oldp+5,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_address2),5);
    bufp->fullIData(oldp+6,(vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction),32);
    bufp->fullIData(oldp+7,(vlSelfRef.Top__DOT__cpu__DOT__id__DOT__io_ex_immediate),32);
    bufp->fullBit(oldp+8,(((0x63U == (0x0000007fU & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)) 
                           | ((0x17U == (0x0000007fU 
                                         & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)) 
                              | (0x6fU == (0x0000007fU 
                                           & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction))))));
    bufp->fullBit(oldp+9,(((IData)(vlSelfRef.Top__DOT__cpu__DOT__id__DOT___usesRs1_T_1) 
                           | ((0x63U == (0x0000007fU 
                                         & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)) 
                              | ((IData)(vlSelfRef.Top__DOT__cpu__DOT__id__DOT____VdfgRegularize_h38ccc7c7_0_1) 
                                 | (IData)(vlSelfRef.Top__DOT__cpu__DOT__id__DOT____VdfgRegularize_h38ccc7c7_0_0))))));
    bufp->fullBit(oldp+10,((3U == (0x0000007fU & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction))));
    bufp->fullBit(oldp+11,((0x23U == (0x0000007fU & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction))));
    bufp->fullCData(oldp+12,(vlSelfRef.Top__DOT__cpu__DOT__id__DOT__io_wb_reg_write_source),2);
    bufp->fullSData(oldp+13,((vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                              >> 0x00000014U)),12);
    bufp->fullBit(oldp+14,(vlSelfRef.Top__DOT__cpu__DOT__id__DOT__io_csr_reg_write_enable));
    bufp->fullCData(oldp+15,((7U & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                    >> 0x0000000cU))),3);
    bufp->fullCData(oldp+16,(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT__io_func),4);
    bufp->fullCData(oldp+17,((0x0000007fU & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)),7);
    bufp->fullCData(oldp+18,((vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                              >> 0x00000019U)),7);
    bufp->fullIData(oldp+19,((0x0000001fU & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                             >> 0x0000000fU))),32);
    bufp->fullBit(oldp+20,((0x63U == (0x0000007fU & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction))));
    bufp->fullBit(oldp+21,((0x6fU == (0x0000007fU & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction))));
    bufp->fullBit(oldp+22,((0x67U == (0x0000007fU & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction))));
    bufp->fullBit(oldp+23,((1U & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                  >> 0x0000001eU))));
    bufp->fullCData(oldp+24,((0x0000001fU & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                             >> 0x0000000fU))),5);
    bufp->fullCData(oldp+25,((0x0000001fU & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                             >> 0x00000014U))),5);
    bufp->fullBit(oldp+26,((0x13U == (0x0000007fU & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction))));
    bufp->fullBit(oldp+27,((0x33U == (0x0000007fU & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction))));
    bufp->fullBit(oldp+28,((0x37U == (0x0000007fU & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction))));
    bufp->fullBit(oldp+29,((0x17U == (0x0000007fU & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction))));
    bufp->fullBit(oldp+30,((0x73U == (0x0000007fU & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction))));
    bufp->fullBit(oldp+31,(vlSelfRef.Top__DOT__cpu__DOT__id__DOT__isCsr));
    bufp->fullBit(oldp+32,((0U == (0x0000001fU & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                                  >> 0x0000000fU)))));
    bufp->fullBit(oldp+33,(((vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                             >> 0x0000000eU) & (IData)(vlSelfRef.Top__DOT__cpu__DOT__id__DOT__isCsr))));
    bufp->fullBit(oldp+34,(((IData)(vlSelfRef.Top__DOT__cpu__DOT__id__DOT___usesRs1_T_1) 
                            | ((IData)(vlSelfRef.Top__DOT__cpu__DOT__id__DOT____VdfgRegularize_h38ccc7c7_0_2) 
                               | ((0x67U == (0x0000007fU 
                                             & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)) 
                                  | ((~ ((vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                          >> 0x0000000eU) 
                                         & (IData)(vlSelfRef.Top__DOT__cpu__DOT__id__DOT__isCsr))) 
                                     & (IData)(vlSelfRef.Top__DOT__cpu__DOT__id__DOT__isCsr)))))));
    bufp->fullBit(oldp+35,(((0x23U == (0x0000007fU 
                                       & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)) 
                            | (IData)(vlSelfRef.Top__DOT__cpu__DOT__id__DOT____VdfgRegularize_h38ccc7c7_0_2))));
    bufp->fullCData(oldp+36,(vlSelfRef.Top__DOT__cpu__DOT__id__DOT__immKind),3);
    bufp->fullIData(oldp+37,(((((vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                 >> 0x0000001fU) ? 0x000fffffU
                                 : 0U) << 0x0000000cU) 
                              | (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                 >> 0x00000014U))),32);
    bufp->fullIData(oldp+38,(((((vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                 >> 0x0000001fU) ? 0x000fffffU
                                 : 0U) << 0x0000000cU) 
                              | ((0x00000fe0U & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                                 >> 0x00000014U)) 
                                 | (0x0000001fU & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                                   >> 7U))))),32);
    bufp->fullIData(oldp+39,(((((vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                 >> 0x0000001fU) ? 0x0007ffffU
                                 : 0U) << 0x0000000dU) 
                              | ((((2U & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                          >> 0x0000001eU)) 
                                   | (1U & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                            >> 7U))) 
                                  << 0x0000000bU) | 
                                 ((0x000007e0U & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                                  >> 0x00000014U)) 
                                  | (0x0000001eU & 
                                     (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                      >> 7U)))))),32);
    bufp->fullIData(oldp+40,((0xfffff000U & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)),32);
    bufp->fullIData(oldp+41,((((((vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                  >> 0x0000001fU) ? 0x07ffU
                                  : 0U) << 0x00000015U) 
                               | (0x00100000U & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                                 >> 0x0000000bU))) 
                              | ((((0x000001feU & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                                   >> 0x0000000bU)) 
                                   | (1U & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                            >> 0x00000014U))) 
                                  << 0x0000000bU) | 
                                 (0x000007feU & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                                 >> 0x00000014U))))),32);
    bufp->fullIData(oldp+42,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_data1),32);
    bufp->fullIData(oldp+43,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_data2),32);
    bufp->fullBit(oldp+44,(vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_jump_flag_id));
    bufp->fullIData(oldp+45,(vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_jump_address_id),32);
    bufp->fullBit(oldp+46,(vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_interrupt_assert));
    bufp->fullIData(oldp+47,(((IData)(vlSelfRef.Top__DOT__cpu__DOT__clint__DOT____VdfgRegularize_h7f74ecf3_0_3)
                               ? vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mtvec
                               : ((IData)(vlSelfRef.Top__DOT__cpu__DOT__clint__DOT____VdfgRegularize_h7f74ecf3_0_2)
                                   ? vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mtvec
                                   : ((0x30200073U 
                                       == vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)
                                       ? vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mepc
                                       : vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mtvec)))),32);
    bufp->fullIData(oldp+48,(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__io_csr_reg_read_data),32);
    bufp->fullIData(oldp+49,(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__io_csr_reg_write_data),32);
    bufp->fullIData(oldp+50,(((IData)(vlSelfRef.Top__DOT__cpu__DOT__clint__DOT____VdfgRegularize_h7f74ecf3_0_3)
                               ? vlSelfRef.Top__DOT__cpu__DOT__clint__DOT___io_csr_bundle_mstatus_write_data_T_4
                               : ((IData)(vlSelfRef.Top__DOT__cpu__DOT__clint__DOT____VdfgRegularize_h7f74ecf3_0_2)
                                   ? vlSelfRef.Top__DOT__cpu__DOT__clint__DOT___io_csr_bundle_mstatus_write_data_T_4
                                   : ((0x30200073U 
                                       == vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)
                                       ? (0x00001880U 
                                          | ((0xffffe000U 
                                              & vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mstatus) 
                                             | ((0x00000700U 
                                                 & vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mstatus) 
                                                | ((0x00000070U 
                                                    & vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mstatus) 
                                                   | ((8U 
                                                       & (vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mstatus 
                                                          >> 4U)) 
                                                      | (7U 
                                                         & vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mstatus))))))
                                       : vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mstatus)))),32);
    bufp->fullIData(oldp+51,(((IData)(vlSelfRef.Top__DOT__cpu__DOT__clint__DOT____VdfgRegularize_h7f74ecf3_0_3)
                               ? vlSelfRef.Top__DOT__cpu__DOT__clint__DOT__instruction_address
                               : ((IData)(vlSelfRef.Top__DOT__cpu__DOT__clint__DOT____VdfgRegularize_h7f74ecf3_0_2)
                                   ? vlSelfRef.Top__DOT__cpu__DOT__clint__DOT__instruction_address
                                   : vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mepc))),32);
    bufp->fullIData(oldp+52,(vlSelfRef.Top__DOT__cpu__DOT__clint__DOT__instruction_address),32);
    bufp->fullIData(oldp+53,(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT__io_op1),32);
    bufp->fullIData(oldp+54,(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT__io_op2),32);
    bufp->fullIData(oldp+55,(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__csrSource),32);
    bufp->fullBit(oldp+56,(((7U == (7U & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                          >> 0x0000000cU)))
                             ? (vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_data1 
                                >= vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_data2)
                             : ((6U == (7U & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                              >> 0x0000000cU)))
                                 ? (vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_data1 
                                    < vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_data2)
                                 : ((5U == (7U & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                                  >> 0x0000000cU)))
                                     ? VL_GTES_III(32, vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_data1, vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_data2)
                                     : ((4U == (7U 
                                                & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                                   >> 0x0000000cU)))
                                         ? VL_LTS_III(32, vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_data1, vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_data2)
                                         : ((1U == 
                                             (7U & 
                                              (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                               >> 0x0000000cU)))
                                             ? (vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_data1 
                                                != vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_data2)
                                             : (IData)(
                                                       ((0U 
                                                         == 
                                                         (0x00007000U 
                                                          & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)) 
                                                        & (vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_data1 
                                                           == vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_data2))))))))));
    bufp->fullIData(oldp+57,((vlSelfRef.Top__DOT__cpu__DOT__id__DOT__io_ex_immediate 
                              + vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__pc)),32);
    bufp->fullIData(oldp+58,((vlSelfRef.Top__DOT__cpu__DOT__id__DOT__io_ex_immediate 
                              + vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_data1)),32);
    bufp->fullIData(oldp+59,((0xfffffffeU & (vlSelfRef.Top__DOT__cpu__DOT__id__DOT__io_ex_immediate 
                                             + vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_data1))),32);
    bufp->fullBit(oldp+60,(((0x63U == (0x0000007fU 
                                       & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)) 
                            & ((7U == (7U & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                             >> 0x0000000cU)))
                                ? (vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_data1 
                                   >= vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_data2)
                                : ((6U == (7U & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                                 >> 0x0000000cU)))
                                    ? (vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_data1 
                                       < vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_data2)
                                    : ((5U == (7U & 
                                               (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                                >> 0x0000000cU)))
                                        ? VL_GTES_III(32, vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_data1, vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_data2)
                                        : ((4U == (7U 
                                                   & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                                      >> 0x0000000cU)))
                                            ? VL_LTS_III(32, vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_data1, vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_data2)
                                            : ((1U 
                                                == 
                                                (7U 
                                                 & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                                    >> 0x0000000cU)))
                                                ? (vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_data1 
                                                   != vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_data2)
                                                : (IData)(
                                                          ((0U 
                                                            == 
                                                            (0x00007000U 
                                                             & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)) 
                                                           & (vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_data1 
                                                              == vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_data2)))))))))));
    bufp->fullIData(oldp+61,(vlSelfRef.Top__DOT__cpu__DOT__mem__DOT__io_memory_bundle_read_data),32);
    bufp->fullBit(oldp+62,(vlSelfRef.Top__DOT__vga__DOT__io_bundle_write_enable));
    bufp->fullIData(oldp+63,(vlSelfRef.Top__DOT__vga__DOT__io_bundle_read_data),32);
    bufp->fullIData(oldp+64,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_write_data),32);
    bufp->fullIData(oldp+65,((IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)),32);
    bufp->fullIData(oldp+66,(vlSelfRef.Top__DOT__cpu__DOT__mem__DOT__io_wb_memory_read_data),32);
    bufp->fullCData(oldp+67,((3U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9))),2);
    bufp->fullBit(oldp+68,(((IData)(vlSelfRef.Top__DOT__vga__DOT__io_bundle_write_enable) 
                            & ((4U != (0x000000ffU 
                                       & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9))) 
                               & ((0x0000000cU != (0x000000ffU 
                                                   & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9))) 
                                  & ((0x00000010U != 
                                      (0x000000ffU 
                                       & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9))) 
                                     & (0x00000014U 
                                        == (0x000000ffU 
                                            & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))))))));
    bufp->fullSData(oldp+69,(vlSelfRef.Top__DOT__vga__DOT__framebuffer_addra),13);
    bufp->fullIData(oldp+70,((0x000000ffU & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9))),32);
    bufp->fullBit(oldp+71,((4U == (0x000000ffU & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))));
    bufp->fullBit(oldp+72,((0x0000000cU == (0x000000ffU 
                                            & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))));
    bufp->fullBit(oldp+73,((0x00000010U == (0x000000ffU 
                                            & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))));
    bufp->fullBit(oldp+74,((0x00000014U == (0x000000ffU 
                                            & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))));
    bufp->fullBit(oldp+75,(vlSelfRef.Top__DOT__vga__DOT__addr_palette));
    bufp->fullIData(oldp+76,((((0x000000ffU & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)) 
                               - (IData)(0x00000020U)) 
                              >> 2U)),30);
    bufp->fullCData(oldp+77,((0x0000000fU & (IData)(
                                                    (vlSelfRef.Top__DOT__cpu__DOT__mem__DOT___GEN_30 
                                                     >> 4U)))),4);
    bufp->fullBit(oldp+78,((1U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__mem__DOT___GEN_30))));
    bufp->fullBit(oldp+79,(vlSelfRef.Top__DOT__vga__DOT__io_hsync_REG));
    bufp->fullBit(oldp+80,(vlSelfRef.Top__DOT__vga__DOT__io_vsync_REG));
    bufp->fullSData(oldp+81,(vlSelfRef.Top__DOT__vga__DOT__x_px_d1),10);
    bufp->fullSData(oldp+82,(vlSelfRef.Top__DOT__vga__DOT__y_px_d1),10);
    bufp->fullIData(oldp+83,(vlSelfRef.Top__DOT__vga__DOT__framebuffer_doutb),32);
    bufp->fullSData(oldp+84,(vlSelfRef.Top__DOT__vga__DOT__h_count),10);
    bufp->fullBit(oldp+85,(((0x0298U <= (IData)(vlSelfRef.Top__DOT__vga__DOT__h_count)) 
                            & (0x02c0U > (IData)(vlSelfRef.Top__DOT__vga__DOT__h_count)))));
    bufp->fullBit(oldp+86,(vlSelfRef.Top__DOT__vga__DOT__hsync_d1));
    bufp->fullBit(oldp+87,(vlSelfRef.Top__DOT__vga__DOT__vsync_d1));
    bufp->fullSData(oldp+88,(vlSelfRef.Top__DOT__vga__DOT__x_px),10);
    bufp->fullSData(oldp+89,(vlSelfRef.Top__DOT__vga__DOT__y_px),10);
    bufp->fullBit(oldp+90,(((0x0080U <= (IData)(vlSelfRef.Top__DOT__vga__DOT__x_px)) 
                            & (0x0200U > (IData)(vlSelfRef.Top__DOT__vga__DOT__x_px)))));
    bufp->fullBit(oldp+91,(((0x0030U <= (IData)(vlSelfRef.Top__DOT__vga__DOT__y_px)) 
                            & (0x01b0U > (IData)(vlSelfRef.Top__DOT__vga__DOT__y_px)))));
    bufp->fullSData(oldp+92,(vlSelfRef.Top__DOT__vga__DOT__rel_x),10);
    bufp->fullSData(oldp+93,(vlSelfRef.Top__DOT__vga__DOT__rel_y),10);
    bufp->fullIData(oldp+94,((0x00ffffffU & ((IData)(0x00002aabU) 
                                             * (IData)(vlSelfRef.Top__DOT__vga__DOT__rel_x)))),24);
    bufp->fullCData(oldp+95,((0x000000ffU & (((IData)(0x00002aabU) 
                                              * (IData)(vlSelfRef.Top__DOT__vga__DOT__rel_x)) 
                                             >> 0x00000010U))),8);
    bufp->fullIData(oldp+96,((0x00ffffffU & ((IData)(0x00002aabU) 
                                             * (IData)(vlSelfRef.Top__DOT__vga__DOT__rel_y)))),24);
    bufp->fullCData(oldp+97,((0x000000ffU & (((IData)(0x00002aabU) 
                                              * (IData)(vlSelfRef.Top__DOT__vga__DOT__rel_y)) 
                                             >> 0x00000010U))),8);
    bufp->fullCData(oldp+98,(((0x40U <= (0x000000ffU 
                                         & (((IData)(0x00002aabU) 
                                             * (IData)(vlSelfRef.Top__DOT__vga__DOT__rel_x)) 
                                            >> 0x00000010U)))
                               ? 0x0000003fU : (0x0000003fU 
                                                & (((IData)(0x00002aabU) 
                                                    * (IData)(vlSelfRef.Top__DOT__vga__DOT__rel_x)) 
                                                   >> 0x00000010U)))),6);
    bufp->fullCData(oldp+99,(((0x40U <= (0x000000ffU 
                                         & (((IData)(0x00002aabU) 
                                             * (IData)(vlSelfRef.Top__DOT__vga__DOT__rel_y)) 
                                            >> 0x00000010U)))
                               ? 0x0000003fU : (0x0000003fU 
                                                & (((IData)(0x00002aabU) 
                                                    * (IData)(vlSelfRef.Top__DOT__vga__DOT__rel_y)) 
                                                   >> 0x00000010U)))),6);
    bufp->fullBit(oldp+100,(vlSelfRef.Top__DOT__vga__DOT__display_enabled_sync1));
    bufp->fullBit(oldp+101,(vlSelfRef.Top__DOT__vga__DOT__display_enabled));
    bufp->fullBit(oldp+102,(vlSelfRef.Top__DOT__vga__DOT__blanking_sync1));
    bufp->fullBit(oldp+103,(vlSelfRef.Top__DOT__vga__DOT__blanking));
    bufp->fullCData(oldp+104,(vlSelfRef.Top__DOT__vga__DOT__palette_sync1_0),6);
    bufp->fullCData(oldp+105,(vlSelfRef.Top__DOT__vga__DOT__palette_sync1_1),6);
    bufp->fullCData(oldp+106,(vlSelfRef.Top__DOT__vga__DOT__palette_sync1_2),6);
    bufp->fullCData(oldp+107,(vlSelfRef.Top__DOT__vga__DOT__palette_sync1_3),6);
    bufp->fullCData(oldp+108,(vlSelfRef.Top__DOT__vga__DOT__palette_sync1_4),6);
    bufp->fullCData(oldp+109,(vlSelfRef.Top__DOT__vga__DOT__palette_sync1_5),6);
    bufp->fullCData(oldp+110,(vlSelfRef.Top__DOT__vga__DOT__palette_sync1_6),6);
    bufp->fullCData(oldp+111,(vlSelfRef.Top__DOT__vga__DOT__palette_sync1_7),6);
    bufp->fullCData(oldp+112,(vlSelfRef.Top__DOT__vga__DOT__palette_sync1_8),6);
    bufp->fullCData(oldp+113,(vlSelfRef.Top__DOT__vga__DOT__palette_sync1_9),6);
    bufp->fullCData(oldp+114,(vlSelfRef.Top__DOT__vga__DOT__palette_sync1_10),6);
    bufp->fullCData(oldp+115,(vlSelfRef.Top__DOT__vga__DOT__palette_sync1_11),6);
    bufp->fullCData(oldp+116,(vlSelfRef.Top__DOT__vga__DOT__palette_sync1_12),6);
    bufp->fullCData(oldp+117,(vlSelfRef.Top__DOT__vga__DOT__palette_sync1_13),6);
    bufp->fullCData(oldp+118,(vlSelfRef.Top__DOT__vga__DOT__palette_sync1_14),6);
    bufp->fullCData(oldp+119,(vlSelfRef.Top__DOT__vga__DOT__palette_sync1_15),6);
    bufp->fullCData(oldp+120,(vlSelfRef.Top__DOT__vga__DOT__palette_sync_0),6);
    bufp->fullCData(oldp+121,(vlSelfRef.Top__DOT__vga__DOT__palette_sync_1),6);
    bufp->fullCData(oldp+122,(vlSelfRef.Top__DOT__vga__DOT__palette_sync_2),6);
    bufp->fullCData(oldp+123,(vlSelfRef.Top__DOT__vga__DOT__palette_sync_3),6);
    bufp->fullCData(oldp+124,(vlSelfRef.Top__DOT__vga__DOT__palette_sync_4),6);
    bufp->fullCData(oldp+125,(vlSelfRef.Top__DOT__vga__DOT__palette_sync_5),6);
    bufp->fullCData(oldp+126,(vlSelfRef.Top__DOT__vga__DOT__palette_sync_6),6);
    bufp->fullCData(oldp+127,(vlSelfRef.Top__DOT__vga__DOT__palette_sync_7),6);
    bufp->fullCData(oldp+128,(vlSelfRef.Top__DOT__vga__DOT__palette_sync_8),6);
    bufp->fullCData(oldp+129,(vlSelfRef.Top__DOT__vga__DOT__palette_sync_9),6);
    bufp->fullCData(oldp+130,(vlSelfRef.Top__DOT__vga__DOT__palette_sync_10),6);
    bufp->fullCData(oldp+131,(vlSelfRef.Top__DOT__vga__DOT__palette_sync_11),6);
    bufp->fullCData(oldp+132,(vlSelfRef.Top__DOT__vga__DOT__palette_sync_12),6);
    bufp->fullCData(oldp+133,(vlSelfRef.Top__DOT__vga__DOT__palette_sync_13),6);
    bufp->fullCData(oldp+134,(vlSelfRef.Top__DOT__vga__DOT__palette_sync_14),6);
    bufp->fullCData(oldp+135,(vlSelfRef.Top__DOT__vga__DOT__palette_sync_15),6);
    bufp->fullBit(oldp+136,(vlSelfRef.Top__DOT__vga__DOT__in_display_d1));
    bufp->fullBit(oldp+137,(vlSelfRef.Top__DOT__vga__DOT__h_active_d1));
    bufp->fullBit(oldp+138,(vlSelfRef.Top__DOT__vga__DOT__v_active_d1));
    bufp->fullBit(oldp+139,(vlSelfRef.Top__DOT__vga__DOT__h_active_d2));
    bufp->fullBit(oldp+140,(vlSelfRef.Top__DOT__vga__DOT__v_active_d2));
    bufp->fullSData(oldp+141,(vlSelfRef.Top__DOT__vga__DOT__pixel_idx),13);
    bufp->fullSData(oldp+142,((0x000003ffU & ((IData)(vlSelfRef.Top__DOT__vga__DOT__pixel_idx) 
                                              >> 3U))),10);
    bufp->fullCData(oldp+143,(vlSelfRef.Top__DOT__vga__DOT__pixel_in_word_d1),3);
    bufp->fullCData(oldp+144,(vlSelfRef.Top__DOT__vga__DOT__pixel_4bit),4);
    bufp->fullCData(oldp+145,(((IData)(vlSelfRef.Top__DOT__vga__DOT__blanking)
                                ? 0U : (((IData)(vlSelfRef.Top__DOT__vga__DOT__display_enabled) 
                                         & (IData)(vlSelfRef.Top__DOT__vga__DOT__in_display_d1))
                                         ? ((0x0fU 
                                             == (IData)(vlSelfRef.Top__DOT__vga__DOT__pixel_4bit))
                                             ? (IData)(vlSelfRef.Top__DOT__vga__DOT__palette_sync_15)
                                             : ((0x0eU 
                                                 == (IData)(vlSelfRef.Top__DOT__vga__DOT__pixel_4bit))
                                                 ? (IData)(vlSelfRef.Top__DOT__vga__DOT__palette_sync_14)
                                                 : 
                                                ((0x0dU 
                                                  == (IData)(vlSelfRef.Top__DOT__vga__DOT__pixel_4bit))
                                                  ? (IData)(vlSelfRef.Top__DOT__vga__DOT__palette_sync_13)
                                                  : 
                                                 ((0x0cU 
                                                   == (IData)(vlSelfRef.Top__DOT__vga__DOT__pixel_4bit))
                                                   ? (IData)(vlSelfRef.Top__DOT__vga__DOT__palette_sync_12)
                                                   : 
                                                  ((0x0bU 
                                                    == (IData)(vlSelfRef.Top__DOT__vga__DOT__pixel_4bit))
                                                    ? (IData)(vlSelfRef.Top__DOT__vga__DOT__palette_sync_11)
                                                    : 
                                                   ((0x0aU 
                                                     == (IData)(vlSelfRef.Top__DOT__vga__DOT__pixel_4bit))
                                                     ? (IData)(vlSelfRef.Top__DOT__vga__DOT__palette_sync_10)
                                                     : 
                                                    ((9U 
                                                      == (IData)(vlSelfRef.Top__DOT__vga__DOT__pixel_4bit))
                                                      ? (IData)(vlSelfRef.Top__DOT__vga__DOT__palette_sync_9)
                                                      : 
                                                     ((8U 
                                                       == (IData)(vlSelfRef.Top__DOT__vga__DOT__pixel_4bit))
                                                       ? (IData)(vlSelfRef.Top__DOT__vga__DOT__palette_sync_8)
                                                       : 
                                                      ((7U 
                                                        == (IData)(vlSelfRef.Top__DOT__vga__DOT__pixel_4bit))
                                                        ? (IData)(vlSelfRef.Top__DOT__vga__DOT__palette_sync_7)
                                                        : 
                                                       ((6U 
                                                         == (IData)(vlSelfRef.Top__DOT__vga__DOT__pixel_4bit))
                                                         ? (IData)(vlSelfRef.Top__DOT__vga__DOT__palette_sync_6)
                                                         : 
                                                        ((5U 
                                                          == (IData)(vlSelfRef.Top__DOT__vga__DOT__pixel_4bit))
                                                          ? (IData)(vlSelfRef.Top__DOT__vga__DOT__palette_sync_5)
                                                          : 
                                                         ((4U 
                                                           == (IData)(vlSelfRef.Top__DOT__vga__DOT__pixel_4bit))
                                                           ? (IData)(vlSelfRef.Top__DOT__vga__DOT__palette_sync_4)
                                                           : 
                                                          ((3U 
                                                            == (IData)(vlSelfRef.Top__DOT__vga__DOT__pixel_4bit))
                                                            ? (IData)(vlSelfRef.Top__DOT__vga__DOT__palette_sync_3)
                                                            : 
                                                           ((2U 
                                                             == (IData)(vlSelfRef.Top__DOT__vga__DOT__pixel_4bit))
                                                             ? (IData)(vlSelfRef.Top__DOT__vga__DOT__palette_sync_2)
                                                             : 
                                                            ((1U 
                                                              == (IData)(vlSelfRef.Top__DOT__vga__DOT__pixel_4bit))
                                                              ? (IData)(vlSelfRef.Top__DOT__vga__DOT__palette_sync_1)
                                                              : (IData)(vlSelfRef.Top__DOT__vga__DOT__palette_sync_0))))))))))))))))
                                         : 1U))),6);
    bufp->fullIData(oldp+146,(vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__pc),32);
    bufp->fullIData(oldp+147,(vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mstatus),32);
    bufp->fullIData(oldp+148,(vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mepc),32);
    bufp->fullIData(oldp+149,(vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mcause),32);
    bufp->fullIData(oldp+150,(vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mtvec),32);
    bufp->fullIData(oldp+151,(vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mie),32);
    bufp->fullBit(oldp+152,((1U & (vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mstatus 
                                   >> 3U))));
    bufp->fullBit(oldp+153,((1U & (vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mie 
                                   >> 7U))));
    bufp->fullBit(oldp+154,((1U & (vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mie 
                                   >> 0x0000000bU))));
    bufp->fullBit(oldp+155,((1U & (vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mstatus 
                                   >> 7U))));
    bufp->fullIData(oldp+156,(vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mscratch),32);
    bufp->fullQData(oldp+157,(vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__cycles),64);
    bufp->fullIData(oldp+159,(((IData)(4U) + vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__pc)),32);
    bufp->fullIData(oldp+160,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_0),32);
    bufp->fullIData(oldp+161,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_1),32);
    bufp->fullIData(oldp+162,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_2),32);
    bufp->fullIData(oldp+163,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_3),32);
    bufp->fullIData(oldp+164,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_4),32);
    bufp->fullIData(oldp+165,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_5),32);
    bufp->fullIData(oldp+166,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_6),32);
    bufp->fullIData(oldp+167,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_7),32);
    bufp->fullIData(oldp+168,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_8),32);
    bufp->fullIData(oldp+169,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_9),32);
    bufp->fullIData(oldp+170,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_10),32);
    bufp->fullIData(oldp+171,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_11),32);
    bufp->fullIData(oldp+172,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_12),32);
    bufp->fullIData(oldp+173,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_13),32);
    bufp->fullIData(oldp+174,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_14),32);
    bufp->fullIData(oldp+175,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_15),32);
    bufp->fullIData(oldp+176,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_16),32);
    bufp->fullIData(oldp+177,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_17),32);
    bufp->fullIData(oldp+178,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_18),32);
    bufp->fullIData(oldp+179,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_19),32);
    bufp->fullIData(oldp+180,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_20),32);
    bufp->fullIData(oldp+181,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_21),32);
    bufp->fullIData(oldp+182,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_22),32);
    bufp->fullIData(oldp+183,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_23),32);
    bufp->fullIData(oldp+184,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_24),32);
    bufp->fullIData(oldp+185,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_25),32);
    bufp->fullIData(oldp+186,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_26),32);
    bufp->fullIData(oldp+187,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_27),32);
    bufp->fullIData(oldp+188,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_28),32);
    bufp->fullIData(oldp+189,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_29),32);
    bufp->fullIData(oldp+190,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_30),32);
    bufp->fullIData(oldp+191,(vlSelfRef.Top__DOT__vga__DOT__intrStatusReg),32);
    bufp->fullIData(oldp+192,(vlSelfRef.Top__DOT__vga__DOT__uploadAddrReg),32);
    bufp->fullCData(oldp+193,(vlSelfRef.Top__DOT__vga__DOT__paletteReg_0),6);
    bufp->fullCData(oldp+194,(vlSelfRef.Top__DOT__vga__DOT__paletteReg_1),6);
    bufp->fullCData(oldp+195,(vlSelfRef.Top__DOT__vga__DOT__paletteReg_2),6);
    bufp->fullCData(oldp+196,(vlSelfRef.Top__DOT__vga__DOT__paletteReg_3),6);
    bufp->fullCData(oldp+197,(vlSelfRef.Top__DOT__vga__DOT__paletteReg_4),6);
    bufp->fullCData(oldp+198,(vlSelfRef.Top__DOT__vga__DOT__paletteReg_5),6);
    bufp->fullCData(oldp+199,(vlSelfRef.Top__DOT__vga__DOT__paletteReg_6),6);
    bufp->fullCData(oldp+200,(vlSelfRef.Top__DOT__vga__DOT__paletteReg_7),6);
    bufp->fullCData(oldp+201,(vlSelfRef.Top__DOT__vga__DOT__paletteReg_8),6);
    bufp->fullCData(oldp+202,(vlSelfRef.Top__DOT__vga__DOT__paletteReg_9),6);
    bufp->fullCData(oldp+203,(vlSelfRef.Top__DOT__vga__DOT__paletteReg_10),6);
    bufp->fullCData(oldp+204,(vlSelfRef.Top__DOT__vga__DOT__paletteReg_11),6);
    bufp->fullCData(oldp+205,(vlSelfRef.Top__DOT__vga__DOT__paletteReg_12),6);
    bufp->fullCData(oldp+206,(vlSelfRef.Top__DOT__vga__DOT__paletteReg_13),6);
    bufp->fullCData(oldp+207,(vlSelfRef.Top__DOT__vga__DOT__paletteReg_14),6);
    bufp->fullCData(oldp+208,(vlSelfRef.Top__DOT__vga__DOT__paletteReg_15),6);
    bufp->fullSData(oldp+209,((0x0000ffffU & vlSelfRef.Top__DOT__vga__DOT__uploadAddrReg)),16);
    bufp->fullCData(oldp+210,((0x0000000fU & (vlSelfRef.Top__DOT__vga__DOT__uploadAddrReg 
                                              >> 0x00000010U))),4);
    bufp->fullBit(oldp+211,(vlSelfRef.Top__DOT__vga__DOT__vblank_sync1));
    bufp->fullBit(oldp+212,(vlSelfRef.Top__DOT__vga__DOT__vblank_synced));
    bufp->fullCData(oldp+213,(vlSelfRef.Top__DOT__vga__DOT__curr_frame_sync1),4);
    bufp->fullCData(oldp+214,(vlSelfRef.Top__DOT__vga__DOT__curr_frame_synced),4);
    bufp->fullBit(oldp+215,(vlSelfRef.Top__DOT__vga__DOT__vblank_prev));
    bufp->fullBit(oldp+216,(((~ (IData)(vlSelfRef.Top__DOT__vga__DOT__vblank_prev)) 
                             & (IData)(vlSelfRef.Top__DOT__vga__DOT__vblank_synced))));
    bufp->fullSData(oldp+217,((0x00001fffU & (vlSelfRef.Top__DOT__vga__DOT__uploadAddrReg 
                                              >> 3U))),13);
    bufp->fullSData(oldp+218,((0x00003fffU & VL_SHIFTL_III(14,14,32, 
                                                           (0x0000000fU 
                                                            & (vlSelfRef.Top__DOT__vga__DOT__uploadAddrReg 
                                                               >> 0x00000010U)), 9U))),14);
    bufp->fullSData(oldp+219,((0x00003fffU & (VL_SHIFTL_III(14,14,32, 
                                                            (0x0000000fU 
                                                             & (vlSelfRef.Top__DOT__vga__DOT__uploadAddrReg 
                                                                >> 0x00000010U)), 9U) 
                                              + (0x00001fffU 
                                                 & (vlSelfRef.Top__DOT__vga__DOT__uploadAddrReg 
                                                    >> 3U))))),14);
    bufp->fullSData(oldp+220,((0x0000ffffU & ((IData)(8U) 
                                              + vlSelfRef.Top__DOT__vga__DOT__uploadAddrReg))),16);
    bufp->fullSData(oldp+221,(((0x1000U <= (0x0000ffffU 
                                            & ((IData)(8U) 
                                               + vlSelfRef.Top__DOT__vga__DOT__uploadAddrReg)))
                                ? 0U : (0x0000ffffU 
                                        & ((IData)(8U) 
                                           + vlSelfRef.Top__DOT__vga__DOT__uploadAddrReg)))),16);
    bufp->fullSData(oldp+222,(vlSelfRef.Top__DOT__vga__DOT__v_count),10);
    bufp->fullBit(oldp+223,(((0x01e9U <= (IData)(vlSelfRef.Top__DOT__vga__DOT__v_count)) 
                             & (0x01ecU > (IData)(vlSelfRef.Top__DOT__vga__DOT__v_count)))));
    bufp->fullCData(oldp+224,(vlSelfRef.Top__DOT__vga__DOT__curr_frame_sync1_1),4);
    bufp->fullCData(oldp+225,(vlSelfRef.Top__DOT__vga__DOT__curr_frame),4);
    bufp->fullSData(oldp+226,((0x00003fffU & VL_SHIFTL_III(14,14,32, (IData)(vlSelfRef.Top__DOT__vga__DOT__curr_frame), 9U))),14);
    bufp->fullIData(oldp+227,(vlSelfRef.Top__DOT__vga__DOT__ctrlReg),32);
    bufp->fullCData(oldp+228,((0x0000000fU & (vlSelfRef.Top__DOT__vga__DOT__ctrlReg 
                                              >> 4U))),4);
    bufp->fullBit(oldp+229,((1U & (vlSelfRef.Top__DOT__vga__DOT__ctrlReg 
                                   >> 8U))));
    bufp->fullBit(oldp+230,(vlSelfRef.clock));
    bufp->fullBit(oldp+231,(vlSelfRef.reset));
    bufp->fullIData(oldp+232,(vlSelfRef.io_instruction_address),32);
    bufp->fullIData(oldp+233,(vlSelfRef.io_instruction),32);
    bufp->fullBit(oldp+234,(vlSelfRef.io_instruction_valid));
    bufp->fullIData(oldp+235,(vlSelfRef.io_interrupt_flag),32);
    bufp->fullIData(oldp+236,(vlSelfRef.io_memory_bundle_address),32);
    bufp->fullIData(oldp+237,(vlSelfRef.io_memory_bundle_write_data),32);
    bufp->fullBit(oldp+238,(vlSelfRef.io_memory_bundle_write_enable));
    bufp->fullBit(oldp+239,(vlSelfRef.io_memory_bundle_write_strobe_0));
    bufp->fullBit(oldp+240,(vlSelfRef.io_memory_bundle_write_strobe_1));
    bufp->fullBit(oldp+241,(vlSelfRef.io_memory_bundle_write_strobe_2));
    bufp->fullBit(oldp+242,(vlSelfRef.io_memory_bundle_write_strobe_3));
    bufp->fullIData(oldp+243,(vlSelfRef.io_memory_bundle_read_data),32);
    bufp->fullCData(oldp+244,(vlSelfRef.io_deviceSelect),3);
    bufp->fullCData(oldp+245,(vlSelfRef.io_regs_debug_read_address),5);
    bufp->fullIData(oldp+246,(vlSelfRef.io_regs_debug_read_data),32);
    bufp->fullSData(oldp+247,(vlSelfRef.io_csr_regs_debug_read_address),12);
    bufp->fullIData(oldp+248,(vlSelfRef.io_csr_regs_debug_read_data),32);
    bufp->fullBit(oldp+249,(vlSelfRef.io_vga_pixclk));
    bufp->fullBit(oldp+250,(vlSelfRef.io_vga_hsync));
    bufp->fullBit(oldp+251,(vlSelfRef.io_vga_vsync));
    bufp->fullCData(oldp+252,(vlSelfRef.io_vga_rrggbb),6);
    bufp->fullBit(oldp+253,(vlSelfRef.io_vga_activevideo));
    bufp->fullSData(oldp+254,(vlSelfRef.io_vga_x_pos),10);
    bufp->fullSData(oldp+255,(vlSelfRef.io_vga_y_pos),10);
    bufp->fullIData(oldp+256,(((IData)(vlSelfRef.Top__DOT__cpu__DOT__clint__DOT____VdfgRegularize_h7f74ecf3_0_3)
                                ? (0x80000000U | ((1U 
                                                   == vlSelfRef.io_interrupt_flag)
                                                   ? 7U
                                                   : 0x0000000bU))
                                : ((IData)(vlSelfRef.Top__DOT__cpu__DOT__clint__DOT____VdfgRegularize_h7f74ecf3_0_2)
                                    ? ((0x00000073U 
                                        == vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)
                                        ? 0x0000000bU
                                        : ((0x00100073U 
                                            == vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)
                                            ? 3U : 0U))
                                    : vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mcause))),32);
    bufp->fullBit(oldp+257,((1U & ((1U == vlSelfRef.io_interrupt_flag)
                                    ? (vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mie 
                                       >> 7U) : (vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mie 
                                                 >> 0x0000000bU)))));
    bufp->fullIData(oldp+258,(((IData)(vlSelfRef.Top__DOT__vga__DOT__io_bundle_write_enable)
                                ? ((4U == (0x000000ffU 
                                           & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                    ? 0U : ((0x0000000cU 
                                             == (0x000000ffU 
                                                 & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                             ? 0U : 
                                            ((0x00000010U 
                                              == (0x000000ffU 
                                                  & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                              ? 0U : 
                                             ((0x00000014U 
                                               == (0x000000ffU 
                                                   & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                               ? vlSelfRef.io_memory_bundle_write_data
                                               : 0U))))
                                : 0U)),32);
    bufp->fullSData(oldp+259,((0x00001fffU & ((0x00003fffU 
                                               & VL_SHIFTL_III(14,14,32, (IData)(vlSelfRef.Top__DOT__vga__DOT__curr_frame), 9U)) 
                                              + (0x000003ffU 
                                                 & ((IData)(vlSelfRef.Top__DOT__vga__DOT__pixel_idx) 
                                                    >> 3U))))),13);
    bufp->fullSData(oldp+260,((0x00003fffU & (VL_SHIFTL_III(14,14,32, (IData)(vlSelfRef.Top__DOT__vga__DOT__curr_frame), 9U) 
                                              + (0x000003ffU 
                                                 & ((IData)(vlSelfRef.Top__DOT__vga__DOT__pixel_idx) 
                                                    >> 3U))))),14);
}
