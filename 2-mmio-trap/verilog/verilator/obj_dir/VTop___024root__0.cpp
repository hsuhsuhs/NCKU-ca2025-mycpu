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
                                                    ((((IData)(vlSelfRef.io_vga_pixclk) 
                                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__io_vga_pixclk__0))) 
                                                      << 1U) 
                                                     | ((IData)(vlSelfRef.clock) 
                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clock__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__clock__0 = vlSelfRef.clock;
    vlSelfRef.__Vtrigprevexpr___TOP__io_vga_pixclk__0 
        = vlSelfRef.io_vga_pixclk;
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
    // Locals
    SData/*9:0*/ __Vdly__Top__DOT__vga__DOT__h_count;
    __Vdly__Top__DOT__vga__DOT__h_count = 0;
    // Body
    __Vdly__Top__DOT__vga__DOT__h_count = vlSelfRef.Top__DOT__vga__DOT__h_count;
    vlSelfRef.__Vdly__Top__DOT__vga__DOT__v_count = vlSelfRef.Top__DOT__vga__DOT__v_count;
    vlSelfRef.Top__DOT__vga__DOT__io_hsync_REG = vlSelfRef.Top__DOT__vga__DOT__hsync_d1;
    vlSelfRef.Top__DOT__vga__DOT__io_vsync_REG = vlSelfRef.Top__DOT__vga__DOT__vsync_d1;
    vlSelfRef.Top__DOT__vga__DOT__pixel_in_word_d1 
        = (7U & (IData)(vlSelfRef.Top__DOT__vga__DOT__pixel_idx));
    vlSelfRef.Top__DOT__vga__DOT__x_px_d1 = vlSelfRef.Top__DOT__vga__DOT__x_px;
    vlSelfRef.Top__DOT__vga__DOT__y_px_d1 = vlSelfRef.Top__DOT__vga__DOT__y_px;
    vlSelfRef.Top__DOT__vga__DOT__h_active_d2 = vlSelfRef.Top__DOT__vga__DOT__h_active_d1;
    vlSelfRef.Top__DOT__vga__DOT__v_active_d2 = vlSelfRef.Top__DOT__vga__DOT__v_active_d1;
    vlSelfRef.Top__DOT__vga__DOT__in_display_d1 = (
                                                   ((0x0080U 
                                                     <= (IData)(vlSelfRef.Top__DOT__vga__DOT__x_px)) 
                                                    & (0x0200U 
                                                       > (IData)(vlSelfRef.Top__DOT__vga__DOT__x_px))) 
                                                   & ((0x0030U 
                                                       <= (IData)(vlSelfRef.Top__DOT__vga__DOT__y_px)) 
                                                      & (0x01b0U 
                                                         > (IData)(vlSelfRef.Top__DOT__vga__DOT__y_px))));
    vlSelfRef.Top__DOT__vga__DOT__palette_sync_10 = vlSelfRef.Top__DOT__vga__DOT__palette_sync1_10;
    vlSelfRef.Top__DOT__vga__DOT__palette_sync_7 = vlSelfRef.Top__DOT__vga__DOT__palette_sync1_7;
    vlSelfRef.Top__DOT__vga__DOT__palette_sync_2 = vlSelfRef.Top__DOT__vga__DOT__palette_sync1_2;
    vlSelfRef.Top__DOT__vga__DOT__palette_sync_3 = vlSelfRef.Top__DOT__vga__DOT__palette_sync1_3;
    vlSelfRef.Top__DOT__vga__DOT__palette_sync_0 = vlSelfRef.Top__DOT__vga__DOT__palette_sync1_0;
    vlSelfRef.Top__DOT__vga__DOT__palette_sync_1 = vlSelfRef.Top__DOT__vga__DOT__palette_sync1_1;
    vlSelfRef.Top__DOT__vga__DOT__palette_sync_4 = vlSelfRef.Top__DOT__vga__DOT__palette_sync1_4;
    vlSelfRef.Top__DOT__vga__DOT__palette_sync_5 = vlSelfRef.Top__DOT__vga__DOT__palette_sync1_5;
    vlSelfRef.Top__DOT__vga__DOT__palette_sync_6 = vlSelfRef.Top__DOT__vga__DOT__palette_sync1_6;
    vlSelfRef.Top__DOT__vga__DOT__palette_sync_8 = vlSelfRef.Top__DOT__vga__DOT__palette_sync1_8;
    vlSelfRef.Top__DOT__vga__DOT__palette_sync_9 = vlSelfRef.Top__DOT__vga__DOT__palette_sync1_9;
    vlSelfRef.Top__DOT__vga__DOT__palette_sync_11 = vlSelfRef.Top__DOT__vga__DOT__palette_sync1_11;
    vlSelfRef.Top__DOT__vga__DOT__palette_sync_12 = vlSelfRef.Top__DOT__vga__DOT__palette_sync1_12;
    vlSelfRef.Top__DOT__vga__DOT__palette_sync_13 = vlSelfRef.Top__DOT__vga__DOT__palette_sync1_13;
    vlSelfRef.Top__DOT__vga__DOT__palette_sync_14 = vlSelfRef.Top__DOT__vga__DOT__palette_sync1_14;
    vlSelfRef.Top__DOT__vga__DOT__palette_sync_15 = vlSelfRef.Top__DOT__vga__DOT__palette_sync1_15;
    vlSelfRef.Top__DOT__vga__DOT__blanking = vlSelfRef.Top__DOT__vga__DOT__blanking_sync1;
    vlSelfRef.Top__DOT__vga__DOT__display_enabled = vlSelfRef.Top__DOT__vga__DOT__display_enabled_sync1;
    vlSelfRef.Top__DOT__vga__DOT__framebuffer_doutb 
        = ((0x17ffU >= (0x00001fffU & ((0x00003fffU 
                                        & VL_SHIFTL_III(14,14,32, (IData)(vlSelfRef.Top__DOT__vga__DOT__curr_frame), 9U)) 
                                       + (0x000003ffU 
                                          & ((IData)(vlSelfRef.Top__DOT__vga__DOT__pixel_idx) 
                                             >> 3U)))))
            ? vlSelfRef.Top__DOT__vga__DOT__framebuffer__DOT__mem
           [(0x00001fffU & ((0x00003fffU & VL_SHIFTL_III(14,14,32, (IData)(vlSelfRef.Top__DOT__vga__DOT__curr_frame), 9U)) 
                            + (0x000003ffU & ((IData)(vlSelfRef.Top__DOT__vga__DOT__pixel_idx) 
                                              >> 3U))))]
            : 0U);
    vlSelfRef.io_vga_hsync = vlSelfRef.Top__DOT__vga__DOT__io_hsync_REG;
    vlSelfRef.Top__DOT__vga__DOT__hsync_d1 = (1U & 
                                              (~ ((0x0298U 
                                                   <= (IData)(vlSelfRef.Top__DOT__vga__DOT__h_count)) 
                                                  & (0x02c0U 
                                                     > (IData)(vlSelfRef.Top__DOT__vga__DOT__h_count)))));
    vlSelfRef.io_vga_vsync = vlSelfRef.Top__DOT__vga__DOT__io_vsync_REG;
    vlSelfRef.Top__DOT__vga__DOT__vsync_d1 = (1U & 
                                              (~ ((0x01e9U 
                                                   <= (IData)(vlSelfRef.Top__DOT__vga__DOT__v_count)) 
                                                  & (0x01ecU 
                                                     > (IData)(vlSelfRef.Top__DOT__vga__DOT__v_count)))));
    vlSelfRef.io_vga_x_pos = vlSelfRef.Top__DOT__vga__DOT__x_px_d1;
    vlSelfRef.io_vga_y_pos = vlSelfRef.Top__DOT__vga__DOT__y_px_d1;
    vlSelfRef.io_vga_activevideo = ((IData)(vlSelfRef.Top__DOT__vga__DOT__h_active_d2) 
                                    & (IData)(vlSelfRef.Top__DOT__vga__DOT__v_active_d2));
    if (vlSelfRef.reset) {
        __Vdly__Top__DOT__vga__DOT__h_count = 0U;
        vlSelfRef.__Vdly__Top__DOT__vga__DOT__v_count = 0U;
    } else if ((0x033fU == (IData)(vlSelfRef.Top__DOT__vga__DOT__h_count))) {
        __Vdly__Top__DOT__vga__DOT__h_count = 0U;
        vlSelfRef.__Vdly__Top__DOT__vga__DOT__v_count 
            = ((0x0207U == (IData)(vlSelfRef.Top__DOT__vga__DOT__v_count))
                ? 0U : (IData)(vlSelfRef.Top__DOT__vga__DOT___v_count_T_1));
    } else {
        __Vdly__Top__DOT__vga__DOT__h_count = vlSelfRef.Top__DOT__vga__DOT___h_count_T_1;
    }
    vlSelfRef.Top__DOT__vga__DOT__x_px = vlSelfRef.Top__DOT__vga__DOT__h_count;
    vlSelfRef.Top__DOT__vga__DOT__y_px = vlSelfRef.Top__DOT__vga__DOT__v_count;
    vlSelfRef.Top__DOT__vga__DOT__h_active_d1 = (0x0280U 
                                                 > (IData)(vlSelfRef.Top__DOT__vga__DOT__h_count));
    vlSelfRef.Top__DOT__vga__DOT__v_active_d1 = (0x01e0U 
                                                 > (IData)(vlSelfRef.Top__DOT__vga__DOT__v_count));
    vlSelfRef.Top__DOT__vga__DOT__palette_sync1_10 
        = vlSelfRef.Top__DOT__vga__DOT__paletteReg_10;
    vlSelfRef.Top__DOT__vga__DOT__palette_sync1_7 = vlSelfRef.Top__DOT__vga__DOT__paletteReg_7;
    vlSelfRef.Top__DOT__vga__DOT__palette_sync1_2 = vlSelfRef.Top__DOT__vga__DOT__paletteReg_2;
    vlSelfRef.Top__DOT__vga__DOT__palette_sync1_3 = vlSelfRef.Top__DOT__vga__DOT__paletteReg_3;
    vlSelfRef.Top__DOT__vga__DOT__palette_sync1_0 = vlSelfRef.Top__DOT__vga__DOT__paletteReg_0;
    vlSelfRef.Top__DOT__vga__DOT__palette_sync1_1 = vlSelfRef.Top__DOT__vga__DOT__paletteReg_1;
    vlSelfRef.Top__DOT__vga__DOT__palette_sync1_4 = vlSelfRef.Top__DOT__vga__DOT__paletteReg_4;
    vlSelfRef.Top__DOT__vga__DOT__palette_sync1_5 = vlSelfRef.Top__DOT__vga__DOT__paletteReg_5;
    vlSelfRef.Top__DOT__vga__DOT__palette_sync1_6 = vlSelfRef.Top__DOT__vga__DOT__paletteReg_6;
    vlSelfRef.Top__DOT__vga__DOT__palette_sync1_8 = vlSelfRef.Top__DOT__vga__DOT__paletteReg_8;
    vlSelfRef.Top__DOT__vga__DOT__palette_sync1_9 = vlSelfRef.Top__DOT__vga__DOT__paletteReg_9;
    vlSelfRef.Top__DOT__vga__DOT__palette_sync1_11 
        = vlSelfRef.Top__DOT__vga__DOT__paletteReg_11;
    vlSelfRef.Top__DOT__vga__DOT__palette_sync1_12 
        = vlSelfRef.Top__DOT__vga__DOT__paletteReg_12;
    vlSelfRef.Top__DOT__vga__DOT__palette_sync1_13 
        = vlSelfRef.Top__DOT__vga__DOT__paletteReg_13;
    vlSelfRef.Top__DOT__vga__DOT__palette_sync1_14 
        = vlSelfRef.Top__DOT__vga__DOT__paletteReg_14;
    vlSelfRef.Top__DOT__vga__DOT__palette_sync1_15 
        = vlSelfRef.Top__DOT__vga__DOT__paletteReg_15;
    vlSelfRef.Top__DOT__vga__DOT__blanking_sync1 = 
        (1U & (vlSelfRef.Top__DOT__vga__DOT__ctrlReg 
               >> 1U));
    vlSelfRef.Top__DOT__vga__DOT__display_enabled_sync1 
        = (1U & vlSelfRef.Top__DOT__vga__DOT__ctrlReg);
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
    vlSelfRef.Top__DOT__vga__DOT__h_count = __Vdly__Top__DOT__vga__DOT__h_count;
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
    vlSelfRef.Top__DOT__vga__DOT___h_count_T_1 = (0x000003ffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.Top__DOT__vga__DOT__h_count)));
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
}

void VTop___024root___nba_sequent__TOP__1(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___nba_sequent__TOP__1\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ Top__DOT__cpu__DOT__ex__DOT___csrResult_T;
    Top__DOT__cpu__DOT__ex__DOT___csrResult_T = 0;
    IData/*31:0*/ Top__DOT__cpu__DOT__ex__DOT___csrResult_T_3;
    Top__DOT__cpu__DOT__ex__DOT___csrResult_T_3 = 0;
    IData/*31:0*/ __VdlyVal__Top__DOT__vga__DOT__framebuffer__DOT__mem__v0;
    __VdlyVal__Top__DOT__vga__DOT__framebuffer__DOT__mem__v0 = 0;
    SData/*12:0*/ __VdlyDim0__Top__DOT__vga__DOT__framebuffer__DOT__mem__v0;
    __VdlyDim0__Top__DOT__vga__DOT__framebuffer__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__Top__DOT__vga__DOT__framebuffer__DOT__mem__v0;
    __VdlySet__Top__DOT__vga__DOT__framebuffer__DOT__mem__v0 = 0;
    // Body
    __VdlySet__Top__DOT__vga__DOT__framebuffer__DOT__mem__v0 = 0U;
    if (((IData)(vlSelfRef.Top__DOT__vga__DOT__io_bundle_write_enable) 
         & ((4U != (0x000000ffU & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9))) 
            & ((0x0000000cU != (0x000000ffU & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9))) 
               & ((0x00000010U != (0x000000ffU & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9))) 
                  & (0x00000014U == (0x000000ffU & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))))))) {
        vlSelfRef.Top__DOT__vga__DOT__framebuffer__DOT____Vlvbound_hdaacaeaf__0 
            = ((IData)(vlSelfRef.Top__DOT__vga__DOT__io_bundle_write_enable)
                ? ((4U == (0x000000ffU & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                    ? 0U : ((0x0000000cU == (0x000000ffU 
                                             & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                             ? 0U : ((0x00000010U == 
                                      (0x000000ffU 
                                       & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                      ? 0U : ((0x00000014U 
                                               == (0x000000ffU 
                                                   & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                               ? vlSelfRef.io_memory_bundle_write_data
                                               : 0U))))
                : 0U);
        if ((0x17ffU >= (IData)(vlSelfRef.Top__DOT__vga__DOT__framebuffer_addra))) {
            __VdlyVal__Top__DOT__vga__DOT__framebuffer__DOT__mem__v0 
                = vlSelfRef.Top__DOT__vga__DOT__framebuffer__DOT____Vlvbound_hdaacaeaf__0;
            __VdlyDim0__Top__DOT__vga__DOT__framebuffer__DOT__mem__v0 
                = vlSelfRef.Top__DOT__vga__DOT__framebuffer_addra;
            __VdlySet__Top__DOT__vga__DOT__framebuffer__DOT__mem__v0 = 1U;
        }
    }
    vlSelfRef.Top__DOT__vga__DOT__vblank_prev = vlSelfRef.Top__DOT__vga__DOT__vblank_synced;
    if (vlSelfRef.reset) {
        vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__cycles = 0ULL;
        vlSelfRef.Top__DOT__vga__DOT__uploadAddrReg = 0U;
        vlSelfRef.Top__DOT__vga__DOT__intrStatusReg = 0U;
        vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mscratch = 0U;
        vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mcause = 0U;
        vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mie = 0U;
        vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mstatus = 0U;
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
        vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__pc = 0x00001000U;
        vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mtvec = 0U;
        vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mepc = 0U;
    } else {
        vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__cycles 
            = vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT___cycles_T_1;
        if (vlSelfRef.Top__DOT__vga__DOT__io_bundle_write_enable) {
            if ((4U != (0x000000ffU & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))) {
                if ((0x0000000cU != (0x000000ffU & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))) {
                    vlSelfRef.Top__DOT__vga__DOT__uploadAddrReg 
                        = vlSelfRef.Top__DOT__vga__DOT___GEN_54;
                }
            }
            vlSelfRef.Top__DOT__vga__DOT__intrStatusReg 
                = ((4U == (0x000000ffU & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                    ? vlSelfRef.Top__DOT__vga__DOT___GEN_0
                    : ((0x0000000cU == (0x000000ffU 
                                        & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                        ? vlSelfRef.Top__DOT__vga__DOT___intrStatusReg_T_1
                        : vlSelfRef.Top__DOT__vga__DOT___GEN_0));
        } else {
            vlSelfRef.Top__DOT__vga__DOT__intrStatusReg 
                = vlSelfRef.Top__DOT__vga__DOT___GEN_0;
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
        if (vlSelfRef.io_instruction_valid) {
            vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__pc 
                = ((IData)(vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_interrupt_assert)
                    ? ((IData)(vlSelfRef.Top__DOT__cpu__DOT__clint__DOT____VdfgRegularize_h7f74ecf3_0_3)
                        ? vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mtvec
                        : ((IData)(vlSelfRef.Top__DOT__cpu__DOT__clint__DOT____VdfgRegularize_h7f74ecf3_0_2)
                            ? vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mtvec
                            : ((0x30200073U == vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)
                                ? vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mepc
                                : vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mtvec)))
                    : ((IData)(vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_jump_flag_id)
                        ? vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_jump_address_id
                        : vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__next_pc_sequential));
        }
        if (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_interrupt_assert) {
            vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mcause 
                = vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__io_clint_access_bundle_mcause_write_data;
            vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mstatus 
                = vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__io_clint_access_bundle_mstatus_write_data;
            vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mepc 
                = vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__io_clint_access_bundle_mepc_write_data;
        } else if (vlSelfRef.Top__DOT__cpu__DOT__id__DOT__io_csr_reg_write_enable) {
            if ((0x0300U != (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                             >> 0x00000014U))) {
                vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mcause 
                    = vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT___GEN_2;
                vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mepc 
                    = vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT___GEN_1;
            }
            if ((0x0300U == (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                             >> 0x00000014U))) {
                vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mstatus 
                    = vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__io_csr_reg_write_data;
            }
        }
        if (vlSelfRef.Top__DOT__cpu__DOT__id__DOT__io_csr_reg_write_enable) {
            if ((0x0304U != (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                             >> 0x00000014U))) {
                if ((0x0305U != (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                 >> 0x00000014U))) {
                    vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mscratch 
                        = vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT___GEN_12;
                }
                if ((0x0305U == (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                 >> 0x00000014U))) {
                    vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mtvec 
                        = vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__io_csr_reg_write_data;
                }
            }
            if ((0x0304U == (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                             >> 0x00000014U))) {
                vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mie 
                    = vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__io_csr_reg_write_data;
            }
        }
    }
    vlSelfRef.Top__DOT__vga__DOT__curr_frame_synced 
        = vlSelfRef.Top__DOT__vga__DOT__curr_frame_sync1;
    if (vlSelfRef.Top__DOT__vga__DOT__io_bundle_write_enable) {
        if ((4U != (0x000000ffU & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))) {
            if ((0x0000000cU != (0x000000ffU & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))) {
                if ((0x00000010U != (0x000000ffU & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))) {
                    vlSelfRef.Top__DOT__vga__DOT__paletteReg_10 
                        = vlSelfRef.Top__DOT__vga__DOT___GEN_48;
                    vlSelfRef.Top__DOT__vga__DOT__paletteReg_7 
                        = vlSelfRef.Top__DOT__vga__DOT___GEN_45;
                    vlSelfRef.Top__DOT__vga__DOT__paletteReg_2 
                        = vlSelfRef.Top__DOT__vga__DOT___GEN_40;
                    vlSelfRef.Top__DOT__vga__DOT__paletteReg_3 
                        = vlSelfRef.Top__DOT__vga__DOT___GEN_41;
                    vlSelfRef.Top__DOT__vga__DOT__paletteReg_0 
                        = vlSelfRef.Top__DOT__vga__DOT___GEN_38;
                    vlSelfRef.Top__DOT__vga__DOT__paletteReg_1 
                        = vlSelfRef.Top__DOT__vga__DOT___GEN_39;
                    vlSelfRef.Top__DOT__vga__DOT__paletteReg_4 
                        = vlSelfRef.Top__DOT__vga__DOT___GEN_42;
                    vlSelfRef.Top__DOT__vga__DOT__paletteReg_5 
                        = vlSelfRef.Top__DOT__vga__DOT___GEN_43;
                    vlSelfRef.Top__DOT__vga__DOT__paletteReg_6 
                        = vlSelfRef.Top__DOT__vga__DOT___GEN_44;
                    vlSelfRef.Top__DOT__vga__DOT__paletteReg_8 
                        = vlSelfRef.Top__DOT__vga__DOT___GEN_46;
                    vlSelfRef.Top__DOT__vga__DOT__paletteReg_9 
                        = vlSelfRef.Top__DOT__vga__DOT___GEN_47;
                    vlSelfRef.Top__DOT__vga__DOT__paletteReg_11 
                        = vlSelfRef.Top__DOT__vga__DOT___GEN_49;
                    vlSelfRef.Top__DOT__vga__DOT__paletteReg_12 
                        = vlSelfRef.Top__DOT__vga__DOT___GEN_50;
                    vlSelfRef.Top__DOT__vga__DOT__paletteReg_13 
                        = vlSelfRef.Top__DOT__vga__DOT___GEN_51;
                    vlSelfRef.Top__DOT__vga__DOT__paletteReg_14 
                        = vlSelfRef.Top__DOT__vga__DOT___GEN_52;
                    vlSelfRef.Top__DOT__vga__DOT__paletteReg_15 
                        = vlSelfRef.Top__DOT__vga__DOT___GEN_53;
                }
            }
        }
    }
    if (__VdlySet__Top__DOT__vga__DOT__framebuffer__DOT__mem__v0) {
        vlSelfRef.Top__DOT__vga__DOT__framebuffer__DOT__mem[__VdlyDim0__Top__DOT__vga__DOT__framebuffer__DOT__mem__v0] 
            = __VdlyVal__Top__DOT__vga__DOT__framebuffer__DOT__mem__v0;
    }
    vlSelfRef.Top__DOT__vga__DOT__vblank_synced = vlSelfRef.Top__DOT__vga__DOT__vblank_sync1;
    vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT___cycles_T_1 
        = (1ULL + vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__cycles);
    vlSelfRef.Top__DOT__vga__DOT__curr_frame_sync1 
        = vlSelfRef.Top__DOT__vga__DOT__curr_frame;
    vlSelfRef.Top__DOT__cpu__DOT__clint__DOT___io_csr_bundle_mstatus_write_data_T_4 
        = (0x00001800U | ((0xffffe000U & vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mstatus) 
                          | ((((0x0000000eU & (vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mstatus 
                                               >> 7U)) 
                               | (1U & (vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mstatus 
                                        >> 3U))) << 7U) 
                             | (0x00000077U & vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mstatus))));
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
    vlSelfRef.io_instruction_address = vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__pc;
    vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__next_pc_sequential 
        = ((IData)(4U) + vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__pc);
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
    vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_interrupt_assert 
        = ((IData)(vlSelfRef.Top__DOT__cpu__DOT__clint__DOT____VdfgRegularize_h7f74ecf3_0_3) 
           | ((IData)(vlSelfRef.Top__DOT__cpu__DOT__clint__DOT____VdfgRegularize_h7f74ecf3_0_2) 
              | (0x30200073U == vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)));
    vlSelfRef.Top__DOT__vga__DOT__vblank_sync1 = (0x01e0U 
                                                  <= (IData)(vlSelfRef.Top__DOT__vga__DOT__v_count));
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
    Top__DOT__cpu__DOT__ex__DOT___csrResult_T_3 = (
                                                   (~ vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__csrSource) 
                                                   & vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__io_csr_reg_read_data);
    Top__DOT__cpu__DOT__ex__DOT___csrResult_T = (vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__io_csr_reg_read_data 
                                                 | vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__csrSource);
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
}

void VTop___024root___nba_sequent__TOP__2(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___nba_sequent__TOP__2\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Top__DOT__vga__DOT__v_count = vlSelfRef.__Vdly__Top__DOT__vga__DOT__v_count;
    vlSelfRef.Top__DOT__vga__DOT__curr_frame = vlSelfRef.Top__DOT__vga__DOT__curr_frame_sync1_1;
    vlSelfRef.Top__DOT__vga__DOT___v_count_T_1 = (0x000003ffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.Top__DOT__vga__DOT__v_count)));
    vlSelfRef.Top__DOT__vga__DOT__curr_frame_sync1_1 
        = (0x0000000fU & (vlSelfRef.Top__DOT__vga__DOT__ctrlReg 
                          >> 4U));
}

void VTop___024root___nba_sequent__TOP__3(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___nba_sequent__TOP__3\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ Top__DOT__cpu__DOT__mem__DOT___GEN_13;
    Top__DOT__cpu__DOT__mem__DOT___GEN_13 = 0;
    CData/*0:0*/ Top__DOT__cpu__DOT__mem__DOT___GEN_16;
    Top__DOT__cpu__DOT__mem__DOT___GEN_16 = 0;
    // Body
    if (vlSelfRef.reset) {
        vlSelfRef.Top__DOT__vga__DOT__ctrlReg = 0U;
    } else if (vlSelfRef.Top__DOT__vga__DOT__io_bundle_write_enable) {
        if ((4U == (0x000000ffU & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))) {
            vlSelfRef.Top__DOT__vga__DOT__ctrlReg = 
                ((0x0cU > (0x0000000fU & (IData)((vlSelfRef.Top__DOT__cpu__DOT__mem__DOT___GEN_30 
                                                  >> 4U))))
                  ? vlSelfRef.io_memory_bundle_write_data
                  : vlSelfRef.Top__DOT__vga__DOT___ctrlReg_T_3);
        }
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
    vlSelfRef.Top__DOT__vga__DOT___GEN_0 = ((((~ (IData)(vlSelfRef.Top__DOT__vga__DOT__vblank_prev)) 
                                              & (IData)(vlSelfRef.Top__DOT__vga__DOT__vblank_synced)) 
                                             & (vlSelfRef.Top__DOT__vga__DOT__ctrlReg 
                                                >> 8U))
                                             ? 1U : vlSelfRef.Top__DOT__vga__DOT__intrStatusReg);
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

void VTop___024root___eval_nba(VTop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_nba\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        VTop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        VTop___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        VTop___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        VTop___024root___nba_sequent__TOP__3(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
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
            VL_FATAL_MT("Top.v", 2334, "", "Input combinational region did not converge after 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
    } while (VTop___024root___eval_phase__ico(vlSelf));
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VTop___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("Top.v", 2334, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VTop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("Top.v", 2334, "", "Active region did not converge after 100 tries");
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
    if (VL_UNLIKELY(((vlSelfRef.io_regs_debug_read_address 
                      & 0xe0U)))) {
        Verilated::overWidthError("io_regs_debug_read_address");
    }
    if (VL_UNLIKELY(((vlSelfRef.io_csr_regs_debug_read_address 
                      & 0xf000U)))) {
        Verilated::overWidthError("io_csr_regs_debug_read_address");
    }
    if (VL_UNLIKELY(((vlSelfRef.io_vga_pixclk & 0xfeU)))) {
        Verilated::overWidthError("io_vga_pixclk");
    }
}
#endif  // VL_DEBUG
