// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VNARNet.h"
#include "VNARNet__Syms.h"

//============================================================
// Constructors

VNARNet::VNARNet(sc_module_name /* unused */)
    : vlSymsp{new VNARNet__Syms(nullptr, name(), this)}
    , neuron_v2__02Eclk{vlSymsp->TOP.neuron_v2__02Eclk}
    , inptReady{vlSymsp->TOP.inptReady}
    , neuron_v2__02Erst{vlSymsp->TOP.neuron_v2__02Erst}
    , tanh_lut__02Eclk{vlSymsp->TOP.tanh_lut__02Eclk}
    , NARNet__02Eclk{vlSymsp->TOP.NARNet__02Eclk}
    , enable{vlSymsp->TOP.enable}
    , NARNet__02Erst{vlSymsp->TOP.NARNet__02Erst}
    , x_ready{vlSymsp->TOP.x_ready}
    , x_in{vlSymsp->TOP.x_in}
    , y_out{vlSymsp->TOP.y_out}
    , w{vlSymsp->TOP.w}
    , x{vlSymsp->TOP.x}
    , b{vlSymsp->TOP.b}
    , out{vlSymsp->TOP.out}
    , addr{vlSymsp->TOP.addr}
    , tanh_out{vlSymsp->TOP.tanh_out}
    , rootp{&(vlSymsp->TOP)}
{
    // Sensitivities on all clocks and combinational inputs
    SC_METHOD(eval);
    sensitive << neuron_v2__02Eclk;
    sensitive << inptReady;
    sensitive << neuron_v2__02Erst;
    sensitive << tanh_lut__02Eclk;
    sensitive << NARNet__02Eclk;
    sensitive << enable;
    sensitive << NARNet__02Erst;
    sensitive << x_ready;
    sensitive << x_in;
    sensitive << w;
    sensitive << x;
    sensitive << b;
    sensitive << addr;

}

//============================================================
// Destructor

VNARNet::~VNARNet() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VNARNet___024root___eval_initial(VNARNet___024root* vlSelf);
void VNARNet___024root___eval_settle(VNARNet___024root* vlSelf);
void VNARNet___024root___eval(VNARNet___024root* vlSelf);
#ifdef VL_DEBUG
void VNARNet___024root___eval_debug_assertions(VNARNet___024root* vlSelf);
#endif  // VL_DEBUG
void VNARNet___024root___final(VNARNet___024root* vlSelf);

static void _eval_initial_loop(VNARNet__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VNARNet___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VNARNet___024root___eval_settle(&(vlSymsp->TOP));
        VNARNet___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VNARNet::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VNARNet::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VNARNet___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VNARNet___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VNARNet::contextp() const {
    return vlSymsp->_vm_contextp__;
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VNARNet::final() {
    VNARNet___024root___final(&(vlSymsp->TOP));
}
