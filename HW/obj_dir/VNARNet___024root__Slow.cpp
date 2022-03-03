// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNARNet.h for the primary calling header

#include "verilated.h"

#include "VNARNet__Syms.h"
#include "VNARNet___024root.h"

void VNARNet___024root___ctor_var_reset(VNARNet___024root* vlSelf);

VNARNet___024root::VNARNet___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
    , neuron_v2__02Eclk("neuron_v2__02Eclk")
    , inptReady("inptReady")
    , neuron_v2__02Erst("neuron_v2__02Erst")
    , tanh_lut__02Eclk("tanh_lut__02Eclk")
    , NARNet__02Eclk("NARNet__02Eclk")
    , enable("enable")
    , NARNet__02Erst("NARNet__02Erst")
    , x_ready("x_ready")
    , x_in("x_in")
    , y_out("y_out")
    , w("w")
    , x("x")
    , b("b")
    , out("out")
    , addr("addr")
    , tanh_out("tanh_out")
 {
    // Reset structure values
    VNARNet___024root___ctor_var_reset(this);
}

void VNARNet___024root::__Vconfigure(VNARNet__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VNARNet___024root::~VNARNet___024root() {
}
