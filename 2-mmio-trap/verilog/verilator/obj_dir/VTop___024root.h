// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class VTop__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(io_vga_pixclk,0,0);
        VL_IN8(reset,0,0);
        VL_IN8(io_instruction_valid,0,0);
        VL_OUT8(io_memory_bundle_write_enable,0,0);
        VL_OUT8(io_memory_bundle_write_strobe_0,0,0);
        VL_OUT8(io_memory_bundle_write_strobe_1,0,0);
        VL_OUT8(io_memory_bundle_write_strobe_2,0,0);
        VL_OUT8(io_memory_bundle_write_strobe_3,0,0);
        VL_OUT8(io_deviceSelect,2,0);
        VL_IN8(io_regs_debug_read_address,4,0);
        VL_OUT8(io_vga_hsync,0,0);
        VL_OUT8(io_vga_vsync,0,0);
        VL_OUT8(io_vga_rrggbb,5,0);
        VL_OUT8(io_vga_activevideo,0,0);
        CData/*0:0*/ Top__DOT__cpu__DOT__regs__DOT__io_write_enable;
        CData/*4:0*/ Top__DOT__cpu__DOT__regs__DOT__io_read_address1;
        CData/*4:0*/ Top__DOT__cpu__DOT__regs__DOT__io_read_address2;
        CData/*0:0*/ Top__DOT__cpu__DOT__inst_fetch__DOT__io_jump_flag_id;
        CData/*0:0*/ Top__DOT__cpu__DOT__inst_fetch__DOT__io_interrupt_assert;
        CData/*1:0*/ Top__DOT__cpu__DOT__id__DOT__io_wb_reg_write_source;
        CData/*0:0*/ Top__DOT__cpu__DOT__id__DOT__io_csr_reg_write_enable;
        CData/*0:0*/ Top__DOT__cpu__DOT__id__DOT__isCsr;
        CData/*0:0*/ Top__DOT__cpu__DOT__id__DOT___usesRs1_T_1;
        CData/*2:0*/ Top__DOT__cpu__DOT__id__DOT__immKind;
        CData/*0:0*/ Top__DOT__cpu__DOT__id__DOT____VdfgRegularize_h38ccc7c7_0_0;
        CData/*0:0*/ Top__DOT__cpu__DOT__id__DOT____VdfgRegularize_h38ccc7c7_0_1;
        CData/*0:0*/ Top__DOT__cpu__DOT__id__DOT____VdfgRegularize_h38ccc7c7_0_2;
        CData/*3:0*/ Top__DOT__cpu__DOT__ex__DOT__alu__DOT__io_func;
        CData/*0:0*/ Top__DOT__cpu__DOT__clint__DOT____VdfgRegularize_h7f74ecf3_0_2;
        CData/*0:0*/ Top__DOT__cpu__DOT__clint__DOT____VdfgRegularize_h7f74ecf3_0_3;
        CData/*0:0*/ Top__DOT__vga__DOT__io_bundle_write_enable;
        CData/*5:0*/ Top__DOT__vga__DOT__paletteReg_0;
        CData/*5:0*/ Top__DOT__vga__DOT__paletteReg_1;
        CData/*5:0*/ Top__DOT__vga__DOT__paletteReg_2;
        CData/*5:0*/ Top__DOT__vga__DOT__paletteReg_3;
        CData/*5:0*/ Top__DOT__vga__DOT__paletteReg_4;
        CData/*5:0*/ Top__DOT__vga__DOT__paletteReg_5;
        CData/*5:0*/ Top__DOT__vga__DOT__paletteReg_6;
        CData/*5:0*/ Top__DOT__vga__DOT__paletteReg_7;
        CData/*5:0*/ Top__DOT__vga__DOT__paletteReg_8;
        CData/*5:0*/ Top__DOT__vga__DOT__paletteReg_9;
        CData/*5:0*/ Top__DOT__vga__DOT__paletteReg_10;
        CData/*5:0*/ Top__DOT__vga__DOT__paletteReg_11;
        CData/*5:0*/ Top__DOT__vga__DOT__paletteReg_12;
        CData/*5:0*/ Top__DOT__vga__DOT__paletteReg_13;
        CData/*5:0*/ Top__DOT__vga__DOT__paletteReg_14;
        CData/*5:0*/ Top__DOT__vga__DOT__paletteReg_15;
        CData/*0:0*/ Top__DOT__vga__DOT__addr_palette;
        CData/*0:0*/ Top__DOT__vga__DOT__vblank_sync1;
        CData/*0:0*/ Top__DOT__vga__DOT__vblank_synced;
        CData/*3:0*/ Top__DOT__vga__DOT__curr_frame_sync1;
        CData/*3:0*/ Top__DOT__vga__DOT__curr_frame_synced;
        CData/*0:0*/ Top__DOT__vga__DOT__vblank_prev;
        CData/*5:0*/ Top__DOT__vga__DOT___GEN_38;
        CData/*5:0*/ Top__DOT__vga__DOT___GEN_39;
        CData/*5:0*/ Top__DOT__vga__DOT___GEN_40;
        CData/*5:0*/ Top__DOT__vga__DOT___GEN_41;
        CData/*5:0*/ Top__DOT__vga__DOT___GEN_42;
        CData/*5:0*/ Top__DOT__vga__DOT___GEN_43;
        CData/*5:0*/ Top__DOT__vga__DOT___GEN_44;
        CData/*5:0*/ Top__DOT__vga__DOT___GEN_45;
        CData/*5:0*/ Top__DOT__vga__DOT___GEN_46;
        CData/*5:0*/ Top__DOT__vga__DOT___GEN_47;
    };
    struct {
        CData/*5:0*/ Top__DOT__vga__DOT___GEN_48;
        CData/*5:0*/ Top__DOT__vga__DOT___GEN_49;
        CData/*5:0*/ Top__DOT__vga__DOT___GEN_50;
        CData/*5:0*/ Top__DOT__vga__DOT___GEN_51;
        CData/*5:0*/ Top__DOT__vga__DOT___GEN_52;
        CData/*5:0*/ Top__DOT__vga__DOT___GEN_53;
        CData/*0:0*/ Top__DOT__vga__DOT__hsync_d1;
        CData/*0:0*/ Top__DOT__vga__DOT__vsync_d1;
        CData/*0:0*/ Top__DOT__vga__DOT__io_hsync_REG;
        CData/*0:0*/ Top__DOT__vga__DOT__io_vsync_REG;
        CData/*3:0*/ Top__DOT__vga__DOT__curr_frame_sync1_1;
        CData/*3:0*/ Top__DOT__vga__DOT__curr_frame;
        CData/*0:0*/ Top__DOT__vga__DOT__display_enabled_sync1;
        CData/*0:0*/ Top__DOT__vga__DOT__display_enabled;
        CData/*0:0*/ Top__DOT__vga__DOT__blanking_sync1;
        CData/*0:0*/ Top__DOT__vga__DOT__blanking;
        CData/*5:0*/ Top__DOT__vga__DOT__palette_sync1_0;
        CData/*5:0*/ Top__DOT__vga__DOT__palette_sync1_1;
        CData/*5:0*/ Top__DOT__vga__DOT__palette_sync1_2;
        CData/*5:0*/ Top__DOT__vga__DOT__palette_sync1_3;
        CData/*5:0*/ Top__DOT__vga__DOT__palette_sync1_4;
        CData/*5:0*/ Top__DOT__vga__DOT__palette_sync1_5;
        CData/*5:0*/ Top__DOT__vga__DOT__palette_sync1_6;
        CData/*5:0*/ Top__DOT__vga__DOT__palette_sync1_7;
        CData/*5:0*/ Top__DOT__vga__DOT__palette_sync1_8;
        CData/*5:0*/ Top__DOT__vga__DOT__palette_sync1_9;
        CData/*5:0*/ Top__DOT__vga__DOT__palette_sync1_10;
        CData/*5:0*/ Top__DOT__vga__DOT__palette_sync1_11;
        CData/*5:0*/ Top__DOT__vga__DOT__palette_sync1_12;
        CData/*5:0*/ Top__DOT__vga__DOT__palette_sync1_13;
        CData/*5:0*/ Top__DOT__vga__DOT__palette_sync1_14;
        CData/*5:0*/ Top__DOT__vga__DOT__palette_sync1_15;
        CData/*5:0*/ Top__DOT__vga__DOT__palette_sync_0;
        CData/*5:0*/ Top__DOT__vga__DOT__palette_sync_1;
        CData/*5:0*/ Top__DOT__vga__DOT__palette_sync_2;
        CData/*5:0*/ Top__DOT__vga__DOT__palette_sync_3;
        CData/*5:0*/ Top__DOT__vga__DOT__palette_sync_4;
        CData/*5:0*/ Top__DOT__vga__DOT__palette_sync_5;
        CData/*5:0*/ Top__DOT__vga__DOT__palette_sync_6;
        CData/*5:0*/ Top__DOT__vga__DOT__palette_sync_7;
        CData/*5:0*/ Top__DOT__vga__DOT__palette_sync_8;
        CData/*5:0*/ Top__DOT__vga__DOT__palette_sync_9;
        CData/*5:0*/ Top__DOT__vga__DOT__palette_sync_10;
        CData/*5:0*/ Top__DOT__vga__DOT__palette_sync_11;
        CData/*5:0*/ Top__DOT__vga__DOT__palette_sync_12;
        CData/*5:0*/ Top__DOT__vga__DOT__palette_sync_13;
        CData/*5:0*/ Top__DOT__vga__DOT__palette_sync_14;
        CData/*5:0*/ Top__DOT__vga__DOT__palette_sync_15;
        CData/*0:0*/ Top__DOT__vga__DOT__in_display_d1;
        CData/*0:0*/ Top__DOT__vga__DOT__h_active_d1;
        CData/*0:0*/ Top__DOT__vga__DOT__v_active_d1;
        CData/*0:0*/ Top__DOT__vga__DOT__h_active_d2;
        CData/*0:0*/ Top__DOT__vga__DOT__v_active_d2;
        CData/*2:0*/ Top__DOT__vga__DOT__pixel_in_word_d1;
        CData/*3:0*/ Top__DOT__vga__DOT__pixel_4bit;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clock__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__io_vga_pixclk__0;
        VL_IN16(io_csr_regs_debug_read_address,11,0);
        VL_OUT16(io_vga_x_pos,9,0);
        VL_OUT16(io_vga_y_pos,9,0);
        SData/*12:0*/ Top__DOT__vga__DOT__framebuffer_addra;
        SData/*9:0*/ Top__DOT__vga__DOT__h_count;
    };
    struct {
        SData/*9:0*/ Top__DOT__vga__DOT__v_count;
        SData/*9:0*/ Top__DOT__vga__DOT___v_count_T_1;
        SData/*9:0*/ Top__DOT__vga__DOT___h_count_T_1;
        SData/*9:0*/ Top__DOT__vga__DOT__x_px;
        SData/*9:0*/ Top__DOT__vga__DOT__y_px;
        SData/*9:0*/ Top__DOT__vga__DOT__rel_x;
        SData/*9:0*/ Top__DOT__vga__DOT__rel_y;
        SData/*12:0*/ Top__DOT__vga__DOT__pixel_idx;
        SData/*9:0*/ Top__DOT__vga__DOT__x_px_d1;
        SData/*9:0*/ Top__DOT__vga__DOT__y_px_d1;
        SData/*9:0*/ __Vdly__Top__DOT__vga__DOT__v_count;
        VL_OUT(io_instruction_address,31,0);
        VL_IN(io_instruction,31,0);
        VL_IN(io_interrupt_flag,31,0);
        VL_OUT(io_memory_bundle_address,31,0);
        VL_OUT(io_memory_bundle_write_data,31,0);
        VL_IN(io_memory_bundle_read_data,31,0);
        VL_OUT(io_regs_debug_read_data,31,0);
        VL_OUT(io_csr_regs_debug_read_data,31,0);
        IData/*31:0*/ Top__DOT__cpu__DOT__regs__DOT__io_write_data;
        IData/*31:0*/ Top__DOT__cpu__DOT__regs__DOT__io_read_data1;
        IData/*31:0*/ Top__DOT__cpu__DOT__regs__DOT__io_read_data2;
        IData/*31:0*/ Top__DOT__cpu__DOT__regs__DOT__registers_0;
        IData/*31:0*/ Top__DOT__cpu__DOT__regs__DOT__registers_1;
        IData/*31:0*/ Top__DOT__cpu__DOT__regs__DOT__registers_2;
        IData/*31:0*/ Top__DOT__cpu__DOT__regs__DOT__registers_3;
        IData/*31:0*/ Top__DOT__cpu__DOT__regs__DOT__registers_4;
        IData/*31:0*/ Top__DOT__cpu__DOT__regs__DOT__registers_5;
        IData/*31:0*/ Top__DOT__cpu__DOT__regs__DOT__registers_6;
        IData/*31:0*/ Top__DOT__cpu__DOT__regs__DOT__registers_7;
        IData/*31:0*/ Top__DOT__cpu__DOT__regs__DOT__registers_8;
        IData/*31:0*/ Top__DOT__cpu__DOT__regs__DOT__registers_9;
        IData/*31:0*/ Top__DOT__cpu__DOT__regs__DOT__registers_10;
        IData/*31:0*/ Top__DOT__cpu__DOT__regs__DOT__registers_11;
        IData/*31:0*/ Top__DOT__cpu__DOT__regs__DOT__registers_12;
        IData/*31:0*/ Top__DOT__cpu__DOT__regs__DOT__registers_13;
        IData/*31:0*/ Top__DOT__cpu__DOT__regs__DOT__registers_14;
        IData/*31:0*/ Top__DOT__cpu__DOT__regs__DOT__registers_15;
        IData/*31:0*/ Top__DOT__cpu__DOT__regs__DOT__registers_16;
        IData/*31:0*/ Top__DOT__cpu__DOT__regs__DOT__registers_17;
        IData/*31:0*/ Top__DOT__cpu__DOT__regs__DOT__registers_18;
        IData/*31:0*/ Top__DOT__cpu__DOT__regs__DOT__registers_19;
        IData/*31:0*/ Top__DOT__cpu__DOT__regs__DOT__registers_20;
        IData/*31:0*/ Top__DOT__cpu__DOT__regs__DOT__registers_21;
        IData/*31:0*/ Top__DOT__cpu__DOT__regs__DOT__registers_22;
        IData/*31:0*/ Top__DOT__cpu__DOT__regs__DOT__registers_23;
        IData/*31:0*/ Top__DOT__cpu__DOT__regs__DOT__registers_24;
        IData/*31:0*/ Top__DOT__cpu__DOT__regs__DOT__registers_25;
        IData/*31:0*/ Top__DOT__cpu__DOT__regs__DOT__registers_26;
        IData/*31:0*/ Top__DOT__cpu__DOT__regs__DOT__registers_27;
        IData/*31:0*/ Top__DOT__cpu__DOT__regs__DOT__registers_28;
        IData/*31:0*/ Top__DOT__cpu__DOT__regs__DOT__registers_29;
        IData/*31:0*/ Top__DOT__cpu__DOT__regs__DOT__registers_30;
        IData/*31:0*/ Top__DOT__cpu__DOT__inst_fetch__DOT__io_jump_address_id;
        IData/*31:0*/ Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction;
        IData/*31:0*/ Top__DOT__cpu__DOT__inst_fetch__DOT__pc;
        IData/*31:0*/ Top__DOT__cpu__DOT__inst_fetch__DOT__next_pc_sequential;
        IData/*31:0*/ Top__DOT__cpu__DOT__id__DOT__io_ex_immediate;
        IData/*31:0*/ Top__DOT__cpu__DOT__ex__DOT__io_csr_reg_read_data;
        IData/*31:0*/ Top__DOT__cpu__DOT__ex__DOT__io_csr_reg_write_data;
        IData/*31:0*/ Top__DOT__cpu__DOT__ex__DOT__csrSource;
        IData/*31:0*/ Top__DOT__cpu__DOT__ex__DOT__alu__DOT__io_op1;
        IData/*31:0*/ Top__DOT__cpu__DOT__ex__DOT__alu__DOT__io_op2;
        IData/*31:0*/ Top__DOT__cpu__DOT__mem__DOT__io_wb_memory_read_data;
    };
    struct {
        IData/*31:0*/ Top__DOT__cpu__DOT__mem__DOT__io_memory_bundle_read_data;
        IData/*31:0*/ Top__DOT__cpu__DOT__csr_regs__DOT__io_clint_access_bundle_mstatus_write_data;
        IData/*31:0*/ Top__DOT__cpu__DOT__csr_regs__DOT__io_clint_access_bundle_mepc_write_data;
        IData/*31:0*/ Top__DOT__cpu__DOT__csr_regs__DOT__io_clint_access_bundle_mcause_write_data;
        IData/*31:0*/ Top__DOT__cpu__DOT__csr_regs__DOT__mstatus;
        IData/*31:0*/ Top__DOT__cpu__DOT__csr_regs__DOT__mie;
        IData/*31:0*/ Top__DOT__cpu__DOT__csr_regs__DOT__mtvec;
        IData/*31:0*/ Top__DOT__cpu__DOT__csr_regs__DOT__mscratch;
        IData/*31:0*/ Top__DOT__cpu__DOT__csr_regs__DOT__mepc;
        IData/*31:0*/ Top__DOT__cpu__DOT__csr_regs__DOT__mcause;
        IData/*31:0*/ Top__DOT__cpu__DOT__csr_regs__DOT___GEN_1;
        IData/*31:0*/ Top__DOT__cpu__DOT__csr_regs__DOT___GEN_2;
        IData/*31:0*/ Top__DOT__cpu__DOT__csr_regs__DOT___GEN_12;
        IData/*31:0*/ Top__DOT__cpu__DOT__clint__DOT__instruction_address;
        IData/*31:0*/ Top__DOT__cpu__DOT__clint__DOT___io_csr_bundle_mstatus_write_data_T_4;
        IData/*31:0*/ Top__DOT__vga__DOT__io_bundle_read_data;
        IData/*31:0*/ Top__DOT__vga__DOT__framebuffer_doutb;
        IData/*31:0*/ Top__DOT__vga__DOT__ctrlReg;
        IData/*31:0*/ Top__DOT__vga__DOT__intrStatusReg;
        IData/*31:0*/ Top__DOT__vga__DOT__uploadAddrReg;
        IData/*31:0*/ Top__DOT__vga__DOT___GEN_0;
        IData/*31:0*/ Top__DOT__vga__DOT___ctrlReg_T_3;
        IData/*31:0*/ Top__DOT__vga__DOT___intrStatusReg_T_1;
        IData/*31:0*/ Top__DOT__vga__DOT___GEN_54;
        IData/*31:0*/ Top__DOT__vga__DOT__framebuffer__DOT__i;
        IData/*31:0*/ Top__DOT__vga__DOT__framebuffer__DOT____Vlvbound_hdaacaeaf__0;
        IData/*31:0*/ Top__DOT__vga__DOT__framebuffer__DOT____Vlvbound_h4f27bff6__0;
        IData/*31:0*/ __VactIterCount;
        QData/*62:0*/ Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9;
        QData/*38:0*/ Top__DOT__cpu__DOT__mem__DOT___GEN_30;
        QData/*63:0*/ Top__DOT__cpu__DOT__csr_regs__DOT__cycles;
        QData/*63:0*/ Top__DOT__cpu__DOT__csr_regs__DOT___cycles_T_1;
        VlUnpacked<IData/*31:0*/, 6144> Top__DOT__vga__DOT__framebuffer__DOT__mem;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
        VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    VTop__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTop___024root(VTop__Syms* symsp, const char* v__name);
    ~VTop___024root();
    VL_UNCOPYABLE(VTop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
