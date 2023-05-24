// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "verilated.h"

#include "Vcore___024root.h"

VL_ATTR_COLD void Vcore___024root___initial__TOP__0(Vcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___initial__TOP__0\n"); );
    // Body
    vlSelf->ext_valid = 1U;
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__mcause = 0U;
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__minterupt = 0U;
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__cycle = 0ULL;
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__instret = 0ULL;
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__pie = 0U;
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__ie = 0U;
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_fetch__DOT__pc = 0x80000000U;
}

VL_ATTR_COLD void Vcore___024root___settle__TOP__0(Vcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___settle__TOP__0\n"); );
    // Init
    CData/*0:0*/ core__DOT__mem_load;
    CData/*0:0*/ core__DOT__mem_store;
    CData/*0:0*/ core__DOT__core_pipeline__DOT__csr_to_writeback_eip;
    CData/*0:0*/ core__DOT__core_pipeline__DOT__pipeline_memory__DOT__to_execute;
    // Body
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__acctual_rs1 
        = ((IData)(vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_rs1_bypassed)
            ? vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_rs1_bypass
            : vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_rs1_data);
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__acctual_rs2 
        = ((IData)(vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_rs2_bypassed)
            ? vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_rs2_bypass
            : vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_rs2_data);
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_memory__DOT__should_branch 
        = ((IData)(vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_branch) 
           & ((IData)(vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_jump) 
              | ((IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__ex_cmp__DOT__negate)
                  ? (~ (IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__ex_cmp__DOT__quasi_result))
                  : (IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__ex_cmp__DOT__quasi_result))));
    vlSelf->core__DOT__core_pipeline__DOT__global_mret 
        = ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_valid) 
           & (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_mret));
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
    vlSelf->core__DOT__core_pipeline__DOT__memory_to_decode_bypass_address 
        = (((IData)(vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_valid) 
            & (IData)(vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_bypass_memory))
            ? (IData)(vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_rd_address)
            : 0U);
    core__DOT__core_pipeline__DOT__pipeline_memory__DOT__to_execute 
        = ((~ (IData)(vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_exception)) 
           & (IData)(vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_valid));
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_memory__DOT__valid_mem_address 
        = (1U & ((2U & (IData)(vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_load_store_size))
                  ? ((~ (IData)(vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_load_store_size)) 
                     & (0U == (3U & vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__ex_alu__DOT__result_add_sub)))
                  : ((~ (IData)(vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_load_store_size)) 
                     | (~ vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__ex_alu__DOT__result_add_sub))));
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
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__csr_exception 
        = (((IData)(vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_csr_read) 
            & (~ (IData)(vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_csr_readable))) 
           | ((IData)(vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_csr_write) 
              & (~ (IData)(vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_csr_writeable))));
    vlSelf->core__DOT__core_pipeline__DOT__writeback_to_regfile_rd_data 
        = ((2U & (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_write_select))
            ? ((1U & (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_write_select))
                ? vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_next_pc
                : vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_load_data)
            : ((1U & (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_write_select))
                ? vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_data
                : vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_alu_data));
    vlSelf->core__DOT__core_pipeline__DOT__global_wfi 
        = ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_valid) 
           & (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_wfi));
    if ((vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
         >> 0x1fU)) {
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
    } else {
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
        vlSelf->core__DOT__core_pipeline__DOT__decode_to_hazaed_uses_rs2 
            = (IData)(((0x23U == (0x3fU & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) 
                       & (IData)(vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_valid)));
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
    } else {
        vlSelf->core__DOT__core_pipeline__DOT__decode_to_hazaed_uses_rs2 
            = (IData)(((0x23U == (0x2fU & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) 
                       & (IData)(vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_valid)));
        vlSelf->core__DOT__core_pipeline__DOT__decode_to_hazaed_uses_rs1 
            = ((0x20U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                ? (IData)(((3U == (0xfU & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) 
                           & (IData)(vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_valid)))
                : (IData)(((3U == (0xfU & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) 
                           & (IData)(vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_valid))));
    }
    core__DOT__core_pipeline__DOT__csr_to_writeback_eip 
        = (((IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__ie) 
            & (IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__meie)) 
           & (IData)(vlSelf->meip));
    vlSelf->core__DOT__core_pipeline__DOT__csr_to_writeback_tip 
        = (((IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__ie) 
            & (IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__mtie)) 
           & (IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__mtip));
    vlSelf->core__DOT__core_pipeline__DOT__csr_to_writeback_sip 
        = (((IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__ie) 
            & (IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__msie)) 
           & (IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__msip));
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_fetch__DOT__next_pc 
        = ((IData)(4U) + vlSelf->core__DOT__core_pipeline__DOT__pipeline_fetch__DOT__pc);
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
    vlSelf->core__DOT__core_pipeline__DOT__global_branch_taken 
        = (((IData)(vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_valid) 
            & (0U == (3U & vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__ex_alu__DOT__result_add_sub))) 
           & (IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_memory__DOT__should_branch));
    core__DOT__mem_load = (((IData)(core__DOT__core_pipeline__DOT__pipeline_memory__DOT__to_execute) 
                            & (IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_memory__DOT__valid_mem_address)) 
                           & (IData)(vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_load));
    core__DOT__mem_store = (((IData)(core__DOT__core_pipeline__DOT__pipeline_memory__DOT__to_execute) 
                             & (IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_memory__DOT__valid_mem_address)) 
                            & (IData)(vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_store));
    vlSelf->core__DOT__core_pipeline__DOT__memory_to_decode_bypass_data 
        = ((1U & (IData)(vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_write_select))
            ? vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_csr_data
            : vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_alu_data);
    vlSelf->core__DOT__core_pipeline__DOT__writeback_to_csr_interupt 
        = ((IData)(core__DOT__core_pipeline__DOT__csr_to_writeback_eip) 
           | ((IData)(vlSelf->core__DOT__core_pipeline__DOT__csr_to_writeback_tip) 
              | (IData)(vlSelf->core__DOT__core_pipeline__DOT__csr_to_writeback_sip)));
    vlSelf->core__DOT__core_pipeline__DOT__writeback_to_csr_trap_cause 
        = ((IData)(core__DOT__core_pipeline__DOT__csr_to_writeback_eip)
            ? 0xbU : ((IData)(vlSelf->core__DOT__core_pipeline__DOT__csr_to_writeback_tip)
                       ? 7U : ((IData)(vlSelf->core__DOT__core_pipeline__DOT__csr_to_writeback_sip)
                                ? 3U : ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_exception)
                                         ? (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_ecause)
                                         : 0U))));
    vlSelf->core__DOT__core_pipeline__DOT__global_traped 
        = ((((IData)(vlSelf->core__DOT__core_pipeline__DOT__csr_to_writeback_sip) 
             | (IData)(vlSelf->core__DOT__core_pipeline__DOT__csr_to_writeback_tip)) 
            | (IData)(core__DOT__core_pipeline__DOT__csr_to_writeback_eip)) 
           | ((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_exception) 
              & (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_valid)));
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
    vlSelf->core__DOT__core_pipeline__DOT____Vcellinp__pipeline_hazard__load_store 
        = ((IData)(core__DOT__mem_load) | (IData)(core__DOT__mem_store));
    vlSelf->ext_instruction = (1U & (~ ((IData)(core__DOT__mem_load) 
                                        | (IData)(core__DOT__mem_store))));
    vlSelf->ext_address = (0xfffffffcU & (((IData)(core__DOT__mem_load) 
                                           | (IData)(core__DOT__mem_store))
                                           ? vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__ex_alu__DOT__result_add_sub
                                           : vlSelf->core__DOT__core_pipeline__DOT__pipeline_fetch__DOT__pc));
    vlSelf->core__DOT__core_pipeline__DOT__writeback_to_regfile_rd_address 
        = ((1U & ((~ (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_valid)) 
                  | (IData)(vlSelf->core__DOT__core_pipeline__DOT__global_traped)))
            ? 0U : (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_rd_address));
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_hazard__DOT__trap_invalidate 
        = ((IData)(vlSelf->core__DOT__core_pipeline__DOT__global_mret) 
           | (IData)(vlSelf->core__DOT__core_pipeline__DOT__global_traped));
    vlSelf->core__DOT__core_pipeline__DOT__writeback_to_csr_write_enable 
        = (((IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_valid) 
            & (~ (IData)(vlSelf->core__DOT__core_pipeline__DOT__global_traped))) 
           & (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_write));
    vlSelf->core__DOT__mem_ready = ((IData)(vlSelf->ext_ready) 
                                    & (~ (IData)(vlSelf->ext_instruction)));
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_hazard__DOT__branch_invalidate 
        = ((IData)(vlSelf->core__DOT__core_pipeline__DOT__global_branch_taken) 
           | (IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_hazard__DOT__trap_invalidate));
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_hazard__DOT__data_hazard 
        = ((IData)(vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_valid) 
           & (((((IData)(vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_valid) 
                 & (0U != (IData)(vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_rd_address))) 
                & (((IData)(vlSelf->core__DOT__core_pipeline__DOT__decode_to_hazaed_uses_rs1) 
                    & ((0x1fU & (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                 >> 0xfU)) == (IData)(vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_rd_address))) 
                   | ((IData)(vlSelf->core__DOT__core_pipeline__DOT__decode_to_hazaed_uses_rs2) 
                      & ((0x1fU & (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                   >> 0x14U)) == (IData)(vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_rd_address))))) 
               | ((((IData)(vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_valid) 
                    & (0U != (IData)(vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_rd_address))) 
                   & (0U == (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_decode_bypass_address))) 
                  & (((IData)(vlSelf->core__DOT__core_pipeline__DOT__decode_to_hazaed_uses_rs1) 
                      & ((0x1fU & (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                   >> 0xfU)) == (IData)(vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_rd_address))) 
                     | ((IData)(vlSelf->core__DOT__core_pipeline__DOT__decode_to_hazaed_uses_rs2) 
                        & ((0x1fU & (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                     >> 0x14U)) == (IData)(vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_rd_address)))))) 
              | ((IData)(((0x73U == (0x7fU & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)) 
                          & ((0x4000U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                              ? ((0x2000U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                  ? (IData)(vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_valid)
                                  : ((vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                      >> 0xcU) & ((IData)(vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_valid) 
                                                  & (0U 
                                                     != 
                                                     (0x1fU 
                                                      & (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                                         >> 7U))))))
                              : ((0x2000U & vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction)
                                  ? (IData)(vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_valid)
                                  : ((vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                      >> 0xcU) & ((IData)(vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_valid) 
                                                  & (0U 
                                                     != 
                                                     (0x1fU 
                                                      & (vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction 
                                                         >> 7U))))))))) 
                 & ((((IData)(vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_csr_write) 
                      & (IData)(vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_valid)) 
                     | ((IData)(vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_csr_write) 
                        & (IData)(vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_valid))) 
                    | ((IData)(vlSelf->core__DOT__core_pipeline__DOT__writeback_to_csr_write_enable) 
                       & (IData)(vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_valid))))));
    vlSelf->core__DOT__core_pipeline__DOT__hazard_to_execute_stall 
        = (((IData)(vlSelf->core__DOT__core_pipeline__DOT__global_wfi) 
            | ((~ (IData)(vlSelf->core__DOT__mem_ready)) 
               & (IData)(vlSelf->core__DOT__core_pipeline__DOT____Vcellinp__pipeline_hazard__load_store))) 
           | ((IData)(vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_valid) 
              & (IData)(vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_mret)));
    vlSelf->core__DOT__core_pipeline__DOT__hazard_to_fetch_invalidate 
        = (1U & (((IData)(vlSelf->reset) | (IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_hazard__DOT__branch_invalidate)) 
                 | ((~ ((IData)(vlSelf->ext_ready) 
                        & (IData)(vlSelf->ext_instruction))) 
                    & (~ (IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_hazard__DOT__data_hazard)))));
    vlSelf->core__DOT__core_pipeline__DOT__hazard_to_fetch_stall 
        = ((IData)(vlSelf->core__DOT__core_pipeline__DOT__hazard_to_execute_stall) 
           | (IData)(vlSelf->core__DOT__core_pipeline__DOT__pipeline_hazard__DOT__data_hazard));
}

VL_ATTR_COLD void Vcore___024root___eval_initial(Vcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_initial\n"); );
    // Body
    Vcore___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vcore___024root___eval_settle(Vcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_settle\n"); );
    // Body
    Vcore___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vcore___024root___final(Vcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___final\n"); );
}

VL_ATTR_COLD void Vcore___024root___ctor_var_reset(Vcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->meip = VL_RAND_RESET_I(1);
    vlSelf->ext_valid = VL_RAND_RESET_I(1);
    vlSelf->ext_instruction = VL_RAND_RESET_I(1);
    vlSelf->ext_ready = VL_RAND_RESET_I(1);
    vlSelf->ext_address = VL_RAND_RESET_I(32);
    vlSelf->ext_write_data = VL_RAND_RESET_I(32);
    vlSelf->ext_write_strobe = VL_RAND_RESET_I(4);
    vlSelf->ext_read_data = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__mem_ready = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__core_pipeline__DOT__csr_to_decode_read_data = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__core_pipeline__DOT__csr_to_decode_readable = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__core_pipeline__DOT__csr_to_decode_writable = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__core_pipeline__DOT__writeback_to_csr_write_enable = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__core_pipeline__DOT__writeback_to_csr_trap_cause = VL_RAND_RESET_I(4);
    vlSelf->core__DOT__core_pipeline__DOT__writeback_to_csr_interupt = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__core_pipeline__DOT__csr_to_writeback_tip = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__core_pipeline__DOT__csr_to_writeback_sip = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__core_pipeline__DOT__global_traped = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__core_pipeline__DOT__global_mret = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__core_pipeline__DOT__global_wfi = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__core_pipeline__DOT__writeback_to_regfile_rd_address = VL_RAND_RESET_I(5);
    vlSelf->core__DOT__core_pipeline__DOT__writeback_to_regfile_rd_data = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__core_pipeline__DOT____Vcellinp__pipeline_hazard__load_store = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__core_pipeline__DOT__decode_to_hazaed_uses_rs1 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__core_pipeline__DOT__decode_to_hazaed_uses_rs2 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__core_pipeline__DOT__hazard_to_fetch_stall = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__core_pipeline__DOT__hazard_to_fetch_invalidate = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__core_pipeline__DOT__hazard_to_execute_stall = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__core_pipeline__DOT__global_branch_taken = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_pc = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_next_pc = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_instruction = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__core_pipeline__DOT__fetch_to_decode_valid = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__core_pipeline__DOT__memory_to_decode_bypass_address = VL_RAND_RESET_I(5);
    vlSelf->core__DOT__core_pipeline__DOT__memory_to_decode_bypass_data = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_pc = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_next_pc = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_rs1_data = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_rs2_data = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_rs1_bypass = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_rs2_bypass = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_rs1_bypassed = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_rs2_bypassed = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_csr_data = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_imm_data = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_alu_function = VL_RAND_RESET_I(3);
    vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_alu_function_modifier = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_alu_select_a = VL_RAND_RESET_I(2);
    vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_alu_select_b = VL_RAND_RESET_I(2);
    vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_cmp_function = VL_RAND_RESET_I(3);
    vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_jump = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_branch = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_csr_read = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_csr_write = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_csr_readable = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_csr_writeable = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_load = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_store = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_load_store_size = VL_RAND_RESET_I(2);
    vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_load_signed = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_bypass_memory = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_write_select = VL_RAND_RESET_I(2);
    vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_rd_address = VL_RAND_RESET_I(5);
    vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_csr_address = VL_RAND_RESET_I(12);
    vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_mret = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_wfi = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_valid = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_ecause = VL_RAND_RESET_I(4);
    vlSelf->core__DOT__core_pipeline__DOT__decode_to_execute_exception = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_pc = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_next_pc = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_alu_data = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_rs2_data = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_csr_data = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_branch = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_jump = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_load = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_store = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_load_store_size = VL_RAND_RESET_I(2);
    vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_load_signed = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_bypass_memory = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_write_select = VL_RAND_RESET_I(2);
    vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_rd_address = VL_RAND_RESET_I(5);
    vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_csr_address = VL_RAND_RESET_I(12);
    vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_csr_write = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_mret = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_wfi = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_valid = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_ecause = VL_RAND_RESET_I(4);
    vlSelf->core__DOT__core_pipeline__DOT__execute_to_memory_exception = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_pc = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_next_pc = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_alu_data = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_data = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_load_data = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_write_select = VL_RAND_RESET_I(2);
    vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_rd_address = VL_RAND_RESET_I(5);
    vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address = VL_RAND_RESET_I(12);
    vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_csr_write = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_mret = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_wfi = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_valid = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_ecause = VL_RAND_RESET_I(4);
    vlSelf->core__DOT__core_pipeline__DOT__memory_to_writeback_exception = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__cycle = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__instret = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__pie = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__ie = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__meie = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__msie = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__msip = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__mtie = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__mtip = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__mtvec = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__mscratch = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__mecp = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__mcause = VL_RAND_RESET_I(4);
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__minterupt = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_csr__DOT__mtimecmp = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->core__DOT__core_pipeline__DOT__pipeline_registers__DOT__registers[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_hazard__DOT__trap_invalidate = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_hazard__DOT__branch_invalidate = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_hazard__DOT__data_hazard = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_fetch__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_fetch__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_decode__DOT__i_type_imm_data = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__acctual_rs1 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__acctual_rs2 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__alu_input_a = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__alu_input_b = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__csr_exception = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__ex_cmp__DOT__quasi_result = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__ex_cmp__DOT__negate = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__ex_alu__DOT__result_add_sub = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__ex_alu__DOT__result_sll = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__ex_alu__DOT__result_slt = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__ex_alu__DOT__result_xor = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__ex_alu__DOT__result_srl_sra = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__ex_alu__DOT__result_or = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__ex_alu__DOT__result_and_clr = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_execute__DOT__ex_alu__DOT__old_function = VL_RAND_RESET_I(3);
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_memory__DOT__valid_mem_address = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__core_pipeline__DOT__pipeline_memory__DOT__should_branch = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__core_busio__DOT__tmp_load_data = VL_RAND_RESET_I(32);
}
