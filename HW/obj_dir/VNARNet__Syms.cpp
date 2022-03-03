// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VNARNet__Syms.h"
#include "VNARNet.h"
#include "VNARNet___024root.h"

// FUNCTIONS
VNARNet__Syms::~VNARNet__Syms()
{
}

VNARNet__Syms::VNARNet__Syms(VerilatedContext* contextp, const char* namep,VNARNet* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP(namep)
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(this, true);
}
