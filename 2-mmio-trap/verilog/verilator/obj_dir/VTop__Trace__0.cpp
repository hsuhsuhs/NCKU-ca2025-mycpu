// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTop__Syms.h"


void VTop___024root__trace_chg_0_sub_0(VTop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VTop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_chg_0\n"); );
    // Body
    VTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTop___024root*>(voidSelf);
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    VTop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VTop___024root__trace_chg_0_sub_0(VTop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_chg_0_sub_0\n"); );
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.Top__DOT__vga__DOT__framebuffer__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+1,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_write_enable));
        bufp->chgCData(oldp+2,((0x0000001fU & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                               >> 7U))),5);
        bufp->chgCData(oldp+3,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_address1),5);
        bufp->chgCData(oldp+4,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_address2),5);
        bufp->chgIData(oldp+5,(vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction),32);
        bufp->chgIData(oldp+6,(vlSelfRef.Top__DOT__cpu__DOT__id__DOT__io_ex_immediate),32);
        bufp->chgBit(oldp+7,(((0x63U == (0x0000007fU 
                                         & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)) 
                              | ((0x17U == (0x0000007fU 
                                            & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)) 
                                 | (0x6fU == (0x0000007fU 
                                              & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction))))));
        bufp->chgBit(oldp+8,(((IData)(vlSelfRef.Top__DOT__cpu__DOT__id__DOT___usesRs1_T_1) 
                              | ((0x63U == (0x0000007fU 
                                            & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)) 
                                 | ((IData)(vlSelfRef.Top__DOT__cpu__DOT__id__DOT____VdfgRegularize_h38ccc7c7_0_1) 
                                    | (IData)(vlSelfRef.Top__DOT__cpu__DOT__id__DOT____VdfgRegularize_h38ccc7c7_0_0))))));
        bufp->chgBit(oldp+9,((3U == (0x0000007fU & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction))));
        bufp->chgBit(oldp+10,((0x23U == (0x0000007fU 
                                         & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction))));
        bufp->chgCData(oldp+11,(vlSelfRef.Top__DOT__cpu__DOT__id__DOT__io_wb_reg_write_source),2);
        bufp->chgSData(oldp+12,((vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                 >> 0x00000014U)),12);
        bufp->chgBit(oldp+13,(vlSelfRef.Top__DOT__cpu__DOT__id__DOT__io_csr_reg_write_enable));
        bufp->chgCData(oldp+14,((7U & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                       >> 0x0000000cU))),3);
        bufp->chgCData(oldp+15,(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT__io_func),4);
        bufp->chgCData(oldp+16,((0x0000007fU & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)),7);
        bufp->chgCData(oldp+17,((vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                 >> 0x00000019U)),7);
        bufp->chgIData(oldp+18,((0x0000001fU & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                                >> 0x0000000fU))),32);
        bufp->chgBit(oldp+19,((0x63U == (0x0000007fU 
                                         & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction))));
        bufp->chgBit(oldp+20,((0x6fU == (0x0000007fU 
                                         & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction))));
        bufp->chgBit(oldp+21,((0x67U == (0x0000007fU 
                                         & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction))));
        bufp->chgBit(oldp+22,((1U & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                     >> 0x0000001eU))));
        bufp->chgCData(oldp+23,((0x0000001fU & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                                >> 0x0000000fU))),5);
        bufp->chgCData(oldp+24,((0x0000001fU & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                                >> 0x00000014U))),5);
        bufp->chgBit(oldp+25,((0x13U == (0x0000007fU 
                                         & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction))));
        bufp->chgBit(oldp+26,((0x33U == (0x0000007fU 
                                         & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction))));
        bufp->chgBit(oldp+27,((0x37U == (0x0000007fU 
                                         & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction))));
        bufp->chgBit(oldp+28,((0x17U == (0x0000007fU 
                                         & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction))));
        bufp->chgBit(oldp+29,((0x73U == (0x0000007fU 
                                         & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction))));
        bufp->chgBit(oldp+30,(vlSelfRef.Top__DOT__cpu__DOT__id__DOT__isCsr));
        bufp->chgBit(oldp+31,((0U == (0x0000001fU & 
                                      (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                       >> 0x0000000fU)))));
        bufp->chgBit(oldp+32,(((vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                >> 0x0000000eU) & (IData)(vlSelfRef.Top__DOT__cpu__DOT__id__DOT__isCsr))));
        bufp->chgBit(oldp+33,(((IData)(vlSelfRef.Top__DOT__cpu__DOT__id__DOT___usesRs1_T_1) 
                               | ((IData)(vlSelfRef.Top__DOT__cpu__DOT__id__DOT____VdfgRegularize_h38ccc7c7_0_2) 
                                  | ((0x67U == (0x0000007fU 
                                                & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)) 
                                     | ((~ ((vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                             >> 0x0000000eU) 
                                            & (IData)(vlSelfRef.Top__DOT__cpu__DOT__id__DOT__isCsr))) 
                                        & (IData)(vlSelfRef.Top__DOT__cpu__DOT__id__DOT__isCsr)))))));
        bufp->chgBit(oldp+34,(((0x23U == (0x0000007fU 
                                          & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)) 
                               | (IData)(vlSelfRef.Top__DOT__cpu__DOT__id__DOT____VdfgRegularize_h38ccc7c7_0_2))));
        bufp->chgCData(oldp+35,(vlSelfRef.Top__DOT__cpu__DOT__id__DOT__immKind),3);
        bufp->chgIData(oldp+36,(((((vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                    >> 0x0000001fU)
                                    ? 0x000fffffU : 0U) 
                                  << 0x0000000cU) | 
                                 (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                  >> 0x00000014U))),32);
        bufp->chgIData(oldp+37,(((((vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                    >> 0x0000001fU)
                                    ? 0x000fffffU : 0U) 
                                  << 0x0000000cU) | 
                                 ((0x00000fe0U & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                                  >> 0x00000014U)) 
                                  | (0x0000001fU & 
                                     (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                      >> 7U))))),32);
        bufp->chgIData(oldp+38,(((((vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                    >> 0x0000001fU)
                                    ? 0x0007ffffU : 0U) 
                                  << 0x0000000dU) | 
                                 ((((2U & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                           >> 0x0000001eU)) 
                                    | (1U & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                             >> 7U))) 
                                   << 0x0000000bU) 
                                  | ((0x000007e0U & 
                                      (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                       >> 0x00000014U)) 
                                     | (0x0000001eU 
                                        & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                           >> 7U)))))),32);
        bufp->chgIData(oldp+39,((0xfffff000U & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)),32);
        bufp->chgIData(oldp+40,((((((vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                     >> 0x0000001fU)
                                     ? 0x07ffU : 0U) 
                                   << 0x00000015U) 
                                  | (0x00100000U & 
                                     (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                      >> 0x0000000bU))) 
                                 | ((((0x000001feU 
                                       & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                          >> 0x0000000bU)) 
                                      | (1U & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                               >> 0x00000014U))) 
                                     << 0x0000000bU) 
                                    | (0x000007feU 
                                       & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                          >> 0x00000014U))))),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [3U])))) {
        bufp->chgIData(oldp+41,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_data1),32);
        bufp->chgIData(oldp+42,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_data2),32);
        bufp->chgBit(oldp+43,(vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_jump_flag_id));
        bufp->chgIData(oldp+44,(vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_jump_address_id),32);
        bufp->chgBit(oldp+45,(vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_interrupt_assert));
        bufp->chgIData(oldp+46,(((IData)(vlSelfRef.Top__DOT__cpu__DOT__clint__DOT____VdfgRegularize_h7f74ecf3_0_3)
                                  ? vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mtvec
                                  : ((IData)(vlSelfRef.Top__DOT__cpu__DOT__clint__DOT____VdfgRegularize_h7f74ecf3_0_2)
                                      ? vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mtvec
                                      : ((0x30200073U 
                                          == vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)
                                          ? vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mepc
                                          : vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mtvec)))),32);
        bufp->chgIData(oldp+47,(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__io_csr_reg_read_data),32);
        bufp->chgIData(oldp+48,(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__io_csr_reg_write_data),32);
        bufp->chgIData(oldp+49,(((IData)(vlSelfRef.Top__DOT__cpu__DOT__clint__DOT____VdfgRegularize_h7f74ecf3_0_3)
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
        bufp->chgIData(oldp+50,(((IData)(vlSelfRef.Top__DOT__cpu__DOT__clint__DOT____VdfgRegularize_h7f74ecf3_0_3)
                                  ? vlSelfRef.Top__DOT__cpu__DOT__clint__DOT__instruction_address
                                  : ((IData)(vlSelfRef.Top__DOT__cpu__DOT__clint__DOT____VdfgRegularize_h7f74ecf3_0_2)
                                      ? vlSelfRef.Top__DOT__cpu__DOT__clint__DOT__instruction_address
                                      : vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mepc))),32);
        bufp->chgIData(oldp+51,(vlSelfRef.Top__DOT__cpu__DOT__clint__DOT__instruction_address),32);
        bufp->chgIData(oldp+52,(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT__io_op1),32);
        bufp->chgIData(oldp+53,(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT__io_op2),32);
        bufp->chgIData(oldp+54,(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__csrSource),32);
        bufp->chgBit(oldp+55,(((7U == (7U & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
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
                                                              == vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_data2))))))))));
        bufp->chgIData(oldp+56,((vlSelfRef.Top__DOT__cpu__DOT__id__DOT__io_ex_immediate 
                                 + vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__pc)),32);
        bufp->chgIData(oldp+57,((vlSelfRef.Top__DOT__cpu__DOT__id__DOT__io_ex_immediate 
                                 + vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_data1)),32);
        bufp->chgIData(oldp+58,((0xfffffffeU & (vlSelfRef.Top__DOT__cpu__DOT__id__DOT__io_ex_immediate 
                                                + vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_data1))),32);
        bufp->chgBit(oldp+59,(((0x63U == (0x0000007fU 
                                          & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)) 
                               & ((7U == (7U & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                                >> 0x0000000cU)))
                                   ? (vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_data1 
                                      >= vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_data2)
                                   : ((6U == (7U & 
                                              (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                               >> 0x0000000cU)))
                                       ? (vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_data1 
                                          < vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_data2)
                                       : ((5U == (7U 
                                                  & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                                     >> 0x0000000cU)))
                                           ? VL_GTES_III(32, vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_data1, vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_data2)
                                           : ((4U == 
                                               (7U 
                                                & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                                   >> 0x0000000cU)))
                                               ? VL_LTS_III(32, vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_data1, vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_data2)
                                               : ((1U 
                                                   == 
                                                   (7U 
                                                    & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                                       >> 0x0000000cU)))
                                                   ? 
                                                  (vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_data1 
                                                   != vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_data2)
                                                   : (IData)(
                                                             ((0U 
                                                               == 
                                                               (0x00007000U 
                                                                & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)) 
                                                              & (vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_data1 
                                                                 == vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_data2)))))))))));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [5U])))) {
        bufp->chgIData(oldp+60,(vlSelfRef.Top__DOT__cpu__DOT__mem__DOT__io_memory_bundle_read_data),32);
        bufp->chgBit(oldp+61,(vlSelfRef.Top__DOT__vga__DOT__io_bundle_write_enable));
        bufp->chgIData(oldp+62,(vlSelfRef.Top__DOT__vga__DOT__io_bundle_read_data),32);
        bufp->chgIData(oldp+63,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_write_data),32);
        bufp->chgIData(oldp+64,((IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)),32);
        bufp->chgIData(oldp+65,(vlSelfRef.Top__DOT__cpu__DOT__mem__DOT__io_wb_memory_read_data),32);
        bufp->chgCData(oldp+66,((3U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9))),2);
        bufp->chgBit(oldp+67,(((IData)(vlSelfRef.Top__DOT__vga__DOT__io_bundle_write_enable) 
                               & ((4U != (0x000000ffU 
                                          & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9))) 
                                  & ((0x0000000cU != 
                                      (0x000000ffU 
                                       & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9))) 
                                     & ((0x00000010U 
                                         != (0x000000ffU 
                                             & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9))) 
                                        & (0x00000014U 
                                           == (0x000000ffU 
                                               & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))))))));
        bufp->chgSData(oldp+68,(vlSelfRef.Top__DOT__vga__DOT__framebuffer_addra),13);
        bufp->chgIData(oldp+69,((0x000000ffU & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9))),32);
        bufp->chgBit(oldp+70,((4U == (0x000000ffU & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))));
        bufp->chgBit(oldp+71,((0x0000000cU == (0x000000ffU 
                                               & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))));
        bufp->chgBit(oldp+72,((0x00000010U == (0x000000ffU 
                                               & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))));
        bufp->chgBit(oldp+73,((0x00000014U == (0x000000ffU 
                                               & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))));
        bufp->chgBit(oldp+74,(vlSelfRef.Top__DOT__vga__DOT__addr_palette));
        bufp->chgIData(oldp+75,((((0x000000ffU & (IData)(vlSelfRef.Top__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)) 
                                  - (IData)(0x00000020U)) 
                                 >> 2U)),30);
        bufp->chgCData(oldp+76,((0x0000000fU & (IData)(
                                                       (vlSelfRef.Top__DOT__cpu__DOT__mem__DOT___GEN_30 
                                                        >> 4U)))),4);
        bufp->chgBit(oldp+77,((1U & (IData)(vlSelfRef.Top__DOT__cpu__DOT__mem__DOT___GEN_30))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+78,(vlSelfRef.Top__DOT__vga__DOT__io_hsync_REG));
        bufp->chgBit(oldp+79,(vlSelfRef.Top__DOT__vga__DOT__io_vsync_REG));
        bufp->chgSData(oldp+80,(vlSelfRef.Top__DOT__vga__DOT__x_px_d1),10);
        bufp->chgSData(oldp+81,(vlSelfRef.Top__DOT__vga__DOT__y_px_d1),10);
        bufp->chgIData(oldp+82,(vlSelfRef.Top__DOT__vga__DOT__framebuffer_doutb),32);
        bufp->chgSData(oldp+83,(vlSelfRef.Top__DOT__vga__DOT__h_count),10);
        bufp->chgBit(oldp+84,(((0x0298U <= (IData)(vlSelfRef.Top__DOT__vga__DOT__h_count)) 
                               & (0x02c0U > (IData)(vlSelfRef.Top__DOT__vga__DOT__h_count)))));
        bufp->chgBit(oldp+85,(vlSelfRef.Top__DOT__vga__DOT__hsync_d1));
        bufp->chgBit(oldp+86,(vlSelfRef.Top__DOT__vga__DOT__vsync_d1));
        bufp->chgSData(oldp+87,(vlSelfRef.Top__DOT__vga__DOT__x_px),10);
        bufp->chgSData(oldp+88,(vlSelfRef.Top__DOT__vga__DOT__y_px),10);
        bufp->chgBit(oldp+89,(((0x0080U <= (IData)(vlSelfRef.Top__DOT__vga__DOT__x_px)) 
                               & (0x0200U > (IData)(vlSelfRef.Top__DOT__vga__DOT__x_px)))));
        bufp->chgBit(oldp+90,(((0x0030U <= (IData)(vlSelfRef.Top__DOT__vga__DOT__y_px)) 
                               & (0x01b0U > (IData)(vlSelfRef.Top__DOT__vga__DOT__y_px)))));
        bufp->chgSData(oldp+91,(vlSelfRef.Top__DOT__vga__DOT__rel_x),10);
        bufp->chgSData(oldp+92,(vlSelfRef.Top__DOT__vga__DOT__rel_y),10);
        bufp->chgIData(oldp+93,((0x00ffffffU & ((IData)(0x00002aabU) 
                                                * (IData)(vlSelfRef.Top__DOT__vga__DOT__rel_x)))),24);
        bufp->chgCData(oldp+94,((0x000000ffU & (((IData)(0x00002aabU) 
                                                 * (IData)(vlSelfRef.Top__DOT__vga__DOT__rel_x)) 
                                                >> 0x00000010U))),8);
        bufp->chgIData(oldp+95,((0x00ffffffU & ((IData)(0x00002aabU) 
                                                * (IData)(vlSelfRef.Top__DOT__vga__DOT__rel_y)))),24);
        bufp->chgCData(oldp+96,((0x000000ffU & (((IData)(0x00002aabU) 
                                                 * (IData)(vlSelfRef.Top__DOT__vga__DOT__rel_y)) 
                                                >> 0x00000010U))),8);
        bufp->chgCData(oldp+97,(((0x40U <= (0x000000ffU 
                                            & (((IData)(0x00002aabU) 
                                                * (IData)(vlSelfRef.Top__DOT__vga__DOT__rel_x)) 
                                               >> 0x00000010U)))
                                  ? 0x0000003fU : (0x0000003fU 
                                                   & (((IData)(0x00002aabU) 
                                                       * (IData)(vlSelfRef.Top__DOT__vga__DOT__rel_x)) 
                                                      >> 0x00000010U)))),6);
        bufp->chgCData(oldp+98,(((0x40U <= (0x000000ffU 
                                            & (((IData)(0x00002aabU) 
                                                * (IData)(vlSelfRef.Top__DOT__vga__DOT__rel_y)) 
                                               >> 0x00000010U)))
                                  ? 0x0000003fU : (0x0000003fU 
                                                   & (((IData)(0x00002aabU) 
                                                       * (IData)(vlSelfRef.Top__DOT__vga__DOT__rel_y)) 
                                                      >> 0x00000010U)))),6);
        bufp->chgBit(oldp+99,(vlSelfRef.Top__DOT__vga__DOT__display_enabled_sync1));
        bufp->chgBit(oldp+100,(vlSelfRef.Top__DOT__vga__DOT__display_enabled));
        bufp->chgBit(oldp+101,(vlSelfRef.Top__DOT__vga__DOT__blanking_sync1));
        bufp->chgBit(oldp+102,(vlSelfRef.Top__DOT__vga__DOT__blanking));
        bufp->chgCData(oldp+103,(vlSelfRef.Top__DOT__vga__DOT__palette_sync1_0),6);
        bufp->chgCData(oldp+104,(vlSelfRef.Top__DOT__vga__DOT__palette_sync1_1),6);
        bufp->chgCData(oldp+105,(vlSelfRef.Top__DOT__vga__DOT__palette_sync1_2),6);
        bufp->chgCData(oldp+106,(vlSelfRef.Top__DOT__vga__DOT__palette_sync1_3),6);
        bufp->chgCData(oldp+107,(vlSelfRef.Top__DOT__vga__DOT__palette_sync1_4),6);
        bufp->chgCData(oldp+108,(vlSelfRef.Top__DOT__vga__DOT__palette_sync1_5),6);
        bufp->chgCData(oldp+109,(vlSelfRef.Top__DOT__vga__DOT__palette_sync1_6),6);
        bufp->chgCData(oldp+110,(vlSelfRef.Top__DOT__vga__DOT__palette_sync1_7),6);
        bufp->chgCData(oldp+111,(vlSelfRef.Top__DOT__vga__DOT__palette_sync1_8),6);
        bufp->chgCData(oldp+112,(vlSelfRef.Top__DOT__vga__DOT__palette_sync1_9),6);
        bufp->chgCData(oldp+113,(vlSelfRef.Top__DOT__vga__DOT__palette_sync1_10),6);
        bufp->chgCData(oldp+114,(vlSelfRef.Top__DOT__vga__DOT__palette_sync1_11),6);
        bufp->chgCData(oldp+115,(vlSelfRef.Top__DOT__vga__DOT__palette_sync1_12),6);
        bufp->chgCData(oldp+116,(vlSelfRef.Top__DOT__vga__DOT__palette_sync1_13),6);
        bufp->chgCData(oldp+117,(vlSelfRef.Top__DOT__vga__DOT__palette_sync1_14),6);
        bufp->chgCData(oldp+118,(vlSelfRef.Top__DOT__vga__DOT__palette_sync1_15),6);
        bufp->chgCData(oldp+119,(vlSelfRef.Top__DOT__vga__DOT__palette_sync_0),6);
        bufp->chgCData(oldp+120,(vlSelfRef.Top__DOT__vga__DOT__palette_sync_1),6);
        bufp->chgCData(oldp+121,(vlSelfRef.Top__DOT__vga__DOT__palette_sync_2),6);
        bufp->chgCData(oldp+122,(vlSelfRef.Top__DOT__vga__DOT__palette_sync_3),6);
        bufp->chgCData(oldp+123,(vlSelfRef.Top__DOT__vga__DOT__palette_sync_4),6);
        bufp->chgCData(oldp+124,(vlSelfRef.Top__DOT__vga__DOT__palette_sync_5),6);
        bufp->chgCData(oldp+125,(vlSelfRef.Top__DOT__vga__DOT__palette_sync_6),6);
        bufp->chgCData(oldp+126,(vlSelfRef.Top__DOT__vga__DOT__palette_sync_7),6);
        bufp->chgCData(oldp+127,(vlSelfRef.Top__DOT__vga__DOT__palette_sync_8),6);
        bufp->chgCData(oldp+128,(vlSelfRef.Top__DOT__vga__DOT__palette_sync_9),6);
        bufp->chgCData(oldp+129,(vlSelfRef.Top__DOT__vga__DOT__palette_sync_10),6);
        bufp->chgCData(oldp+130,(vlSelfRef.Top__DOT__vga__DOT__palette_sync_11),6);
        bufp->chgCData(oldp+131,(vlSelfRef.Top__DOT__vga__DOT__palette_sync_12),6);
        bufp->chgCData(oldp+132,(vlSelfRef.Top__DOT__vga__DOT__palette_sync_13),6);
        bufp->chgCData(oldp+133,(vlSelfRef.Top__DOT__vga__DOT__palette_sync_14),6);
        bufp->chgCData(oldp+134,(vlSelfRef.Top__DOT__vga__DOT__palette_sync_15),6);
        bufp->chgBit(oldp+135,(vlSelfRef.Top__DOT__vga__DOT__in_display_d1));
        bufp->chgBit(oldp+136,(vlSelfRef.Top__DOT__vga__DOT__h_active_d1));
        bufp->chgBit(oldp+137,(vlSelfRef.Top__DOT__vga__DOT__v_active_d1));
        bufp->chgBit(oldp+138,(vlSelfRef.Top__DOT__vga__DOT__h_active_d2));
        bufp->chgBit(oldp+139,(vlSelfRef.Top__DOT__vga__DOT__v_active_d2));
        bufp->chgSData(oldp+140,(vlSelfRef.Top__DOT__vga__DOT__pixel_idx),13);
        bufp->chgSData(oldp+141,((0x000003ffU & ((IData)(vlSelfRef.Top__DOT__vga__DOT__pixel_idx) 
                                                 >> 3U))),10);
        bufp->chgCData(oldp+142,(vlSelfRef.Top__DOT__vga__DOT__pixel_in_word_d1),3);
        bufp->chgCData(oldp+143,(vlSelfRef.Top__DOT__vga__DOT__pixel_4bit),4);
        bufp->chgCData(oldp+144,(((IData)(vlSelfRef.Top__DOT__vga__DOT__blanking)
                                   ? 0U : (((IData)(vlSelfRef.Top__DOT__vga__DOT__display_enabled) 
                                            & (IData)(vlSelfRef.Top__DOT__vga__DOT__in_display_d1))
                                            ? ((0x0fU 
                                                == (IData)(vlSelfRef.Top__DOT__vga__DOT__pixel_4bit))
                                                ? (IData)(vlSelfRef.Top__DOT__vga__DOT__palette_sync_15)
                                                : (
                                                   (0x0eU 
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
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+145,(vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__pc),32);
        bufp->chgIData(oldp+146,(vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mstatus),32);
        bufp->chgIData(oldp+147,(vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mepc),32);
        bufp->chgIData(oldp+148,(vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mcause),32);
        bufp->chgIData(oldp+149,(vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mtvec),32);
        bufp->chgIData(oldp+150,(vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mie),32);
        bufp->chgBit(oldp+151,((1U & (vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mstatus 
                                      >> 3U))));
        bufp->chgBit(oldp+152,((1U & (vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mie 
                                      >> 7U))));
        bufp->chgBit(oldp+153,((1U & (vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mie 
                                      >> 0x0000000bU))));
        bufp->chgBit(oldp+154,((1U & (vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mstatus 
                                      >> 7U))));
        bufp->chgIData(oldp+155,(vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mscratch),32);
        bufp->chgQData(oldp+156,(vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__cycles),64);
        bufp->chgIData(oldp+158,(((IData)(4U) + vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__pc)),32);
        bufp->chgIData(oldp+159,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_0),32);
        bufp->chgIData(oldp+160,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_1),32);
        bufp->chgIData(oldp+161,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_2),32);
        bufp->chgIData(oldp+162,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_3),32);
        bufp->chgIData(oldp+163,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_4),32);
        bufp->chgIData(oldp+164,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_5),32);
        bufp->chgIData(oldp+165,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_6),32);
        bufp->chgIData(oldp+166,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_7),32);
        bufp->chgIData(oldp+167,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_8),32);
        bufp->chgIData(oldp+168,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_9),32);
        bufp->chgIData(oldp+169,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_10),32);
        bufp->chgIData(oldp+170,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_11),32);
        bufp->chgIData(oldp+171,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_12),32);
        bufp->chgIData(oldp+172,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_13),32);
        bufp->chgIData(oldp+173,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_14),32);
        bufp->chgIData(oldp+174,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_15),32);
        bufp->chgIData(oldp+175,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_16),32);
        bufp->chgIData(oldp+176,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_17),32);
        bufp->chgIData(oldp+177,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_18),32);
        bufp->chgIData(oldp+178,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_19),32);
        bufp->chgIData(oldp+179,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_20),32);
        bufp->chgIData(oldp+180,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_21),32);
        bufp->chgIData(oldp+181,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_22),32);
        bufp->chgIData(oldp+182,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_23),32);
        bufp->chgIData(oldp+183,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_24),32);
        bufp->chgIData(oldp+184,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_25),32);
        bufp->chgIData(oldp+185,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_26),32);
        bufp->chgIData(oldp+186,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_27),32);
        bufp->chgIData(oldp+187,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_28),32);
        bufp->chgIData(oldp+188,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_29),32);
        bufp->chgIData(oldp+189,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_30),32);
        bufp->chgIData(oldp+190,(vlSelfRef.Top__DOT__vga__DOT__intrStatusReg),32);
        bufp->chgIData(oldp+191,(vlSelfRef.Top__DOT__vga__DOT__uploadAddrReg),32);
        bufp->chgCData(oldp+192,(vlSelfRef.Top__DOT__vga__DOT__paletteReg_0),6);
        bufp->chgCData(oldp+193,(vlSelfRef.Top__DOT__vga__DOT__paletteReg_1),6);
        bufp->chgCData(oldp+194,(vlSelfRef.Top__DOT__vga__DOT__paletteReg_2),6);
        bufp->chgCData(oldp+195,(vlSelfRef.Top__DOT__vga__DOT__paletteReg_3),6);
        bufp->chgCData(oldp+196,(vlSelfRef.Top__DOT__vga__DOT__paletteReg_4),6);
        bufp->chgCData(oldp+197,(vlSelfRef.Top__DOT__vga__DOT__paletteReg_5),6);
        bufp->chgCData(oldp+198,(vlSelfRef.Top__DOT__vga__DOT__paletteReg_6),6);
        bufp->chgCData(oldp+199,(vlSelfRef.Top__DOT__vga__DOT__paletteReg_7),6);
        bufp->chgCData(oldp+200,(vlSelfRef.Top__DOT__vga__DOT__paletteReg_8),6);
        bufp->chgCData(oldp+201,(vlSelfRef.Top__DOT__vga__DOT__paletteReg_9),6);
        bufp->chgCData(oldp+202,(vlSelfRef.Top__DOT__vga__DOT__paletteReg_10),6);
        bufp->chgCData(oldp+203,(vlSelfRef.Top__DOT__vga__DOT__paletteReg_11),6);
        bufp->chgCData(oldp+204,(vlSelfRef.Top__DOT__vga__DOT__paletteReg_12),6);
        bufp->chgCData(oldp+205,(vlSelfRef.Top__DOT__vga__DOT__paletteReg_13),6);
        bufp->chgCData(oldp+206,(vlSelfRef.Top__DOT__vga__DOT__paletteReg_14),6);
        bufp->chgCData(oldp+207,(vlSelfRef.Top__DOT__vga__DOT__paletteReg_15),6);
        bufp->chgSData(oldp+208,((0x0000ffffU & vlSelfRef.Top__DOT__vga__DOT__uploadAddrReg)),16);
        bufp->chgCData(oldp+209,((0x0000000fU & (vlSelfRef.Top__DOT__vga__DOT__uploadAddrReg 
                                                 >> 0x00000010U))),4);
        bufp->chgBit(oldp+210,(vlSelfRef.Top__DOT__vga__DOT__vblank_sync1));
        bufp->chgBit(oldp+211,(vlSelfRef.Top__DOT__vga__DOT__vblank_synced));
        bufp->chgCData(oldp+212,(vlSelfRef.Top__DOT__vga__DOT__curr_frame_sync1),4);
        bufp->chgCData(oldp+213,(vlSelfRef.Top__DOT__vga__DOT__curr_frame_synced),4);
        bufp->chgBit(oldp+214,(vlSelfRef.Top__DOT__vga__DOT__vblank_prev));
        bufp->chgBit(oldp+215,(((~ (IData)(vlSelfRef.Top__DOT__vga__DOT__vblank_prev)) 
                                & (IData)(vlSelfRef.Top__DOT__vga__DOT__vblank_synced))));
        bufp->chgSData(oldp+216,((0x00001fffU & (vlSelfRef.Top__DOT__vga__DOT__uploadAddrReg 
                                                 >> 3U))),13);
        bufp->chgSData(oldp+217,((0x00003fffU & VL_SHIFTL_III(14,14,32, 
                                                              (0x0000000fU 
                                                               & (vlSelfRef.Top__DOT__vga__DOT__uploadAddrReg 
                                                                  >> 0x00000010U)), 9U))),14);
        bufp->chgSData(oldp+218,((0x00003fffU & (VL_SHIFTL_III(14,14,32, 
                                                               (0x0000000fU 
                                                                & (vlSelfRef.Top__DOT__vga__DOT__uploadAddrReg 
                                                                   >> 0x00000010U)), 9U) 
                                                 + 
                                                 (0x00001fffU 
                                                  & (vlSelfRef.Top__DOT__vga__DOT__uploadAddrReg 
                                                     >> 3U))))),14);
        bufp->chgSData(oldp+219,((0x0000ffffU & ((IData)(8U) 
                                                 + vlSelfRef.Top__DOT__vga__DOT__uploadAddrReg))),16);
        bufp->chgSData(oldp+220,(((0x1000U <= (0x0000ffffU 
                                               & ((IData)(8U) 
                                                  + vlSelfRef.Top__DOT__vga__DOT__uploadAddrReg)))
                                   ? 0U : (0x0000ffffU 
                                           & ((IData)(8U) 
                                              + vlSelfRef.Top__DOT__vga__DOT__uploadAddrReg)))),16);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgSData(oldp+221,(vlSelfRef.Top__DOT__vga__DOT__v_count),10);
        bufp->chgBit(oldp+222,(((0x01e9U <= (IData)(vlSelfRef.Top__DOT__vga__DOT__v_count)) 
                                & (0x01ecU > (IData)(vlSelfRef.Top__DOT__vga__DOT__v_count)))));
        bufp->chgCData(oldp+223,(vlSelfRef.Top__DOT__vga__DOT__curr_frame_sync1_1),4);
        bufp->chgCData(oldp+224,(vlSelfRef.Top__DOT__vga__DOT__curr_frame),4);
        bufp->chgSData(oldp+225,((0x00003fffU & VL_SHIFTL_III(14,14,32, (IData)(vlSelfRef.Top__DOT__vga__DOT__curr_frame), 9U))),14);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U]))) {
        bufp->chgIData(oldp+226,(vlSelfRef.Top__DOT__vga__DOT__ctrlReg),32);
        bufp->chgCData(oldp+227,((0x0000000fU & (vlSelfRef.Top__DOT__vga__DOT__ctrlReg 
                                                 >> 4U))),4);
        bufp->chgBit(oldp+228,((1U & (vlSelfRef.Top__DOT__vga__DOT__ctrlReg 
                                      >> 8U))));
    }
    bufp->chgBit(oldp+229,(vlSelfRef.clock));
    bufp->chgBit(oldp+230,(vlSelfRef.reset));
    bufp->chgIData(oldp+231,(vlSelfRef.io_instruction_address),32);
    bufp->chgIData(oldp+232,(vlSelfRef.io_instruction),32);
    bufp->chgBit(oldp+233,(vlSelfRef.io_instruction_valid));
    bufp->chgIData(oldp+234,(vlSelfRef.io_interrupt_flag),32);
    bufp->chgIData(oldp+235,(vlSelfRef.io_memory_bundle_address),32);
    bufp->chgIData(oldp+236,(vlSelfRef.io_memory_bundle_write_data),32);
    bufp->chgBit(oldp+237,(vlSelfRef.io_memory_bundle_write_enable));
    bufp->chgBit(oldp+238,(vlSelfRef.io_memory_bundle_write_strobe_0));
    bufp->chgBit(oldp+239,(vlSelfRef.io_memory_bundle_write_strobe_1));
    bufp->chgBit(oldp+240,(vlSelfRef.io_memory_bundle_write_strobe_2));
    bufp->chgBit(oldp+241,(vlSelfRef.io_memory_bundle_write_strobe_3));
    bufp->chgIData(oldp+242,(vlSelfRef.io_memory_bundle_read_data),32);
    bufp->chgCData(oldp+243,(vlSelfRef.io_deviceSelect),3);
    bufp->chgCData(oldp+244,(vlSelfRef.io_regs_debug_read_address),5);
    bufp->chgIData(oldp+245,(vlSelfRef.io_regs_debug_read_data),32);
    bufp->chgSData(oldp+246,(vlSelfRef.io_csr_regs_debug_read_address),12);
    bufp->chgIData(oldp+247,(vlSelfRef.io_csr_regs_debug_read_data),32);
    bufp->chgBit(oldp+248,(vlSelfRef.io_vga_pixclk));
    bufp->chgBit(oldp+249,(vlSelfRef.io_vga_hsync));
    bufp->chgBit(oldp+250,(vlSelfRef.io_vga_vsync));
    bufp->chgCData(oldp+251,(vlSelfRef.io_vga_rrggbb),6);
    bufp->chgBit(oldp+252,(vlSelfRef.io_vga_activevideo));
    bufp->chgSData(oldp+253,(vlSelfRef.io_vga_x_pos),10);
    bufp->chgSData(oldp+254,(vlSelfRef.io_vga_y_pos),10);
    bufp->chgIData(oldp+255,(((IData)(vlSelfRef.Top__DOT__cpu__DOT__clint__DOT____VdfgRegularize_h7f74ecf3_0_3)
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
    bufp->chgBit(oldp+256,((1U & ((1U == vlSelfRef.io_interrupt_flag)
                                   ? (vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mie 
                                      >> 7U) : (vlSelfRef.Top__DOT__cpu__DOT__csr_regs__DOT__mie 
                                                >> 0x0000000bU)))));
    bufp->chgIData(oldp+257,(((IData)(vlSelfRef.Top__DOT__vga__DOT__io_bundle_write_enable)
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
    bufp->chgSData(oldp+258,((0x00001fffU & ((0x00003fffU 
                                              & VL_SHIFTL_III(14,14,32, (IData)(vlSelfRef.Top__DOT__vga__DOT__curr_frame), 9U)) 
                                             + (0x000003ffU 
                                                & ((IData)(vlSelfRef.Top__DOT__vga__DOT__pixel_idx) 
                                                   >> 3U))))),13);
    bufp->chgSData(oldp+259,((0x00003fffU & (VL_SHIFTL_III(14,14,32, (IData)(vlSelfRef.Top__DOT__vga__DOT__curr_frame), 9U) 
                                             + (0x000003ffU 
                                                & ((IData)(vlSelfRef.Top__DOT__vga__DOT__pixel_idx) 
                                                   >> 3U))))),14);
}

void VTop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_cleanup\n"); );
    // Body
    VTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTop___024root*>(voidSelf);
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
