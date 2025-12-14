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
}

VL_ATTR_COLD void VTop___024root___eval_initial(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_initial\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
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
            VL_FATAL_MT("Top.v", 922, "", "Settle region did not converge after 100 tries");
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
    // Body
    vlSelfRef.io_instruction_address = vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__pc;
    vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT___pc_T_1 
        = ((IData)(4U) + vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__pc);
    vlSelfRef.io_debug_read_data = ((0U == (IData)(vlSelfRef.io_debug_read_address))
                                     ? 0U : ((0x1eU 
                                              == (0x0000001fU 
                                                  & ((IData)(vlSelfRef.io_debug_read_address) 
                                                     - (IData)(1U))))
                                              ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_30
                                              : ((0x1dU 
                                                  == 
                                                  (0x0000001fU 
                                                   & ((IData)(vlSelfRef.io_debug_read_address) 
                                                      - (IData)(1U))))
                                                  ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_29
                                                  : 
                                                 ((0x1cU 
                                                   == 
                                                   (0x0000001fU 
                                                    & ((IData)(vlSelfRef.io_debug_read_address) 
                                                       - (IData)(1U))))
                                                   ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_28
                                                   : 
                                                  ((0x1bU 
                                                    == 
                                                    (0x0000001fU 
                                                     & ((IData)(vlSelfRef.io_debug_read_address) 
                                                        - (IData)(1U))))
                                                    ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_27
                                                    : 
                                                   ((0x1aU 
                                                     == 
                                                     (0x0000001fU 
                                                      & ((IData)(vlSelfRef.io_debug_read_address) 
                                                         - (IData)(1U))))
                                                     ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_26
                                                     : 
                                                    ((0x19U 
                                                      == 
                                                      (0x0000001fU 
                                                       & ((IData)(vlSelfRef.io_debug_read_address) 
                                                          - (IData)(1U))))
                                                      ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_25
                                                      : 
                                                     ((0x18U 
                                                       == 
                                                       (0x0000001fU 
                                                        & ((IData)(vlSelfRef.io_debug_read_address) 
                                                           - (IData)(1U))))
                                                       ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_24
                                                       : 
                                                      ((0x17U 
                                                        == 
                                                        (0x0000001fU 
                                                         & ((IData)(vlSelfRef.io_debug_read_address) 
                                                            - (IData)(1U))))
                                                        ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_23
                                                        : 
                                                       ((0x16U 
                                                         == 
                                                         (0x0000001fU 
                                                          & ((IData)(vlSelfRef.io_debug_read_address) 
                                                             - (IData)(1U))))
                                                         ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_22
                                                         : 
                                                        ((0x15U 
                                                          == 
                                                          (0x0000001fU 
                                                           & ((IData)(vlSelfRef.io_debug_read_address) 
                                                              - (IData)(1U))))
                                                          ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_21
                                                          : 
                                                         ((0x14U 
                                                           == 
                                                           (0x0000001fU 
                                                            & ((IData)(vlSelfRef.io_debug_read_address) 
                                                               - (IData)(1U))))
                                                           ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_20
                                                           : 
                                                          ((0x13U 
                                                            == 
                                                            (0x0000001fU 
                                                             & ((IData)(vlSelfRef.io_debug_read_address) 
                                                                - (IData)(1U))))
                                                            ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_19
                                                            : 
                                                           ((0x12U 
                                                             == 
                                                             (0x0000001fU 
                                                              & ((IData)(vlSelfRef.io_debug_read_address) 
                                                                 - (IData)(1U))))
                                                             ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_18
                                                             : 
                                                            ((0x11U 
                                                              == 
                                                              (0x0000001fU 
                                                               & ((IData)(vlSelfRef.io_debug_read_address) 
                                                                  - (IData)(1U))))
                                                              ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_17
                                                              : 
                                                             ((0x10U 
                                                               == 
                                                               (0x0000001fU 
                                                                & ((IData)(vlSelfRef.io_debug_read_address) 
                                                                   - (IData)(1U))))
                                                               ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_16
                                                               : 
                                                              ((0x0fU 
                                                                == 
                                                                (0x0000001fU 
                                                                 & ((IData)(vlSelfRef.io_debug_read_address) 
                                                                    - (IData)(1U))))
                                                                ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_15
                                                                : 
                                                               ((0x0eU 
                                                                 == 
                                                                 (0x0000001fU 
                                                                  & ((IData)(vlSelfRef.io_debug_read_address) 
                                                                     - (IData)(1U))))
                                                                 ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_14
                                                                 : 
                                                                ((0x0dU 
                                                                  == 
                                                                  (0x0000001fU 
                                                                   & ((IData)(vlSelfRef.io_debug_read_address) 
                                                                      - (IData)(1U))))
                                                                  ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_13
                                                                  : 
                                                                 ((0x0cU 
                                                                   == 
                                                                   (0x0000001fU 
                                                                    & ((IData)(vlSelfRef.io_debug_read_address) 
                                                                       - (IData)(1U))))
                                                                   ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_12
                                                                   : 
                                                                  ((0x0bU 
                                                                    == 
                                                                    (0x0000001fU 
                                                                     & ((IData)(vlSelfRef.io_debug_read_address) 
                                                                        - (IData)(1U))))
                                                                    ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_11
                                                                    : 
                                                                   ((0x0aU 
                                                                     == 
                                                                     (0x0000001fU 
                                                                      & ((IData)(vlSelfRef.io_debug_read_address) 
                                                                         - (IData)(1U))))
                                                                     ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_10
                                                                     : 
                                                                    ((9U 
                                                                      == 
                                                                      (0x0000001fU 
                                                                       & ((IData)(vlSelfRef.io_debug_read_address) 
                                                                          - (IData)(1U))))
                                                                      ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_9
                                                                      : 
                                                                     ((8U 
                                                                       == 
                                                                       (0x0000001fU 
                                                                        & ((IData)(vlSelfRef.io_debug_read_address) 
                                                                           - (IData)(1U))))
                                                                       ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_8
                                                                       : 
                                                                      ((7U 
                                                                        == 
                                                                        (0x0000001fU 
                                                                         & ((IData)(vlSelfRef.io_debug_read_address) 
                                                                            - (IData)(1U))))
                                                                        ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_7
                                                                        : 
                                                                       ((6U 
                                                                         == 
                                                                         (0x0000001fU 
                                                                          & ((IData)(vlSelfRef.io_debug_read_address) 
                                                                             - (IData)(1U))))
                                                                         ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_6
                                                                         : 
                                                                        ((5U 
                                                                          == 
                                                                          (0x0000001fU 
                                                                           & ((IData)(vlSelfRef.io_debug_read_address) 
                                                                              - (IData)(1U))))
                                                                          ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_5
                                                                          : 
                                                                         ((4U 
                                                                           == 
                                                                           (0x0000001fU 
                                                                            & ((IData)(vlSelfRef.io_debug_read_address) 
                                                                               - (IData)(1U))))
                                                                           ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_4
                                                                           : 
                                                                          ((3U 
                                                                            == 
                                                                            (0x0000001fU 
                                                                             & ((IData)(vlSelfRef.io_debug_read_address) 
                                                                                - (IData)(1U))))
                                                                            ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_3
                                                                            : 
                                                                           ((2U 
                                                                             == 
                                                                             (0x0000001fU 
                                                                              & ((IData)(vlSelfRef.io_debug_read_address) 
                                                                                - (IData)(1U))))
                                                                             ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_2
                                                                             : 
                                                                            ((1U 
                                                                              == 
                                                                              (0x0000001fU 
                                                                               & ((IData)(vlSelfRef.io_debug_read_address) 
                                                                                - (IData)(1U))))
                                                                              ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_1
                                                                              : vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_0)))))))))))))))))))))))))))))));
    vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
        = ((IData)(vlSelfRef.io_instruction_valid) ? vlSelfRef.io_instruction
            : 0x00000013U);
    vlSelfRef.io_memory_bundle_write_enable = ((3U 
                                                != 
                                                (0x0000007fU 
                                                 & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)) 
                                               & (0x23U 
                                                  == 
                                                  (0x0000007fU 
                                                   & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)));
    vlSelfRef.Top__DOT__cpu__DOT__id__DOT____VdfgRegularize_h38ccc7c7_0_0 
        = ((0x17U == (0x0000007fU & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)) 
           | (0x67U == (0x0000007fU & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)));
    vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_address2 
        = ((0x23U == (0x0000007fU & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction))
            ? (0x0000001fU & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                              >> 0x00000014U)) : 0U);
    vlSelfRef.Top__DOT__cpu__DOT__id__DOT___usesRs1_T_1 
        = ((3U == (0x0000007fU & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)) 
           | ((0x23U == (0x0000007fU & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)) 
              | (0x13U == (0x0000007fU & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction))));
    vlSelfRef.io_memory_bundle_write_strobe_0 = vlSelfRef.io_memory_bundle_write_enable;
    vlSelfRef.io_memory_bundle_write_strobe_1 = vlSelfRef.io_memory_bundle_write_enable;
    vlSelfRef.io_memory_bundle_write_strobe_2 = vlSelfRef.io_memory_bundle_write_enable;
    vlSelfRef.io_memory_bundle_write_strobe_3 = vlSelfRef.io_memory_bundle_write_enable;
    vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_write_enable 
        = ((3U == (0x0000007fU & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)) 
           | ((0x13U == (0x0000007fU & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)) 
              | (IData)(vlSelfRef.Top__DOT__cpu__DOT__id__DOT____VdfgRegularize_h38ccc7c7_0_0)));
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
    if ((3U == (0x0000007fU & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction))) {
        vlSelfRef.Top__DOT__cpu__DOT__id__DOT__io_wb_reg_write_source = 1U;
        vlSelfRef.io_memory_bundle_write_data = 0U;
    } else {
        vlSelfRef.Top__DOT__cpu__DOT__id__DOT__io_wb_reg_write_source 
            = ((0x67U == (0x0000007fU & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction))
                ? 2U : 0U);
        vlSelfRef.io_memory_bundle_write_data = ((0x23U 
                                                  == 
                                                  (0x0000007fU 
                                                   & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction))
                                                  ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_data2
                                                  : 0U);
    }
    vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_address1 
        = (((IData)(vlSelfRef.Top__DOT__cpu__DOT__id__DOT___usesRs1_T_1) 
            | (0x67U == (0x0000007fU & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)))
            ? (0x0000001fU & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                              >> 0x0000000fU)) : 0U);
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
    vlSelfRef.io_memory_bundle_address = (((0x17U == 
                                            (0x0000007fU 
                                             & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction))
                                            ? vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__pc
                                            : vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_data1) 
                                          + (((IData)(vlSelfRef.Top__DOT__cpu__DOT__id__DOT___usesRs1_T_1) 
                                              | (IData)(vlSelfRef.Top__DOT__cpu__DOT__id__DOT____VdfgRegularize_h38ccc7c7_0_0))
                                              ? ((0x17U 
                                                  == 
                                                  (0x0000007fU 
                                                   & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction))
                                                  ? 
                                                 (0xfffff000U 
                                                  & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)
                                                  : 
                                                 ((0x23U 
                                                   == 
                                                   (0x0000007fU 
                                                    & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction))
                                                   ? 
                                                  ((((vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                                      >> 0x0000001fU)
                                                      ? 0x000fffffU
                                                      : 0U) 
                                                    << 0x0000000cU) 
                                                   | ((0x00000fe0U 
                                                       & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                                          >> 0x00000014U)) 
                                                      | (0x0000001fU 
                                                         & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                                            >> 7U))))
                                                   : 
                                                  ((((vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                                      >> 0x0000001fU)
                                                      ? 0x000fffffU
                                                      : 0U) 
                                                    << 0x0000000cU) 
                                                   | (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                                      >> 0x00000014U))))
                                              : vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_data2));
    vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_write_data 
        = ((2U == (IData)(vlSelfRef.Top__DOT__cpu__DOT__id__DOT__io_wb_reg_write_source))
            ? ((IData)(4U) + vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__pc)
            : ((1U == (IData)(vlSelfRef.Top__DOT__cpu__DOT__id__DOT__io_wb_reg_write_source))
                ? ((3U == (0x0000007fU & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction))
                    ? vlSelfRef.io_memory_bundle_read_data
                    : 0U) : vlSelfRef.io_memory_bundle_address));
}

VL_ATTR_COLD void VTop___024root____Vm_traceActivitySetAll(VTop___024root* vlSelf);

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
    vlSelf->io_memory_bundle_address = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2708332782636133959ull);
    vlSelf->io_memory_bundle_write_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3139919981039688996ull);
    vlSelf->io_memory_bundle_write_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13033540442847389750ull);
    vlSelf->io_memory_bundle_write_strobe_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7759084956352681213ull);
    vlSelf->io_memory_bundle_write_strobe_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2569522288926210021ull);
    vlSelf->io_memory_bundle_write_strobe_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12830052262608877857ull);
    vlSelf->io_memory_bundle_write_strobe_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3976486367934509046ull);
    vlSelf->io_memory_bundle_read_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3267359484496821832ull);
    vlSelf->io_instruction_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5008156892548894757ull);
    vlSelf->io_debug_read_address = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15786661594743794987ull);
    vlSelf->io_debug_read_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9513832401209729508ull);
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
    vlSelf->Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12422413844122160296ull);
    vlSelf->Top__DOT__cpu__DOT__inst_fetch__DOT__pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8913590304391464016ull);
    vlSelf->Top__DOT__cpu__DOT__inst_fetch__DOT___pc_T_1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9284877972907566691ull);
    vlSelf->Top__DOT__cpu__DOT__id__DOT__io_wb_reg_write_source = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4165569079175445107ull);
    vlSelf->Top__DOT__cpu__DOT__id__DOT___usesRs1_T_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13337400276832093016ull);
    vlSelf->Top__DOT__cpu__DOT__id__DOT____VdfgRegularize_h38ccc7c7_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8416146899211146582ull);
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
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
