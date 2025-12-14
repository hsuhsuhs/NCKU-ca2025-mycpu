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
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_write_enable));
        bufp->chgCData(oldp+1,((0x0000001fU & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                               >> 7U))),5);
        bufp->chgCData(oldp+2,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_address1),5);
        bufp->chgCData(oldp+3,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_address2),5);
        bufp->chgBit(oldp+4,((0x67U == (0x0000007fU 
                                        & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction))));
        bufp->chgIData(oldp+5,(vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction),32);
        bufp->chgIData(oldp+6,(((0x17U == (0x0000007fU 
                                           & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction))
                                 ? (0xfffff000U & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)
                                 : ((0x23U == (0x0000007fU 
                                               & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction))
                                     ? ((((vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                           >> 0x0000001fU)
                                           ? 0x000fffffU
                                           : 0U) << 0x0000000cU) 
                                        | ((0x00000fe0U 
                                            & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                               >> 0x00000014U)) 
                                           | (0x0000001fU 
                                              & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                                 >> 7U))))
                                     : ((((vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                           >> 0x0000001fU)
                                           ? 0x000fffffU
                                           : 0U) << 0x0000000cU) 
                                        | (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                           >> 0x00000014U))))),32);
        bufp->chgBit(oldp+7,((0x17U == (0x0000007fU 
                                        & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction))));
        bufp->chgBit(oldp+8,(((IData)(vlSelfRef.Top__DOT__cpu__DOT__id__DOT___usesRs1_T_1) 
                              | (IData)(vlSelfRef.Top__DOT__cpu__DOT__id__DOT____VdfgRegularize_h38ccc7c7_0_0))));
        bufp->chgBit(oldp+9,((3U == (0x0000007fU & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction))));
        bufp->chgBit(oldp+10,((0x23U == (0x0000007fU 
                                         & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction))));
        bufp->chgCData(oldp+11,(vlSelfRef.Top__DOT__cpu__DOT__id__DOT__io_wb_reg_write_source),2);
        bufp->chgCData(oldp+12,((0x0000007fU & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)),7);
        bufp->chgCData(oldp+13,((0x0000001fU & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                                >> 0x0000000fU))),5);
        bufp->chgCData(oldp+14,((0x0000001fU & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                                >> 0x00000014U))),5);
        bufp->chgBit(oldp+15,((0x13U == (0x0000007fU 
                                         & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction))));
        bufp->chgBit(oldp+16,(((IData)(vlSelfRef.Top__DOT__cpu__DOT__id__DOT___usesRs1_T_1) 
                               | (0x67U == (0x0000007fU 
                                            & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)))));
        bufp->chgIData(oldp+17,(((((vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                    >> 0x0000001fU)
                                    ? 0x000fffffU : 0U) 
                                  << 0x0000000cU) | 
                                 (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                  >> 0x00000014U))),32);
        bufp->chgIData(oldp+18,(((((vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                    >> 0x0000001fU)
                                    ? 0x000fffffU : 0U) 
                                  << 0x0000000cU) | 
                                 ((0x00000fe0U & (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                                  >> 0x00000014U)) 
                                  | (0x0000001fU & 
                                     (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                      >> 7U))))),32);
        bufp->chgIData(oldp+19,((0xfffff000U & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgIData(oldp+20,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_write_data),32);
        bufp->chgIData(oldp+21,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_data1),32);
        bufp->chgIData(oldp+22,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_data2),32);
        bufp->chgIData(oldp+23,(((0x17U == (0x0000007fU 
                                            & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction))
                                  ? vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__pc
                                  : vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_data1)),32);
        bufp->chgIData(oldp+24,((((IData)(vlSelfRef.Top__DOT__cpu__DOT__id__DOT___usesRs1_T_1) 
                                  | (IData)(vlSelfRef.Top__DOT__cpu__DOT__id__DOT____VdfgRegularize_h38ccc7c7_0_0))
                                  ? ((0x17U == (0x0000007fU 
                                                & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction))
                                      ? (0xfffff000U 
                                         & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction)
                                      : ((0x23U == 
                                          (0x0000007fU 
                                           & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction))
                                          ? ((((vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
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
                                          : ((((vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                                >> 0x0000001fU)
                                                ? 0x000fffffU
                                                : 0U) 
                                              << 0x0000000cU) 
                                             | (vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction 
                                                >> 0x00000014U))))
                                  : vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__io_read_data2)),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+25,(vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__pc),32);
        bufp->chgIData(oldp+26,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_0),32);
        bufp->chgIData(oldp+27,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_1),32);
        bufp->chgIData(oldp+28,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_2),32);
        bufp->chgIData(oldp+29,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_3),32);
        bufp->chgIData(oldp+30,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_4),32);
        bufp->chgIData(oldp+31,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_5),32);
        bufp->chgIData(oldp+32,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_6),32);
        bufp->chgIData(oldp+33,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_7),32);
        bufp->chgIData(oldp+34,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_8),32);
        bufp->chgIData(oldp+35,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_9),32);
        bufp->chgIData(oldp+36,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_10),32);
        bufp->chgIData(oldp+37,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_11),32);
        bufp->chgIData(oldp+38,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_12),32);
        bufp->chgIData(oldp+39,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_13),32);
        bufp->chgIData(oldp+40,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_14),32);
        bufp->chgIData(oldp+41,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_15),32);
        bufp->chgIData(oldp+42,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_16),32);
        bufp->chgIData(oldp+43,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_17),32);
        bufp->chgIData(oldp+44,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_18),32);
        bufp->chgIData(oldp+45,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_19),32);
        bufp->chgIData(oldp+46,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_20),32);
        bufp->chgIData(oldp+47,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_21),32);
        bufp->chgIData(oldp+48,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_22),32);
        bufp->chgIData(oldp+49,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_23),32);
        bufp->chgIData(oldp+50,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_24),32);
        bufp->chgIData(oldp+51,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_25),32);
        bufp->chgIData(oldp+52,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_26),32);
        bufp->chgIData(oldp+53,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_27),32);
        bufp->chgIData(oldp+54,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_28),32);
        bufp->chgIData(oldp+55,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_29),32);
        bufp->chgIData(oldp+56,(vlSelfRef.Top__DOT__cpu__DOT__regs__DOT__registers_30),32);
    }
    bufp->chgBit(oldp+57,(vlSelfRef.clock));
    bufp->chgBit(oldp+58,(vlSelfRef.reset));
    bufp->chgIData(oldp+59,(vlSelfRef.io_instruction_address),32);
    bufp->chgIData(oldp+60,(vlSelfRef.io_instruction),32);
    bufp->chgIData(oldp+61,(vlSelfRef.io_memory_bundle_address),32);
    bufp->chgIData(oldp+62,(vlSelfRef.io_memory_bundle_write_data),32);
    bufp->chgBit(oldp+63,(vlSelfRef.io_memory_bundle_write_enable));
    bufp->chgBit(oldp+64,(vlSelfRef.io_memory_bundle_write_strobe_0));
    bufp->chgBit(oldp+65,(vlSelfRef.io_memory_bundle_write_strobe_1));
    bufp->chgBit(oldp+66,(vlSelfRef.io_memory_bundle_write_strobe_2));
    bufp->chgBit(oldp+67,(vlSelfRef.io_memory_bundle_write_strobe_3));
    bufp->chgIData(oldp+68,(vlSelfRef.io_memory_bundle_read_data),32);
    bufp->chgBit(oldp+69,(vlSelfRef.io_instruction_valid));
    bufp->chgCData(oldp+70,(vlSelfRef.io_debug_read_address),5);
    bufp->chgIData(oldp+71,(vlSelfRef.io_debug_read_data),32);
    bufp->chgIData(oldp+72,((0xfffffffeU & vlSelfRef.io_memory_bundle_address)),32);
    bufp->chgIData(oldp+73,(((3U == (0x0000007fU & vlSelfRef.Top__DOT__cpu__DOT__inst_fetch__DOT__io_instruction))
                              ? vlSelfRef.io_memory_bundle_read_data
                              : 0U)),32);
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
}
