// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VNARNET__SYMS_H_
#define VERILATED_VNARNET__SYMS_H_  // guard

#include "systemc.h"
#include "verilated_sc.h"
#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VNARNet.h"

// INCLUDE MODULE CLASSES
#include "VNARNet___024root.h"

// SYMS CLASS (contains all model state)
class VNARNet__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VNARNet* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VNARNet___024root              TOP;

    // CONSTRUCTORS
    VNARNet__Syms(VerilatedContext* contextp, const char* namep, VNARNet* modelp);
    ~VNARNet__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
