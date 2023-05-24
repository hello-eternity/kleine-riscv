// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "verilated.h"

#include "Vcore__Syms.h"
#include "Vcore___024root.h"

extern const VlUnpacked<CData/*3:0*/, 256> Vcore__ConstPool__TABLE_h2fca346c_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vcore__ConstPool__TABLE_h000993bb_0;

VL_INLINE_OPT void Vcore___024root___ico_sequent__TOP__0(Vcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ core__DOT__core_pipeline__DOT__csr_to_writeback_eip;
    core__DOT__core_pipeline__DOT__csr_to_writeback_eip = 0;
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->core__DOT__core_busio__DOT__tmp_load_data 
        = ((0x1fU >= (0x18U & (vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__ex_alu__DOT__result_add_sub 
                               << 3U))) ? (vlSelf->ext_read_data 
                                           >> (0x18U 
                                               & (vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__ex_alu__DOT__result_add_sub 
                                                  << 3U)))
            : 0U);
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_hazard__DOT____VdfgTmp_hd3590afe__0 
        = ((~ ((IData)(vlSelf->core__DOT__core_busio__DOT____VdfgTmp_hbb61d502__0) 
               & (IData)(vlSelf->ext_ready))) & (IData)(vlSelf->core__DOT__core_busio__DOT____VdfgTmp_hbb61d502__0));
    vlSelf->core__DOT__core_pipeline__DOT__csr_to_decode_read_data 
        = ((vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
            >> 0x1fU) ? ((0x40000000U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                          ? ((0x20000000U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                              ? 0U : ((0x10000000U 
                                       & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                       ? 0U : ((0x8000000U 
                                                & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                ? (
                                                   (0x4000000U 
                                                    & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                    ? 0U
                                                    : 
                                                   ((0x2000000U 
                                                     & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                     ? 0U
                                                     : 
                                                    ((0x1000000U 
                                                      & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                      ? 0U
                                                      : 
                                                     ((0x800000U 
                                                       & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                       ? 0U
                                                       : 
                                                      ((0x400000U 
                                                        & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                        ? 0U
                                                        : 
                                                       ((0x200000U 
                                                         & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                         ? 
                                                        ((0x100000U 
                                                          & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                          ? 0U
                                                          : (IData)(
                                                                    (vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__instret 
                                                                     >> 0x20U)))
                                                         : (IData)(
                                                                   (vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__cycle 
                                                                    >> 0x20U))))))))
                                                : (
                                                   (0x4000000U 
                                                    & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                    ? 0U
                                                    : 
                                                   ((0x2000000U 
                                                     & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                     ? 0U
                                                     : 
                                                    ((0x1000000U 
                                                      & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                      ? 0U
                                                      : 
                                                     ((0x800000U 
                                                       & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                       ? 0U
                                                       : 
                                                      ((0x400000U 
                                                        & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                        ? 0U
                                                        : 
                                                       ((0x200000U 
                                                         & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                         ? 
                                                        ((0x100000U 
                                                          & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                          ? 0U
                                                          : (IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__instret))
                                                         : (IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__cycle))))))))))
                          : ((0x20000000U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                              ? ((0x10000000U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                  ? ((0x8000000U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                      ? ((0x4000000U 
                                          & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                          ? ((0x2000000U 
                                              & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                              ? 0U : 
                                             ((0x1000000U 
                                               & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                               ? 0U
                                               : ((0x800000U 
                                                   & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                   ? 0U
                                                   : 
                                                  ((0x400000U 
                                                    & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                    ? 0U
                                                    : 
                                                   ((0x200000U 
                                                     & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                     ? 0U
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                      ? (IData)(
                                                                (vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__mtimecmp 
                                                                 >> 0x20U))
                                                      : (IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__mtimecmp)))))))
                                          : ((0x2000000U 
                                              & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                              ? 0U : 
                                             ((0x1000000U 
                                               & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                               ? 0U
                                               : ((0x800000U 
                                                   & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                   ? 0U
                                                   : 
                                                  ((0x400000U 
                                                    & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                    ? 0U
                                                    : 
                                                   ((0x200000U 
                                                     & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                      ? 0U
                                                      : (IData)(
                                                                (vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__instret 
                                                                 >> 0x20U)))
                                                     : (IData)(
                                                               (vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__cycle 
                                                                >> 0x20U))))))))
                                      : ((0x4000000U 
                                          & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                          ? 0U : ((0x2000000U 
                                                   & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                   ? 0U
                                                   : 
                                                  ((0x1000000U 
                                                    & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                    ? 0U
                                                    : 
                                                   ((0x800000U 
                                                     & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                     ? 0U
                                                     : 
                                                    ((0x400000U 
                                                      & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                      ? 0U
                                                      : 
                                                     ((0x200000U 
                                                       & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                       ? 
                                                      ((0x100000U 
                                                        & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                        ? 0U
                                                        : (IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__instret))
                                                       : (IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__cycle))))))))
                                  : 0U) : 0U)) : ((0x40000000U 
                                                   & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                   ? 0U
                                                   : 
                                                  ((0x20000000U 
                                                    & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                    ? 
                                                   ((0x10000000U 
                                                     & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                     ? 
                                                    ((0x8000000U 
                                                      & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                      ? 0U
                                                      : 
                                                     ((0x4000000U 
                                                       & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                       ? 
                                                      ((0x2000000U 
                                                        & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                        ? 0U
                                                        : 
                                                       ((0x1000000U 
                                                         & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                         ? 0U
                                                         : 
                                                        ((0x800000U 
                                                          & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                          ? 0U
                                                          : 
                                                         ((0x400000U 
                                                           & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                           ? 
                                                          ((0x200000U 
                                                            & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                            ? 0U
                                                            : 
                                                           ((0x100000U 
                                                             & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                             ? 0U
                                                             : 
                                                            (((IData)(vlSelf->meip) 
                                                              << 0xbU) 
                                                             | (((IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__mtip) 
                                                                 << 7U) 
                                                                | ((IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__msip) 
                                                                   << 3U)))))
                                                           : 
                                                          ((0x200000U 
                                                            & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                            ? 
                                                           ((0x100000U 
                                                             & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                             ? 0U
                                                             : 
                                                            (((IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__minterupt) 
                                                              << 0x1fU) 
                                                             | (IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__mcause)))
                                                            : 
                                                           ((0x100000U 
                                                             & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                             ? vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__mecp
                                                             : vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__mscratch))))))
                                                       : 
                                                      ((0x2000000U 
                                                        & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                        ? 0U
                                                        : 
                                                       ((0x1000000U 
                                                         & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                         ? 0U
                                                         : 
                                                        ((0x800000U 
                                                          & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                          ? 0U
                                                          : 
                                                         ((0x400000U 
                                                           & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                           ? 
                                                          ((0x200000U 
                                                            & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                            ? 0U
                                                            : 
                                                           ((0x100000U 
                                                             & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                             ? 
                                                            (0xfffffffcU 
                                                             & vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__mtvec)
                                                             : 
                                                            (((IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__meie) 
                                                              << 0xbU) 
                                                             | (((IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__mtie) 
                                                                 << 7U) 
                                                                | ((IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__msie) 
                                                                   << 3U)))))
                                                           : 
                                                          ((0x200000U 
                                                            & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                            ? 0U
                                                            : 
                                                           ((0x100000U 
                                                             & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                             ? 0x40000100U
                                                             : 
                                                            (((IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__pie) 
                                                              << 7U) 
                                                             | ((IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__ie) 
                                                                << 3U))))))))))
                                                     : 0U)
                                                    : 0U)));
    core__DOT__core_pipeline__DOT__csr_to_writeback_eip 
        = ((IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__ie) 
           & ((IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__meie) 
              & (IData)(vlSelf->meip)));
    vlSelf->core__DOT__core_pipeline__DOT__hazard_to_decode_stall 
        = ((IData)(vlSelf->core__DOT__core_pipeline__DOT__global_wfi) 
           | ((IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_hazard__DOT____VdfgTmp_hd3590afe__0) 
              | ((IData)(vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_mret) 
                 & (IData)(vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_valid))));
    __Vtableidx1 = (((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_ecause) 
                     << 4U) | (((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_exception) 
                                << 3U) | (((IData)(vlSelf->core__DOT__core_pipeline__DOT__csr_to_writeback_sip) 
                                           << 2U) | 
                                          (((IData)(vlSelf->core__DOT__core_pipeline__DOT__csr_to_writeback_tip) 
                                            << 1U) 
                                           | (IData)(core__DOT__core_pipeline__DOT__csr_to_writeback_eip)))));
    vlSelf->core__DOT__core_pipeline__DOT__writeback_to_csr_trap_cause 
        = Vcore__ConstPool__TABLE_h2fca346c_0[__Vtableidx1];
    vlSelf->core__DOT__core_pipeline__DOT__writeback_to_csr_interupt 
        = Vcore__ConstPool__TABLE_h000993bb_0[__Vtableidx1];
    vlSelf->core__DOT__core_pipeline__DOT__global_traped 
        = ((IData)(vlSelf->core__DOT__core_pipeline__DOT__csr_to_writeback_sip) 
           | ((IData)(vlSelf->core__DOT__core_pipeline__DOT__csr_to_writeback_tip) 
              | ((IData)(core__DOT__core_pipeline__DOT__csr_to_writeback_eip) 
                 | ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_exception) 
                    & (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_valid)))));
    vlSelf->core__DOT__core_pipeline__DOT__writeback_to_regfile_rd_address 
        = ((1U & ((~ (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_valid)) 
                  | (IData)(vlSelf->core__DOT__core_pipeline__DOT__global_traped)))
            ? 0U : (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_rd_address));
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_hazard__DOT__trap_invalidate 
        = ((IData)(vlSelf->core__DOT__core_pipeline__DOT__global_mret) 
           | (IData)(vlSelf->core__DOT__core_pipeline__DOT__global_traped));
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_writeback__DOT____VdfgTmp_h9c854e12__0 
        = ((~ (IData)(vlSelf->core__DOT__core_pipeline__DOT__global_traped)) 
           & (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_valid));
    vlSelf->core__DOT__core_pipeline__DOT__hazard_to_execute_invalidate 
        = ((IData)(vlSelf->reset) | ((IData)(vlSelf->core__DOT__core_pipeline__DOT__global_branch_taken) 
                                     | (IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_hazard__DOT__trap_invalidate)));
    vlSelf->core__DOT__core_pipeline__DOT__writeback_to_csr_write_enable 
        = ((IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_writeback__DOT____VdfgTmp_h9c854e12__0) 
           & (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_write));
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_hazard__DOT__data_hazard 
        = ((IData)(vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_valid) 
           & (((IData)(vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_valid) 
               & ((0U != (IData)(vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_rd_address)) 
                  & (((IData)(vlSelf->core__DOT__core_pipeline__DOT__decode_to_hazaed_uses_rs1) 
                      & ((IData)(vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_rd_address) 
                         == (0x1fU & (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                      >> 0xfU)))) | 
                     ((IData)(vlSelf->core__DOT__core_pipeline__DOT__decode_to_hazaed_uses_rs2) 
                      & ((IData)(vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_rd_address) 
                         == (0x1fU & (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                      >> 0x14U))))))) 
              | (((IData)(vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_valid) 
                  & ((0U != (IData)(vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_rd_address)) 
                     & ((0U == (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_decode_bypass_address)) 
                        & (((IData)(vlSelf->core__DOT__core_pipeline__DOT__decode_to_hazaed_uses_rs1) 
                            & ((IData)(vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_rd_address) 
                               == (0x1fU & (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                            >> 0xfU)))) 
                           | ((IData)(vlSelf->core__DOT__core_pipeline__DOT__decode_to_hazaed_uses_rs2) 
                              & ((IData)(vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_rd_address) 
                                 == (0x1fU & (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                              >> 0x14U)))))))) 
                 | ((IData)(((0x73U == (0x7fU & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) 
                             & ((0x4000U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                 ? ((0x2000U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                     ? (IData)(vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_valid)
                                     : ((vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                         >> 0xcU) & 
                                        ((IData)(vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_valid) 
                                         & (0U != (0x1fU 
                                                   & (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                                      >> 7U))))))
                                 : ((0x2000U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                     ? (IData)(vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_valid)
                                     : ((vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                         >> 0xcU) & 
                                        ((IData)(vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_valid) 
                                         & (0U != (0x1fU 
                                                   & (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                                      >> 7U))))))))) 
                    & (((IData)(vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_csr_write) 
                        & (IData)(vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_valid)) 
                       | (((IData)(vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_csr_write) 
                           & (IData)(vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_valid)) 
                          | ((IData)(vlSelf->core__DOT__core_pipeline__DOT__writeback_to_csr_write_enable) 
                             & (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_valid))))))));
    vlSelf->core__DOT__core_pipeline__DOT__hazard_to_fetch_stall 
        = ((IData)(vlSelf->core__DOT__core_pipeline__DOT__hazard_to_decode_stall) 
           | (IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_hazard__DOT__data_hazard));
    vlSelf->core__DOT__core_pipeline__DOT__hazard_to_fetch_invalidate 
        = (1U & ((~ (((IData)(vlSelf->ext_instruction) 
                      & (IData)(vlSelf->ext_ready)) 
                     | (IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_hazard__DOT__data_hazard))) 
                 | (IData)(vlSelf->core__DOT__core_pipeline__DOT__hazard_to_execute_invalidate)));
}

void Vcore___024root___eval_ico(Vcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vcore___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vcore___024root___eval_act(Vcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vcore___024root___nba_sequent__TOP__0(Vcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ core__DOT__mem_store;
    core__DOT__mem_store = 0;
    CData/*0:0*/ core__DOT__core_pipeline__DOT__csr_to_writeback_eip;
    core__DOT__core_pipeline__DOT__csr_to_writeback_eip = 0;
    CData/*0:0*/ core__DOT__core_pipeline__DOT__pipeline_memory__DOT____VdfgTmp_h6b746abd__0;
    core__DOT__core_pipeline__DOT__pipeline_memory__DOT____VdfgTmp_h6b746abd__0 = 0;
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*0:0*/ __Vdly__core__DOT__core_pipeline__DOT__pipeline_csr__DOT__ie;
    __Vdly__core__DOT__core_pipeline__DOT__pipeline_csr__DOT__ie = 0;
    QData/*63:0*/ __Vdly__core__DOT__core_pipeline__DOT__pipeline_csr__DOT__cycle;
    __Vdly__core__DOT__core_pipeline__DOT__pipeline_csr__DOT__cycle = 0;
    CData/*4:0*/ __Vdlyvdim0__core__DOT__core_pipeline__DOT__pipeline_registers__DOT__registers__v0;
    __Vdlyvdim0__core__DOT__core_pipeline__DOT__pipeline_registers__DOT__registers__v0 = 0;
    IData/*31:0*/ __Vdlyvval__core__DOT__core_pipeline__DOT__pipeline_registers__DOT__registers__v0;
    __Vdlyvval__core__DOT__core_pipeline__DOT__pipeline_registers__DOT__registers__v0 = 0;
    IData/*31:0*/ __Vdly__core__DOT__core_pipeline__DOT__pipeline_fetch__DOT__pc;
    __Vdly__core__DOT__core_pipeline__DOT__pipeline_fetch__DOT__pc = 0;
    CData/*0:0*/ __Vdly__core__DOT__core_pipeline__DOT__fetch_to_decode_valid;
    __Vdly__core__DOT__core_pipeline__DOT__fetch_to_decode_valid = 0;
    CData/*0:0*/ __Vdly__core__DOT__core_pipeline__DOT__decode_to_execute_valid;
    __Vdly__core__DOT__core_pipeline__DOT__decode_to_execute_valid = 0;
    CData/*0:0*/ __Vdly__core__DOT__core_pipeline__DOT__execute_to_memory_valid;
    __Vdly__core__DOT__core_pipeline__DOT__execute_to_memory_valid = 0;
    // Body
    __Vdly__core__DOT__core_pipeline__DOT__fetch_to_decode_valid 
        = vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_valid;
    __Vdly__core__DOT__core_pipeline__DOT__decode_to_execute_valid 
        = vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_valid;
    __Vdly__core__DOT__core_pipeline__DOT__execute_to_memory_valid 
        = vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_valid;
    __Vdly__core__DOT__core_pipeline__DOT__pipeline_csr__DOT__cycle 
        = vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__cycle;
    __Vdly__core__DOT__core_pipeline__DOT__pipeline_csr__DOT__ie 
        = vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__ie;
    __Vdly__core__DOT__core_pipeline__DOT__pipeline_fetch__DOT__pc 
        = vlSelf->core__DOT__core_pipeline__DOT__pipeline_fetch__DOT__pc;
    __Vdlyvval__core__DOT__core_pipeline__DOT__pipeline_registers__DOT__registers__v0 
        = vlSelf->core__DOT__core_pipeline__DOT__writeback_to_regfile_rd_data;
    __Vdlyvdim0__core__DOT__core_pipeline__DOT__pipeline_registers__DOT__registers__v0 
        = vlSelf->core__DOT__core_pipeline__DOT__writeback_to_regfile_rd_address;
    __Vdly__core__DOT__core_pipeline__DOT__fetch_to_decode_valid 
        = (((IData)(vlSelf->core__DOT__core_pipeline__DOT__hazard_to_fetch_stall)
             ? (IData)(vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_valid)
             : 1U) && (1U & (~ (IData)(vlSelf->core__DOT__core_pipeline__DOT__hazard_to_fetch_invalidate))));
    __Vdly__core__DOT__core_pipeline__DOT__decode_to_execute_valid 
        = (((IData)(vlSelf->core__DOT__core_pipeline__DOT__hazard_to_decode_stall)
             ? (IData)(vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_valid)
             : (IData)(vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_valid)) 
           & (~ ((IData)(vlSelf->core__DOT__core_pipeline__DOT__hazard_to_execute_invalidate) 
                 | (IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_hazard__DOT__data_hazard))));
    __Vdly__core__DOT__core_pipeline__DOT__execute_to_memory_valid 
        = (((IData)(vlSelf->core__DOT__core_pipeline__DOT__hazard_to_decode_stall)
             ? (IData)(vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_valid)
             : (IData)(vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_valid)) 
           & (~ (IData)(vlSelf->core__DOT__core_pipeline__DOT__hazard_to_execute_invalidate)));
    vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_valid 
        = (((IData)(vlSelf->core__DOT__core_pipeline__DOT__global_wfi)
             ? (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_valid)
             : (IData)(vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_valid)) 
           & (~ ((IData)(vlSelf->reset) | ((IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_hazard__DOT__trap_invalidate) 
                                           | (IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_hazard__DOT____VdfgTmp_hd3590afe__0)))));
    if (((~ (IData)(vlSelf->core__DOT__core_pipeline__DOT__global_wfi)) 
         & (IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_writeback__DOT____VdfgTmp_h9c854e12__0))) {
        vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__instret 
            = (1ULL + vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__instret);
    }
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__ex_alu__DOT__result_or 
        = (vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__alu_input_a 
           | vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__alu_input_b);
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__ex_alu__DOT__result_sll 
        = (vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__alu_input_a 
           << (0x1fU & vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__alu_input_b));
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__ex_alu__DOT__result_xor 
        = (vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__alu_input_a 
           ^ vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__alu_input_b);
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__ex_alu__DOT__old_function 
        = vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_alu_function;
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__ex_cmp__DOT__negate 
        = (1U & (IData)(vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_cmp_function));
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__ex_alu__DOT__result_slt 
        = VL_LTS_IQQ(33, (((QData)((IData)(((~ (IData)(vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_alu_function)) 
                                            & (vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__alu_input_a 
                                               >> 0x1fU)))) 
                           << 0x20U) | (QData)((IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__alu_input_a))), 
                     (((QData)((IData)(((~ (IData)(vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_alu_function)) 
                                        & (vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__alu_input_b 
                                           >> 0x1fU)))) 
                       << 0x20U) | (QData)((IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__alu_input_b))));
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__ex_alu__DOT__result_srl_sra 
        = (IData)((0x1ffffffffULL & VL_SHIFTRS_QQI(33,33,5, 
                                                   (((QData)((IData)(
                                                                     ((IData)(vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_alu_function_modifier) 
                                                                      & (vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__alu_input_a 
                                                                         >> 0x1fU)))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__alu_input_a))), 
                                                   (0x1fU 
                                                    & vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__alu_input_b))));
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__ex_alu__DOT__result_and_clr 
        = (((IData)(vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_alu_function_modifier)
             ? (~ vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__alu_input_a)
             : vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__alu_input_a) 
           & vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__alu_input_b);
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__ex_cmp__DOT__quasi_result 
        = ((4U & (IData)(vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_cmp_function))
            ? VL_LTS_IQQ(33, (((QData)((IData)(((~ 
                                                 ((IData)(vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_cmp_function) 
                                                  >> 1U)) 
                                                & (vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__acctual_rs1 
                                                   >> 0x1fU)))) 
                               << 0x20U) | (QData)((IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__acctual_rs1))), 
                         (((QData)((IData)(((~ ((IData)(vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_cmp_function) 
                                                >> 1U)) 
                                            & (vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__acctual_rs2 
                                               >> 0x1fU)))) 
                           << 0x20U) | (QData)((IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__acctual_rs2))))
            : (vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__acctual_rs1 
               == vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__acctual_rs2));
    if ((1U & (~ (IData)(vlSelf->core__DOT__core_pipeline__DOT__global_wfi)))) {
        vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_data 
            = vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_csr_data;
        vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_write_select 
            = vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_write_select;
        vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_mret 
            = vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_mret;
        vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_write 
            = vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_csr_write;
        vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_rd_address 
            = vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_rd_address;
        vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_load_data 
            = ((0U == (IData)(vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_load_store_size))
                ? ((IData)(vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_load_signed)
                    ? (((- (IData)((1U & (vlSelf->core__DOT__core_busio__DOT__tmp_load_data 
                                          >> 7U)))) 
                        << 8U) | (0xffU & vlSelf->core__DOT__core_busio__DOT__tmp_load_data))
                    : (0xffU & vlSelf->core__DOT__core_busio__DOT__tmp_load_data))
                : ((1U == (IData)(vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_load_store_size))
                    ? ((IData)(vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_load_signed)
                        ? (((- (IData)((1U & (vlSelf->core__DOT__core_busio__DOT__tmp_load_data 
                                              >> 0xfU)))) 
                            << 0x10U) | (0xffffU & vlSelf->core__DOT__core_busio__DOT__tmp_load_data))
                        : (0xffffU & vlSelf->core__DOT__core_busio__DOT__tmp_load_data))
                    : ((2U == (IData)(vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_load_store_size))
                        ? vlSelf->core__DOT__core_busio__DOT__tmp_load_data
                        : 0U)));
        vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_exception 
            = ((((~ (IData)(vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_exception)) 
                 & (IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_memory__DOT__should_branch)) 
                & (0U != (3U & vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__ex_alu__DOT__result_add_sub))) 
               | ((((~ (IData)(vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_exception)) 
                    & ((IData)(vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_load) 
                       | (IData)(vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_store))) 
                   & (~ (IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_memory__DOT__valid_mem_address))) 
                  | (IData)(vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_exception)));
        vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_ecause 
            = ((((~ (IData)(vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_exception)) 
                 & (IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_memory__DOT__should_branch)) 
                & (0U != (3U & vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__ex_alu__DOT__result_add_sub)))
                ? 0U : ((((~ (IData)(vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_exception)) 
                          & ((IData)(vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_load) 
                             | (IData)(vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_store))) 
                         & (~ (IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_memory__DOT__valid_mem_address)))
                         ? ((IData)(vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_load)
                             ? 4U : 6U) : (IData)(vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_ecause)));
    }
    __Vdly__core__DOT__core_pipeline__DOT__pipeline_csr__DOT__cycle 
        = (1ULL + vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__cycle);
    if (vlSelf->core__DOT__core_pipeline__DOT__writeback_to_csr_write_enable) {
        if ((0x800U & (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address))) {
            if ((1U & (~ ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address))) {
                    if ((0x100U & (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address))) {
                        if ((0x80U & (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address))) {
                            if ((1U & (~ ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                                          >> 6U)))) {
                                if ((1U & (~ ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                                              >> 5U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                                                     >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address)))) {
                                                        vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__instret 
                                                            = 
                                                            ((0xffffffffULL 
                                                              & vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__instret) 
                                                             | ((QData)((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_alu_data)) 
                                                                << 0x20U));
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                                             >> 6U)))) {
                            if ((1U & (~ ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                                          >> 5U)))) {
                                if ((1U & (~ ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                                              >> 4U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address)))) {
                                                    vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__instret 
                                                        = 
                                                        ((0xffffffff00000000ULL 
                                                          & vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__instret) 
                                                         | (IData)((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_alu_data)));
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__instret = 0ULL;
    }
    if (vlSelf->core__DOT__core_pipeline__DOT__global_traped) {
        __Vdly__core__DOT__core_pipeline__DOT__pipeline_csr__DOT__ie = 0U;
    } else if (vlSelf->core__DOT__core_pipeline__DOT__global_mret) {
        __Vdly__core__DOT__core_pipeline__DOT__pipeline_csr__DOT__ie 
            = vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__pie;
    }
    if (vlSelf->core__DOT__core_pipeline__DOT__writeback_to_csr_write_enable) {
        if ((1U & (~ ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                      >> 0xbU)))) {
            if ((1U & (~ ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address))) {
                    if ((0x100U & (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address))) {
                        if ((1U & (~ ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                                      >> 7U)))) {
                            if ((1U & (~ ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                                          >> 6U)))) {
                                if ((1U & (~ ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                                              >> 5U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address)))) {
                                                        __Vdly__core__DOT__core_pipeline__DOT__pipeline_csr__DOT__ie 
                                                            = 
                                                            (1U 
                                                             & (vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_alu_data 
                                                                >> 3U));
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->reset) {
        __Vdly__core__DOT__core_pipeline__DOT__pipeline_csr__DOT__ie = 0U;
        __Vdly__core__DOT__core_pipeline__DOT__pipeline_fetch__DOT__pc = 0x80000000U;
    } else {
        __Vdly__core__DOT__core_pipeline__DOT__pipeline_fetch__DOT__pc 
            = ((IData)(vlSelf->core__DOT__core_pipeline__DOT__global_traped)
                ? vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__mtvec
                : ((IData)(vlSelf->core__DOT__core_pipeline__DOT__global_mret)
                    ? vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__mecp
                    : ((IData)(vlSelf->core__DOT__core_pipeline__DOT__global_branch_taken)
                        ? vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__ex_alu__DOT__result_add_sub
                        : (((IData)(vlSelf->core__DOT__core_pipeline__DOT__hazard_to_fetch_stall) 
                            | (IData)(vlSelf->core__DOT__core_pipeline__DOT__hazard_to_fetch_invalidate))
                            ? vlSelf->core__DOT__core_pipeline__DOT__pipeline_fetch__DOT__pc
                            : vlSelf->core__DOT__core_pipeline__DOT__pipeline_fetch__DOT__next_pc))));
    }
    if (vlSelf->core__DOT__core_pipeline__DOT__global_traped) {
        vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__minterupt 
            = vlSelf->core__DOT__core_pipeline__DOT__writeback_to_csr_interupt;
        vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__mcause 
            = vlSelf->core__DOT__core_pipeline__DOT__writeback_to_csr_trap_cause;
        vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__pie 
            = vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__ie;
        vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__mecp 
            = ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_wfi)
                ? vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_next_pc
                : vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_pc);
    } else if (vlSelf->core__DOT__core_pipeline__DOT__global_mret) {
        vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__pie = 1U;
    }
    if (vlSelf->core__DOT__core_pipeline__DOT__writeback_to_csr_write_enable) {
        if ((1U & (~ ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                      >> 0xbU)))) {
            if ((1U & (~ ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address))) {
                    if ((0x100U & (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address))) {
                        if ((1U & (~ ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                                      >> 7U)))) {
                            if ((0x40U & (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address))) {
                                if ((1U & (~ ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                                              >> 5U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address)))) {
                                                        vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__mscratch 
                                                            = vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_alu_data;
                                                    }
                                                }
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address)))) {
                                                        vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__minterupt 
                                                            = 
                                                            (vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_alu_data 
                                                             >> 0x1fU);
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__minterupt = 0U;
    }
    if (vlSelf->core__DOT__core_pipeline__DOT__writeback_to_csr_write_enable) {
        if ((1U & (~ ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                      >> 0xbU)))) {
            if ((1U & (~ ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address))) {
                    if ((0x100U & (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address))) {
                        if ((1U & (~ ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                                      >> 7U)))) {
                            if ((0x40U & (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address))) {
                                if ((1U & (~ ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                                              >> 5U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                                                     >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address)))) {
                                                        vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__mcause 
                                                            = 
                                                            (0xfU 
                                                             & vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_alu_data);
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__mcause = 0U;
    }
    if (vlSelf->core__DOT__core_pipeline__DOT__writeback_to_csr_write_enable) {
        if ((1U & (~ ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                      >> 0xbU)))) {
            if ((1U & (~ ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address))) {
                    if ((0x100U & (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address))) {
                        if ((1U & (~ ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                                      >> 7U)))) {
                            if ((1U & (~ ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                                          >> 6U)))) {
                                if ((1U & (~ ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                                              >> 5U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                                                    >> 3U)))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address)))) {
                                                        vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__meie 
                                                            = 
                                                            (1U 
                                                             & (vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_alu_data 
                                                                >> 0xbU));
                                                        vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__mtie 
                                                            = 
                                                            (1U 
                                                             & (vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_alu_data 
                                                                >> 7U));
                                                        vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__msie 
                                                            = 
                                                            (1U 
                                                             & (vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_alu_data 
                                                                >> 3U));
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            if ((0x40U & (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address))) {
                                if ((1U & (~ ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                                              >> 5U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                                                    >> 3U)))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address)))) {
                                                        vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__msip 
                                                            = 
                                                            (1U 
                                                             & (vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_alu_data 
                                                                >> 3U));
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((0x800U & (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address))) {
            if ((1U & (~ ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address))) {
                    if ((0x100U & (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address))) {
                        if ((0x80U & (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address))) {
                            if ((1U & (~ ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                                          >> 6U)))) {
                                if ((1U & (~ ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                                              >> 5U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                                                         >> 1U)))) {
                                                    __Vdly__core__DOT__core_pipeline__DOT__pipeline_csr__DOT__cycle 
                                                        = 
                                                        ((0xffffffffULL 
                                                          & __Vdly__core__DOT__core_pipeline__DOT__pipeline_csr__DOT__cycle) 
                                                         | ((QData)((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_alu_data)) 
                                                            << 0x20U));
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                                             >> 6U)))) {
                            if ((1U & (~ ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                                          >> 5U)))) {
                                if ((1U & (~ ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                                              >> 4U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                                                    >> 2U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                                                     >> 1U)))) {
                                                __Vdly__core__DOT__core_pipeline__DOT__pipeline_csr__DOT__cycle 
                                                    = 
                                                    ((0xffffffff00000000ULL 
                                                      & __Vdly__core__DOT__core_pipeline__DOT__pipeline_csr__DOT__cycle) 
                                                     | (IData)((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_alu_data)));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->reset) {
        __Vdly__core__DOT__core_pipeline__DOT__pipeline_csr__DOT__cycle = 0ULL;
    }
    if (vlSelf->core__DOT__core_pipeline__DOT__writeback_to_csr_write_enable) {
        if ((1U & (~ ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                      >> 0xbU)))) {
            if ((1U & (~ ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address))) {
                    if ((0x100U & (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address))) {
                        if ((1U & (~ ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                                      >> 7U)))) {
                            if ((1U & (~ ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                                          >> 6U)))) {
                                if ((1U & (~ ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                                              >> 5U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address)))) {
                                                        vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__pie 
                                                            = 
                                                            (1U 
                                                             & (vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_alu_data 
                                                                >> 7U));
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__pie = 0U;
    }
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__mtip 
        = (vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__cycle 
           >= vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__mtimecmp);
    if (vlSelf->core__DOT__core_pipeline__DOT__writeback_to_csr_write_enable) {
        if ((1U & (~ ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                      >> 0xbU)))) {
            if ((1U & (~ ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address))) {
                    if ((0x100U & (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address))) {
                        if ((1U & (~ ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                                      >> 7U)))) {
                            if ((1U & (~ ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                                          >> 6U)))) {
                                if ((1U & (~ ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                                              >> 5U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                                                    >> 3U)))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address))) {
                                                        vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__mtvec 
                                                            = 
                                                            (0xfffffffcU 
                                                             & vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_alu_data);
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            if ((0x40U & (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address))) {
                                if ((1U & (~ ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                                              >> 5U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address))) {
                                                        vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__mecp 
                                                            = vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_alu_data;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((0x800U & (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address))) {
            if ((1U & (~ ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address))) {
                    if ((0x100U & (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address))) {
                        if ((0x80U & (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address))) {
                            if ((0x40U & (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address))) {
                                if ((1U & (~ ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                                              >> 5U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address) 
                                                         >> 1U)))) {
                                                    vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__mtimecmp 
                                                        = 
                                                        ((1U 
                                                          & (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address))
                                                          ? 
                                                         ((0xffffffffULL 
                                                           & vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__mtimecmp) 
                                                          | ((QData)((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_alu_data)) 
                                                             << 0x20U))
                                                          : 
                                                         ((0xffffffff00000000ULL 
                                                           & vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__mtimecmp) 
                                                          | (IData)((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_alu_data))));
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->core__DOT__core_pipeline__DOT__global_wfi)))) {
        vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_next_pc 
            = vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_next_pc;
        vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_pc 
            = vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_pc;
        vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_wfi 
            = vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_wfi;
        vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_alu_data 
            = vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_alu_data;
        vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address 
            = vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_csr_address;
    }
    vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_valid 
        = __Vdly__core__DOT__core_pipeline__DOT__fetch_to_decode_valid;
    vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_valid 
        = __Vdly__core__DOT__core_pipeline__DOT__decode_to_execute_valid;
    vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_valid 
        = __Vdly__core__DOT__core_pipeline__DOT__execute_to_memory_valid;
    if ((1U & (~ (IData)(vlSelf->core__DOT__core_pipeline__DOT__hazard_to_decode_stall)))) {
        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_csr_readable 
            = vlSelf->core__DOT__core_pipeline__DOT__csr_to_decode_readable;
        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_csr_writeable 
            = vlSelf->core__DOT__core_pipeline__DOT__csr_to_decode_writable;
        vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_rs2_data 
            = vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__acctual_rs2;
        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_csr_read = 0U;
        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_alu_select_a = 1U;
        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_alu_select_b = 1U;
        if ((0x40U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
            if ((0x20U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                if ((0x10U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                    if ((1U & (~ (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                      >> 2U)))) {
                            if ((2U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                                if ((1U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                                    if ((0x4000U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                                        if ((0x2000U 
                                             & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                                            vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_csr_read = 1U;
                                            vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_alu_select_b = 3U;
                                        } else if (
                                                   (0x1000U 
                                                    & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                                            vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_csr_read 
                                                = (0U 
                                                   != 
                                                   (0x1fU 
                                                    & (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                                       >> 7U)));
                                        }
                                    } else if ((0x2000U 
                                                & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                                        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_csr_read = 1U;
                                        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_alu_select_b = 3U;
                                    } else if ((0x1000U 
                                                & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                                        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_csr_read 
                                            = (0U != 
                                               (0x1fU 
                                                & (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                                   >> 7U)));
                                    }
                                    if ((1U & (~ (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                                  >> 0xeU)))) {
                                        if ((0x2000U 
                                             & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                                            vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_alu_select_a = 0U;
                                        } else if (
                                                   (0x1000U 
                                                    & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                                            vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_alu_select_a = 0U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((8U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                    if ((4U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                        if ((2U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                            if ((1U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                                vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_alu_select_a = 2U;
                            }
                        }
                    }
                } else if ((4U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                    if ((2U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                        if ((1U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                            vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_alu_select_a = 0U;
                        }
                    }
                } else if ((2U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                    if ((1U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_alu_select_a = 2U;
                    }
                }
            }
        } else if ((0x20U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
            if ((0x10U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                if ((1U & (~ (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                  >> 2U)))) {
                        if ((2U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                            if ((1U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                                vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_alu_select_a = 0U;
                                vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_alu_select_b = 0U;
                            }
                        }
                    }
                }
            } else if ((1U & (~ (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                 >> 3U)))) {
                if ((1U & (~ (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                              >> 2U)))) {
                    if ((2U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                        if ((1U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                            vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_alu_select_a = 0U;
                        }
                    }
                }
            }
        } else if ((0x10U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
            if ((1U & (~ (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                          >> 3U)))) {
                if ((4U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                    if ((2U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                        if ((1U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                            vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_alu_select_a = 2U;
                        }
                    }
                } else if ((2U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                    if ((1U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_alu_select_a = 0U;
                    }
                }
            }
        } else if ((1U & (~ (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                          >> 2U)))) {
                if ((2U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                    if ((1U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_alu_select_a = 0U;
                    }
                }
            }
        }
        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_rs1_data 
            = vlSelf->core__DOT__core_pipeline__DOT__pipeline_registers__DOT__registers
            [(0x1fU & (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                       >> 0xfU))];
        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_rs2_data 
            = vlSelf->core__DOT__core_pipeline__DOT__pipeline_registers__DOT__registers
            [(0x1fU & (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                       >> 0x14U))];
    }
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_registers__DOT__registers[__Vdlyvdim0__core__DOT__core_pipeline__DOT__pipeline_registers__DOT__registers__v0] 
        = __Vdlyvval__core__DOT__core_pipeline__DOT__pipeline_registers__DOT__registers__v0;
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__cycle 
        = __Vdly__core__DOT__core_pipeline__DOT__pipeline_csr__DOT__cycle;
    if ((1U & (~ (IData)(vlSelf->core__DOT__core_pipeline__DOT__hazard_to_decode_stall)))) {
        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_imm_data = 0U;
        if ((0x40U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
            if ((0x20U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                if ((0x10U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                    if ((1U & (~ (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                      >> 2U)))) {
                            if ((2U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                                if ((1U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                                    if ((0x4000U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                                        if ((0x2000U 
                                             & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                                            vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_imm_data 
                                                = (
                                                   (0x1000U 
                                                    & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                    ? 
                                                   (0x1fU 
                                                    & (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                                       >> 0xfU))
                                                    : 
                                                   (0x1fU 
                                                    & (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                                       >> 0xfU)));
                                        } else if (
                                                   (0x1000U 
                                                    & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                                            vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_imm_data 
                                                = (0x1fU 
                                                   & (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                                      >> 0xfU));
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((8U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                    if ((4U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                        if ((2U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                            if ((1U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                                vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_imm_data 
                                    = (((- (IData)(
                                                   (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                                    >> 0x1fU))) 
                                        << 0x14U) | 
                                       ((0xff000U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction) 
                                        | ((0x800U 
                                            & (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                               >> 9U)) 
                                           | (0x7feU 
                                              & (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                                 >> 0x14U)))));
                            }
                        }
                    }
                } else if ((4U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                    if ((2U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                        if ((1U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                            vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_imm_data 
                                = vlSelf->core__DOT__core_pipeline__DOT__pipeline_decode__DOT__i_type_imm_data;
                        }
                    }
                } else if ((2U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                    if ((1U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_imm_data 
                            = (((- (IData)((vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0x800U 
                                             & (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                                << 4U)) 
                                            | ((0x7e0U 
                                                & (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                                   >> 0x14U)) 
                                               | (0x1eU 
                                                  & (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                                     >> 7U)))));
                    }
                }
            }
        } else if ((0x20U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
            if ((0x10U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                if ((1U & (~ (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                              >> 3U)))) {
                    if ((4U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                        if ((2U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                            if ((1U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                                vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_imm_data 
                                    = (0xfffff000U 
                                       & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction);
                            }
                        }
                    }
                }
            } else if ((1U & (~ (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                 >> 3U)))) {
                if ((1U & (~ (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                              >> 2U)))) {
                    if ((2U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                        if ((1U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                            vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_imm_data 
                                = (((- (IData)((vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                                >> 0x1fU))) 
                                    << 0xcU) | ((0xfe0U 
                                                 & (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                                      >> 7U))));
                        }
                    }
                }
            }
        } else if ((0x10U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
            if ((1U & (~ (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                          >> 3U)))) {
                if ((4U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                    if ((2U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                        if ((1U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                            vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_imm_data 
                                = (0xfffff000U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction);
                        }
                    }
                } else if ((2U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                    if ((1U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_imm_data 
                            = vlSelf->core__DOT__core_pipeline__DOT__pipeline_decode__DOT__i_type_imm_data;
                    }
                }
            }
        } else if ((1U & (~ (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                          >> 2U)))) {
                if ((2U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                    if ((1U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_imm_data 
                            = vlSelf->core__DOT__core_pipeline__DOT__pipeline_decode__DOT__i_type_imm_data;
                    }
                }
            }
        }
        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_rs2_bypassed 
            = ((0U == (0x1fU & (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                >> 0x14U))) | (((0x1fU 
                                                 & (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                                    >> 0x14U)) 
                                                == (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_decode_bypass_address)) 
                                               | ((0x1fU 
                                                   & (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                                      >> 0x14U)) 
                                                  == (IData)(vlSelf->core__DOT__core_pipeline__DOT__writeback_to_regfile_rd_address))));
        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_rs1_bypassed 
            = ((0U == (0x1fU & (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                >> 0xfU))) | (((0x1fU 
                                                & (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                                   >> 0xfU)) 
                                               == (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_decode_bypass_address)) 
                                              | ((0x1fU 
                                                  & (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                                     >> 0xfU)) 
                                                 == (IData)(vlSelf->core__DOT__core_pipeline__DOT__writeback_to_regfile_rd_address))));
        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_rs2_bypass 
            = ((0U == (0x1fU & (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                >> 0x14U))) ? 0U : 
               (((0x1fU & (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                           >> 0x14U)) == (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_decode_bypass_address))
                 ? vlSelf->core__DOT__core_pipeline__DOT__memory_to_decode_bypass_data
                 : (((0x1fU & (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                               >> 0x14U)) == (IData)(vlSelf->core__DOT__core_pipeline__DOT__writeback_to_regfile_rd_address))
                     ? vlSelf->core__DOT__core_pipeline__DOT__writeback_to_regfile_rd_data
                     : 0U)));
    }
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__acctual_rs2 
        = ((IData)(vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_rs2_bypassed)
            ? vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_rs2_bypass
            : vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_rs2_data);
    if ((1U & (~ (IData)(vlSelf->core__DOT__core_pipeline__DOT__hazard_to_decode_stall)))) {
        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_rs1_bypass 
            = ((0U == (0x1fU & (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                >> 0xfU))) ? 0U : (
                                                   ((0x1fU 
                                                     & (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                                        >> 0xfU)) 
                                                    == (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_decode_bypass_address))
                                                    ? vlSelf->core__DOT__core_pipeline__DOT__memory_to_decode_bypass_data
                                                    : 
                                                   (((0x1fU 
                                                      & (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                                         >> 0xfU)) 
                                                     == (IData)(vlSelf->core__DOT__core_pipeline__DOT__writeback_to_regfile_rd_address))
                                                     ? vlSelf->core__DOT__core_pipeline__DOT__writeback_to_regfile_rd_data
                                                     : 0U)));
    }
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__acctual_rs1 
        = ((IData)(vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_rs1_bypassed)
            ? vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_rs1_bypass
            : vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_rs1_data);
    if ((1U & (~ (IData)(vlSelf->core__DOT__core_pipeline__DOT__hazard_to_decode_stall)))) {
        vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_branch 
            = vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_branch;
        vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_jump 
            = vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_jump;
    }
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_memory__DOT__should_branch 
        = ((IData)(vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_branch) 
           & (((IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__ex_cmp__DOT__negate)
                ? (~ (IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__ex_cmp__DOT__quasi_result))
                : (IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__ex_cmp__DOT__quasi_result)) 
              | (IData)(vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_jump)));
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__ex_alu__DOT__result_add_sub 
        = (vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__alu_input_a 
           + ((IData)(vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_alu_function_modifier)
               ? (- vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__alu_input_b)
               : vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__alu_input_b));
    if ((1U & (~ (IData)(vlSelf->core__DOT__core_pipeline__DOT__hazard_to_decode_stall)))) {
        vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_bypass_memory 
            = vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_bypass_memory;
        vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_csr_data 
            = vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_csr_data;
        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_alu_function = 6U;
        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_cmp_function 
            = (7U & (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                     >> 0xcU));
        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_branch = 0U;
        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_jump = 0U;
        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_bypass_memory = 0U;
        vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_write_select 
            = vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_write_select;
        vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_mret 
            = vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_mret;
        vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_csr_write 
            = vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_csr_write;
        vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_rd_address 
            = vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_rd_address;
        vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_load_signed 
            = vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_load_signed;
        vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_load_store_size 
            = vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_load_store_size;
        vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_load 
            = vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_load;
        vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_store 
            = vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_store;
        vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_exception 
            = ((IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__csr_exception) 
               | (IData)(vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_exception));
        vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_ecause 
            = (((~ (IData)(vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_exception)) 
                & (IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__csr_exception))
                ? 2U : (IData)(vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_ecause));
        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_csr_data 
            = vlSelf->core__DOT__core_pipeline__DOT__csr_to_decode_read_data;
        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_write_select = 0U;
        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_mret = 0U;
        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_csr_write = 0U;
        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_rd_address = 0U;
        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_load_signed 
            = (1U & (~ (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                        >> 0xeU)));
        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_load_store_size 
            = (3U & (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                     >> 0xcU));
        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_load = 0U;
        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_store = 0U;
        if ((1U & (~ (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                      >> 6U)))) {
            if ((1U & (~ (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                          >> 5U)))) {
                if ((1U & (~ (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                              >> 4U)))) {
                    if ((1U & (~ (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                      >> 2U)))) {
                            if ((2U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                                if ((1U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                                    vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_load = 1U;
                                }
                            }
                        }
                    }
                }
            }
            if ((0x20U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                if ((1U & (~ (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                              >> 4U)))) {
                    if ((1U & (~ (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                      >> 2U)))) {
                            if ((2U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                                if ((1U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                                    vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_store = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_alu_function_modifier = 0U;
        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_ecause = 0U;
        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_exception = 0U;
        vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_next_pc 
            = vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_next_pc;
        vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_pc 
            = vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_pc;
        vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_wfi 
            = vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_wfi;
        vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_csr_address 
            = vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_csr_address;
        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_next_pc 
            = vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_next_pc;
        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_pc 
            = vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_pc;
        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_wfi = 0U;
        if ((0x40U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
            if ((0x20U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                if ((0x10U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                    if ((1U & (~ (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                      >> 2U)))) {
                            if ((2U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                                if ((1U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                                    if ((0x4000U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                                        if ((0x2000U 
                                             & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                                            if ((0x1000U 
                                                 & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                                                vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_alu_function = 7U;
                                                vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_csr_write 
                                                    = 
                                                    (0U 
                                                     != 
                                                     (0x1fU 
                                                      & (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                                         >> 0xfU)));
                                                vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_rd_address 
                                                    = 
                                                    (0x1fU 
                                                     & (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                                        >> 7U));
                                                vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_alu_function_modifier = 1U;
                                            } else {
                                                vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_csr_write 
                                                    = 
                                                    (0U 
                                                     != 
                                                     (0x1fU 
                                                      & (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                                         >> 0xfU)));
                                                vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_rd_address 
                                                    = 
                                                    (0x1fU 
                                                     & (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                                        >> 7U));
                                            }
                                            vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_bypass_memory = 1U;
                                            vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_write_select = 1U;
                                        } else if (
                                                   (0x1000U 
                                                    & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                                            vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_bypass_memory = 1U;
                                            vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_write_select = 1U;
                                            vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_csr_write = 1U;
                                            vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_rd_address 
                                                = (0x1fU 
                                                   & (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                                      >> 7U));
                                        }
                                    } else if ((0x2000U 
                                                & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                                        if ((0x1000U 
                                             & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                                            vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_alu_function = 7U;
                                            vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_csr_write 
                                                = (0U 
                                                   != 
                                                   (0x1fU 
                                                    & (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                                       >> 0xfU)));
                                            vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_rd_address 
                                                = (0x1fU 
                                                   & (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                                      >> 7U));
                                            vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_alu_function_modifier = 1U;
                                        } else {
                                            vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_csr_write 
                                                = (0U 
                                                   != 
                                                   (0x1fU 
                                                    & (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                                       >> 0xfU)));
                                            vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_rd_address 
                                                = (0x1fU 
                                                   & (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                                      >> 7U));
                                        }
                                        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_bypass_memory = 1U;
                                        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_write_select = 1U;
                                    } else if ((0x1000U 
                                                & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                                        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_bypass_memory = 1U;
                                        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_write_select = 1U;
                                        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_csr_write = 1U;
                                        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_rd_address 
                                            = (0x1fU 
                                               & (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                                  >> 7U));
                                    }
                                    if ((1U & (~ (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                                  >> 0xeU)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                                    >> 0xdU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                                     >> 0xcU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                                         >> 0x18U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                                             >> 0x17U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                                                 >> 0x16U)))) {
                                                            if (
                                                                (0x200000U 
                                                                 & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                                                         >> 0x14U)))) {
                                                                    vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_mret = 1U;
                                                                }
                                                            }
                                                        }
                                                        if (
                                                            (0x400000U 
                                                             & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                                                     >> 0x15U)))) {
                                                                if (
                                                                    (0x100000U 
                                                                     & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                                                                    vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_wfi = 1U;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if ((8U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_ecause = 2U;
                        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_exception = 1U;
                    } else if ((4U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_ecause = 2U;
                        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_exception = 1U;
                    } else if ((2U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                        if ((1U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                            if ((0x4000U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                                if ((1U & (~ (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                              >> 0xdU)))) {
                                    if ((1U & (~ (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                                  >> 0xcU)))) {
                                        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_ecause = 2U;
                                        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_exception = 1U;
                                    }
                                }
                            } else if ((1U & (~ (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                                 >> 0xdU)))) {
                                if ((1U & (~ (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                              >> 0xcU)))) {
                                    if ((0x1000000U 
                                         & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                                        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_ecause = 2U;
                                        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_exception = 1U;
                                    } else if ((0x800000U 
                                                & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                                        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_ecause = 2U;
                                        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_exception = 1U;
                                    } else if ((0x400000U 
                                                & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                                        if ((0x200000U 
                                             & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                                            vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_ecause = 2U;
                                            vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_exception = 1U;
                                        } else if (
                                                   (0x100000U 
                                                    & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                                            if ((IData)(
                                                        (0x10000000U 
                                                         != 
                                                         (0xfe0f8f80U 
                                                          & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)))) {
                                                vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_ecause = 2U;
                                                vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_exception = 1U;
                                            }
                                        } else {
                                            vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_ecause = 2U;
                                            vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_exception = 1U;
                                        }
                                    } else if ((0x200000U 
                                                & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                                        if ((0x100000U 
                                             & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                                            vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_ecause = 2U;
                                            vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_exception = 1U;
                                        } else if ((IData)(
                                                           (0x30000000U 
                                                            != 
                                                            (0xfe0f8f80U 
                                                             & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)))) {
                                            vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_ecause = 2U;
                                            vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_exception = 1U;
                                        }
                                    } else {
                                        if ((0x100000U 
                                             & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                                            vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_ecause = 3U;
                                            if ((IData)(
                                                        (0U 
                                                         != 
                                                         (0xfe0f8f80U 
                                                          & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)))) {
                                                vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_ecause = 2U;
                                            }
                                        } else {
                                            vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_ecause = 0xbU;
                                            if ((IData)(
                                                        (0U 
                                                         != 
                                                         (0xfe0f8f80U 
                                                          & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)))) {
                                                vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_ecause = 2U;
                                            }
                                        }
                                        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_exception = 1U;
                                    }
                                }
                            }
                        } else {
                            vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_ecause = 2U;
                            vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_exception = 1U;
                        }
                    } else {
                        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_ecause = 2U;
                        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_exception = 1U;
                    }
                } else if ((8U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                    if ((4U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                        if ((2U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                            if ((1U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                                vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_alu_function = 0U;
                                vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_write_select = 3U;
                                vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_rd_address 
                                    = (0x1fU & (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                                >> 7U));
                            }
                            if ((1U & (~ vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction))) {
                                vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_ecause = 2U;
                                vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_exception = 1U;
                            }
                        } else {
                            vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_ecause = 2U;
                            vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_exception = 1U;
                        }
                    } else {
                        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_ecause = 2U;
                        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_exception = 1U;
                    }
                } else if ((4U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                    if ((2U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                        if ((1U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                            vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_alu_function = 0U;
                            vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_write_select = 3U;
                            vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_rd_address 
                                = (0x1fU & (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                            >> 7U));
                            if ((0U != (7U & (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                              >> 0xcU)))) {
                                vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_ecause = 2U;
                                vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_exception = 1U;
                            }
                        } else {
                            vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_ecause = 2U;
                            vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_exception = 1U;
                        }
                    } else {
                        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_ecause = 2U;
                        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_exception = 1U;
                    }
                } else if ((2U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                    if ((1U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_alu_function = 0U;
                        if ((1U == (3U & (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                          >> 0xdU)))) {
                            vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_ecause = 2U;
                            vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_exception = 1U;
                        }
                    } else {
                        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_ecause = 2U;
                        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_exception = 1U;
                    }
                } else {
                    vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_ecause = 2U;
                    vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_exception = 1U;
                }
                if ((1U & (~ (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                              >> 4U)))) {
                    if ((8U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                        if ((4U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                            if ((2U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                                if ((1U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                                    vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_branch = 1U;
                                    vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_jump = 1U;
                                }
                            }
                        }
                    } else if ((4U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                        if ((2U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                            if ((1U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                                vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_branch = 1U;
                                vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_jump = 1U;
                            }
                        }
                    } else if ((2U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                        if ((1U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                            vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_branch = 1U;
                        }
                    }
                }
            } else {
                vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_ecause = 2U;
                vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_exception = 1U;
            }
        } else if ((0x20U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
            if ((0x10U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                if ((1U & (~ (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                  >> 2U)))) {
                        if ((2U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                            if ((1U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                                vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_alu_function 
                                    = (7U & (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                             >> 0xcU));
                                vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_write_select = 0U;
                                vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_alu_function_modifier 
                                    = (1U & (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                             >> 0x1eU));
                            }
                        }
                    }
                    if ((4U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                        if ((2U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                            if ((1U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                                vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_bypass_memory = 1U;
                                vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_rd_address 
                                    = (0x1fU & (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                                >> 7U));
                            }
                        }
                    } else if ((2U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                        if ((1U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                            vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_bypass_memory = 1U;
                            vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_rd_address 
                                = (0x1fU & (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                            >> 7U));
                        }
                    }
                }
                if ((8U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                    vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_ecause = 2U;
                    vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_exception = 1U;
                } else if ((4U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                    if ((2U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                        if ((1U & (~ vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction))) {
                            vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_ecause = 2U;
                            vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_exception = 1U;
                        }
                    } else {
                        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_ecause = 2U;
                        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_exception = 1U;
                    }
                } else if ((2U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                    if ((1U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                        if (((0U != (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                     >> 0x19U)) & (
                                                   (0x20U 
                                                    != 
                                                    (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                                     >> 0x19U)) 
                                                   | ((0U 
                                                       != 
                                                       (7U 
                                                        & (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                                           >> 0xcU))) 
                                                      & (5U 
                                                         != 
                                                         (7U 
                                                          & (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                                             >> 0xcU))))))) {
                            vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_ecause = 2U;
                            vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_exception = 1U;
                        }
                    } else {
                        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_ecause = 2U;
                        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_exception = 1U;
                    }
                } else {
                    vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_ecause = 2U;
                    vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_exception = 1U;
                }
            } else {
                if ((1U & (~ (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                  >> 2U)))) {
                        if ((2U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                            if ((1U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                                vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_alu_function = 0U;
                            }
                        }
                    }
                }
                if ((8U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                    vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_ecause = 2U;
                    vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_exception = 1U;
                } else if ((4U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                    vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_ecause = 2U;
                    vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_exception = 1U;
                } else if ((2U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                    if ((1U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                        if ((1U & ((3U == (3U & (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                                 >> 0xcU))) 
                                   | (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                      >> 0xeU)))) {
                            vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_ecause = 2U;
                            vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_exception = 1U;
                        }
                    } else {
                        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_ecause = 2U;
                        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_exception = 1U;
                    }
                } else {
                    vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_ecause = 2U;
                    vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_exception = 1U;
                }
            }
        } else if ((0x10U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
            if ((1U & (~ (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                          >> 3U)))) {
                if ((4U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                    if ((2U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                        if ((1U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                            vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_alu_function = 0U;
                            vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_bypass_memory = 1U;
                            vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_rd_address 
                                = (0x1fU & (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                            >> 7U));
                        }
                    }
                } else if ((2U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                    if ((1U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_alu_function 
                            = (7U & (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                     >> 0xcU));
                        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_bypass_memory = 1U;
                        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_rd_address 
                            = (0x1fU & (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                        >> 7U));
                    }
                }
                if ((1U & (~ (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                              >> 2U)))) {
                    if ((2U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                        if ((1U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                            vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_write_select = 0U;
                            vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_alu_function_modifier 
                                = (IData)((0x40005000U 
                                           == (0x40007000U 
                                               & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)));
                        }
                    }
                }
            }
            if ((8U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_ecause = 2U;
                vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_exception = 1U;
            } else if ((4U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                if ((2U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                    if ((1U & (~ vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction))) {
                        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_ecause = 2U;
                        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_exception = 1U;
                    }
                } else {
                    vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_ecause = 2U;
                    vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_exception = 1U;
                }
            } else if ((2U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                if ((1U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                    if (((IData)(((0x1000U == (0x7000U 
                                               & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) 
                                  & (0U != (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                            >> 0x19U)))) 
                         | (IData)(((0x5000U == (0x7000U 
                                                 & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) 
                                    & (0U != (0xbe000000U 
                                              & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)))))) {
                        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_ecause = 2U;
                        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_exception = 1U;
                    }
                } else {
                    vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_ecause = 2U;
                    vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_exception = 1U;
                }
            } else {
                vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_ecause = 2U;
                vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_exception = 1U;
            }
        } else {
            if ((1U & (~ (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                          >> 3U)))) {
                if ((1U & (~ (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                              >> 2U)))) {
                    if ((2U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                        if ((1U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                            vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_alu_function = 0U;
                            vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_write_select = 2U;
                            vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_rd_address 
                                = (0x1fU & (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                            >> 7U));
                        }
                    }
                }
            }
            if ((8U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                if ((4U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                    if ((2U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                        if ((1U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                            if ((0U != (3U & (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                              >> 0xdU)))) {
                                vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_ecause = 2U;
                                vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_exception = 1U;
                            }
                        } else {
                            vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_ecause = 2U;
                            vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_exception = 1U;
                        }
                    } else {
                        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_ecause = 2U;
                        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_exception = 1U;
                    }
                } else {
                    vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_ecause = 2U;
                    vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_exception = 1U;
                }
            } else if ((4U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_ecause = 2U;
                vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_exception = 1U;
            } else if ((2U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                if ((1U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                    if (((3U == (3U & (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                       >> 0xcU))) | (IData)(
                                                            (0x6000U 
                                                             == 
                                                             (0x7000U 
                                                              & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction))))) {
                        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_ecause = 2U;
                        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_exception = 1U;
                    }
                } else {
                    vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_ecause = 2U;
                    vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_exception = 1U;
                }
            } else {
                vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_ecause = 2U;
                vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_exception = 1U;
            }
        }
        vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_csr_address 
            = (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
               >> 0x14U);
    }
    vlSelf->core__DOT__core_pipeline__DOT__global_mret 
        = ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_mret) 
           & (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_valid));
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__ie 
        = __Vdly__core__DOT__core_pipeline__DOT__pipeline_csr__DOT__ie;
    core__DOT__core_pipeline__DOT__csr_to_writeback_eip 
        = ((IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__ie) 
           & ((IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__meie) 
              & (IData)(vlSelf->meip)));
    vlSelf->core__DOT__core_pipeline__DOT__csr_to_writeback_tip 
        = ((IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__ie) 
           & ((IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__mtie) 
              & (IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__mtip)));
    vlSelf->core__DOT__core_pipeline__DOT__csr_to_writeback_sip 
        = ((IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__ie) 
           & ((IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__msie) 
              & (IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__msip)));
    vlSelf->core__DOT__core_pipeline__DOT__memory_to_decode_bypass_address 
        = (((IData)(vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_bypass_memory) 
            & (IData)(vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_valid))
            ? (IData)(vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_rd_address)
            : 0U);
    if ((0x1fU >= (0x18U & (vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__ex_alu__DOT__result_add_sub 
                            << 3U)))) {
        vlSelf->ext_write_data = (vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_rs2_data 
                                  << (0x18U & (vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__ex_alu__DOT__result_add_sub 
                                               << 3U)));
        vlSelf->core__DOT__core_busio__DOT__tmp_load_data 
            = (vlSelf->ext_read_data >> (0x18U & (vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__ex_alu__DOT__result_add_sub 
                                                  << 3U)));
    } else {
        vlSelf->ext_write_data = 0U;
        vlSelf->core__DOT__core_busio__DOT__tmp_load_data = 0U;
    }
    vlSelf->core__DOT__core_pipeline__DOT__global_branch_taken 
        = ((IData)(vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_valid) 
           & ((0U == (3U & vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__ex_alu__DOT__result_add_sub)) 
              & (IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_memory__DOT__should_branch)));
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_memory__DOT__valid_mem_address 
        = (1U & ((2U & (IData)(vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_load_store_size))
                  ? ((~ (IData)(vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_load_store_size)) 
                     & (0U == (3U & vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__ex_alu__DOT__result_add_sub)))
                  : ((~ (IData)(vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_load_store_size)) 
                     | (~ vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__ex_alu__DOT__result_add_sub))));
    __Vtableidx1 = (((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_ecause) 
                     << 4U) | (((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_exception) 
                                << 3U) | (((IData)(vlSelf->core__DOT__core_pipeline__DOT__csr_to_writeback_sip) 
                                           << 2U) | 
                                          (((IData)(vlSelf->core__DOT__core_pipeline__DOT__csr_to_writeback_tip) 
                                            << 1U) 
                                           | (IData)(core__DOT__core_pipeline__DOT__csr_to_writeback_eip)))));
    vlSelf->core__DOT__core_pipeline__DOT__writeback_to_csr_trap_cause 
        = Vcore__ConstPool__TABLE_h2fca346c_0[__Vtableidx1];
    vlSelf->core__DOT__core_pipeline__DOT__writeback_to_csr_interupt 
        = Vcore__ConstPool__TABLE_h000993bb_0[__Vtableidx1];
    vlSelf->core__DOT__core_pipeline__DOT__global_traped 
        = ((IData)(vlSelf->core__DOT__core_pipeline__DOT__csr_to_writeback_sip) 
           | ((IData)(vlSelf->core__DOT__core_pipeline__DOT__csr_to_writeback_tip) 
              | ((IData)(core__DOT__core_pipeline__DOT__csr_to_writeback_eip) 
                 | ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_exception) 
                    & (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_valid)))));
    vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_alu_data 
        = ((4U & (IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__ex_alu__DOT__old_function))
            ? ((2U & (IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__ex_alu__DOT__old_function))
                ? ((1U & (IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__ex_alu__DOT__old_function))
                    ? vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__ex_alu__DOT__result_and_clr
                    : vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__ex_alu__DOT__result_or)
                : ((1U & (IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__ex_alu__DOT__old_function))
                    ? vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__ex_alu__DOT__result_srl_sra
                    : vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__ex_alu__DOT__result_xor))
            : ((2U & (IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__ex_alu__DOT__old_function))
                ? vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__ex_alu__DOT__result_slt
                : ((1U & (IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__ex_alu__DOT__old_function))
                    ? vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__ex_alu__DOT__result_sll
                    : vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__ex_alu__DOT__result_add_sub)));
    core__DOT__core_pipeline__DOT__pipeline_memory__DOT____VdfgTmp_h6b746abd__0 
        = ((~ (IData)(vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_exception)) 
           & ((IData)(vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_valid) 
              & (IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_memory__DOT__valid_mem_address)));
    vlSelf->core__DOT__core_pipeline__DOT__writeback_to_regfile_rd_address 
        = ((1U & ((~ (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_valid)) 
                  | (IData)(vlSelf->core__DOT__core_pipeline__DOT__global_traped)))
            ? 0U : (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_rd_address));
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_hazard__DOT__trap_invalidate 
        = ((IData)(vlSelf->core__DOT__core_pipeline__DOT__global_mret) 
           | (IData)(vlSelf->core__DOT__core_pipeline__DOT__global_traped));
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_writeback__DOT____VdfgTmp_h9c854e12__0 
        = ((~ (IData)(vlSelf->core__DOT__core_pipeline__DOT__global_traped)) 
           & (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_valid));
    vlSelf->core__DOT__core_pipeline__DOT__global_wfi 
        = ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_valid) 
           & (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_wfi));
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__csr_exception 
        = (((~ (IData)(vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_csr_readable)) 
            & (IData)(vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_csr_read)) 
           | ((~ (IData)(vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_csr_writeable)) 
              & (IData)(vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_csr_write)));
    vlSelf->core__DOT__core_pipeline__DOT__writeback_to_regfile_rd_data 
        = ((2U & (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_write_select))
            ? ((1U & (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_write_select))
                ? vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_next_pc
                : vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_load_data)
            : ((1U & (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_write_select))
                ? vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_data
                : vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_alu_data));
    vlSelf->core__DOT__core_pipeline__DOT__memory_to_decode_bypass_data 
        = ((1U & (IData)(vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_write_select))
            ? vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_csr_data
            : vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_alu_data);
    core__DOT__mem_store = ((IData)(core__DOT__core_pipeline__DOT__pipeline_memory__DOT____VdfgTmp_h6b746abd__0) 
                            & (IData)(vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_store));
    vlSelf->core__DOT__core_pipeline__DOT__hazard_to_execute_invalidate 
        = ((IData)(vlSelf->reset) | ((IData)(vlSelf->core__DOT__core_pipeline__DOT__global_branch_taken) 
                                     | (IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_hazard__DOT__trap_invalidate)));
    vlSelf->core__DOT__core_pipeline__DOT__writeback_to_csr_write_enable 
        = ((IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_writeback__DOT____VdfgTmp_h9c854e12__0) 
           & (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_write));
    vlSelf->ext_write_strobe = ((IData)(core__DOT__mem_store)
                                 ? (0xfU & ((0U == (IData)(vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_load_store_size))
                                             ? ((IData)(1U) 
                                                << 
                                                (3U 
                                                 & vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__ex_alu__DOT__result_add_sub))
                                             : ((1U 
                                                 == (IData)(vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_load_store_size))
                                                 ? 
                                                ((IData)(3U) 
                                                 << 
                                                 (3U 
                                                  & vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__ex_alu__DOT__result_add_sub))
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_load_store_size))
                                                  ? 0xfU
                                                  : 0U))))
                                 : 0U);
    vlSelf->core__DOT__core_busio__DOT____VdfgTmp_hbb61d502__0 
        = (((IData)(core__DOT__core_pipeline__DOT__pipeline_memory__DOT____VdfgTmp_h6b746abd__0) 
            & (IData)(vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_load)) 
           | (IData)(core__DOT__mem_store));
    vlSelf->ext_instruction = (1U & (~ (IData)(vlSelf->core__DOT__core_busio__DOT____VdfgTmp_hbb61d502__0)));
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_hazard__DOT____VdfgTmp_hd3590afe__0 
        = ((~ ((IData)(vlSelf->core__DOT__core_busio__DOT____VdfgTmp_hbb61d502__0) 
               & (IData)(vlSelf->ext_ready))) & (IData)(vlSelf->core__DOT__core_busio__DOT____VdfgTmp_hbb61d502__0));
    vlSelf->core__DOT__core_pipeline__DOT__hazard_to_decode_stall 
        = ((IData)(vlSelf->core__DOT__core_pipeline__DOT__global_wfi) 
           | ((IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_hazard__DOT____VdfgTmp_hd3590afe__0) 
              | ((IData)(vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_mret) 
                 & (IData)(vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_valid))));
    if ((1U & (~ (IData)(vlSelf->core__DOT__core_pipeline__DOT__hazard_to_fetch_stall)))) {
        vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_next_pc 
            = ((IData)(4U) + vlSelf->core__DOT__core_pipeline__DOT__pipeline_fetch__DOT__pc);
        vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_pc 
            = vlSelf->core__DOT__core_pipeline__DOT__pipeline_fetch__DOT__pc;
        vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
            = vlSelf->ext_read_data;
    }
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__alu_input_a 
        = ((2U & (IData)(vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_alu_select_a))
            ? ((1U & (IData)(vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_alu_select_a))
                ? vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_csr_data
                : vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_pc)
            : ((1U & (IData)(vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_alu_select_a))
                ? vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_imm_data
                : vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__acctual_rs1));
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__alu_input_b 
        = ((2U & (IData)(vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_alu_select_b))
            ? ((1U & (IData)(vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_alu_select_b))
                ? vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_csr_data
                : vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_pc)
            : ((1U & (IData)(vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_alu_select_b))
                ? vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_imm_data
                : vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__acctual_rs2));
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_fetch__DOT__pc 
        = __Vdly__core__DOT__core_pipeline__DOT__pipeline_fetch__DOT__pc;
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_fetch__DOT__next_pc 
        = ((IData)(4U) + vlSelf->core__DOT__core_pipeline__DOT__pipeline_fetch__DOT__pc);
    vlSelf->ext_address = (0xfffffffcU & ((IData)(vlSelf->core__DOT__core_busio__DOT____VdfgTmp_hbb61d502__0)
                                           ? vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__ex_alu__DOT__result_add_sub
                                           : vlSelf->core__DOT__core_pipeline__DOT__pipeline_fetch__DOT__pc));
    if ((vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
         >> 0x1fU)) {
        vlSelf->core__DOT__core_pipeline__DOT__csr_to_decode_writable 
            = (1U & (IData)(((0x30000000U == (0x70000000U 
                                              & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) 
                             & ((0x8000000U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                 ? ((0x4000000U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                     ? (IData)((0U 
                                                == 
                                                (0x3e00000U 
                                                 & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)))
                                     : (~ (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                           >> 0x19U)))
                                 : (IData)((0U == (0x6000000U 
                                                   & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)))))));
        if ((0x40000000U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
            if ((0x20000000U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
                vlSelf->core__DOT__core_pipeline__DOT__csr_to_decode_readable 
                    = (1U & (IData)(((0x11000000U == 
                                      (0x1f800000U 
                                       & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) 
                                     & ((0x400000U 
                                         & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                         ? (IData)(
                                                   (0U 
                                                    == 
                                                    (0x300000U 
                                                     & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)))
                                         : (IData)(
                                                   (0U 
                                                    != 
                                                    (0x300000U 
                                                     & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)))))));
                vlSelf->core__DOT__core_pipeline__DOT__csr_to_decode_read_data = 0U;
            } else {
                vlSelf->core__DOT__core_pipeline__DOT__csr_to_decode_readable 
                    = (1U & ((~ (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                 >> 0x1cU)) & ((0x8000000U 
                                                & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                ? (IData)(
                                                          (0U 
                                                           == 
                                                           (0x6000000U 
                                                            & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)))
                                                : (IData)(
                                                          (0U 
                                                           == 
                                                           (0x6000000U 
                                                            & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction))))));
                vlSelf->core__DOT__core_pipeline__DOT__csr_to_decode_read_data 
                    = ((0x10000000U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                        ? 0U : ((0x8000000U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                 ? ((0x4000000U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                     ? 0U : ((0x2000000U 
                                              & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                              ? 0U : 
                                             ((0x1000000U 
                                               & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                               ? 0U
                                               : ((0x800000U 
                                                   & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                   ? 0U
                                                   : 
                                                  ((0x400000U 
                                                    & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                    ? 0U
                                                    : 
                                                   ((0x200000U 
                                                     & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                      ? 0U
                                                      : (IData)(
                                                                (vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__instret 
                                                                 >> 0x20U)))
                                                     : (IData)(
                                                               (vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__cycle 
                                                                >> 0x20U))))))))
                                 : ((0x4000000U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                     ? 0U : ((0x2000000U 
                                              & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                              ? 0U : 
                                             ((0x1000000U 
                                               & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                               ? 0U
                                               : ((0x800000U 
                                                   & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                   ? 0U
                                                   : 
                                                  ((0x400000U 
                                                    & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                    ? 0U
                                                    : 
                                                   ((0x200000U 
                                                     & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                      ? 0U
                                                      : (IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__instret))
                                                     : (IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__cycle)))))))));
            }
        } else {
            vlSelf->core__DOT__core_pipeline__DOT__csr_to_decode_readable 
                = (1U & (IData)(((0x30000000U == (0x30000000U 
                                                  & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) 
                                 & ((0x8000000U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                     ? ((0x4000000U 
                                         & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                         ? (IData)(
                                                   (0U 
                                                    == 
                                                    (0x3e00000U 
                                                     & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)))
                                         : (~ (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                               >> 0x19U)))
                                     : (IData)((0U 
                                                == 
                                                (0x6000000U 
                                                 & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)))))));
            vlSelf->core__DOT__core_pipeline__DOT__csr_to_decode_read_data 
                = ((0x20000000U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                    ? ((0x10000000U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                        ? ((0x8000000U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                            ? ((0x4000000U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                ? ((0x2000000U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                    ? 0U : ((0x1000000U 
                                             & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                             ? 0U : 
                                            ((0x800000U 
                                              & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                              ? 0U : 
                                             ((0x400000U 
                                               & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                               ? 0U
                                               : ((0x200000U 
                                                   & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                   ? 0U
                                                   : 
                                                  ((0x100000U 
                                                    & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                    ? (IData)(
                                                              (vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__mtimecmp 
                                                               >> 0x20U))
                                                    : (IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__mtimecmp)))))))
                                : ((0x2000000U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                    ? 0U : ((0x1000000U 
                                             & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                             ? 0U : 
                                            ((0x800000U 
                                              & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                              ? 0U : 
                                             ((0x400000U 
                                               & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                               ? 0U
                                               : ((0x200000U 
                                                   & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                   ? 
                                                  ((0x100000U 
                                                    & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                    ? 0U
                                                    : (IData)(
                                                              (vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__instret 
                                                               >> 0x20U)))
                                                   : (IData)(
                                                             (vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__cycle 
                                                              >> 0x20U))))))))
                            : ((0x4000000U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                ? 0U : ((0x2000000U 
                                         & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                         ? 0U : ((0x1000000U 
                                                  & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                  ? 0U
                                                  : 
                                                 ((0x800000U 
                                                   & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                   ? 0U
                                                   : 
                                                  ((0x400000U 
                                                    & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                    ? 0U
                                                    : 
                                                   ((0x200000U 
                                                     & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                      ? 0U
                                                      : (IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__instret))
                                                     : (IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__cycle))))))))
                        : 0U) : 0U);
        }
    } else {
        vlSelf->core__DOT__core_pipeline__DOT__csr_to_decode_writable 
            = (1U & (IData)(((0x30000000U == (0x78000000U 
                                              & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) 
                             & ((0x4000000U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                 ? (IData)(((0U == 
                                             (0x3800000U 
                                              & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) 
                                            & ((~ (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                                   >> 0x16U)) 
                                               | (IData)(
                                                         (0U 
                                                          == 
                                                          (0x300000U 
                                                           & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction))))))
                                 : ((vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                     >> 0x19U) | (IData)(
                                                         ((0U 
                                                           == 
                                                           (0x1800000U 
                                                            & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) 
                                                          & ((0x400000U 
                                                              & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                              ? 
                                                             (~ 
                                                              (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                                               >> 0x15U))
                                                              : 
                                                             (~ 
                                                              (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                                               >> 0x15U))))))))));
        vlSelf->core__DOT__core_pipeline__DOT__csr_to_decode_readable 
            = (1U & (IData)(((0x30000000U == (0x78000000U 
                                              & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) 
                             & ((0x4000000U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                 ? (IData)(((0U == 
                                             (0x3800000U 
                                              & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) 
                                            & ((~ (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                                   >> 0x16U)) 
                                               | (IData)(
                                                         (0U 
                                                          == 
                                                          (0x300000U 
                                                           & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction))))))
                                 : ((vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                     >> 0x19U) | (IData)(
                                                         ((0U 
                                                           == 
                                                           (0x1800000U 
                                                            & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) 
                                                          & ((0x400000U 
                                                              & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                              ? 
                                                             (~ 
                                                              (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                                               >> 0x15U))
                                                              : 
                                                             (~ 
                                                              (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                                               >> 0x15U))))))))));
        vlSelf->core__DOT__core_pipeline__DOT__csr_to_decode_read_data 
            = ((0x40000000U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                ? 0U : ((0x20000000U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                         ? ((0x10000000U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                             ? ((0x8000000U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                 ? 0U : ((0x4000000U 
                                          & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                          ? ((0x2000000U 
                                              & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                              ? 0U : 
                                             ((0x1000000U 
                                               & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                               ? 0U
                                               : ((0x800000U 
                                                   & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                   ? 0U
                                                   : 
                                                  ((0x400000U 
                                                    & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                    ? 
                                                   ((0x200000U 
                                                     & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                     ? 0U
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                      ? 0U
                                                      : 
                                                     (((IData)(vlSelf->meip) 
                                                       << 0xbU) 
                                                      | (((IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__mtip) 
                                                          << 7U) 
                                                         | ((IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__msip) 
                                                            << 3U)))))
                                                    : 
                                                   ((0x200000U 
                                                     & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                      ? 0U
                                                      : 
                                                     (((IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__minterupt) 
                                                       << 0x1fU) 
                                                      | (IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__mcause)))
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                      ? vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__mecp
                                                      : vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__mscratch))))))
                                          : ((0x2000000U 
                                              & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                              ? 0U : 
                                             ((0x1000000U 
                                               & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                               ? 0U
                                               : ((0x800000U 
                                                   & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                   ? 0U
                                                   : 
                                                  ((0x400000U 
                                                    & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                    ? 
                                                   ((0x200000U 
                                                     & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                     ? 0U
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                      ? 
                                                     (0xfffffffcU 
                                                      & vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__mtvec)
                                                      : 
                                                     (((IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__meie) 
                                                       << 0xbU) 
                                                      | (((IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__mtie) 
                                                          << 7U) 
                                                         | ((IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__msie) 
                                                            << 3U)))))
                                                    : 
                                                   ((0x200000U 
                                                     & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                     ? 0U
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                                      ? 0x40000100U
                                                      : 
                                                     (((IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__pie) 
                                                       << 7U) 
                                                      | ((IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__ie) 
                                                         << 3U))))))))))
                             : 0U) : 0U));
    }
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_decode__DOT__i_type_imm_data 
        = (((- (IData)((vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                        >> 0x1fU))) << 0xcU) | (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                                >> 0x14U));
    if ((0x40U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) {
        vlSelf->core__DOT__core_pipeline__DOT__decode_to_hazaed_uses_rs1 
            = ((vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                >> 5U) & ((0x10U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                           ? (IData)(((3U == (0x400fU 
                                              & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) 
                                      & ((0x2000U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                          ? (IData)(vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_valid)
                                          : ((vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                              >> 0xcU) 
                                             & (IData)(vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_valid)))))
                           : ((~ (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                  >> 3U)) & ((4U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                              ? ((vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                                  >> 1U) 
                                                 & (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                                    & (IData)(vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_valid)))
                                              : ((vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                                  >> 1U) 
                                                 & (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                                    & (IData)(vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_valid)))))));
        vlSelf->core__DOT__core_pipeline__DOT__decode_to_hazaed_uses_rs2 
            = (IData)(((0x23U == (0x3fU & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) 
                       & (IData)(vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_valid)));
    } else {
        vlSelf->core__DOT__core_pipeline__DOT__decode_to_hazaed_uses_rs1 
            = ((0x20U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                ? (IData)(((3U == (0xfU & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) 
                           & (IData)(vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_valid)))
                : (IData)(((3U == (0xfU & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) 
                           & (IData)(vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_valid))));
        vlSelf->core__DOT__core_pipeline__DOT__decode_to_hazaed_uses_rs2 
            = (IData)(((0x23U == (0x2fU & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) 
                       & (IData)(vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_valid)));
    }
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_hazard__DOT__data_hazard 
        = ((IData)(vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_valid) 
           & (((IData)(vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_valid) 
               & ((0U != (IData)(vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_rd_address)) 
                  & (((IData)(vlSelf->core__DOT__core_pipeline__DOT__decode_to_hazaed_uses_rs1) 
                      & ((IData)(vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_rd_address) 
                         == (0x1fU & (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                      >> 0xfU)))) | 
                     ((IData)(vlSelf->core__DOT__core_pipeline__DOT__decode_to_hazaed_uses_rs2) 
                      & ((IData)(vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_rd_address) 
                         == (0x1fU & (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                      >> 0x14U))))))) 
              | (((IData)(vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_valid) 
                  & ((0U != (IData)(vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_rd_address)) 
                     & ((0U == (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_decode_bypass_address)) 
                        & (((IData)(vlSelf->core__DOT__core_pipeline__DOT__decode_to_hazaed_uses_rs1) 
                            & ((IData)(vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_rd_address) 
                               == (0x1fU & (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                            >> 0xfU)))) 
                           | ((IData)(vlSelf->core__DOT__core_pipeline__DOT__decode_to_hazaed_uses_rs2) 
                              & ((IData)(vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_rd_address) 
                                 == (0x1fU & (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                              >> 0x14U)))))))) 
                 | ((IData)(((0x73U == (0x7fU & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) 
                             & ((0x4000U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                 ? ((0x2000U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                     ? (IData)(vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_valid)
                                     : ((vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                         >> 0xcU) & 
                                        ((IData)(vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_valid) 
                                         & (0U != (0x1fU 
                                                   & (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                                      >> 7U))))))
                                 : ((0x2000U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                     ? (IData)(vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_valid)
                                     : ((vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                         >> 0xcU) & 
                                        ((IData)(vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_valid) 
                                         & (0U != (0x1fU 
                                                   & (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                                      >> 7U))))))))) 
                    & (((IData)(vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_csr_write) 
                        & (IData)(vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_valid)) 
                       | (((IData)(vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_csr_write) 
                           & (IData)(vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_valid)) 
                          | ((IData)(vlSelf->core__DOT__core_pipeline__DOT__writeback_to_csr_write_enable) 
                             & (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_valid))))))));
    vlSelf->core__DOT__core_pipeline__DOT__hazard_to_fetch_stall 
        = ((IData)(vlSelf->core__DOT__core_pipeline__DOT__hazard_to_decode_stall) 
           | (IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_hazard__DOT__data_hazard));
    vlSelf->core__DOT__core_pipeline__DOT__hazard_to_fetch_invalidate 
        = (1U & ((~ (((IData)(vlSelf->ext_instruction) 
                      & (IData)(vlSelf->ext_ready)) 
                     | (IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_hazard__DOT__data_hazard))) 
                 | (IData)(vlSelf->core__DOT__core_pipeline__DOT__hazard_to_execute_invalidate)));
}

void Vcore___024root___eval_nba(Vcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcore___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vcore___024root___eval_triggers__ico(Vcore___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcore___024root___dump_triggers__ico(Vcore___024root* vlSelf);
#endif  // VL_DEBUG
void Vcore___024root___eval_triggers__act(Vcore___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcore___024root___dump_triggers__act(Vcore___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcore___024root___dump_triggers__nba(Vcore___024root* vlSelf);
#endif  // VL_DEBUG

void Vcore___024root___eval(Vcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vcore___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vcore___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("src/core.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vcore___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vcore___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vcore___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("src/core.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vcore___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vcore___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("src/core.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vcore___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vcore___024root___eval_debug_assertions(Vcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->meip & 0xfeU))) {
        Verilated::overWidthError("meip");}
    if (VL_UNLIKELY((vlSelf->ext_ready & 0xfeU))) {
        Verilated::overWidthError("ext_ready");}
}
#endif  // VL_DEBUG
