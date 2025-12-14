// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"

VL_ATTR_COLD void VTop___024root___eval_static(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_static\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clock__0 = vlSelfRef.clock;
    vlSelfRef.__Vtrigprevexpr___TOP__io_vga_pixclk__0 
        = vlSelfRef.io_vga_pixclk;
}

VL_ATTR_COLD void VTop___024root___eval_initial__TOP(VTop___024root* vlSelf);
VL_ATTR_COLD void VTop___024root____Vm_traceActivitySetAll(VTop___024root* vlSelf);

VL_ATTR_COLD void VTop___024root___eval_initial(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_initial\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VTop___024root___eval_initial__TOP(vlSelf);
    VTop___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void VTop___024root___eval_initial__TOP(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_initial__TOP\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Top__DOT__vga__DOT__framebuffer__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00001800U, vlSelfRef.Top__DOT__vga__DOT__framebuffer__DOT__i)) {
        vlSelfRef.Top__DOT__vga__DOT__framebuffer__DOT____Vlvbound_h4f27bff6__0 = 0U;
        if (VL_LIKELY(((0x17ffU >= (0x00001fffU & vlSelfRef.Top__DOT__vga__DOT__framebuffer__DOT__i))))) {
            vlSelfRef.Top__DOT__vga__DOT__framebuffer__DOT__mem[(0x00001fffU 
                                                                 & vlSelfRef.Top__DOT__vga__DOT__framebuffer__DOT__i)] 
                = vlSelfRef.Top__DOT__vga__DOT__framebuffer__DOT____Vlvbound_h4f27bff6__0;
        }
        vlSelfRef.Top__DOT__vga__DOT__framebuffer__DOT__i 
            = ((IData)(1U) + vlSelfRef.Top__DOT__vga__DOT__framebuffer__DOT__i);
    }
}

VL_ATTR_COLD void VTop___024root___eval_final(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_final\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VTop___024root___eval_phase__stl(VTop___024root* vlSelf);

VL_ATTR_COLD void VTop___024root___eval_settle(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_settle\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            VTop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("Top.v", 2334, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (VTop___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void VTop___024root___eval_triggers__stl(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_triggers__stl\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VTop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool VTop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(VTop___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool VTop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

VL_ATTR_COLD void VTop___024root___stl_sequent__TOP__0(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___stl_sequent__TOP__0\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ Top__DOT__cpu__DOT__id__DOT___regWrite_T;
    Top__DOT__cpu__DOT__id__DOT___regWrite_T = 0;
    IData/*31:0*/ Top__DOT__cpu__DOT__ex__DOT___csrResult_T;
    Top__DOT__cpu__DOT__ex__DOT___csrResult_T = 0;
    IData/*31:0*/ Top__DOT__cpu__DOT__ex__DOT___csrResult_T_3;
    Top__DOT__cpu__DOT__ex__DOT___csrResult_T_3 = 0;
    CData/*0:0*/ Top__DOT__cpu__DOT__mem__DOT___GEN_13;
    Top__DOT__cpu__DOT__mem__DOT___GEN_13 = 0;
    CData/*0:0*/ Top__DOT__cpu__DOT__mem__DOT___GEN_16;
    Top__DOT__cpu__DOT__mem__DOT___GEN_16 = 0;
    // Body
    vlSelfRef.io_instruction_address = vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__pc;
    vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__next_pc_sequential 
        = ((IData)(4U) + vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__pc);
    vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT___cycles_T_1 
        = (1ULL + vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__cycles);
    vlSelfRef.io_vga_hsync = vlSelfRef.Top__DOT__vga__DOT__io_hsync_REG;
    vlSelfRef.io_vga_vsync = vlSelfRef.Top__DOT__vga__DOT__io_vsync_REG;
    vlSelfRef.io_vga_x_pos = vlSelfRef.Top__DOT__vga__DOT__x_px_d1;
    vlSelfRef.io_vga_y_pos = vlSelfRef.Top__DOT__vga__DOT__y_px_d1;
    vlSelfRef.Top__DOT__vga__DOT___v_count_T_1 = (0x000003ffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.Top__DOT__vga__DOT__v_count)));
    vlSelfRef.Top__DOT__vga__DOT___h_count_T_1 = (0x000003ffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.Top__DOT__vga__DOT__h_count)));
    vlSelfRef.Top__DOT__vga__DOT___GEN_0 = ((((~ (IData)(vlSelfRef.Top__DOT__vga__DOT__vblank_prev)) 
                                              & (IData)(vlSelfRef.Top__DOT__vga__DOT__vblank_synced)) 
                                             & (vlSelfRef.Top__DOT__vga__DOT__ctrlReg 
                                                >> 8U))
                                             ? 1U : vlSelfRef.Top__DOT__vga__DOT__intrStatusReg);
    vlSelfRef.Top__DOT__vga__DOT__rel_x = ((0x0080U 
                                            <= (IData)(vlSelfRef.Top__DOT__vga__DOT__x_px))
                                            ? (0x000003ffU 
                                               & ((IData)(vlSelfRef.Top__DOT__vga__DOT__x_px) 
                                                  - (IData)(0x0080U)))
                                            : 0U);
    vlSelfRef.Top__DOT__vga__DOT__rel_y = ((0x0030U 
                                            <= (IData)(vlSelfRef.Top__DOT__vga__DOT__y_px))
                                            ? (0x000003ffU 
                                               & ((IData)(vlSelfRef.Top__DOT__vga__DOT__y_px) 
                                                  - (IData)(0x0030U)))
                                            : 0U);
    vlSelfRef.io_csr_regs_debug_read_data = ((0x0c80U 
                                              == (IData)(vlSelfRef.io_csr_regs_debug_read_address))
                                              ? (IData)(
                                                        (vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__cycles 
                                                         >> 0x00000020U))
                                              : ((0x0c00U 
                                                  == (IData)(vlSelfRef.io_csr_regs_debug_read_address))
                                                  ? (IData)(vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__cycles)
                                                  : 
                                                 ((0x0342U 
                                                   == (IData)(vlSelfRef.io_csr_regs_debug_read_address))
                                                   ? vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mcause
                                                   : 
                                                  ((0x0341U 
                                                    == (IData)(vlSelfRef.io_csr_regs_debug_read_address))
                                                    ? vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mepc
                                                    : 
                                                   ((0x0340U 
                                                     == (IData)(vlSelfRef.io_csr_regs_debug_read_address))
                                                     ? vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mscratch
                                                     : 
                                                    ((0x0305U 
                                                      == (IData)(vlSelfRef.io_csr_regs_debug_read_address))
                                                      ? vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mtvec
                                                      : 
                                                     ((0x0304U 
                                                       == (IData)(vlSelfRef.io_csr_regs_debug_read_address))
                                                       ? vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mie
                                                       : 
                                                      ((0x0300U 
                                                        == (IData)(vlSelfRef.io_csr_regs_debug_read_address))
                                                        ? vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mstatus
                                                        : 0U))))))));
    vlSelfRef.Top__DOT__cpu__DOT__clint__DOT___io_csr_bundle_mstatus_write_data_T_4 
        = (0x00001800U | ((0xffffe000U & vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mstatus) 
                          | ((((0x0000000eU & (vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mstatus 
                                               >> 7U)) 
                               | (1U & (vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mstatus 
                                        >> 3U))) << 7U) 
                             | (0x00000077U & vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mstatus))));
    vlSelfRef.io_vga_activevideo = ((IData)(vlSelfRef.Top__DOT__vga__DOT__h_active_d2) 
                                    & (IData)(vlSelfRef.Top__DOT__vga__DOT__v_active_d2));
    vlSelfRef.Top__DOT__vga__DOT__pixel_4bit = (0x0000000fU 
                                                & ((7U 
                                                    == (IData)(vlSelfRef.Top__DOT__vga__DOT__pixel_in_word_d1))
                                                    ? 
                                                   (vlSelfRef.Top__DOT__vga__DOT__framebuffer_doutb 
                                                    >> 0x0000001cU)
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelfRef.Top__DOT__vga__DOT__pixel_in_word_d1))
                                                     ? 
                                                    (vlSelfRef.Top__DOT__vga__DOT__framebuffer_doutb 
                                                     >> 0x00000018U)
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.Top__DOT__vga__DOT__pixel_in_word_d1))
                                                      ? 
                                                     (vlSelfRef.Top__DOT__vga__DOT__framebuffer_doutb 
                                                      >> 0x00000014U)
                                                      : 
                                                     ((4U 
                                                       == (IData)(vlSelfRef.Top__DOT__vga__DOT__pixel_in_word_d1))
                                                       ? 
                                                      (vlSelfRef.Top__DOT__vga__DOT__framebuffer_doutb 
                                                       >> 0x00000010U)
                                                       : 
                                                      ((3U 
                                                        == (IData)(vlSelfRef.Top__DOT__vga__DOT__pixel_in_word_d1))
                                                        ? 
                                                       (vlSelfRef.Top__DOT__vga__DOT__framebuffer_doutb 
                                                        >> 0x0000000cU)
                                                        : 
                                                       ((2U 
                                                         == (IData)(vlSelfRef.Top__DOT__vga__DOT__pixel_in_word_d1))
                                                         ? 
                                                        (vlSelfRef.Top__DOT__vga__DOT__framebuffer_doutb 
                                                         >> 8U)
                                                         : 
                                                        ((1U 
                                                          == (IData)(vlSelfRef.Top__DOT__vga__DOT__pixel_in_word_d1))
                                                          ? 
                                                         (vlSelfRef.Top__DOT__vga__DOT__framebuffer_doutb 
                                                          >> 4U)
                                                          : 
                                                         ((0U 
                                                           == (IData)(vlSelfRef.Top__DOT__vga__DOT__pixel_in_word_d1))
                                                           ? vlSelfRef.Top__DOT__vga__DOT__framebuffer_doutb
                                                           : 0U)))))))));
    vlSelfRef.Top__DOT__cpu__DOT__clint__DOT____VdfgRegularize_h7f74ecf3_0_3 
        = ((0U != vlSelfRef.io_interrupt_flag) & ((vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mstatus 
                                                   >> 3U) 
                                                  & ((1U 
                                                      == vlSelfRef.io_interrupt_flag)
                                                      ? 
                                                     (vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mie 
                                                      >> 7U)
                                                      : 
                                                     (vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mie 
                                                      >> 0x0000000bU))));
    vlSelfRef.io_regs_debug_read_data = ((0U == (IData)(vlSelfRef.io_regs_debug_read_address))
                                          ? 0U : ((0x1eU 
                                                   == 
                                                   (0x0000001fU 
                                                    & ((IData)(vlSelfRef.io_regs_debug_read_address) 
                                                       - (IData)(1U))))
                                                   ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_30
                                                   : 
                                                  ((0x1dU 
                                                    == 
                                                    (0x0000001fU 
                                                     & ((IData)(vlSelfRef.io_regs_debug_read_address) 
                                                        - (IData)(1U))))
                                                    ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_29
                                                    : 
                                                   ((0x1cU 
                                                     == 
                                                     (0x0000001fU 
                                                      & ((IData)(vlSelfRef.io_regs_debug_read_address) 
                                                         - (IData)(1U))))
                                                     ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_28
                                                     : 
                                                    ((0x1bU 
                                                      == 
                                                      (0x0000001fU 
                                                       & ((IData)(vlSelfRef.io_regs_debug_read_address) 
                                                          - (IData)(1U))))
                                                      ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_27
                                                      : 
                                                     ((0x1aU 
                                                       == 
                                                       (0x0000001fU 
                                                        & ((IData)(vlSelfRef.io_regs_debug_read_address) 
                                                           - (IData)(1U))))
                                                       ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_26
                                                       : 
                                                      ((0x19U 
                                                        == 
                                                        (0x0000001fU 
                                                         & ((IData)(vlSelfRef.io_regs_debug_read_address) 
                                                            - (IData)(1U))))
                                                        ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_25
                                                        : 
                                                       ((0x18U 
                                                         == 
                                                         (0x0000001fU 
                                                          & ((IData)(vlSelfRef.io_regs_debug_read_address) 
                                                             - (IData)(1U))))
                                                         ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_24
                                                         : 
                                                        ((0x17U 
                                                          == 
                                                          (0x0000001fU 
                                                           & ((IData)(vlSelfRef.io_regs_debug_read_address) 
                                                              - (IData)(1U))))
                                                          ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_23
                                                          : 
                                                         ((0x16U 
                                                           == 
                                                           (0x0000001fU 
                                                            & ((IData)(vlSelfRef.io_regs_debug_read_address) 
                                                               - (IData)(1U))))
                                                           ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_22
                                                           : 
                                                          ((0x15U 
                                                            == 
                                                            (0x0000001fU 
                                                             & ((IData)(vlSelfRef.io_regs_debug_read_address) 
                                                                - (IData)(1U))))
                                                            ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_21
                                                            : 
                                                           ((0x14U 
                                                             == 
                                                             (0x0000001fU 
                                                              & ((IData)(vlSelfRef.io_regs_debug_read_address) 
                                                                 - (IData)(1U))))
                                                             ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_20
                                                             : 
                                                            ((0x13U 
                                                              == 
                                                              (0x0000001fU 
                                                               & ((IData)(vlSelfRef.io_regs_debug_read_address) 
                                                                  - (IData)(1U))))
                                                              ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_19
                                                              : 
                                                             ((0x12U 
                                                               == 
                                                               (0x0000001fU 
                                                                & ((IData)(vlSelfRef.io_regs_debug_read_address) 
                                                                   - (IData)(1U))))
                                                               ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_18
                                                               : 
                                                              ((0x11U 
                                                                == 
                                                                (0x0000001fU 
                                                                 & ((IData)(vlSelfRef.io_regs_debug_read_address) 
                                                                    - (IData)(1U))))
                                                                ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_17
                                                                : 
                                                               ((0x10U 
                                                                 == 
                                                                 (0x0000001fU 
                                                                  & ((IData)(vlSelfRef.io_regs_debug_read_address) 
                                                                     - (IData)(1U))))
                                                                 ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_16
                                                                 : 
                                                                ((0x0fU 
                                                                  == 
                                                                  (0x0000001fU 
                                                                   & ((IData)(vlSelfRef.io_regs_debug_read_address) 
                                                                      - (IData)(1U))))
                                                                  ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_15
                                                                  : 
                                                                 ((0x0eU 
                                                                   == 
                                                                   (0x0000001fU 
                                                                    & ((IData)(vlSelfRef.io_regs_debug_read_address) 
                                                                       - (IData)(1U))))
                                                                   ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_14
                                                                   : 
                                                                  ((0x0dU 
                                                                    == 
                                                                    (0x0000001fU 
                                                                     & ((IData)(vlSelfRef.io_regs_debug_read_address) 
                                                                        - (IData)(1U))))
                                                                    ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_13
                                                                    : 
                                                                   ((0x0cU 
                                                                     == 
                                                                     (0x0000001fU 
                                                                      & ((IData)(vlSelfRef.io_regs_debug_read_address) 
                                                                         - (IData)(1U))))
                                                                     ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_12
                                                                     : 
                                                                    ((0x0bU 
                                                                      == 
                                                                      (0x0000001fU 
                                                                       & ((IData)(vlSelfRef.io_regs_debug_read_address) 
                                                                          - (IData)(1U))))
                                                                      ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_11
                                                                      : 
                                                                     ((0x0aU 
                                                                       == 
                                                                       (0x0000001fU 
                                                                        & ((IData)(vlSelfRef.io_regs_debug_read_address) 
                                                                           - (IData)(1U))))
                                                                       ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_10
                                                                       : 
                                                                      ((9U 
                                                                        == 
                                                                        (0x0000001fU 
                                                                         & ((IData)(vlSelfRef.io_regs_debug_read_address) 
                                                                            - (IData)(1U))))
                                                                        ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_9
                                                                        : 
                                                                       ((8U 
                                                                         == 
                                                                         (0x0000001fU 
                                                                          & ((IData)(vlSelfRef.io_regs_debug_read_address) 
                                                                             - (IData)(1U))))
                                                                         ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_8
                                                                         : 
                                                                        ((7U 
                                                                          == 
                                                                          (0x0000001fU 
                                                                           & ((IData)(vlSelfRef.io_regs_debug_read_address) 
                                                                              - (IData)(1U))))
                                                                          ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_7
                                                                          : 
                                                                         ((6U 
                                                                           == 
                                                                           (0x0000001fU 
                                                                            & ((IData)(vlSelfRef.io_regs_debug_read_address) 
                                                                               - (IData)(1U))))
                                                                           ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_6
                                                                           : 
                                                                          ((5U 
                                                                            == 
                                                                            (0x0000001fU 
                                                                             & ((IData)(vlSelfRef.io_regs_debug_read_address) 
                                                                                - (IData)(1U))))
                                                                            ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_5
                                                                            : 
                                                                           ((4U 
                                                                             == 
                                                                             (0x0000001fU 
                                                                              & ((IData)(vlSelfRef.io_regs_debug_read_address) 
                                                                                - (IData)(1U))))
                                                                             ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_4
                                                                             : 
                                                                            ((3U 
                                                                              == 
                                                                              (0x0000001fU 
                                                                               & ((IData)(vlSelfRef.io_regs_debug_read_address) 
                                                                                - (IData)(1U))))
                                                                              ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_3
                                                                              : 
                                                                             ((2U 
                                                                               == 
                                                                               (0x0000001fU 
                                                                                & ((IData)(vlSelfRef.io_regs_debug_read_address) 
                                                                                - (IData)(1U))))
                                                                               ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_2
                                                                               : 
                                                                              ((1U 
                                                                                == 
                                                                                (0x0000001fU 
                                                                                & ((IData)(vlSelfRef.io_regs_debug_read_address) 
                                                                                - (IData)(1U))))
                                                                                ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_1
                                                                                : vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_0)))))))))))))))))))))))))))))));
    vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
        = ((IData)(vlSelfRef.io_instruction_valid) ? vlSelfRef.io_instruction
            : 0x00000013U);
    vlSelfRef.Top__DOT__vga__DOT__pixel_idx = (0x00001fffU 
                                               & (VL_SHIFTL_III(13,13,32, 
                                                                ((0x40U 
                                                                  <= 
                                                                  (0x000000ffU 
                                                                   & (((IData)(0x00002aabU) 
                                                                       * (IData)(vlSelfRef.Top__DOT__vga__DOT__rel_y)) 
                                                                      >> 0x00000010U)))
                                                                  ? 0x0000003fU
                                                                  : 
                                                                 (0x0000003fU 
                                                                  & (((IData)(0x00002aabU) 
                                                                      * (IData)(vlSelfRef.Top__DOT__vga__DOT__rel_y)) 
                                                                     >> 0x00000010U))), 6U) 
                                                  + 
                                                  ((0x40U 
                                                    <= 
                                                    (0x000000ffU 
                                                     & (((IData)(0x00002aabU) 
                                                         * (IData)(vlSelfRef.Top__DOT__vga__DOT__rel_x)) 
                                                        >> 0x00000010U)))
                                                    ? 0x0000003fU
                                                    : 
                                                   (0x0000003fU 
                                                    & (((IData)(0x00002aabU) 
                                                        * (IData)(vlSelfRef.Top__DOT__vga__DOT__rel_x)) 
                                                       >> 0x00000010U)))));
    vlSelfRef.io_vga_rrggbb = ((IData)(vlSelfRef.io_vga_activevideo)
                                ? ((IData)(vlSelfRef.Top__DOT__vga__DOT__blanking)
                                    ? 0U : (((IData)(vlSelfRef.Top__DOT__vga__DOT__display_enabled) 
                                             & (IData)(vlSelfRef.Top__DOT__vga__DOT__in_display_d1))
                                             ? ((0x0fU 
                                                 == (IData)(vlSelfRef.Top__DOT__vga__DOT__pixel_4bit))
                                                 ? (IData)(vlSelfRef.Top__DOT__vga__DOT__palette_sync_15)
                                                 : 
                                                ((0x0eU 
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
                                             : 1U))
                                : 0U);
    vlSelfRef.io_memory_bundle_write_enable = ((3U 
                                                != 
                                                (0x0000007fU 
                                                 & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)) 
                                               & (0x23U 
                                                  == 
                                                  (0x0000007fU 
                                                   & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)));
    vlSelfRef.Top__DOT__cpu__DOT__clint__DOT____VdfgRegularize_h7f74ecf3_0_2 
        = ((0x00100073U == vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction) 
           | (0x00000073U == vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction));
    vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__io_csr_reg_read_data 
        = ((0x0c80U == (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                        >> 0x00000014U)) ? (IData)(
                                                   (vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__cycles 
                                                    >> 0x00000020U))
            : ((0x0c00U == (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                            >> 0x00000014U)) ? (IData)(vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__cycles)
                : ((0x0342U == (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                >> 0x00000014U)) ? vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mcause
                    : ((0x0341U == (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                    >> 0x00000014U))
                        ? vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mepc
                        : ((0x0340U == (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                        >> 0x00000014U))
                            ? vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mscratch
                            : ((0x0305U == (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                            >> 0x00000014U))
                                ? vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mtvec
                                : ((0x0304U == (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                                >> 0x00000014U))
                                    ? vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mie
                                    : ((0x0300U == 
                                        (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                         >> 0x00000014U))
                                        ? vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mstatus
                                        : 0U))))))));
    vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT__io_func 
        = ((0x13U == (0x0000007fU & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction))
            ? ((5U == (7U & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                             >> 0x0000000cU))) ? ((0x40000000U 
                                                   & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)
                                                   ? 9U
                                                   : 8U)
                : ((7U == (7U & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                 >> 0x0000000cU))) ? 7U
                    : ((6U == (7U & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                     >> 0x0000000cU)))
                        ? 6U : ((4U == (7U & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                              >> 0x0000000cU)))
                                 ? 5U : ((3U == (7U 
                                                 & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                                    >> 0x0000000cU)))
                                          ? 0x0aU : 
                                         ((2U == (7U 
                                                  & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                                     >> 0x0000000cU)))
                                           ? 4U : (
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                                        >> 0x0000000cU)))
                                                    ? 3U
                                                    : 1U)))))))
            : ((0x33U == (0x0000007fU & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction))
                ? ((5U == (7U & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                 >> 0x0000000cU))) ? 
                   ((0x40000000U & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)
                     ? 9U : 8U) : ((7U == (7U & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                                 >> 0x0000000cU)))
                                    ? 7U : ((6U == 
                                             (7U & 
                                              (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                               >> 0x0000000cU)))
                                             ? 6U : 
                                            ((4U == 
                                              (7U & 
                                               (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                                >> 0x0000000cU)))
                                              ? 5U : 
                                             ((3U == 
                                               (7U 
                                                & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                                   >> 0x0000000cU)))
                                               ? 0x0aU
                                               : ((2U 
                                                   == 
                                                   (7U 
                                                    & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                                       >> 0x0000000cU)))
                                                   ? 4U
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                                        >> 0x0000000cU)))
                                                    ? 3U
                                                    : 
                                                   ((0x40000000U 
                                                     & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)
                                                     ? 2U
                                                     : 1U))))))))
                : 1U));
    vlSelfRef.Top__DOT__cpu__DOT__id__DOT____VdfgRegularize_h38ccc7c7_0_0 
        = ((0x6fU == (0x0000007fU & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)) 
           | (0x67U == (0x0000007fU & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)));
    Top__DOT__cpu__DOT__id__DOT___regWrite_T = ((3U 
                                                 == 
                                                 (0x0000007fU 
                                                  & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)) 
                                                | (0x13U 
                                                   == 
                                                   (0x0000007fU 
                                                    & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)));
    vlSelfRef.Top__DOT__cpu__DOT__id__DOT__isCsr = 
        ((0x73U == (0x0000007fU & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)) 
         & (0U != (7U & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                         >> 0x0000000cU))));
    vlSelfRef.Top__DOT__cpu__DOT__id__DOT____VdfgRegularize_h38ccc7c7_0_1 
        = ((0x37U == (0x0000007fU & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)) 
           | (0x17U == (0x0000007fU & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)));
    vlSelfRef.Top__DOT__cpu__DOT__id__DOT___usesRs1_T_1 
        = ((3U == (0x0000007fU & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)) 
           | ((0x23U == (0x0000007fU & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)) 
              | (0x13U == (0x0000007fU & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction))));
    vlSelfRef.Top__DOT__cpu__DOT__id__DOT____VdfgRegularize_h38ccc7c7_0_2 
        = ((0x33U == (0x0000007fU & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)) 
           | (0x63U == (0x0000007fU & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)));
    vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_interrupt_assert 
        = ((IData)(vlSelfRef.Top__DOT__cpu__DOT__clint__DOT____VdfgRegularize_h7f74ecf3_0_3) 
           | ((IData)(vlSelfRef.Top__DOT__cpu__DOT__clint__DOT____VdfgRegularize_h7f74ecf3_0_2) 
              | (0x30200073U == vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)));
    vlSelfRef.Top__DOT__cpu__DOT__id__DOT__io_csr_reg_write_enable 
        = ((IData)(vlSelfRef.Top__DOT__cpu__DOT__id__DOT__isCsr) 
           & (((1U == (7U & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                             >> 0x0000000cU))) | (5U 
                                                  == 
                                                  (7U 
                                                   & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                                      >> 0x0000000cU)))) 
              | ((0U != (0x0000001fU & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                        >> 0x0000000fU))) 
                 & ((((2U == (7U & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                    >> 0x0000000cU))) 
                      | (3U == (7U & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                      >> 0x0000000cU)))) 
                     | (6U == (7U & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                     >> 0x0000000cU)))) 
                    | (7U == (7U & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                    >> 0x0000000cU)))))));
    vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_write_enable 
        = (((IData)(Top__DOT__cpu__DOT__id__DOT___regWrite_T) 
            | ((0x33U == (0x0000007fU & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)) 
               | ((0x37U == (0x0000007fU & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)) 
                  | ((0x17U == (0x0000007fU & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)) 
                     | ((0x6fU == (0x0000007fU & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)) 
                        | ((0x67U == (0x0000007fU & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)) 
                           | (IData)(vlSelfRef.Top__DOT__cpu__DOT__id__DOT__isCsr))))))) 
           & (0U != (0x0000001fU & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                    >> 7U))));
    vlSelfRef.Top__DOT__cpu__DOT__id__DOT__immKind 
        = ((0x6fU == (0x0000007fU & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction))
            ? 5U : ((IData)(vlSelfRef.Top__DOT__cpu__DOT__id__DOT____VdfgRegularize_h38ccc7c7_0_1)
                     ? 4U : ((0x63U == (0x0000007fU 
                                        & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction))
                              ? 3U : ((0x23U == (0x0000007fU 
                                                 & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction))
                                       ? 2U : ((IData)(Top__DOT__cpu__DOT__id__DOT___regWrite_T) 
                                               | (0x67U 
                                                  == 
                                                  (0x0000007fU 
                                                   & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)))))));
    vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_address1 
        = (((IData)(vlSelfRef.Top__DOT__cpu__DOT__id__DOT___usesRs1_T_1) 
            | ((IData)(vlSelfRef.Top__DOT__cpu__DOT__id__DOT____VdfgRegularize_h38ccc7c7_0_2) 
               | ((0x67U == (0x0000007fU & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)) 
                  | ((~ ((vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                          >> 0x0000000eU) & (IData)(vlSelfRef.Top__DOT__cpu__DOT__id__DOT__isCsr))) 
                     & (IData)(vlSelfRef.Top__DOT__cpu__DOT__id__DOT__isCsr)))))
            ? (0x0000001fU & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                              >> 0x0000000fU)) : 0U);
    vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_address2 
        = (((0x23U == (0x0000007fU & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)) 
            | (IData)(vlSelfRef.Top__DOT__cpu__DOT__id__DOT____VdfgRegularize_h38ccc7c7_0_2))
            ? (0x0000001fU & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                              >> 0x00000014U)) : 0U);
    vlSelfRef.Top__DOT__cpu__DOT__id__DOT__io_ex_immediate 
        = ((5U == (IData)(vlSelfRef.Top__DOT__cpu__DOT__id__DOT__immKind))
            ? (((((vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                   >> 0x0000001fU) ? 0x07ffU : 0U) 
                 << 0x00000015U) | (0x00100000U & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                                   >> 0x0000000bU))) 
               | ((((0x000001feU & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                    >> 0x0000000bU)) 
                    | (1U & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                             >> 0x00000014U))) << 0x0000000bU) 
                  | (0x000007feU & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                    >> 0x00000014U))))
            : ((4U == (IData)(vlSelfRef.Top__DOT__cpu__DOT__id__DOT__immKind))
                ? (0xfffff000U & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)
                : ((3U == (IData)(vlSelfRef.Top__DOT__cpu__DOT__id__DOT__immKind))
                    ? ((((vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                          >> 0x0000001fU) ? 0x0007ffffU
                          : 0U) << 0x0000000dU) | (
                                                   (((2U 
                                                      & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                                         >> 0x0000001eU)) 
                                                     | (1U 
                                                        & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                                           >> 7U))) 
                                                    << 0x0000000bU) 
                                                   | ((0x000007e0U 
                                                       & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                                          >> 0x00000014U)) 
                                                      | (0x0000001eU 
                                                         & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                                            >> 7U)))))
                    : ((2U == (IData)(vlSelfRef.Top__DOT__cpu__DOT__id__DOT__immKind))
                        ? ((((vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                              >> 0x0000001fU) ? 0x000fffffU
                              : 0U) << 0x0000000cU) 
                           | ((0x00000fe0U & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                              >> 0x00000014U)) 
                              | (0x0000001fU & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                                >> 7U))))
                        : ((1U == (IData)(vlSelfRef.Top__DOT__cpu__DOT__id__DOT__immKind))
                            ? ((((vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                  >> 0x0000001fU) ? 0x000fffffU
                                  : 0U) << 0x0000000cU) 
                               | (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                  >> 0x00000014U)) : 0U)))));
    vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_data1 
        = ((0U == (IData)(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_address1))
            ? 0U : ((0x1eU == (0x0000001fU & ((IData)(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_address1) 
                                              - (IData)(1U))))
                     ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_30
                     : ((0x1dU == (0x0000001fU & ((IData)(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_address1) 
                                                  - (IData)(1U))))
                         ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_29
                         : ((0x1cU == (0x0000001fU 
                                       & ((IData)(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_address1) 
                                          - (IData)(1U))))
                             ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_28
                             : ((0x1bU == (0x0000001fU 
                                           & ((IData)(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_address1) 
                                              - (IData)(1U))))
                                 ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_27
                                 : ((0x1aU == (0x0000001fU 
                                               & ((IData)(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_address1) 
                                                  - (IData)(1U))))
                                     ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_26
                                     : ((0x19U == (0x0000001fU 
                                                   & ((IData)(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_address1) 
                                                      - (IData)(1U))))
                                         ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_25
                                         : ((0x18U 
                                             == (0x0000001fU 
                                                 & ((IData)(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_address1) 
                                                    - (IData)(1U))))
                                             ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_24
                                             : ((0x17U 
                                                 == 
                                                 (0x0000001fU 
                                                  & ((IData)(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_address1) 
                                                     - (IData)(1U))))
                                                 ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_23
                                                 : 
                                                ((0x16U 
                                                  == 
                                                  (0x0000001fU 
                                                   & ((IData)(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_address1) 
                                                      - (IData)(1U))))
                                                  ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_22
                                                  : 
                                                 ((0x15U 
                                                   == 
                                                   (0x0000001fU 
                                                    & ((IData)(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_address1) 
                                                       - (IData)(1U))))
                                                   ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_21
                                                   : 
                                                  ((0x14U 
                                                    == 
                                                    (0x0000001fU 
                                                     & ((IData)(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_address1) 
                                                        - (IData)(1U))))
                                                    ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_20
                                                    : 
                                                   ((0x13U 
                                                     == 
                                                     (0x0000001fU 
                                                      & ((IData)(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_address1) 
                                                         - (IData)(1U))))
                                                     ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_19
                                                     : 
                                                    ((0x12U 
                                                      == 
                                                      (0x0000001fU 
                                                       & ((IData)(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_address1) 
                                                          - (IData)(1U))))
                                                      ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_18
                                                      : 
                                                     ((0x11U 
                                                       == 
                                                       (0x0000001fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_address1) 
                                                           - (IData)(1U))))
                                                       ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_17
                                                       : 
                                                      ((0x10U 
                                                        == 
                                                        (0x0000001fU 
                                                         & ((IData)(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_address1) 
                                                            - (IData)(1U))))
                                                        ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_16
                                                        : 
                                                       ((0x0fU 
                                                         == 
                                                         (0x0000001fU 
                                                          & ((IData)(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_address1) 
                                                             - (IData)(1U))))
                                                         ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_15
                                                         : 
                                                        ((0x0eU 
                                                          == 
                                                          (0x0000001fU 
                                                           & ((IData)(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_address1) 
                                                              - (IData)(1U))))
                                                          ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_14
                                                          : 
                                                         ((0x0dU 
                                                           == 
                                                           (0x0000001fU 
                                                            & ((IData)(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_address1) 
                                                               - (IData)(1U))))
                                                           ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_13
                                                           : 
                                                          ((0x0cU 
                                                            == 
                                                            (0x0000001fU 
                                                             & ((IData)(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_address1) 
                                                                - (IData)(1U))))
                                                            ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_12
                                                            : 
                                                           ((0x0bU 
                                                             == 
                                                             (0x0000001fU 
                                                              & ((IData)(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_address1) 
                                                                 - (IData)(1U))))
                                                             ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_11
                                                             : 
                                                            ((0x0aU 
                                                              == 
                                                              (0x0000001fU 
                                                               & ((IData)(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_address1) 
                                                                  - (IData)(1U))))
                                                              ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_10
                                                              : 
                                                             ((9U 
                                                               == 
                                                               (0x0000001fU 
                                                                & ((IData)(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_address1) 
                                                                   - (IData)(1U))))
                                                               ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_9
                                                               : 
                                                              ((8U 
                                                                == 
                                                                (0x0000001fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_address1) 
                                                                    - (IData)(1U))))
                                                                ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_8
                                                                : 
                                                               ((7U 
                                                                 == 
                                                                 (0x0000001fU 
                                                                  & ((IData)(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_address1) 
                                                                     - (IData)(1U))))
                                                                 ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_7
                                                                 : 
                                                                ((6U 
                                                                  == 
                                                                  (0x0000001fU 
                                                                   & ((IData)(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_address1) 
                                                                      - (IData)(1U))))
                                                                  ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_6
                                                                  : 
                                                                 ((5U 
                                                                   == 
                                                                   (0x0000001fU 
                                                                    & ((IData)(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_address1) 
                                                                       - (IData)(1U))))
                                                                   ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_5
                                                                   : 
                                                                  ((4U 
                                                                    == 
                                                                    (0x0000001fU 
                                                                     & ((IData)(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_address1) 
                                                                        - (IData)(1U))))
                                                                    ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_4
                                                                    : 
                                                                   ((3U 
                                                                     == 
                                                                     (0x0000001fU 
                                                                      & ((IData)(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_address1) 
                                                                         - (IData)(1U))))
                                                                     ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_3
                                                                     : 
                                                                    ((2U 
                                                                      == 
                                                                      (0x0000001fU 
                                                                       & ((IData)(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_address1) 
                                                                          - (IData)(1U))))
                                                                      ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_2
                                                                      : 
                                                                     ((1U 
                                                                       == 
                                                                       (0x0000001fU 
                                                                        & ((IData)(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_address1) 
                                                                           - (IData)(1U))))
                                                                       ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_1
                                                                       : vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_0)))))))))))))))))))))))))))))));
    vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_data2 
        = ((0U == (IData)(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_address2))
            ? 0U : ((0x1eU == (0x0000001fU & ((IData)(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_address2) 
                                              - (IData)(1U))))
                     ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_30
                     : ((0x1dU == (0x0000001fU & ((IData)(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_address2) 
                                                  - (IData)(1U))))
                         ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_29
                         : ((0x1cU == (0x0000001fU 
                                       & ((IData)(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_address2) 
                                          - (IData)(1U))))
                             ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_28
                             : ((0x1bU == (0x0000001fU 
                                           & ((IData)(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_address2) 
                                              - (IData)(1U))))
                                 ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_27
                                 : ((0x1aU == (0x0000001fU 
                                               & ((IData)(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_address2) 
                                                  - (IData)(1U))))
                                     ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_26
                                     : ((0x19U == (0x0000001fU 
                                                   & ((IData)(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_address2) 
                                                      - (IData)(1U))))
                                         ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_25
                                         : ((0x18U 
                                             == (0x0000001fU 
                                                 & ((IData)(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_address2) 
                                                    - (IData)(1U))))
                                             ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_24
                                             : ((0x17U 
                                                 == 
                                                 (0x0000001fU 
                                                  & ((IData)(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_address2) 
                                                     - (IData)(1U))))
                                                 ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_23
                                                 : 
                                                ((0x16U 
                                                  == 
                                                  (0x0000001fU 
                                                   & ((IData)(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_address2) 
                                                      - (IData)(1U))))
                                                  ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_22
                                                  : 
                                                 ((0x15U 
                                                   == 
                                                   (0x0000001fU 
                                                    & ((IData)(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_address2) 
                                                       - (IData)(1U))))
                                                   ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_21
                                                   : 
                                                  ((0x14U 
                                                    == 
                                                    (0x0000001fU 
                                                     & ((IData)(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_address2) 
                                                        - (IData)(1U))))
                                                    ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_20
                                                    : 
                                                   ((0x13U 
                                                     == 
                                                     (0x0000001fU 
                                                      & ((IData)(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_address2) 
                                                         - (IData)(1U))))
                                                     ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_19
                                                     : 
                                                    ((0x12U 
                                                      == 
                                                      (0x0000001fU 
                                                       & ((IData)(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_address2) 
                                                          - (IData)(1U))))
                                                      ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_18
                                                      : 
                                                     ((0x11U 
                                                       == 
                                                       (0x0000001fU 
                                                        & ((IData)(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_address2) 
                                                           - (IData)(1U))))
                                                       ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_17
                                                       : 
                                                      ((0x10U 
                                                        == 
                                                        (0x0000001fU 
                                                         & ((IData)(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_address2) 
                                                            - (IData)(1U))))
                                                        ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_16
                                                        : 
                                                       ((0x0fU 
                                                         == 
                                                         (0x0000001fU 
                                                          & ((IData)(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_address2) 
                                                             - (IData)(1U))))
                                                         ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_15
                                                         : 
                                                        ((0x0eU 
                                                          == 
                                                          (0x0000001fU 
                                                           & ((IData)(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_address2) 
                                                              - (IData)(1U))))
                                                          ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_14
                                                          : 
                                                         ((0x0dU 
                                                           == 
                                                           (0x0000001fU 
                                                            & ((IData)(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_address2) 
                                                               - (IData)(1U))))
                                                           ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_13
                                                           : 
                                                          ((0x0cU 
                                                            == 
                                                            (0x0000001fU 
                                                             & ((IData)(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_address2) 
                                                                - (IData)(1U))))
                                                            ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_12
                                                            : 
                                                           ((0x0bU 
                                                             == 
                                                             (0x0000001fU 
                                                              & ((IData)(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_address2) 
                                                                 - (IData)(1U))))
                                                             ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_11
                                                             : 
                                                            ((0x0aU 
                                                              == 
                                                              (0x0000001fU 
                                                               & ((IData)(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_address2) 
                                                                  - (IData)(1U))))
                                                              ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_10
                                                              : 
                                                             ((9U 
                                                               == 
                                                               (0x0000001fU 
                                                                & ((IData)(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_address2) 
                                                                   - (IData)(1U))))
                                                               ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_9
                                                               : 
                                                              ((8U 
                                                                == 
                                                                (0x0000001fU 
                                                                 & ((IData)(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_address2) 
                                                                    - (IData)(1U))))
                                                                ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_8
                                                                : 
                                                               ((7U 
                                                                 == 
                                                                 (0x0000001fU 
                                                                  & ((IData)(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_address2) 
                                                                     - (IData)(1U))))
                                                                 ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_7
                                                                 : 
                                                                ((6U 
                                                                  == 
                                                                  (0x0000001fU 
                                                                   & ((IData)(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_address2) 
                                                                      - (IData)(1U))))
                                                                  ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_6
                                                                  : 
                                                                 ((5U 
                                                                   == 
                                                                   (0x0000001fU 
                                                                    & ((IData)(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_address2) 
                                                                       - (IData)(1U))))
                                                                   ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_5
                                                                   : 
                                                                  ((4U 
                                                                    == 
                                                                    (0x0000001fU 
                                                                     & ((IData)(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_address2) 
                                                                        - (IData)(1U))))
                                                                    ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_4
                                                                    : 
                                                                   ((3U 
                                                                     == 
                                                                     (0x0000001fU 
                                                                      & ((IData)(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_address2) 
                                                                         - (IData)(1U))))
                                                                     ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_3
                                                                     : 
                                                                    ((2U 
                                                                      == 
                                                                      (0x0000001fU 
                                                                       & ((IData)(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_address2) 
                                                                          - (IData)(1U))))
                                                                      ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_2
                                                                      : 
                                                                     ((1U 
                                                                       == 
                                                                       (0x0000001fU 
                                                                        & ((IData)(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_address2) 
                                                                           - (IData)(1U))))
                                                                       ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_1
                                                                       : vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_0)))))))))))))))))))))))))))))));
    vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_jump_address_id 
        = ((0x67U == (0x0000007fU & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction))
            ? (0xfffffffeU & (vlSelfRef.Top__DOT__cpu__DOT__id__DOT__io_ex_immediate 
                              + vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_data1))
            : (vlSelfRef.Top__DOT__cpu__DOT__id__DOT__io_ex_immediate 
               + vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__pc));
    vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__csrSource 
        = ((0x00004000U & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)
            ? (0x0000001fU & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                              >> 0x0000000fU)) : vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_data1);
    vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT__io_op1 
        = (((0x63U == (0x0000007fU & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)) 
            | ((0x17U == (0x0000007fU & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)) 
               | (0x6fU == (0x0000007fU & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction))))
            ? vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__pc
            : vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_data1);
    vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_jump_flag_id 
        = (((0x63U == (0x0000007fU & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)) 
            & ((7U == (7U & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                             >> 0x0000000cU))) ? (vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_data1 
                                                  >= vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_data2)
                : ((6U == (7U & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                 >> 0x0000000cU))) ? 
                   (vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_data1 
                    < vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_data2)
                    : ((5U == (7U & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                     >> 0x0000000cU)))
                        ? VL_GTES_III(32, vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_data1, vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_data2)
                        : ((4U == (7U & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                         >> 0x0000000cU)))
                            ? VL_LTS_III(32, vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_data1, vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_data2)
                            : ((1U == (7U & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                             >> 0x0000000cU)))
                                ? (vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_data1 
                                   != vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_data2)
                                : (IData)(((0U == (0x00007000U 
                                                   & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)) 
                                           & (vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_data1 
                                              == vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_data2))))))))) 
           | (IData)(vlSelfRef.Top__DOT__cpu__DOT__id__DOT____VdfgRegularize_h38ccc7c7_0_0));
    vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT__io_op2 
        = (((IData)(vlSelfRef.Top__DOT__cpu__DOT__id__DOT___usesRs1_T_1) 
            | ((0x63U == (0x0000007fU & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)) 
               | ((IData)(vlSelfRef.Top__DOT__cpu__DOT__id__DOT____VdfgRegularize_h38ccc7c7_0_1) 
                  | (IData)(vlSelfRef.Top__DOT__cpu__DOT__id__DOT____VdfgRegularize_h38ccc7c7_0_0))))
            ? vlSelfRef.Top__DOT__cpu__DOT__id__DOT__io_ex_immediate
            : vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_data2);
    Top__DOT__cpu__DOT__ex__DOT___csrResult_T_3 = (
                                                   (~ vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__csrSource) 
                                                   & vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__io_csr_reg_read_data);
    Top__DOT__cpu__DOT__ex__DOT___csrResult_T = (vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__io_csr_reg_read_data 
                                                 | vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__csrSource);
    vlSelfRef.Top__DOT__cpu__DOT__clint__DOT__instruction_address 
        = ((IData)(vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_jump_flag_id)
            ? vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_jump_address_id
            : ((IData)(4U) + vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__pc));
    if (vlSelfRef.Top__DOT__cpu__DOT__clint__DOT____VdfgRegularize_h7f74ecf3_0_3) {
        vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__io_clint_access_bundle_mstatus_write_data 
            = vlSelfRef.Top__DOT__cpu__DOT__clint__DOT___io_csr_bundle_mstatus_write_data_T_4;
        vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__io_clint_access_bundle_mcause_write_data 
            = (0x80000000U | ((1U == vlSelfRef.io_interrupt_flag)
                               ? 7U : 0x0000000bU));
        vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__io_clint_access_bundle_mepc_write_data 
            = vlSelfRef.Top__DOT__cpu__DOT__clint__DOT__instruction_address;
    } else if (vlSelfRef.Top__DOT__cpu__DOT__clint__DOT____VdfgRegularize_h7f74ecf3_0_2) {
        vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__io_clint_access_bundle_mstatus_write_data 
            = vlSelfRef.Top__DOT__cpu__DOT__clint__DOT___io_csr_bundle_mstatus_write_data_T_4;
        vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__io_clint_access_bundle_mcause_write_data 
            = ((0x00000073U == vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)
                ? 0x0000000bU : ((0x00100073U == vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)
                                  ? 3U : 0U));
        vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__io_clint_access_bundle_mepc_write_data 
            = vlSelfRef.Top__DOT__cpu__DOT__clint__DOT__instruction_address;
    } else {
        vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__io_clint_access_bundle_mstatus_write_data 
            = ((0x30200073U == vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)
                ? (0x00001880U | ((0xffffe000U & vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mstatus) 
                                  | ((0x00000700U & vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mstatus) 
                                     | ((0x00000070U 
                                         & vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mstatus) 
                                        | ((8U & (vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mstatus 
                                                  >> 4U)) 
                                           | (7U & vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mstatus))))))
                : vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mstatus);
        vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__io_clint_access_bundle_mcause_write_data 
            = vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mcause;
        vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__io_clint_access_bundle_mepc_write_data 
            = vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mepc;
    }
    vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9 
        = (0x7fffffffffffffffULL & ((1U == (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT__io_func))
                                     ? (QData)((IData)(
                                                       (vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT__io_op1 
                                                        + vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT__io_op2)))
                                     : ((2U == (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT__io_func))
                                         ? (QData)((IData)(
                                                           (vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT__io_op1 
                                                            - vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT__io_op2)))
                                         : ((3U == (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT__io_func))
                                             ? ((QData)((IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT__io_op1)) 
                                                << 
                                                (0x0000001fU 
                                                 & vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT__io_op2))
                                             : (QData)((IData)(
                                                               ((4U 
                                                                 == (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT__io_func))
                                                                 ? 
                                                                VL_LTS_III(32, vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT__io_op1, vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT__io_op2)
                                                                 : 
                                                                ((5U 
                                                                  == (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT__io_func))
                                                                  ? 
                                                                 (vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT__io_op1 
                                                                  ^ vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT__io_op2)
                                                                  : 
                                                                 ((6U 
                                                                   == (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT__io_func))
                                                                   ? 
                                                                  (vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT__io_op1 
                                                                   | vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT__io_op2)
                                                                   : 
                                                                  ((7U 
                                                                    == (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT__io_func))
                                                                    ? 
                                                                   (vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT__io_op1 
                                                                    & vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT__io_op2)
                                                                    : 
                                                                   ((8U 
                                                                     == (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT__io_func))
                                                                     ? 
                                                                    (vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT__io_op1 
                                                                     >> 
                                                                     (0x0000001fU 
                                                                      & vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT__io_op2))
                                                                     : 
                                                                    ((9U 
                                                                      == (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT__io_func))
                                                                      ? 
                                                                     VL_SHIFTRS_III(32,32,5, vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT__io_op1, 
                                                                                (0x0000001fU 
                                                                                & vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT__io_op2))
                                                                      : 
                                                                     ((0x0aU 
                                                                       == (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT__io_func)) 
                                                                      & (vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT__io_op1 
                                                                         < vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT__io_op2))))))))))))));
    vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__io_csr_reg_write_data 
        = ((7U == (7U & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                         >> 0x0000000cU))) ? Top__DOT__cpu__DOT__ex__DOT___csrResult_T_3
            : ((3U == (7U & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                             >> 0x0000000cU))) ? Top__DOT__cpu__DOT__ex__DOT___csrResult_T_3
                : ((6U == (7U & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                 >> 0x0000000cU))) ? Top__DOT__cpu__DOT__ex__DOT___csrResult_T
                    : ((2U == (7U & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                     >> 0x0000000cU)))
                        ? Top__DOT__cpu__DOT__ex__DOT___csrResult_T
                        : vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__csrSource))));
    vlSelfRef.io_memory_bundle_address = (0x1fffffffU 
                                          & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9));
    if ((1U == (7U & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                      >> 0x0000000cU)))) {
        Top__DOT__cpu__DOT__mem__DOT___GEN_13 = (1U 
                                                 & (~ (IData)(
                                                              (vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9 
                                                               >> 1U))));
        Top__DOT__cpu__DOT__mem__DOT___GEN_16 = (1U 
                                                 & (IData)(
                                                           (vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9 
                                                            >> 1U)));
    } else {
        Top__DOT__cpu__DOT__mem__DOT___GEN_13 = (1U 
                                                 & (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                                        >> 0x0000000cU))));
        Top__DOT__cpu__DOT__mem__DOT___GEN_16 = (1U 
                                                 & (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                                        >> 0x0000000cU))));
    }
    vlSelfRef.io_deviceSelect = (7U & (IData)((vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9 
                                               >> 0x0000001dU)));
    vlSelfRef.Top__DOT__vga__DOT__io_bundle_read_data 
        = (IData)(((0x0000005cU == (0x000000ffU & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                    ? (QData)((IData)(vlSelfRef.Top__DOT__vga__DOT__paletteReg_15))
                    : ((0x00000058U == (0x000000ffU 
                                        & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                        ? (QData)((IData)(vlSelfRef.Top__DOT__vga__DOT__paletteReg_14))
                        : ((0x00000054U == (0x000000ffU 
                                            & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                            ? (QData)((IData)(vlSelfRef.Top__DOT__vga__DOT__paletteReg_13))
                            : ((0x00000050U == (0x000000ffU 
                                                & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                ? (QData)((IData)(vlSelfRef.Top__DOT__vga__DOT__paletteReg_12))
                                : ((0x0000004cU == 
                                    (0x000000ffU & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                    ? (QData)((IData)(vlSelfRef.Top__DOT__vga__DOT__paletteReg_11))
                                    : ((0x00000048U 
                                        == (0x000000ffU 
                                            & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                        ? (QData)((IData)(vlSelfRef.Top__DOT__vga__DOT__paletteReg_10))
                                        : ((0x00000044U 
                                            == (0x000000ffU 
                                                & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                            ? (QData)((IData)(vlSelfRef.Top__DOT__vga__DOT__paletteReg_9))
                                            : ((0x00000040U 
                                                == 
                                                (0x000000ffU 
                                                 & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                                ? (QData)((IData)(vlSelfRef.Top__DOT__vga__DOT__paletteReg_8))
                                                : (
                                                   (0x0000003cU 
                                                    == 
                                                    (0x000000ffU 
                                                     & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                                    ? (QData)((IData)(vlSelfRef.Top__DOT__vga__DOT__paletteReg_7))
                                                    : 
                                                   ((0x00000038U 
                                                     == 
                                                     (0x000000ffU 
                                                      & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                                     ? (QData)((IData)(vlSelfRef.Top__DOT__vga__DOT__paletteReg_6))
                                                     : 
                                                    ((0x00000034U 
                                                      == 
                                                      (0x000000ffU 
                                                       & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                                      ? (QData)((IData)(vlSelfRef.Top__DOT__vga__DOT__paletteReg_5))
                                                      : 
                                                     ((0x00000030U 
                                                       == 
                                                       (0x000000ffU 
                                                        & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                                       ? (QData)((IData)(vlSelfRef.Top__DOT__vga__DOT__paletteReg_4))
                                                       : 
                                                      ((0x0000002cU 
                                                        == 
                                                        (0x000000ffU 
                                                         & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                                        ? (QData)((IData)(vlSelfRef.Top__DOT__vga__DOT__paletteReg_3))
                                                        : 
                                                       ((0x00000028U 
                                                         == 
                                                         (0x000000ffU 
                                                          & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                                         ? (QData)((IData)(vlSelfRef.Top__DOT__vga__DOT__paletteReg_2))
                                                         : 
                                                        ((0x00000024U 
                                                          == 
                                                          (0x000000ffU 
                                                           & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                                          ? (QData)((IData)(vlSelfRef.Top__DOT__vga__DOT__paletteReg_1))
                                                          : 
                                                         ((0x00000020U 
                                                           == 
                                                           (0x000000ffU 
                                                            & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                                           ? (QData)((IData)(vlSelfRef.Top__DOT__vga__DOT__paletteReg_0))
                                                           : 
                                                          ((0x00000010U 
                                                            == 
                                                            (0x000000ffU 
                                                             & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                                            ? (QData)((IData)(vlSelfRef.Top__DOT__vga__DOT__uploadAddrReg))
                                                            : 
                                                           ((0x0000000cU 
                                                             == 
                                                             (0x000000ffU 
                                                              & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                                             ? (QData)((IData)(vlSelfRef.Top__DOT__vga__DOT__intrStatusReg))
                                                             : 
                                                            ((8U 
                                                              == 
                                                              (0x000000ffU 
                                                               & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                                              ? (QData)((IData)(
                                                                                (((IData)(vlSelfRef.Top__DOT__vga__DOT__curr_frame_synced) 
                                                                                << 5U) 
                                                                                | (3U 
                                                                                & (- (IData)((IData)(vlSelfRef.Top__DOT__vga__DOT__vblank_synced)))))))
                                                              : (QData)((IData)(
                                                                                ((4U 
                                                                                == 
                                                                                (0x000000ffU 
                                                                                & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                                                                 ? vlSelfRef.Top__DOT__vga__DOT__ctrlReg
                                                                                 : 
                                                                                ((0U 
                                                                                == 
                                                                                (0x000000ffU 
                                                                                & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                                                                 ? 0x56474131U
                                                                                 : 0U))))))))))))))))))))))));
    vlSelfRef.Top__DOT__vga__DOT__addr_palette = ((0x00000020U 
                                                   <= 
                                                   (0x000000ffU 
                                                    & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9))) 
                                                  & (0x00000060U 
                                                     > 
                                                     (0x000000ffU 
                                                      & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9))));
    if ((0x0341U == (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                     >> 0x00000014U))) {
        vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT___GEN_1 
            = vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__io_csr_reg_write_data;
        vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT___GEN_2 
            = vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mcause;
    } else {
        vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT___GEN_1 
            = vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mepc;
        vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT___GEN_2 
            = ((0x0342U == (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                            >> 0x00000014U)) ? vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__io_csr_reg_write_data
                : vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mcause);
    }
    vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT___GEN_12 
        = ((0x0340U == (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                        >> 0x00000014U)) ? vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__io_csr_reg_write_data
            : vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mscratch);
    vlSelfRef.io_memory_bundle_write_strobe_0 = ((3U 
                                                  != 
                                                  (0x0000007fU 
                                                   & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)) 
                                                 & ((0x23U 
                                                     == 
                                                     (0x0000007fU 
                                                      & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)) 
                                                    & ((0U 
                                                        == 
                                                        (7U 
                                                         & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                                            >> 0x0000000cU)))
                                                        ? 
                                                       (0U 
                                                        == 
                                                        (3U 
                                                         & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                                        : (IData)(Top__DOT__cpu__DOT__mem__DOT___GEN_13))));
    vlSelfRef.io_memory_bundle_write_strobe_1 = ((3U 
                                                  != 
                                                  (0x0000007fU 
                                                   & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)) 
                                                 & ((0x23U 
                                                     == 
                                                     (0x0000007fU 
                                                      & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)) 
                                                    & ((0U 
                                                        == 
                                                        (7U 
                                                         & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                                            >> 0x0000000cU)))
                                                        ? 
                                                       (1U 
                                                        == 
                                                        (3U 
                                                         & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                                        : (IData)(Top__DOT__cpu__DOT__mem__DOT___GEN_13))));
    vlSelfRef.io_memory_bundle_write_strobe_2 = ((3U 
                                                  != 
                                                  (0x0000007fU 
                                                   & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)) 
                                                 & ((0x23U 
                                                     == 
                                                     (0x0000007fU 
                                                      & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)) 
                                                    & ((0U 
                                                        == 
                                                        (7U 
                                                         & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                                            >> 0x0000000cU)))
                                                        ? 
                                                       (2U 
                                                        == 
                                                        (3U 
                                                         & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                                        : (IData)(Top__DOT__cpu__DOT__mem__DOT___GEN_16))));
    vlSelfRef.io_memory_bundle_write_strobe_3 = ((3U 
                                                  != 
                                                  (0x0000007fU 
                                                   & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)) 
                                                 & ((0x23U 
                                                     == 
                                                     (0x0000007fU 
                                                      & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)) 
                                                    & ((0U 
                                                        == 
                                                        (7U 
                                                         & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                                            >> 0x0000000cU)))
                                                        ? 
                                                       (3U 
                                                        == 
                                                        (3U 
                                                         & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                                        : (IData)(Top__DOT__cpu__DOT__mem__DOT___GEN_16))));
    if ((1U == (IData)(vlSelfRef.io_deviceSelect))) {
        vlSelfRef.Top__DOT__vga__DOT__io_bundle_write_enable 
            = vlSelfRef.io_memory_bundle_write_enable;
        vlSelfRef.Top__DOT__cpu__DOT__mem__DOT__io_memory_bundle_read_data 
            = vlSelfRef.Top__DOT__vga__DOT__io_bundle_read_data;
    } else {
        vlSelfRef.Top__DOT__vga__DOT__io_bundle_write_enable = 0U;
        vlSelfRef.Top__DOT__cpu__DOT__mem__DOT__io_memory_bundle_read_data 
            = vlSelfRef.io_memory_bundle_read_data;
    }
    if ((3U == (0x0000007fU & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction))) {
        vlSelfRef.Top__DOT__cpu__DOT__id__DOT__io_wb_reg_write_source = 1U;
        vlSelfRef.Top__DOT__cpu__DOT__mem__DOT___GEN_30 = 0ULL;
        vlSelfRef.Top__DOT__cpu__DOT__mem__DOT__io_wb_memory_read_data 
            = ((2U == (7U & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                             >> 0x0000000cU))) ? vlSelfRef.Top__DOT__cpu__DOT__mem__DOT__io_memory_bundle_read_data
                : ((5U == (7U & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                 >> 0x0000000cU))) ? 
                   ((1U & (IData)((vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9 
                                   >> 1U))) ? VL_SHIFTR_III(32,32,32, vlSelfRef.Top__DOT__cpu__DOT__mem__DOT__io_memory_bundle_read_data, 0x00000010U)
                     : (0x0000ffffU & vlSelfRef.Top__DOT__cpu__DOT__mem__DOT__io_memory_bundle_read_data))
                    : ((1U == (7U & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                     >> 0x0000000cU)))
                        ? ((1U & (IData)((vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9 
                                          >> 1U))) ? 
                           ((((vlSelfRef.Top__DOT__cpu__DOT__mem__DOT__io_memory_bundle_read_data 
                               >> 0x0000001fU) ? 0xffffU
                               : 0U) << 0x00000010U) 
                            | (vlSelfRef.Top__DOT__cpu__DOT__mem__DOT__io_memory_bundle_read_data 
                               >> 0x00000010U)) : (
                                                   (((0x00008000U 
                                                      & vlSelfRef.Top__DOT__cpu__DOT__mem__DOT__io_memory_bundle_read_data)
                                                      ? 0xffffU
                                                      : 0U) 
                                                    << 0x00000010U) 
                                                   | (0x0000ffffU 
                                                      & vlSelfRef.Top__DOT__cpu__DOT__mem__DOT__io_memory_bundle_read_data)))
                        : ((4U == (7U & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                         >> 0x0000000cU)))
                            ? ((3U == (3U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                ? VL_SHIFTR_III(32,32,32, vlSelfRef.Top__DOT__cpu__DOT__mem__DOT__io_memory_bundle_read_data, 0x00000018U)
                                : ((2U == (3U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                    ? (0x000000ffU 
                                       & (vlSelfRef.Top__DOT__cpu__DOT__mem__DOT__io_memory_bundle_read_data 
                                          >> 0x00000010U))
                                    : ((1U == (3U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                        ? (0x000000ffU 
                                           & (vlSelfRef.Top__DOT__cpu__DOT__mem__DOT__io_memory_bundle_read_data 
                                              >> 8U))
                                        : (0x000000ffU 
                                           & vlSelfRef.Top__DOT__cpu__DOT__mem__DOT__io_memory_bundle_read_data))))
                            : ((0U == (7U & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                             >> 0x0000000cU)))
                                ? ((3U == (3U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                    ? ((((vlSelfRef.Top__DOT__cpu__DOT__mem__DOT__io_memory_bundle_read_data 
                                          >> 0x0000001fU)
                                          ? 0x00ffffffU
                                          : 0U) << 8U) 
                                       | (vlSelfRef.Top__DOT__cpu__DOT__mem__DOT__io_memory_bundle_read_data 
                                          >> 0x00000018U))
                                    : ((2U == (3U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                        ? ((((0x00800000U 
                                              & vlSelfRef.Top__DOT__cpu__DOT__mem__DOT__io_memory_bundle_read_data)
                                              ? 0x00ffffffU
                                              : 0U) 
                                            << 8U) 
                                           | (0x000000ffU 
                                              & (vlSelfRef.Top__DOT__cpu__DOT__mem__DOT__io_memory_bundle_read_data 
                                                 >> 0x00000010U)))
                                        : ((1U == (3U 
                                                   & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                            ? ((((0x00008000U 
                                                  & vlSelfRef.Top__DOT__cpu__DOT__mem__DOT__io_memory_bundle_read_data)
                                                  ? 0x00ffffffU
                                                  : 0U) 
                                                << 8U) 
                                               | (0x000000ffU 
                                                  & (vlSelfRef.Top__DOT__cpu__DOT__mem__DOT__io_memory_bundle_read_data 
                                                     >> 8U)))
                                            : ((((0x00000080U 
                                                  & vlSelfRef.Top__DOT__cpu__DOT__mem__DOT__io_memory_bundle_read_data)
                                                  ? 0x00ffffffU
                                                  : 0U) 
                                                << 8U) 
                                               | (0x000000ffU 
                                                  & vlSelfRef.Top__DOT__cpu__DOT__mem__DOT__io_memory_bundle_read_data)))))
                                : 0U)))));
    } else {
        vlSelfRef.Top__DOT__cpu__DOT__id__DOT__io_wb_reg_write_source 
            = ((IData)(vlSelfRef.Top__DOT__cpu__DOT__id__DOT__isCsr)
                ? 2U : ((IData)(vlSelfRef.Top__DOT__cpu__DOT__id__DOT____VdfgRegularize_h38ccc7c7_0_0)
                         ? 3U : 0U));
        vlSelfRef.Top__DOT__cpu__DOT__mem__DOT___GEN_30 
            = ((0x23U == (0x0000007fU & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction))
                ? (0x0000007fffffffffULL & ((0U == 
                                             (7U & 
                                              (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                               >> 0x0000000cU)))
                                             ? ((QData)((IData)(
                                                                (0x000000ffU 
                                                                 & vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_data2))) 
                                                << 
                                                (0x00000018U 
                                                 & ((IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9) 
                                                    << 3U)))
                                             : (QData)((IData)(
                                                               ((1U 
                                                                 == 
                                                                 (7U 
                                                                  & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                                                     >> 0x0000000cU)))
                                                                 ? 
                                                                ((1U 
                                                                  & (IData)(
                                                                            (vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9 
                                                                             >> 1U)))
                                                                  ? 
                                                                 VL_SHIFTL_III(32,32,32, vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_data2, 0x00000010U)
                                                                  : 
                                                                 (0x0000ffffU 
                                                                  & vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_data2))
                                                                 : vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_data2)))))
                : 0ULL);
        vlSelfRef.Top__DOT__cpu__DOT__mem__DOT__io_wb_memory_read_data = 0U;
    }
    vlSelfRef.Top__DOT__vga__DOT___ctrlReg_T_3 = ((0xfffffff0U 
                                                   & vlSelfRef.Top__DOT__vga__DOT__ctrlReg) 
                                                  | (1U 
                                                     & (IData)(vlSelfRef.Top__DOT__cpu__DOT__mem__DOT___GEN_30)));
    if ((0x00000014U == (0x000000ffU & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))) {
        vlSelfRef.Top__DOT__vga__DOT___GEN_38 = (0x0000003fU 
                                                 & (IData)(vlSelfRef.Top__DOT__vga__DOT__paletteReg_0));
        vlSelfRef.Top__DOT__vga__DOT___GEN_39 = (0x0000003fU 
                                                 & (IData)(vlSelfRef.Top__DOT__vga__DOT__paletteReg_1));
        vlSelfRef.Top__DOT__vga__DOT___GEN_40 = (0x0000003fU 
                                                 & (IData)(vlSelfRef.Top__DOT__vga__DOT__paletteReg_2));
        vlSelfRef.Top__DOT__vga__DOT___GEN_41 = (0x0000003fU 
                                                 & (IData)(vlSelfRef.Top__DOT__vga__DOT__paletteReg_3));
        vlSelfRef.Top__DOT__vga__DOT___GEN_42 = (0x0000003fU 
                                                 & (IData)(vlSelfRef.Top__DOT__vga__DOT__paletteReg_4));
        vlSelfRef.Top__DOT__vga__DOT___GEN_43 = (0x0000003fU 
                                                 & (IData)(vlSelfRef.Top__DOT__vga__DOT__paletteReg_5));
        vlSelfRef.Top__DOT__vga__DOT___GEN_44 = (0x0000003fU 
                                                 & (IData)(vlSelfRef.Top__DOT__vga__DOT__paletteReg_6));
        vlSelfRef.Top__DOT__vga__DOT___GEN_45 = (0x0000003fU 
                                                 & (IData)(vlSelfRef.Top__DOT__vga__DOT__paletteReg_7));
        vlSelfRef.Top__DOT__vga__DOT___GEN_46 = (0x0000003fU 
                                                 & (IData)(vlSelfRef.Top__DOT__vga__DOT__paletteReg_8));
        vlSelfRef.Top__DOT__vga__DOT___GEN_47 = (0x0000003fU 
                                                 & (IData)(vlSelfRef.Top__DOT__vga__DOT__paletteReg_9));
        vlSelfRef.Top__DOT__vga__DOT___GEN_48 = (0x0000003fU 
                                                 & (IData)(vlSelfRef.Top__DOT__vga__DOT__paletteReg_10));
        vlSelfRef.Top__DOT__vga__DOT___GEN_49 = (0x0000003fU 
                                                 & (IData)(vlSelfRef.Top__DOT__vga__DOT__paletteReg_11));
        vlSelfRef.Top__DOT__vga__DOT___GEN_50 = (0x0000003fU 
                                                 & (IData)(vlSelfRef.Top__DOT__vga__DOT__paletteReg_12));
        vlSelfRef.Top__DOT__vga__DOT___GEN_51 = (0x0000003fU 
                                                 & (IData)(vlSelfRef.Top__DOT__vga__DOT__paletteReg_13));
        vlSelfRef.Top__DOT__vga__DOT___GEN_52 = (0x0000003fU 
                                                 & (IData)(vlSelfRef.Top__DOT__vga__DOT__paletteReg_14));
        vlSelfRef.Top__DOT__vga__DOT___GEN_53 = (0x0000003fU 
                                                 & (IData)(vlSelfRef.Top__DOT__vga__DOT__paletteReg_15));
    } else if (vlSelfRef.Top__DOT__vga__DOT__addr_palette) {
        vlSelfRef.Top__DOT__vga__DOT___GEN_38 = (0x0000003fU 
                                                 & ((0U 
                                                     == 
                                                     (0x0000000fU 
                                                      & (((0x000000ffU 
                                                           & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)) 
                                                          - (IData)(0x00000020U)) 
                                                         >> 2U)))
                                                     ? (IData)(vlSelfRef.Top__DOT__cpu__DOT__mem__DOT___GEN_30)
                                                     : (IData)(vlSelfRef.Top__DOT__vga__DOT__paletteReg_0)));
        vlSelfRef.Top__DOT__vga__DOT___GEN_39 = (0x0000003fU 
                                                 & ((1U 
                                                     == 
                                                     (0x0000000fU 
                                                      & (((0x000000ffU 
                                                           & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)) 
                                                          - (IData)(0x00000020U)) 
                                                         >> 2U)))
                                                     ? (IData)(vlSelfRef.Top__DOT__cpu__DOT__mem__DOT___GEN_30)
                                                     : (IData)(vlSelfRef.Top__DOT__vga__DOT__paletteReg_1)));
        vlSelfRef.Top__DOT__vga__DOT___GEN_40 = (0x0000003fU 
                                                 & ((2U 
                                                     == 
                                                     (0x0000000fU 
                                                      & (((0x000000ffU 
                                                           & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)) 
                                                          - (IData)(0x00000020U)) 
                                                         >> 2U)))
                                                     ? (IData)(vlSelfRef.Top__DOT__cpu__DOT__mem__DOT___GEN_30)
                                                     : (IData)(vlSelfRef.Top__DOT__vga__DOT__paletteReg_2)));
        vlSelfRef.Top__DOT__vga__DOT___GEN_41 = (0x0000003fU 
                                                 & ((3U 
                                                     == 
                                                     (0x0000000fU 
                                                      & (((0x000000ffU 
                                                           & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)) 
                                                          - (IData)(0x00000020U)) 
                                                         >> 2U)))
                                                     ? (IData)(vlSelfRef.Top__DOT__cpu__DOT__mem__DOT___GEN_30)
                                                     : (IData)(vlSelfRef.Top__DOT__vga__DOT__paletteReg_3)));
        vlSelfRef.Top__DOT__vga__DOT___GEN_42 = (0x0000003fU 
                                                 & ((4U 
                                                     == 
                                                     (0x0000000fU 
                                                      & (((0x000000ffU 
                                                           & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)) 
                                                          - (IData)(0x00000020U)) 
                                                         >> 2U)))
                                                     ? (IData)(vlSelfRef.Top__DOT__cpu__DOT__mem__DOT___GEN_30)
                                                     : (IData)(vlSelfRef.Top__DOT__vga__DOT__paletteReg_4)));
        vlSelfRef.Top__DOT__vga__DOT___GEN_43 = (0x0000003fU 
                                                 & ((5U 
                                                     == 
                                                     (0x0000000fU 
                                                      & (((0x000000ffU 
                                                           & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)) 
                                                          - (IData)(0x00000020U)) 
                                                         >> 2U)))
                                                     ? (IData)(vlSelfRef.Top__DOT__cpu__DOT__mem__DOT___GEN_30)
                                                     : (IData)(vlSelfRef.Top__DOT__vga__DOT__paletteReg_5)));
        vlSelfRef.Top__DOT__vga__DOT___GEN_44 = (0x0000003fU 
                                                 & ((6U 
                                                     == 
                                                     (0x0000000fU 
                                                      & (((0x000000ffU 
                                                           & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)) 
                                                          - (IData)(0x00000020U)) 
                                                         >> 2U)))
                                                     ? (IData)(vlSelfRef.Top__DOT__cpu__DOT__mem__DOT___GEN_30)
                                                     : (IData)(vlSelfRef.Top__DOT__vga__DOT__paletteReg_6)));
        vlSelfRef.Top__DOT__vga__DOT___GEN_45 = (0x0000003fU 
                                                 & ((7U 
                                                     == 
                                                     (0x0000000fU 
                                                      & (((0x000000ffU 
                                                           & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)) 
                                                          - (IData)(0x00000020U)) 
                                                         >> 2U)))
                                                     ? (IData)(vlSelfRef.Top__DOT__cpu__DOT__mem__DOT___GEN_30)
                                                     : (IData)(vlSelfRef.Top__DOT__vga__DOT__paletteReg_7)));
        vlSelfRef.Top__DOT__vga__DOT___GEN_46 = (0x0000003fU 
                                                 & ((8U 
                                                     == 
                                                     (0x0000000fU 
                                                      & (((0x000000ffU 
                                                           & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)) 
                                                          - (IData)(0x00000020U)) 
                                                         >> 2U)))
                                                     ? (IData)(vlSelfRef.Top__DOT__cpu__DOT__mem__DOT___GEN_30)
                                                     : (IData)(vlSelfRef.Top__DOT__vga__DOT__paletteReg_8)));
        vlSelfRef.Top__DOT__vga__DOT___GEN_47 = (0x0000003fU 
                                                 & ((9U 
                                                     == 
                                                     (0x0000000fU 
                                                      & (((0x000000ffU 
                                                           & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)) 
                                                          - (IData)(0x00000020U)) 
                                                         >> 2U)))
                                                     ? (IData)(vlSelfRef.Top__DOT__cpu__DOT__mem__DOT___GEN_30)
                                                     : (IData)(vlSelfRef.Top__DOT__vga__DOT__paletteReg_9)));
        vlSelfRef.Top__DOT__vga__DOT___GEN_48 = (0x0000003fU 
                                                 & ((0x0aU 
                                                     == 
                                                     (0x0000000fU 
                                                      & (((0x000000ffU 
                                                           & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)) 
                                                          - (IData)(0x00000020U)) 
                                                         >> 2U)))
                                                     ? (IData)(vlSelfRef.Top__DOT__cpu__DOT__mem__DOT___GEN_30)
                                                     : (IData)(vlSelfRef.Top__DOT__vga__DOT__paletteReg_10)));
        vlSelfRef.Top__DOT__vga__DOT___GEN_49 = (0x0000003fU 
                                                 & ((0x0bU 
                                                     == 
                                                     (0x0000000fU 
                                                      & (((0x000000ffU 
                                                           & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)) 
                                                          - (IData)(0x00000020U)) 
                                                         >> 2U)))
                                                     ? (IData)(vlSelfRef.Top__DOT__cpu__DOT__mem__DOT___GEN_30)
                                                     : (IData)(vlSelfRef.Top__DOT__vga__DOT__paletteReg_11)));
        vlSelfRef.Top__DOT__vga__DOT___GEN_50 = (0x0000003fU 
                                                 & ((0x0cU 
                                                     == 
                                                     (0x0000000fU 
                                                      & (((0x000000ffU 
                                                           & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)) 
                                                          - (IData)(0x00000020U)) 
                                                         >> 2U)))
                                                     ? (IData)(vlSelfRef.Top__DOT__cpu__DOT__mem__DOT___GEN_30)
                                                     : (IData)(vlSelfRef.Top__DOT__vga__DOT__paletteReg_12)));
        vlSelfRef.Top__DOT__vga__DOT___GEN_51 = (0x0000003fU 
                                                 & ((0x0dU 
                                                     == 
                                                     (0x0000000fU 
                                                      & (((0x000000ffU 
                                                           & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)) 
                                                          - (IData)(0x00000020U)) 
                                                         >> 2U)))
                                                     ? (IData)(vlSelfRef.Top__DOT__cpu__DOT__mem__DOT___GEN_30)
                                                     : (IData)(vlSelfRef.Top__DOT__vga__DOT__paletteReg_13)));
        vlSelfRef.Top__DOT__vga__DOT___GEN_52 = (0x0000003fU 
                                                 & ((0x0eU 
                                                     == 
                                                     (0x0000000fU 
                                                      & (((0x000000ffU 
                                                           & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)) 
                                                          - (IData)(0x00000020U)) 
                                                         >> 2U)))
                                                     ? (IData)(vlSelfRef.Top__DOT__cpu__DOT__mem__DOT___GEN_30)
                                                     : (IData)(vlSelfRef.Top__DOT__vga__DOT__paletteReg_14)));
        vlSelfRef.Top__DOT__vga__DOT___GEN_53 = (0x0000003fU 
                                                 & ((0x0fU 
                                                     == 
                                                     (0x0000000fU 
                                                      & (((0x000000ffU 
                                                           & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)) 
                                                          - (IData)(0x00000020U)) 
                                                         >> 2U)))
                                                     ? (IData)(vlSelfRef.Top__DOT__cpu__DOT__mem__DOT___GEN_30)
                                                     : (IData)(vlSelfRef.Top__DOT__vga__DOT__paletteReg_15)));
    } else {
        vlSelfRef.Top__DOT__vga__DOT___GEN_38 = (0x0000003fU 
                                                 & (IData)(vlSelfRef.Top__DOT__vga__DOT__paletteReg_0));
        vlSelfRef.Top__DOT__vga__DOT___GEN_39 = (0x0000003fU 
                                                 & (IData)(vlSelfRef.Top__DOT__vga__DOT__paletteReg_1));
        vlSelfRef.Top__DOT__vga__DOT___GEN_40 = (0x0000003fU 
                                                 & (IData)(vlSelfRef.Top__DOT__vga__DOT__paletteReg_2));
        vlSelfRef.Top__DOT__vga__DOT___GEN_41 = (0x0000003fU 
                                                 & (IData)(vlSelfRef.Top__DOT__vga__DOT__paletteReg_3));
        vlSelfRef.Top__DOT__vga__DOT___GEN_42 = (0x0000003fU 
                                                 & (IData)(vlSelfRef.Top__DOT__vga__DOT__paletteReg_4));
        vlSelfRef.Top__DOT__vga__DOT___GEN_43 = (0x0000003fU 
                                                 & (IData)(vlSelfRef.Top__DOT__vga__DOT__paletteReg_5));
        vlSelfRef.Top__DOT__vga__DOT___GEN_44 = (0x0000003fU 
                                                 & (IData)(vlSelfRef.Top__DOT__vga__DOT__paletteReg_6));
        vlSelfRef.Top__DOT__vga__DOT___GEN_45 = (0x0000003fU 
                                                 & (IData)(vlSelfRef.Top__DOT__vga__DOT__paletteReg_7));
        vlSelfRef.Top__DOT__vga__DOT___GEN_46 = (0x0000003fU 
                                                 & (IData)(vlSelfRef.Top__DOT__vga__DOT__paletteReg_8));
        vlSelfRef.Top__DOT__vga__DOT___GEN_47 = (0x0000003fU 
                                                 & (IData)(vlSelfRef.Top__DOT__vga__DOT__paletteReg_9));
        vlSelfRef.Top__DOT__vga__DOT___GEN_48 = (0x0000003fU 
                                                 & (IData)(vlSelfRef.Top__DOT__vga__DOT__paletteReg_10));
        vlSelfRef.Top__DOT__vga__DOT___GEN_49 = (0x0000003fU 
                                                 & (IData)(vlSelfRef.Top__DOT__vga__DOT__paletteReg_11));
        vlSelfRef.Top__DOT__vga__DOT___GEN_50 = (0x0000003fU 
                                                 & (IData)(vlSelfRef.Top__DOT__vga__DOT__paletteReg_12));
        vlSelfRef.Top__DOT__vga__DOT___GEN_51 = (0x0000003fU 
                                                 & (IData)(vlSelfRef.Top__DOT__vga__DOT__paletteReg_13));
        vlSelfRef.Top__DOT__vga__DOT___GEN_52 = (0x0000003fU 
                                                 & (IData)(vlSelfRef.Top__DOT__vga__DOT__paletteReg_14));
        vlSelfRef.Top__DOT__vga__DOT___GEN_53 = (0x0000003fU 
                                                 & (IData)(vlSelfRef.Top__DOT__vga__DOT__paletteReg_15));
    }
    vlSelfRef.io_memory_bundle_write_data = (IData)(vlSelfRef.Top__DOT__cpu__DOT__mem__DOT___GEN_30);
    vlSelfRef.Top__DOT__vga__DOT__framebuffer_addra 
        = ((IData)(vlSelfRef.Top__DOT__vga__DOT__io_bundle_write_enable)
            ? ((4U == (0x000000ffU & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                ? 0U : ((0x0000000cU == (0x000000ffU 
                                         & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                         ? 0U : ((0x00000010U == (0x000000ffU 
                                                  & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                  ? 0U : ((0x00000014U 
                                           == (0x000000ffU 
                                               & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                           ? (0x00001fffU 
                                              & (VL_SHIFTL_III(14,14,32, 
                                                               (0x0000000fU 
                                                                & (vlSelfRef.Top__DOT__vga__DOT__uploadAddrReg 
                                                                   >> 0x00000010U)), 9U) 
                                                 + 
                                                 (0x00001fffU 
                                                  & (vlSelfRef.Top__DOT__vga__DOT__uploadAddrReg 
                                                     >> 3U))))
                                           : 0U))))
            : 0U);
    vlSelfRef.Top__DOT__vga__DOT___intrStatusReg_T_1 
        = ((~ vlSelfRef.io_memory_bundle_write_data) 
           & vlSelfRef.Top__DOT__vga__DOT__intrStatusReg);
    vlSelfRef.Top__DOT__vga__DOT___GEN_54 = ((0x00000010U 
                                              == (0x000000ffU 
                                                  & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                              ? vlSelfRef.io_memory_bundle_write_data
                                              : ((0x00000014U 
                                                  == 
                                                  (0x000000ffU 
                                                   & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                                  ? 
                                                 ((0x000f0000U 
                                                   & vlSelfRef.Top__DOT__vga__DOT__uploadAddrReg) 
                                                  | ((0x1000U 
                                                      <= 
                                                      (0x0000ffffU 
                                                       & ((IData)(8U) 
                                                          + vlSelfRef.Top__DOT__vga__DOT__uploadAddrReg)))
                                                      ? 0U
                                                      : 
                                                     (0x0000ffffU 
                                                      & ((IData)(8U) 
                                                         + vlSelfRef.Top__DOT__vga__DOT__uploadAddrReg))))
                                                  : vlSelfRef.Top__DOT__vga__DOT__uploadAddrReg));
    vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_write_data 
        = ((3U == (IData)(vlSelfRef.Top__DOT__cpu__DOT__id__DOT__io_wb_reg_write_source))
            ? ((IData)(4U) + vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__pc)
            : ((2U == (IData)(vlSelfRef.Top__DOT__cpu__DOT__id__DOT__io_wb_reg_write_source))
                ? vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__io_csr_reg_read_data
                : ((1U == (IData)(vlSelfRef.Top__DOT__cpu__DOT__id__DOT__io_wb_reg_write_source))
                    ? vlSelfRef.Top__DOT__cpu__DOT__mem__DOT__io_wb_memory_read_data
                    : (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9))));
}

VL_ATTR_COLD void VTop___024root___eval_stl(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_stl\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        VTop___024root___stl_sequent__TOP__0(vlSelf);
        VTop___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool VTop___024root___eval_phase__stl(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_phase__stl\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    VTop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = VTop___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        VTop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool VTop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(VTop___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool VTop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(VTop___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clock)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge io_vga_pixclk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VTop___024root____Vm_traceActivitySetAll(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root____Vm_traceActivitySetAll\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
}

VL_ATTR_COLD void VTop___024root___ctor_var_reset(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___ctor_var_reset\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5452235342940299466ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->io_instruction_address = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 575460802021663803ull);
    vlSelf->io_instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4891035548353583413ull);
    vlSelf->io_instruction_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5008156892548894757ull);
    vlSelf->io_interrupt_flag = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14073545644396066401ull);
    vlSelf->io_memory_bundle_address = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2708332782636133959ull);
    vlSelf->io_memory_bundle_write_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3139919981039688996ull);
    vlSelf->io_memory_bundle_write_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13033540442847389750ull);
    vlSelf->io_memory_bundle_write_strobe_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7759084956352681213ull);
    vlSelf->io_memory_bundle_write_strobe_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2569522288926210021ull);
    vlSelf->io_memory_bundle_write_strobe_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12830052262608877857ull);
    vlSelf->io_memory_bundle_write_strobe_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3976486367934509046ull);
    vlSelf->io_memory_bundle_read_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3267359484496821832ull);
    vlSelf->io_deviceSelect = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14898145978137497731ull);
    vlSelf->io_regs_debug_read_address = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17421319221913279326ull);
    vlSelf->io_regs_debug_read_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14965129587632721297ull);
    vlSelf->io_csr_regs_debug_read_address = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 5455778545807682518ull);
    vlSelf->io_csr_regs_debug_read_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8721724980502299615ull);
    vlSelf->io_vga_pixclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5441003241121805875ull);
    vlSelf->io_vga_hsync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 789791990942687469ull);
    vlSelf->io_vga_vsync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2779193204775434146ull);
    vlSelf->io_vga_rrggbb = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11339984181257292272ull);
    vlSelf->io_vga_activevideo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9734710376064975037ull);
    vlSelf->io_vga_x_pos = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11300248803845281783ull);
    vlSelf->io_vga_y_pos = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2832798987128525396ull);
    vlSelf->Top__DOT__cpu__DOT__regs__DOT__io_write_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2950542603719760276ull);
    vlSelf->Top__DOT__cpu__DOT__regs__DOT__io_write_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9813216217924168960ull);
    vlSelf->Top__DOT__cpu__DOT__regs__DOT__io_read_address1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3033994332161432170ull);
    vlSelf->Top__DOT__cpu__DOT__regs__DOT__io_read_address2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3718977324613526443ull);
    vlSelf->Top__DOT__cpu__DOT__regs__DOT__io_read_data1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16789560767800065833ull);
    vlSelf->Top__DOT__cpu__DOT__regs__DOT__io_read_data2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13245567287556583618ull);
    vlSelf->Top__DOT__cpu__DOT__regs__DOT__registers_0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5267446113558595876ull);
    vlSelf->Top__DOT__cpu__DOT__regs__DOT__registers_1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2067627460960723170ull);
    vlSelf->Top__DOT__cpu__DOT__regs__DOT__registers_2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1827269646455318275ull);
    vlSelf->Top__DOT__cpu__DOT__regs__DOT__registers_3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4991300346974952130ull);
    vlSelf->Top__DOT__cpu__DOT__regs__DOT__registers_4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6680483637110279194ull);
    vlSelf->Top__DOT__cpu__DOT__regs__DOT__registers_5 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5565692523739977796ull);
    vlSelf->Top__DOT__cpu__DOT__regs__DOT__registers_6 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2068053062756823356ull);
    vlSelf->Top__DOT__cpu__DOT__regs__DOT__registers_7 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5006924725424810682ull);
    vlSelf->Top__DOT__cpu__DOT__regs__DOT__registers_8 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5803295355655724179ull);
    vlSelf->Top__DOT__cpu__DOT__regs__DOT__registers_9 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13070018736990332325ull);
    vlSelf->Top__DOT__cpu__DOT__regs__DOT__registers_10 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1758313027250087622ull);
    vlSelf->Top__DOT__cpu__DOT__regs__DOT__registers_11 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9633090681068964979ull);
    vlSelf->Top__DOT__cpu__DOT__regs__DOT__registers_12 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1584049209872500439ull);
    vlSelf->Top__DOT__cpu__DOT__regs__DOT__registers_13 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10506679485134116314ull);
    vlSelf->Top__DOT__cpu__DOT__regs__DOT__registers_14 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13712168051750524552ull);
    vlSelf->Top__DOT__cpu__DOT__regs__DOT__registers_15 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3347856784265814178ull);
    vlSelf->Top__DOT__cpu__DOT__regs__DOT__registers_16 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12431635433836037763ull);
    vlSelf->Top__DOT__cpu__DOT__regs__DOT__registers_17 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7505690341990462802ull);
    vlSelf->Top__DOT__cpu__DOT__regs__DOT__registers_18 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3771835736349655554ull);
    vlSelf->Top__DOT__cpu__DOT__regs__DOT__registers_19 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8435557010474924868ull);
    vlSelf->Top__DOT__cpu__DOT__regs__DOT__registers_20 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5668295052365351729ull);
    vlSelf->Top__DOT__cpu__DOT__regs__DOT__registers_21 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10856737731400670659ull);
    vlSelf->Top__DOT__cpu__DOT__regs__DOT__registers_22 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17495444320915972526ull);
    vlSelf->Top__DOT__cpu__DOT__regs__DOT__registers_23 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17294572244909887464ull);
    vlSelf->Top__DOT__cpu__DOT__regs__DOT__registers_24 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1265951639732003774ull);
    vlSelf->Top__DOT__cpu__DOT__regs__DOT__registers_25 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2329139421555182486ull);
    vlSelf->Top__DOT__cpu__DOT__regs__DOT__registers_26 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14864530741490042039ull);
    vlSelf->Top__DOT__cpu__DOT__regs__DOT__registers_27 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8889142839824318510ull);
    vlSelf->Top__DOT__cpu__DOT__regs__DOT__registers_28 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17347499566127293449ull);
    vlSelf->Top__DOT__cpu__DOT__regs__DOT__registers_29 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17796804227003811930ull);
    vlSelf->Top__DOT__cpu__DOT__regs__DOT__registers_30 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10686899032280811671ull);
    vlSelf->Top__DOT__cpu__DOT__inst_fetch__DOT__io_jump_flag_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16652681600555950899ull);
    vlSelf->Top__DOT__cpu__DOT__inst_fetch__DOT__io_jump_address_id = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6467282163647955965ull);
    vlSelf->Top__DOT__cpu__DOT__inst_fetch__DOT__io_interrupt_assert = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15856187500882117978ull);
    vlSelf->Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12422413844122160296ull);
    vlSelf->Top__DOT__cpu__DOT__inst_fetch__DOT__pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8913590304391464016ull);
    vlSelf->Top__DOT__cpu__DOT__inst_fetch__DOT__next_pc_sequential = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10237384892142262932ull);
    vlSelf->Top__DOT__cpu__DOT__id__DOT__io_ex_immediate = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15671332607300754922ull);
    vlSelf->Top__DOT__cpu__DOT__id__DOT__io_wb_reg_write_source = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4165569079175445107ull);
    vlSelf->Top__DOT__cpu__DOT__id__DOT__io_csr_reg_write_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 536022539233977061ull);
    vlSelf->Top__DOT__cpu__DOT__id__DOT__isCsr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13692482553046776734ull);
    vlSelf->Top__DOT__cpu__DOT__id__DOT___usesRs1_T_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13337400276832093016ull);
    vlSelf->Top__DOT__cpu__DOT__id__DOT__immKind = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3196417954074709598ull);
    vlSelf->Top__DOT__cpu__DOT__id__DOT____VdfgRegularize_h38ccc7c7_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8416146899211146582ull);
    vlSelf->Top__DOT__cpu__DOT__id__DOT____VdfgRegularize_h38ccc7c7_0_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10421031795315406132ull);
    vlSelf->Top__DOT__cpu__DOT__id__DOT____VdfgRegularize_h38ccc7c7_0_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4962029641873418238ull);
    vlSelf->Top__DOT__cpu__DOT__ex__DOT__io_csr_reg_read_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2642862029395765574ull);
    vlSelf->Top__DOT__cpu__DOT__ex__DOT__io_csr_reg_write_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13420249061529094150ull);
    vlSelf->Top__DOT__cpu__DOT__ex__DOT__csrSource = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5809261283456888617ull);
    vlSelf->Top__DOT__cpu__DOT__ex__DOT__alu__DOT__io_func = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11844855353091791761ull);
    vlSelf->Top__DOT__cpu__DOT__ex__DOT__alu__DOT__io_op1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7553277214070422995ull);
    vlSelf->Top__DOT__cpu__DOT__ex__DOT__alu__DOT__io_op2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1990914351064843723ull);
    vlSelf->Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9 = VL_SCOPED_RAND_RESET_Q(63, __VscopeHash, 14908492901354054036ull);
    vlSelf->Top__DOT__cpu__DOT__mem__DOT__io_wb_memory_read_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 103545878921124234ull);
    vlSelf->Top__DOT__cpu__DOT__mem__DOT__io_memory_bundle_read_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12941744659792000576ull);
    vlSelf->Top__DOT__cpu__DOT__mem__DOT___GEN_30 = VL_SCOPED_RAND_RESET_Q(39, __VscopeHash, 5791528018306283505ull);
    vlSelf->Top__DOT__cpu__DOT__csr_regs__DOT__io_clint_access_bundle_mstatus_write_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4980824478985878832ull);
    vlSelf->Top__DOT__cpu__DOT__csr_regs__DOT__io_clint_access_bundle_mepc_write_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1262854695027071644ull);
    vlSelf->Top__DOT__cpu__DOT__csr_regs__DOT__io_clint_access_bundle_mcause_write_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12931113724015508798ull);
    vlSelf->Top__DOT__cpu__DOT__csr_regs__DOT__mstatus = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15477840047143807129ull);
    vlSelf->Top__DOT__cpu__DOT__csr_regs__DOT__mie = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7374892981308031957ull);
    vlSelf->Top__DOT__cpu__DOT__csr_regs__DOT__mtvec = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11029455573527854977ull);
    vlSelf->Top__DOT__cpu__DOT__csr_regs__DOT__mscratch = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13177995750247081181ull);
    vlSelf->Top__DOT__cpu__DOT__csr_regs__DOT__mepc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6860045215790714802ull);
    vlSelf->Top__DOT__cpu__DOT__csr_regs__DOT__mcause = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5538494940616189770ull);
    vlSelf->Top__DOT__cpu__DOT__csr_regs__DOT__cycles = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8102443447490118113ull);
    vlSelf->Top__DOT__cpu__DOT__csr_regs__DOT___cycles_T_1 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9024181886694509804ull);
    vlSelf->Top__DOT__cpu__DOT__csr_regs__DOT___GEN_1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3049770598188002898ull);
    vlSelf->Top__DOT__cpu__DOT__csr_regs__DOT___GEN_2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6395104099619278998ull);
    vlSelf->Top__DOT__cpu__DOT__csr_regs__DOT___GEN_12 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5437560523656625228ull);
    vlSelf->Top__DOT__cpu__DOT__clint__DOT__instruction_address = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9645073597450693119ull);
    vlSelf->Top__DOT__cpu__DOT__clint__DOT___io_csr_bundle_mstatus_write_data_T_4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14124162122449406799ull);
    vlSelf->Top__DOT__cpu__DOT__clint__DOT____VdfgRegularize_h7f74ecf3_0_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7723191248801370218ull);
    vlSelf->Top__DOT__cpu__DOT__clint__DOT____VdfgRegularize_h7f74ecf3_0_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3565406707961679627ull);
    vlSelf->Top__DOT__vga__DOT__io_bundle_write_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12759335691592209711ull);
    vlSelf->Top__DOT__vga__DOT__io_bundle_read_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 809882295033316653ull);
    vlSelf->Top__DOT__vga__DOT__framebuffer_addra = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 16983779008928995122ull);
    vlSelf->Top__DOT__vga__DOT__framebuffer_doutb = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4143541111940274990ull);
    vlSelf->Top__DOT__vga__DOT__ctrlReg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18158462890884282302ull);
    vlSelf->Top__DOT__vga__DOT__intrStatusReg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 373870454792361646ull);
    vlSelf->Top__DOT__vga__DOT__uploadAddrReg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13694189410376718193ull);
    vlSelf->Top__DOT__vga__DOT__paletteReg_0 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1614672212418333192ull);
    vlSelf->Top__DOT__vga__DOT__paletteReg_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4068136962732696646ull);
    vlSelf->Top__DOT__vga__DOT__paletteReg_2 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3334754448660702086ull);
    vlSelf->Top__DOT__vga__DOT__paletteReg_3 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11145869692099816828ull);
    vlSelf->Top__DOT__vga__DOT__paletteReg_4 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8155453507806479417ull);
    vlSelf->Top__DOT__vga__DOT__paletteReg_5 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4225572867366160946ull);
    vlSelf->Top__DOT__vga__DOT__paletteReg_6 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8425731196055615995ull);
    vlSelf->Top__DOT__vga__DOT__paletteReg_7 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13887756779967430729ull);
    vlSelf->Top__DOT__vga__DOT__paletteReg_8 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14409496679826258791ull);
    vlSelf->Top__DOT__vga__DOT__paletteReg_9 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10690098256517763099ull);
    vlSelf->Top__DOT__vga__DOT__paletteReg_10 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17401126366998357390ull);
    vlSelf->Top__DOT__vga__DOT__paletteReg_11 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9185351938340200201ull);
    vlSelf->Top__DOT__vga__DOT__paletteReg_12 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17918420068923820410ull);
    vlSelf->Top__DOT__vga__DOT__paletteReg_13 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13166839175030248804ull);
    vlSelf->Top__DOT__vga__DOT__paletteReg_14 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1145976776032105929ull);
    vlSelf->Top__DOT__vga__DOT__paletteReg_15 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3717879033073372170ull);
    vlSelf->Top__DOT__vga__DOT__addr_palette = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1752920867736735423ull);
    vlSelf->Top__DOT__vga__DOT__vblank_sync1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 418088408920067606ull);
    vlSelf->Top__DOT__vga__DOT__vblank_synced = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4561715219761553379ull);
    vlSelf->Top__DOT__vga__DOT__curr_frame_sync1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13264499331550389899ull);
    vlSelf->Top__DOT__vga__DOT__curr_frame_synced = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13159214966030601391ull);
    vlSelf->Top__DOT__vga__DOT__vblank_prev = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7593240615039793283ull);
    vlSelf->Top__DOT__vga__DOT___GEN_0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9335015664919292615ull);
    vlSelf->Top__DOT__vga__DOT___ctrlReg_T_3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11572115848926899222ull);
    vlSelf->Top__DOT__vga__DOT___intrStatusReg_T_1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11573008135655754832ull);
    vlSelf->Top__DOT__vga__DOT___GEN_38 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5321257698702943836ull);
    vlSelf->Top__DOT__vga__DOT___GEN_39 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3819985582283538045ull);
    vlSelf->Top__DOT__vga__DOT___GEN_40 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10088153544613946914ull);
    vlSelf->Top__DOT__vga__DOT___GEN_41 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 494622053549787146ull);
    vlSelf->Top__DOT__vga__DOT___GEN_42 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14265242607216418550ull);
    vlSelf->Top__DOT__vga__DOT___GEN_43 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8570651665274385014ull);
    vlSelf->Top__DOT__vga__DOT___GEN_44 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10685656532249609340ull);
    vlSelf->Top__DOT__vga__DOT___GEN_45 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12203158411589065164ull);
    vlSelf->Top__DOT__vga__DOT___GEN_46 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6352490061782546079ull);
    vlSelf->Top__DOT__vga__DOT___GEN_47 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13697057715508184695ull);
    vlSelf->Top__DOT__vga__DOT___GEN_48 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13295464474077312663ull);
    vlSelf->Top__DOT__vga__DOT___GEN_49 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11794192357658026362ull);
    vlSelf->Top__DOT__vga__DOT___GEN_50 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17527991165861971961ull);
    vlSelf->Top__DOT__vga__DOT___GEN_51 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14516589982603495166ull);
    vlSelf->Top__DOT__vga__DOT___GEN_52 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3802918471042763495ull);
    vlSelf->Top__DOT__vga__DOT___GEN_53 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10183423512136283997ull);
    vlSelf->Top__DOT__vga__DOT___GEN_54 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12298428379111550487ull);
    vlSelf->Top__DOT__vga__DOT__h_count = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2938161215737724369ull);
    vlSelf->Top__DOT__vga__DOT__v_count = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10716009357214895239ull);
    vlSelf->Top__DOT__vga__DOT___v_count_T_1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 12330843257989947378ull);
    vlSelf->Top__DOT__vga__DOT___h_count_T_1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15067033290888369711ull);
    vlSelf->Top__DOT__vga__DOT__hsync_d1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5511196749260834399ull);
    vlSelf->Top__DOT__vga__DOT__vsync_d1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7584910967303861563ull);
    vlSelf->Top__DOT__vga__DOT__io_hsync_REG = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3933475804267388294ull);
    vlSelf->Top__DOT__vga__DOT__io_vsync_REG = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9268901090294448041ull);
    vlSelf->Top__DOT__vga__DOT__x_px = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13363019997303085754ull);
    vlSelf->Top__DOT__vga__DOT__y_px = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 152568307532513101ull);
    vlSelf->Top__DOT__vga__DOT__rel_x = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 9874008113935000700ull);
    vlSelf->Top__DOT__vga__DOT__rel_y = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 9692860839582802503ull);
    vlSelf->Top__DOT__vga__DOT__curr_frame_sync1_1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1585122951538770984ull);
    vlSelf->Top__DOT__vga__DOT__curr_frame = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14362208325934657422ull);
    vlSelf->Top__DOT__vga__DOT__display_enabled_sync1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9224595919534608403ull);
    vlSelf->Top__DOT__vga__DOT__display_enabled = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8112135812394734488ull);
    vlSelf->Top__DOT__vga__DOT__blanking_sync1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14995921207928838100ull);
    vlSelf->Top__DOT__vga__DOT__blanking = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4407224928211912527ull);
    vlSelf->Top__DOT__vga__DOT__palette_sync1_0 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10905680290295022691ull);
    vlSelf->Top__DOT__vga__DOT__palette_sync1_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5267658918220736676ull);
    vlSelf->Top__DOT__vga__DOT__palette_sync1_2 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13870835241962196576ull);
    vlSelf->Top__DOT__vga__DOT__palette_sync1_3 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5543545779920756641ull);
    vlSelf->Top__DOT__vga__DOT__palette_sync1_4 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6148360189001219564ull);
    vlSelf->Top__DOT__vga__DOT__palette_sync1_5 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16267814800669199533ull);
    vlSelf->Top__DOT__vga__DOT__palette_sync1_6 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 18288860816605135784ull);
    vlSelf->Top__DOT__vga__DOT__palette_sync1_7 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 786225678626989862ull);
    vlSelf->Top__DOT__vga__DOT__palette_sync1_8 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4433985518549918803ull);
    vlSelf->Top__DOT__vga__DOT__palette_sync1_9 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11310401337233366381ull);
    vlSelf->Top__DOT__vga__DOT__palette_sync1_10 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15524431485049307401ull);
    vlSelf->Top__DOT__vga__DOT__palette_sync1_11 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12338591206286025665ull);
    vlSelf->Top__DOT__vga__DOT__palette_sync1_12 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9337081996600678923ull);
    vlSelf->Top__DOT__vga__DOT__palette_sync1_13 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3675187015946690575ull);
    vlSelf->Top__DOT__vga__DOT__palette_sync1_14 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16805812171717921366ull);
    vlSelf->Top__DOT__vga__DOT__palette_sync1_15 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4715140783883834947ull);
    vlSelf->Top__DOT__vga__DOT__palette_sync_0 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4579203049925570496ull);
    vlSelf->Top__DOT__vga__DOT__palette_sync_1 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6059204357182708557ull);
    vlSelf->Top__DOT__vga__DOT__palette_sync_2 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2461518345115918560ull);
    vlSelf->Top__DOT__vga__DOT__palette_sync_3 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 188354709088371332ull);
    vlSelf->Top__DOT__vga__DOT__palette_sync_4 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13668175133653421107ull);
    vlSelf->Top__DOT__vga__DOT__palette_sync_5 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9718574450168215495ull);
    vlSelf->Top__DOT__vga__DOT__palette_sync_6 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 18109120086029984618ull);
    vlSelf->Top__DOT__vga__DOT__palette_sync_7 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3029296584166709062ull);
    vlSelf->Top__DOT__vga__DOT__palette_sync_8 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 453460621563633181ull);
    vlSelf->Top__DOT__vga__DOT__palette_sync_9 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17002276229272986447ull);
    vlSelf->Top__DOT__vga__DOT__palette_sync_10 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8363367001029492281ull);
    vlSelf->Top__DOT__vga__DOT__palette_sync_11 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16527202117049089566ull);
    vlSelf->Top__DOT__vga__DOT__palette_sync_12 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10889180744974789208ull);
    vlSelf->Top__DOT__vga__DOT__palette_sync_13 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8704680383016894552ull);
    vlSelf->Top__DOT__vga__DOT__palette_sync_14 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15910001873361777799ull);
    vlSelf->Top__DOT__vga__DOT__palette_sync_15 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6066434123393665406ull);
    vlSelf->Top__DOT__vga__DOT__in_display_d1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9070446564239803883ull);
    vlSelf->Top__DOT__vga__DOT__h_active_d1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9453566207239835648ull);
    vlSelf->Top__DOT__vga__DOT__v_active_d1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9901428568565891235ull);
    vlSelf->Top__DOT__vga__DOT__h_active_d2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6824764493005439390ull);
    vlSelf->Top__DOT__vga__DOT__v_active_d2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5202223828304595655ull);
    vlSelf->Top__DOT__vga__DOT__pixel_idx = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 7623795233212929566ull);
    vlSelf->Top__DOT__vga__DOT__pixel_in_word_d1 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6716552005555498231ull);
    vlSelf->Top__DOT__vga__DOT__pixel_4bit = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6052101744163646001ull);
    vlSelf->Top__DOT__vga__DOT__x_px_d1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 4203191721256885918ull);
    vlSelf->Top__DOT__vga__DOT__y_px_d1 = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 16577262621494035464ull);
    for (int __Vi0 = 0; __Vi0 < 6144; ++__Vi0) {
        vlSelf->Top__DOT__vga__DOT__framebuffer__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16269374068619689921ull);
    }
    vlSelf->Top__DOT__vga__DOT__framebuffer__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15913622921655678199ull);
    vlSelf->Top__DOT__vga__DOT__framebuffer__DOT____Vlvbound_hdaacaeaf__0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7320571072811643809ull);
    vlSelf->Top__DOT__vga__DOT__framebuffer__DOT____Vlvbound_h4f27bff6__0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12424226396344256477ull);
    vlSelf->__Vdly__Top__DOT__vga__DOT__v_count = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 4545058584927436815ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13272892335938733197ull);
    vlSelf->__Vtrigprevexpr___TOP__io_vga_pixclk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9909585622885672274ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
