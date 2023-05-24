// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "verilated.h"

#include "Vcore__Syms.h"
#include "Vcore___024root.h"

void Vcore___024root___ctor_var_reset(Vcore___024root* vlSelf);

Vcore___024root::Vcore___024root(Vcore__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcore___024root___ctor_var_reset(this);
}

void Vcore___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vcore___024root::~Vcore___024root() {
}
