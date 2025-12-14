// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop__pch.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void VTop___024root___eval_triggers__ico(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_triggers__ico\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
    vlSelfRef.__VicoFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VTop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
}

bool VTop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___trigger_anySet__ico\n"); );
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

void VTop___024root___ico_sequent__TOP__0(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___ico_sequent__TOP__0\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void VTop___024root___eval_ico(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_ico\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        VTop___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

bool VTop___024root___eval_phase__ico(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_phase__ico\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    VTop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = VTop___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        VTop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void VTop___024root___eval_triggers__act(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_triggers__act\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((IData)(vlSelfRef.clock) 
                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clock__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__clock__0 = vlSelfRef.clock;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VTop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool VTop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___trigger_anySet__act\n"); );
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

void VTop___024root___nba_sequent__TOP__0(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___nba_sequent__TOP__0\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.reset) {
        vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__pc = 0x00001000U;
        vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_12 = 0U;
        vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_0 = 0U;
        vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_30 = 0U;
        vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_27 = 0U;
        vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_13 = 0U;
        vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_18 = 0U;
        vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_15 = 0U;
        vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_26 = 0U;
        vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_25 = 0U;
        vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_1 = 0U;
        vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_19 = 0U;
        vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_16 = 0U;
        vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_29 = 0U;
        vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_14 = 0U;
        vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_2 = 0U;
        vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_3 = 0U;
        vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_28 = 0U;
        vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_4 = 0U;
        vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_17 = 0U;
        vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_5 = 0U;
        vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_6 = 0U;
        vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_7 = 0U;
        vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_8 = 0U;
        vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_9 = 0U;
        vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_10 = 0U;
        vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_11 = 0U;
        vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_20 = 0U;
        vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_21 = 0U;
        vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_22 = 0U;
        vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_23 = 0U;
        vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_24 = 0U;
    } else {
        if (vlSelfRef.io_instruction_valid) {
            vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__pc 
                = ((0x67U == (0x0000007fU & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction))
                    ? (0xfffffffeU & vlSelfRef.io_memory_bundle_address)
                    : vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT___pc_T_1);
        }
        if ((1U & (~ (IData)(vlSelfRef.reset)))) {
            if (((IData)(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_write_enable) 
                 & (0U != (0x0000001fU & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                          >> 7U))))) {
                if ((0x0cU == (0x0000001fU & ((vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                               >> 7U) 
                                              - (IData)(1U))))) {
                    vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_12 
                        = vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_write_data;
                }
                if ((0U == (0x0000001fU & ((vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                            >> 7U) 
                                           - (IData)(1U))))) {
                    vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_0 
                        = vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_write_data;
                }
                if ((0x1eU == (0x0000001fU & ((vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                               >> 7U) 
                                              - (IData)(1U))))) {
                    vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_30 
                        = vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_write_data;
                }
                if ((0x1bU == (0x0000001fU & ((vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                               >> 7U) 
                                              - (IData)(1U))))) {
                    vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_27 
                        = vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_write_data;
                }
                if ((0x0dU == (0x0000001fU & ((vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                               >> 7U) 
                                              - (IData)(1U))))) {
                    vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_13 
                        = vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_write_data;
                }
                if ((0x12U == (0x0000001fU & ((vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                               >> 7U) 
                                              - (IData)(1U))))) {
                    vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_18 
                        = vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_write_data;
                }
                if ((0x0fU == (0x0000001fU & ((vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                               >> 7U) 
                                              - (IData)(1U))))) {
                    vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_15 
                        = vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_write_data;
                }
                if ((0x1aU == (0x0000001fU & ((vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                               >> 7U) 
                                              - (IData)(1U))))) {
                    vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_26 
                        = vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_write_data;
                }
                if ((0x19U == (0x0000001fU & ((vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                               >> 7U) 
                                              - (IData)(1U))))) {
                    vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_25 
                        = vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_write_data;
                }
                if ((1U == (0x0000001fU & ((vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                            >> 7U) 
                                           - (IData)(1U))))) {
                    vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_1 
                        = vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_write_data;
                }
                if ((0x13U == (0x0000001fU & ((vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                               >> 7U) 
                                              - (IData)(1U))))) {
                    vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_19 
                        = vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_write_data;
                }
                if ((0x10U == (0x0000001fU & ((vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                               >> 7U) 
                                              - (IData)(1U))))) {
                    vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_16 
                        = vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_write_data;
                }
                if ((0x1dU == (0x0000001fU & ((vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                               >> 7U) 
                                              - (IData)(1U))))) {
                    vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_29 
                        = vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_write_data;
                }
                if ((0x0eU == (0x0000001fU & ((vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                               >> 7U) 
                                              - (IData)(1U))))) {
                    vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_14 
                        = vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_write_data;
                }
                if ((2U == (0x0000001fU & ((vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                            >> 7U) 
                                           - (IData)(1U))))) {
                    vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_2 
                        = vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_write_data;
                }
                if ((3U == (0x0000001fU & ((vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                            >> 7U) 
                                           - (IData)(1U))))) {
                    vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_3 
                        = vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_write_data;
                }
                if ((0x1cU == (0x0000001fU & ((vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                               >> 7U) 
                                              - (IData)(1U))))) {
                    vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_28 
                        = vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_write_data;
                }
                if ((4U == (0x0000001fU & ((vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                            >> 7U) 
                                           - (IData)(1U))))) {
                    vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_4 
                        = vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_write_data;
                }
                if ((0x11U == (0x0000001fU & ((vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                               >> 7U) 
                                              - (IData)(1U))))) {
                    vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_17 
                        = vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_write_data;
                }
                if ((5U == (0x0000001fU & ((vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                            >> 7U) 
                                           - (IData)(1U))))) {
                    vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_5 
                        = vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_write_data;
                }
                if ((6U == (0x0000001fU & ((vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                            >> 7U) 
                                           - (IData)(1U))))) {
                    vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_6 
                        = vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_write_data;
                }
                if ((7U == (0x0000001fU & ((vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                            >> 7U) 
                                           - (IData)(1U))))) {
                    vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_7 
                        = vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_write_data;
                }
                if ((8U == (0x0000001fU & ((vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                            >> 7U) 
                                           - (IData)(1U))))) {
                    vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_8 
                        = vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_write_data;
                }
                if ((9U == (0x0000001fU & ((vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                            >> 7U) 
                                           - (IData)(1U))))) {
                    vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_9 
                        = vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_write_data;
                }
                if ((0x0aU == (0x0000001fU & ((vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                               >> 7U) 
                                              - (IData)(1U))))) {
                    vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_10 
                        = vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_write_data;
                }
                if ((0x0bU == (0x0000001fU & ((vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                               >> 7U) 
                                              - (IData)(1U))))) {
                    vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_11 
                        = vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_write_data;
                }
                if ((0x14U == (0x0000001fU & ((vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                               >> 7U) 
                                              - (IData)(1U))))) {
                    vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_20 
                        = vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_write_data;
                }
                if ((0x15U == (0x0000001fU & ((vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                               >> 7U) 
                                              - (IData)(1U))))) {
                    vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_21 
                        = vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_write_data;
                }
                if ((0x16U == (0x0000001fU & ((vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                               >> 7U) 
                                              - (IData)(1U))))) {
                    vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_22 
                        = vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_write_data;
                }
                if ((0x17U == (0x0000001fU & ((vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                               >> 7U) 
                                              - (IData)(1U))))) {
                    vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_23 
                        = vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_write_data;
                }
                if ((0x18U == (0x0000001fU & ((vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                               >> 7U) 
                                              - (IData)(1U))))) {
                    vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_24 
                        = vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_write_data;
                }
            }
        }
    }
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
    vlSelfRef.io_memory_bundle_write_data = ((3U == 
                                              (0x0000007fU 
                                               & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction))
                                              ? 0U : 
                                             ((0x23U 
                                               == (0x0000007fU 
                                                   & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction))
                                               ? vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_data2
                                               : 0U));
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

void VTop___024root___eval_nba(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_nba\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        VTop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
}

void VTop___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool VTop___024root___eval_phase__act(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_phase__act\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VTop___024root___eval_triggers__act(vlSelf);
    VTop___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void VTop___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool VTop___024root___eval_phase__nba(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_phase__nba\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = VTop___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        VTop___024root___eval_nba(vlSelf);
        VTop___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void VTop___024root___eval(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            VTop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("Top.v", 922, "", "Input combinational region did not converge after 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
    } while (VTop___024root___eval_phase__ico(vlSelf));
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VTop___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("Top.v", 922, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VTop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("Top.v", 922, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (VTop___024root___eval_phase__act(vlSelf));
    } while (VTop___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void VTop___024root___eval_debug_assertions(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_debug_assertions\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clock & 0xfeU)))) {
        Verilated::overWidthError("clock");
    }
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");
    }
    if (VL_UNLIKELY(((vlSelfRef.io_instruction_valid 
                      & 0xfeU)))) {
        Verilated::overWidthError("io_instruction_valid");
    }
    if (VL_UNLIKELY(((vlSelfRef.io_debug_read_address 
                      & 0xe0U)))) {
        Verilated::overWidthError("io_debug_read_address");
    }
}
#endif  // VL_DEBUG
