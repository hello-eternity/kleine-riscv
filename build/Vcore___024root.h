// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore.h for the primary calling header

#ifndef VERILATED_VCORE___024ROOT_H_
#define VERILATED_VCORE___024ROOT_H_  // guard

#include "verilated.h"

class Vcore__Syms;
VL_MODULE(Vcore___024root) {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(reset,0,0);
        VL_IN8(meip,0,0);
        VL_OUT8(ext_valid,0,0);
        VL_OUT8(ext_instruction,0,0);
        VL_IN8(ext_ready,0,0);
        VL_OUT8(ext_write_strobe,3,0);
        CData/*0:0*/ core__DOT__mem_ready;
        CData/*0:0*/ core__DOT__core_pipeline__DOT__csr_to_decode_readable;
        CData/*0:0*/ core__DOT__core_pipeline__DOT__csr_to_decode_writable;
        CData/*0:0*/ core__DOT__core_pipeline__DOT__writeback_to_csr_write_enable;
        CData/*3:0*/ core__DOT__core_pipeline__DOT__writeback_to_csr_trap_cause;
        CData/*0:0*/ core__DOT__core_pipeline__DOT__writeback_to_csr_interupt;
        CData/*0:0*/ core__DOT__core_pipeline__DOT__csr_to_writeback_tip;
        CData/*0:0*/ core__DOT__core_pipeline__DOT__csr_to_writeback_sip;
        CData/*0:0*/ core__DOT__core_pipeline__DOT__global_traped;
        CData/*0:0*/ core__DOT__core_pipeline__DOT__global_mret;
        CData/*0:0*/ core__DOT__core_pipeline__DOT__global_wfi;
        CData/*4:0*/ core__DOT__core_pipeline__DOT__writeback_to_regfile_rd_address;
        CData/*0:0*/ core__DOT__core_pipeline__DOT____Vcellinp__pipeline_hazard__load_store;
        CData/*0:0*/ core__DOT__core_pipeline__DOT__decode_to_hazaed_uses_rs1;
        CData/*0:0*/ core__DOT__core_pipeline__DOT__decode_to_hazaed_uses_rs2;
        CData/*0:0*/ core__DOT__core_pipeline__DOT__hazard_to_fetch_stall;
        CData/*0:0*/ core__DOT__core_pipeline__DOT__hazard_to_fetch_invalidate;
        CData/*0:0*/ core__DOT__core_pipeline__DOT__hazard_to_execute_stall;
        CData/*0:0*/ core__DOT__core_pipeline__DOT__global_branch_taken;
        CData/*0:0*/ core__DOT__core_pipeline__DOT__fetch_to_decode_valid;
        CData/*4:0*/ core__DOT__core_pipeline__DOT__memory_to_decode_bypass_address;
        CData/*0:0*/ core__DOT__core_pipeline__DOT__decode_to_execute_rs1_bypassed;
        CData/*0:0*/ core__DOT__core_pipeline__DOT__decode_to_execute_rs2_bypassed;
        CData/*2:0*/ core__DOT__core_pipeline__DOT__decode_to_execute_alu_function;
        CData/*0:0*/ core__DOT__core_pipeline__DOT__decode_to_execute_alu_function_modifier;
        CData/*1:0*/ core__DOT__core_pipeline__DOT__decode_to_execute_alu_select_a;
        CData/*1:0*/ core__DOT__core_pipeline__DOT__decode_to_execute_alu_select_b;
        CData/*2:0*/ core__DOT__core_pipeline__DOT__decode_to_execute_cmp_function;
        CData/*0:0*/ core__DOT__core_pipeline__DOT__decode_to_execute_jump;
        CData/*0:0*/ core__DOT__core_pipeline__DOT__decode_to_execute_branch;
        CData/*0:0*/ core__DOT__core_pipeline__DOT__decode_to_execute_csr_read;
        CData/*0:0*/ core__DOT__core_pipeline__DOT__decode_to_execute_csr_write;
        CData/*0:0*/ core__DOT__core_pipeline__DOT__decode_to_execute_csr_readable;
        CData/*0:0*/ core__DOT__core_pipeline__DOT__decode_to_execute_csr_writeable;
        CData/*0:0*/ core__DOT__core_pipeline__DOT__decode_to_execute_load;
        CData/*0:0*/ core__DOT__core_pipeline__DOT__decode_to_execute_store;
        CData/*1:0*/ core__DOT__core_pipeline__DOT__decode_to_execute_load_store_size;
        CData/*0:0*/ core__DOT__core_pipeline__DOT__decode_to_execute_load_signed;
        CData/*0:0*/ core__DOT__core_pipeline__DOT__decode_to_execute_bypass_memory;
        CData/*1:0*/ core__DOT__core_pipeline__DOT__decode_to_execute_write_select;
        CData/*4:0*/ core__DOT__core_pipeline__DOT__decode_to_execute_rd_address;
        CData/*0:0*/ core__DOT__core_pipeline__DOT__decode_to_execute_mret;
        CData/*0:0*/ core__DOT__core_pipeline__DOT__decode_to_execute_wfi;
        CData/*0:0*/ core__DOT__core_pipeline__DOT__decode_to_execute_valid;
        CData/*3:0*/ core__DOT__core_pipeline__DOT__decode_to_execute_ecause;
        CData/*0:0*/ core__DOT__core_pipeline__DOT__decode_to_execute_exception;
        CData/*0:0*/ core__DOT__core_pipeline__DOT__execute_to_memory_branch;
        CData/*0:0*/ core__DOT__core_pipeline__DOT__execute_to_memory_jump;
        CData/*0:0*/ core__DOT__core_pipeline__DOT__execute_to_memory_load;
        CData/*0:0*/ core__DOT__core_pipeline__DOT__execute_to_memory_store;
        CData/*1:0*/ core__DOT__core_pipeline__DOT__execute_to_memory_load_store_size;
        CData/*0:0*/ core__DOT__core_pipeline__DOT__execute_to_memory_load_signed;
        CData/*0:0*/ core__DOT__core_pipeline__DOT__execute_to_memory_bypass_memory;
        CData/*1:0*/ core__DOT__core_pipeline__DOT__execute_to_memory_write_select;
        CData/*4:0*/ core__DOT__core_pipeline__DOT__execute_to_memory_rd_address;
        CData/*0:0*/ core__DOT__core_pipeline__DOT__execute_to_memory_csr_write;
        CData/*0:0*/ core__DOT__core_pipeline__DOT__execute_to_memory_mret;
    };
    struct {
        CData/*0:0*/ core__DOT__core_pipeline__DOT__execute_to_memory_wfi;
        CData/*0:0*/ core__DOT__core_pipeline__DOT__execute_to_memory_valid;
        CData/*3:0*/ core__DOT__core_pipeline__DOT__execute_to_memory_ecause;
        CData/*0:0*/ core__DOT__core_pipeline__DOT__execute_to_memory_exception;
        CData/*1:0*/ core__DOT__core_pipeline__DOT__memory_to_writeback_write_select;
        CData/*4:0*/ core__DOT__core_pipeline__DOT__memory_to_writeback_rd_address;
        CData/*0:0*/ core__DOT__core_pipeline__DOT__memory_to_writeback_csr_write;
        CData/*0:0*/ core__DOT__core_pipeline__DOT__memory_to_writeback_mret;
        CData/*0:0*/ core__DOT__core_pipeline__DOT__memory_to_writeback_wfi;
        CData/*0:0*/ core__DOT__core_pipeline__DOT__memory_to_writeback_valid;
        CData/*3:0*/ core__DOT__core_pipeline__DOT__memory_to_writeback_ecause;
        CData/*0:0*/ core__DOT__core_pipeline__DOT__memory_to_writeback_exception;
        CData/*0:0*/ core__DOT__core_pipeline__DOT__pipeline_csr__DOT__pie;
        CData/*0:0*/ core__DOT__core_pipeline__DOT__pipeline_csr__DOT__ie;
        CData/*0:0*/ core__DOT__core_pipeline__DOT__pipeline_csr__DOT__meie;
        CData/*0:0*/ core__DOT__core_pipeline__DOT__pipeline_csr__DOT__msie;
        CData/*0:0*/ core__DOT__core_pipeline__DOT__pipeline_csr__DOT__msip;
        CData/*0:0*/ core__DOT__core_pipeline__DOT__pipeline_csr__DOT__mtie;
        CData/*0:0*/ core__DOT__core_pipeline__DOT__pipeline_csr__DOT__mtip;
        CData/*3:0*/ core__DOT__core_pipeline__DOT__pipeline_csr__DOT__mcause;
        CData/*0:0*/ core__DOT__core_pipeline__DOT__pipeline_csr__DOT__minterupt;
        CData/*0:0*/ core__DOT__core_pipeline__DOT__pipeline_hazard__DOT__trap_invalidate;
        CData/*0:0*/ core__DOT__core_pipeline__DOT__pipeline_hazard__DOT__branch_invalidate;
        CData/*0:0*/ core__DOT__core_pipeline__DOT__pipeline_hazard__DOT__data_hazard;
        CData/*0:0*/ core__DOT__core_pipeline__DOT__pipeline_execute__DOT__csr_exception;
        CData/*0:0*/ core__DOT__core_pipeline__DOT__pipeline_execute__DOT__ex_cmp__DOT__quasi_result;
        CData/*0:0*/ core__DOT__core_pipeline__DOT__pipeline_execute__DOT__ex_cmp__DOT__negate;
        CData/*2:0*/ core__DOT__core_pipeline__DOT__pipeline_execute__DOT__ex_alu__DOT__old_function;
        CData/*0:0*/ core__DOT__core_pipeline__DOT__pipeline_memory__DOT__valid_mem_address;
        CData/*0:0*/ core__DOT__core_pipeline__DOT__pipeline_memory__DOT__should_branch;
        CData/*0:0*/ __Vclklast__TOP__clk;
        SData/*11:0*/ core__DOT__core_pipeline__DOT__decode_to_execute_csr_address;
        SData/*11:0*/ core__DOT__core_pipeline__DOT__execute_to_memory_csr_address;
        SData/*11:0*/ core__DOT__core_pipeline__DOT__memory_to_writeback_csr_address;
        VL_OUT(ext_address,31,0);
        VL_OUT(ext_write_data,31,0);
        VL_IN(ext_read_data,31,0);
        IData/*31:0*/ core__DOT__core_pipeline__DOT__csr_to_decode_read_data;
        IData/*31:0*/ core__DOT__core_pipeline__DOT__writeback_to_regfile_rd_data;
        IData/*31:0*/ core__DOT__core_pipeline__DOT__fetch_to_decode_pc;
        IData/*31:0*/ core__DOT__core_pipeline__DOT__fetch_to_decode_next_pc;
        IData/*31:0*/ core__DOT__core_pipeline__DOT__fetch_to_decode_instruction;
        IData/*31:0*/ core__DOT__core_pipeline__DOT__memory_to_decode_bypass_data;
        IData/*31:0*/ core__DOT__core_pipeline__DOT__decode_to_execute_pc;
        IData/*31:0*/ core__DOT__core_pipeline__DOT__decode_to_execute_next_pc;
        IData/*31:0*/ core__DOT__core_pipeline__DOT__decode_to_execute_rs1_data;
        IData/*31:0*/ core__DOT__core_pipeline__DOT__decode_to_execute_rs2_data;
        IData/*31:0*/ core__DOT__core_pipeline__DOT__decode_to_execute_rs1_bypass;
        IData/*31:0*/ core__DOT__core_pipeline__DOT__decode_to_execute_rs2_bypass;
        IData/*31:0*/ core__DOT__core_pipeline__DOT__decode_to_execute_csr_data;
        IData/*31:0*/ core__DOT__core_pipeline__DOT__decode_to_execute_imm_data;
        IData/*31:0*/ core__DOT__core_pipeline__DOT__execute_to_memory_pc;
        IData/*31:0*/ core__DOT__core_pipeline__DOT__execute_to_memory_next_pc;
        IData/*31:0*/ core__DOT__core_pipeline__DOT__execute_to_memory_alu_data;
        IData/*31:0*/ core__DOT__core_pipeline__DOT__execute_to_memory_rs2_data;
        IData/*31:0*/ core__DOT__core_pipeline__DOT__execute_to_memory_csr_data;
        IData/*31:0*/ core__DOT__core_pipeline__DOT__memory_to_writeback_pc;
        IData/*31:0*/ core__DOT__core_pipeline__DOT__memory_to_writeback_next_pc;
        IData/*31:0*/ core__DOT__core_pipeline__DOT__memory_to_writeback_alu_data;
        IData/*31:0*/ core__DOT__core_pipeline__DOT__memory_to_writeback_csr_data;
        IData/*31:0*/ core__DOT__core_pipeline__DOT__memory_to_writeback_load_data;
        IData/*31:0*/ core__DOT__core_pipeline__DOT__pipeline_csr__DOT__mtvec;
        IData/*31:0*/ core__DOT__core_pipeline__DOT__pipeline_csr__DOT__mscratch;
        IData/*31:0*/ core__DOT__core_pipeline__DOT__pipeline_csr__DOT__mecp;
    };
    struct {
        IData/*31:0*/ core__DOT__core_pipeline__DOT__pipeline_fetch__DOT__pc;
        IData/*31:0*/ core__DOT__core_pipeline__DOT__pipeline_fetch__DOT__next_pc;
        IData/*31:0*/ core__DOT__core_pipeline__DOT__pipeline_decode__DOT__i_type_imm_data;
        IData/*31:0*/ core__DOT__core_pipeline__DOT__pipeline_execute__DOT__acctual_rs1;
        IData/*31:0*/ core__DOT__core_pipeline__DOT__pipeline_execute__DOT__acctual_rs2;
        IData/*31:0*/ core__DOT__core_pipeline__DOT__pipeline_execute__DOT__alu_input_a;
        IData/*31:0*/ core__DOT__core_pipeline__DOT__pipeline_execute__DOT__alu_input_b;
        IData/*31:0*/ core__DOT__core_pipeline__DOT__pipeline_execute__DOT__ex_alu__DOT__result_add_sub;
        IData/*31:0*/ core__DOT__core_pipeline__DOT__pipeline_execute__DOT__ex_alu__DOT__result_sll;
        IData/*31:0*/ core__DOT__core_pipeline__DOT__pipeline_execute__DOT__ex_alu__DOT__result_slt;
        IData/*31:0*/ core__DOT__core_pipeline__DOT__pipeline_execute__DOT__ex_alu__DOT__result_xor;
        IData/*31:0*/ core__DOT__core_pipeline__DOT__pipeline_execute__DOT__ex_alu__DOT__result_srl_sra;
        IData/*31:0*/ core__DOT__core_pipeline__DOT__pipeline_execute__DOT__ex_alu__DOT__result_or;
        IData/*31:0*/ core__DOT__core_pipeline__DOT__pipeline_execute__DOT__ex_alu__DOT__result_and_clr;
        IData/*31:0*/ core__DOT__core_busio__DOT__tmp_load_data;
        QData/*63:0*/ core__DOT__core_pipeline__DOT__pipeline_csr__DOT__cycle;
        QData/*63:0*/ core__DOT__core_pipeline__DOT__pipeline_csr__DOT__instret;
        QData/*63:0*/ core__DOT__core_pipeline__DOT__pipeline_csr__DOT__mtimecmp;
        VlUnpacked<IData/*31:0*/, 32> core__DOT__core_pipeline__DOT__pipeline_registers__DOT__registers;
    };

    // INTERNAL VARIABLES
    Vcore__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcore___024root(Vcore__Syms* symsp, const char* name);
    ~Vcore___024root();
    VL_UNCOPYABLE(Vcore___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
