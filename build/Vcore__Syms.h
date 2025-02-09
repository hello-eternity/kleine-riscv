// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCORE__SYMS_H_
#define VERILATED_VCORE__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vcore.h"

// INCLUDE MODULE CLASSES
#include "Vcore___024root.h"

// SYMS CLASS (contains all model state)
class Vcore__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vcore* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vcore___024root                TOP;

    // CONSTRUCTORS
    Vcore__Syms(VerilatedContext* contextp, const char* namep, Vcore* modelp);
    ~Vcore__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
