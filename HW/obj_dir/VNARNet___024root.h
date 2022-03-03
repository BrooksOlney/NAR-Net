// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See VNARNet.h for the primary calling header

#ifndef VERILATED_VNARNET___024ROOT_H_
#define VERILATED_VNARNET___024ROOT_H_  // guard

#include "systemc.h"
#include "verilated_sc.h"
#include "verilated.h"

class VNARNet__Syms;
VL_MODULE(VNARNet___024root) {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __Vcellinp__neuron_v2__neuron_v2__02Eclk;
    CData/*0:0*/ __Vcellinp__tanh_lut__tanh_lut__02Eclk;
    CData/*0:0*/ __Vcellinp__NARNet__NARNet__02Eclk;
    CData/*0:0*/ NARNet__DOT__wrom__DOT__clk;
    CData/*0:0*/ __Vcellinp__neuron_v2__neuron_v2__02Erst;
    CData/*0:0*/ __Vcellinp__neuron_v2__inptReady;
    CData/*7:0*/ __Vcellinp__NARNet__x_in;
    CData/*0:0*/ __Vcellinp__NARNet__x_ready;
    CData/*0:0*/ __Vcellinp__NARNet__NARNet__02Erst;
    CData/*0:0*/ __Vcellinp__NARNet__enable;
    CData/*0:0*/ neuron_v2__DOT__biasAdded;
    CData/*7:0*/ NARNet__DOT__x_in_reg;
    CData/*7:0*/ NARNet__DOT__b2;
    CData/*7:0*/ NARNet__DOT__bram_counter;
    CData/*2:0*/ NARNet__DOT__row;
    CData/*0:0*/ NARNet__DOT__weights_loaded;
    CData/*2:0*/ NARNet__DOT__current_state;
    CData/*0:0*/ NARNet__DOT__delay_set;
    CData/*7:0*/ NARNet__DOT__b_n1;
    CData/*7:0*/ NARNet__DOT__b_n2;
    CData/*7:0*/ NARNet__DOT__b_n3;
    CData/*7:0*/ NARNet__DOT__b_n4;
    CData/*7:0*/ NARNet__DOT__b_n5;
    CData/*7:0*/ NARNet__DOT__n_reg1;
    CData/*7:0*/ NARNet__DOT__n_reg2;
    CData/*7:0*/ NARNet__DOT__n_reg3;
    CData/*7:0*/ NARNet__DOT__n_reg4;
    CData/*7:0*/ NARNet__DOT__n_reg5;
    CData/*4:0*/ NARNet__DOT__tap;
    CData/*4:0*/ NARNet__DOT__l1_ind;
    CData/*7:0*/ NARNet__DOT__y_out_reg;
    CData/*7:0*/ NARNet__DOT__acc_res;
    CData/*7:0*/ NARNet__DOT__xdts;
    CData/*7:0*/ NARNet__DOT____Vlvbound_h8d390dc3__0;
    CData/*7:0*/ NARNet__DOT____Vlvbound_h2eb9a295__0;
    CData/*7:0*/ NARNet__DOT____Vlvbound_hd8f38ade__0;
    CData/*7:0*/ NARNet__DOT____Vlvbound_h6fa2b63f__0;
    CData/*7:0*/ NARNet__DOT__wrom__DOT__rom_reg;
    CData/*7:0*/ __Vdly__NARNet__DOT__bram_counter;
    CData/*0:0*/ __Vclklast__TOP__NARNet__DOT__wrom__DOT__clk;
    CData/*0:0*/ __Vclklast__TOP____Vcellinp__tanh_lut__tanh_lut__02Eclk;
    CData/*0:0*/ __Vclklast__TOP____Vcellinp__neuron_v2__neuron_v2__02Eclk;
    CData/*0:0*/ __Vclklast__TOP____Vcellinp__NARNet__NARNet__02Eclk;
    SData/*9:0*/ __Vcellinp__neuron_v2__b;
    SData/*9:0*/ __Vcellinp__neuron_v2__x;
    SData/*9:0*/ __Vcellinp__neuron_v2__w;
    SData/*9:0*/ __Vcellinp__tanh_lut__addr;
    SData/*9:0*/ tanh_lut__DOT__tanh_out_reg;
    SData/*8:0*/ NARNet__DOT__ts;
    SData/*15:0*/ NARNet__DOT____Vcellout__n1__out;
    SData/*15:0*/ NARNet__DOT____Vcellout__n2__out;
    SData/*15:0*/ NARNet__DOT____Vcellout__n3__out;
    SData/*15:0*/ NARNet__DOT____Vcellout__n4__out;
    SData/*15:0*/ NARNet__DOT____Vcellout__n5__out;
    IData/*24:0*/ neuron_v2__DOT__acc;
    IData/*20:0*/ neuron_v2__DOT__mult_res;
    VlUnpacked<CData/*7:0*/, 5> NARNet__DOT__b1;
    VlUnpacked<VlUnpacked<CData/*7:0*/, 16>, 5> NARNet__DOT__w1;
    VlUnpacked<CData/*7:0*/, 5> NARNet__DOT__w2;
    VlUnpacked<CData/*7:0*/, 16> NARNet__DOT__tapdelay1;
    VlUnpacked<CData/*7:0*/, 17> NARNet__DOT__xdl;
    VlUnpacked<CData/*7:0*/, 256> NARNet__DOT__wrom__DOT__rom;
    sc_in<bool> neuron_v2__02Eclk;
    sc_in<bool> inptReady;
    sc_in<bool> neuron_v2__02Erst;
    sc_in<bool> tanh_lut__02Eclk;
    sc_in<bool> NARNet__02Eclk;
    sc_in<bool> enable;
    sc_in<bool> NARNet__02Erst;
    sc_in<bool> x_ready;
    sc_in<uint32_t> x_in;
    sc_out<uint32_t> y_out;
    sc_in<uint32_t> w;
    sc_in<uint32_t> x;
    sc_in<uint32_t> b;
    sc_out<uint32_t> out;
    sc_in<uint32_t> addr;
    sc_out<uint32_t> tanh_out;

    // INTERNAL VARIABLES
    VNARNet__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VNARNet___024root(const char* name);
    ~VNARNet___024root();
    VL_UNCOPYABLE(VNARNet___024root);

    // INTERNAL METHODS
    void __Vconfigure(VNARNet__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
