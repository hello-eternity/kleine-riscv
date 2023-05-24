// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcore.h"
#include "Vcore__Syms.h"

//============================================================
// Constructors

Vcore::Vcore(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vcore__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , meip{vlSymsp->TOP.meip}
    , ext_valid{vlSymsp->TOP.ext_valid}
    , ext_instruction{vlSymsp->TOP.ext_instruction}
    , ext_ready{vlSymsp->TOP.ext_ready}
    , ext_write_strobe{vlSymsp->TOP.ext_write_strobe}
    , ext_address{vlSymsp->TOP.ext_address}
    , ext_write_data{vlSymsp->TOP.ext_write_data}
    , ext_read_data{vlSymsp->TOP.ext_read_data}
    , rootp{&(vlSymsp->TOP)}
{
}

Vcore::Vcore(const char* _vcname__)
    : Vcore(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vcore::~Vcore() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vcore___024root___eval_initial(Vcore___024root* vlSelf);
void Vcore___024root___eval_settle(Vcore___024root* vlSelf);
void Vcore___024root___eval(Vcore___024root* vlSelf);
#ifdef VL_DEBUG
void Vcore___024root___eval_debug_assertions(Vcore___024root* vlSelf);
#endif  // VL_DEBUG
void Vcore___024root___final(Vcore___024root* vlSelf);

static void _eval_initial_loop(Vcore__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vcore___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vcore___024root___eval_settle(&(vlSymsp->TOP));
        Vcore___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vcore::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcore::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcore___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vcore___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vcore::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vcore::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vcore::final() {
    Vcore___024root___final(&(vlSymsp->TOP));
}
