// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNARNet.h for the primary calling header

#include "verilated.h"

#include "VNARNet___024root.h"

VL_ATTR_COLD void VNARNet___024root___settle__TOP__3(VNARNet___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNARNet__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNARNet___024root___settle__TOP__3\n"); );
    // Body
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__tanh_lut__tanh_lut__02Eclk, vlSelf->tanh_lut__02Eclk);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__neuron_v2__neuron_v2__02Eclk, vlSelf->neuron_v2__02Eclk);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__NARNet__NARNet__02Eclk, vlSelf->NARNet__02Eclk);
    VL_ASSIGN_ISI(10,vlSelf->__Vcellinp__neuron_v2__b, vlSelf->b);
    VL_ASSIGN_ISI(10,vlSelf->__Vcellinp__neuron_v2__x, vlSelf->x);
    VL_ASSIGN_ISI(10,vlSelf->__Vcellinp__neuron_v2__w, vlSelf->w);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__neuron_v2__neuron_v2__02Erst, vlSelf->neuron_v2__02Erst);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__neuron_v2__inptReady, vlSelf->inptReady);
    VL_ASSIGN_ISI(10,vlSelf->__Vcellinp__tanh_lut__addr, vlSelf->addr);
    VL_ASSIGN_ISI(8,vlSelf->__Vcellinp__NARNet__x_in, vlSelf->x_in);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__NARNet__x_ready, vlSelf->x_ready);
    VL_ASSIGN_SII(10,vlSelf->tanh_out, vlSelf->tanh_lut__DOT__tanh_out_reg);
    VL_ASSIGN_SII(8,vlSelf->y_out, vlSelf->NARNet__DOT__y_out_reg);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__NARNet__NARNet__02Erst, vlSelf->NARNet__02Erst);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__NARNet__enable, vlSelf->enable);
}

extern const VlWide<10>/*319:0*/ VNARNet__ConstPool__CONST_h53c2447d_0;

VL_ATTR_COLD void VNARNet___024root___initial__TOP__4(VNARNet___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNARNet__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNARNet___024root___initial__TOP__4\n"); );
    // Body
    vlSelf->neuron_v2__DOT__mult_res = 0U;
    vlSelf->neuron_v2__DOT__biasAdded = 0U;
    vlSelf->neuron_v2__DOT__acc = 0U;
    vlSelf->NARNet__DOT__weights_loaded = 0U;
    vlSelf->NARNet__DOT__ts = 0U;
    vlSelf->NARNet__DOT__delay_set = 0U;
    vlSelf->NARNet__DOT__tap = 0U;
    vlSelf->NARNet__DOT__xdl[0U] = 0x18U;
    vlSelf->NARNet__DOT__xdl[1U] = 0x18U;
    vlSelf->NARNet__DOT__xdl[2U] = 0x18U;
    vlSelf->NARNet__DOT__xdl[3U] = 0x18U;
    vlSelf->NARNet__DOT__xdl[4U] = 0x18U;
    vlSelf->NARNet__DOT__xdl[5U] = 0x18U;
    vlSelf->NARNet__DOT__xdl[6U] = 0x18U;
    vlSelf->NARNet__DOT__xdl[7U] = 0x18U;
    vlSelf->NARNet__DOT__xdl[8U] = 0x18U;
    vlSelf->NARNet__DOT__xdl[9U] = 0x18U;
    vlSelf->NARNet__DOT__xdl[0xaU] = 0x18U;
    vlSelf->NARNet__DOT__xdl[0xbU] = 0x18U;
    vlSelf->NARNet__DOT__xdl[0xcU] = 0x18U;
    vlSelf->NARNet__DOT__xdl[0xdU] = 0x18U;
    vlSelf->NARNet__DOT__xdl[0xeU] = 0x18U;
    vlSelf->NARNet__DOT__xdl[0xfU] = 0x18U;
    vlSelf->NARNet__DOT__xdl[0x10U] = 0U;
    vlSelf->NARNet__DOT__current_state = 0U;
    vlSelf->NARNet__DOT__l1_ind = 0U;
    vlSelf->NARNet__DOT__row = 0U;
    vlSelf->NARNet__DOT__wrom__DOT__rom_reg = 0U;
    VL_READMEM_N(false, 8, 256, 0, VL_CVT_PACK_STR_NW(10, VNARNet__ConstPool__CONST_h53c2447d_0)
                 ,  &(vlSelf->NARNet__DOT__wrom__DOT__rom)
                 , 0, ~0ULL);
    vlSelf->NARNet__DOT__bram_counter = 0U;
}

VL_ATTR_COLD void VNARNet___024root___settle__TOP__8(VNARNet___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNARNet__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNARNet___024root___settle__TOP__8\n"); );
    // Body
    VL_ASSIGN_SII(10,vlSelf->out, ((0x200U & (vlSelf->neuron_v2__DOT__acc 
                                              >> 0xfU)) 
                                   | (0x1ffU & (vlSelf->neuron_v2__DOT__acc 
                                                >> 9U))));
    vlSelf->NARNet__DOT____Vcellout__n1__out = (0xffffU 
                                                & (VL_MULS_III(16, 
                                                               (0xffffU 
                                                                & VL_EXTENDS_II(16,8, 
                                                                                (0xffU 
                                                                                & ((2U 
                                                                                == (IData)(vlSelf->NARNet__DOT__current_state))
                                                                                 ? 
                                                                                vlSelf->NARNet__DOT__w1
                                                                                [0U]
                                                                                [
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->NARNet__DOT__l1_ind))]
                                                                                 : 
                                                                                ((3U 
                                                                                == (IData)(vlSelf->NARNet__DOT__current_state))
                                                                                 ? 
                                                                                vlSelf->NARNet__DOT__w2
                                                                                [0U]
                                                                                 : 0U))))), 
                                                               (0xffffU 
                                                                & VL_EXTENDS_II(16,8, 
                                                                                (0xffU 
                                                                                & ((2U 
                                                                                == (IData)(vlSelf->NARNet__DOT__current_state))
                                                                                 ? 
                                                                                vlSelf->NARNet__DOT__tapdelay1
                                                                                [
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->NARNet__DOT__l1_ind))]
                                                                                 : 
                                                                                ((3U 
                                                                                == (IData)(vlSelf->NARNet__DOT__current_state))
                                                                                 ? (IData)(vlSelf->NARNet__DOT__n_reg1)
                                                                                 : 0U)))))) 
                                                   + 
                                                   VL_EXTENDS_II(16,8, (IData)(vlSelf->NARNet__DOT__b_n1))));
    vlSelf->NARNet__DOT____Vcellout__n2__out = (0xffffU 
                                                & (VL_MULS_III(16, 
                                                               (0xffffU 
                                                                & VL_EXTENDS_II(16,8, 
                                                                                (0xffU 
                                                                                & ((2U 
                                                                                == (IData)(vlSelf->NARNet__DOT__current_state))
                                                                                 ? 
                                                                                vlSelf->NARNet__DOT__w1
                                                                                [1U]
                                                                                [
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->NARNet__DOT__l1_ind))]
                                                                                 : 
                                                                                ((3U 
                                                                                == (IData)(vlSelf->NARNet__DOT__current_state))
                                                                                 ? 
                                                                                vlSelf->NARNet__DOT__w2
                                                                                [1U]
                                                                                 : 0U))))), 
                                                               (0xffffU 
                                                                & VL_EXTENDS_II(16,8, 
                                                                                (0xffU 
                                                                                & ((2U 
                                                                                == (IData)(vlSelf->NARNet__DOT__current_state))
                                                                                 ? 
                                                                                vlSelf->NARNet__DOT__tapdelay1
                                                                                [
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->NARNet__DOT__l1_ind))]
                                                                                 : 
                                                                                ((3U 
                                                                                == (IData)(vlSelf->NARNet__DOT__current_state))
                                                                                 ? (IData)(vlSelf->NARNet__DOT__n_reg2)
                                                                                 : 0U)))))) 
                                                   + 
                                                   VL_EXTENDS_II(16,8, (IData)(vlSelf->NARNet__DOT__b_n2))));
    vlSelf->NARNet__DOT____Vcellout__n3__out = (0xffffU 
                                                & (VL_MULS_III(16, 
                                                               (0xffffU 
                                                                & VL_EXTENDS_II(16,8, 
                                                                                (0xffU 
                                                                                & ((2U 
                                                                                == (IData)(vlSelf->NARNet__DOT__current_state))
                                                                                 ? 
                                                                                vlSelf->NARNet__DOT__w1
                                                                                [2U]
                                                                                [
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->NARNet__DOT__l1_ind))]
                                                                                 : 
                                                                                ((3U 
                                                                                == (IData)(vlSelf->NARNet__DOT__current_state))
                                                                                 ? 
                                                                                vlSelf->NARNet__DOT__w2
                                                                                [2U]
                                                                                 : 0U))))), 
                                                               (0xffffU 
                                                                & VL_EXTENDS_II(16,8, 
                                                                                (0xffU 
                                                                                & ((2U 
                                                                                == (IData)(vlSelf->NARNet__DOT__current_state))
                                                                                 ? 
                                                                                vlSelf->NARNet__DOT__tapdelay1
                                                                                [
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->NARNet__DOT__l1_ind))]
                                                                                 : 
                                                                                ((3U 
                                                                                == (IData)(vlSelf->NARNet__DOT__current_state))
                                                                                 ? (IData)(vlSelf->NARNet__DOT__n_reg3)
                                                                                 : 0U)))))) 
                                                   + 
                                                   VL_EXTENDS_II(16,8, (IData)(vlSelf->NARNet__DOT__b_n3))));
    vlSelf->NARNet__DOT____Vcellout__n4__out = (0xffffU 
                                                & (VL_MULS_III(16, 
                                                               (0xffffU 
                                                                & VL_EXTENDS_II(16,8, 
                                                                                (0xffU 
                                                                                & ((2U 
                                                                                == (IData)(vlSelf->NARNet__DOT__current_state))
                                                                                 ? 
                                                                                vlSelf->NARNet__DOT__w1
                                                                                [3U]
                                                                                [
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->NARNet__DOT__l1_ind))]
                                                                                 : 
                                                                                ((3U 
                                                                                == (IData)(vlSelf->NARNet__DOT__current_state))
                                                                                 ? 
                                                                                vlSelf->NARNet__DOT__w2
                                                                                [3U]
                                                                                 : 0U))))), 
                                                               (0xffffU 
                                                                & VL_EXTENDS_II(16,8, 
                                                                                (0xffU 
                                                                                & ((2U 
                                                                                == (IData)(vlSelf->NARNet__DOT__current_state))
                                                                                 ? 
                                                                                vlSelf->NARNet__DOT__tapdelay1
                                                                                [
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->NARNet__DOT__l1_ind))]
                                                                                 : 
                                                                                ((3U 
                                                                                == (IData)(vlSelf->NARNet__DOT__current_state))
                                                                                 ? (IData)(vlSelf->NARNet__DOT__n_reg4)
                                                                                 : 0U)))))) 
                                                   + 
                                                   VL_EXTENDS_II(16,8, (IData)(vlSelf->NARNet__DOT__b_n4))));
    vlSelf->NARNet__DOT____Vcellout__n5__out = (0xffffU 
                                                & (VL_MULS_III(16, 
                                                               (0xffffU 
                                                                & VL_EXTENDS_II(16,8, 
                                                                                (0xffU 
                                                                                & ((2U 
                                                                                == (IData)(vlSelf->NARNet__DOT__current_state))
                                                                                 ? 
                                                                                vlSelf->NARNet__DOT__w1
                                                                                [4U]
                                                                                [
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->NARNet__DOT__l1_ind))]
                                                                                 : 
                                                                                ((3U 
                                                                                == (IData)(vlSelf->NARNet__DOT__current_state))
                                                                                 ? 
                                                                                vlSelf->NARNet__DOT__w2
                                                                                [4U]
                                                                                 : 0U))))), 
                                                               (0xffffU 
                                                                & VL_EXTENDS_II(16,8, 
                                                                                (0xffU 
                                                                                & ((2U 
                                                                                == (IData)(vlSelf->NARNet__DOT__current_state))
                                                                                 ? 
                                                                                vlSelf->NARNet__DOT__tapdelay1
                                                                                [
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->NARNet__DOT__l1_ind))]
                                                                                 : 
                                                                                ((3U 
                                                                                == (IData)(vlSelf->NARNet__DOT__current_state))
                                                                                 ? (IData)(vlSelf->NARNet__DOT__n_reg5)
                                                                                 : 0U)))))) 
                                                   + 
                                                   VL_EXTENDS_II(16,8, (IData)(vlSelf->NARNet__DOT__b_n5))));
}

VL_ATTR_COLD void VNARNet___024root___eval_initial(VNARNet___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNARNet__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNARNet___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__NARNet__DOT__wrom__DOT__clk 
        = vlSelf->NARNet__DOT__wrom__DOT__clk;
    VNARNet___024root___initial__TOP__4(vlSelf);
    vlSelf->__Vclklast__TOP____Vcellinp__tanh_lut__tanh_lut__02Eclk 
        = vlSelf->__Vcellinp__tanh_lut__tanh_lut__02Eclk;
    vlSelf->__Vclklast__TOP____Vcellinp__neuron_v2__neuron_v2__02Eclk 
        = vlSelf->__Vcellinp__neuron_v2__neuron_v2__02Eclk;
    vlSelf->__Vclklast__TOP____Vcellinp__NARNet__NARNet__02Eclk 
        = vlSelf->__Vcellinp__NARNet__NARNet__02Eclk;
}

VL_ATTR_COLD void VNARNet___024root___eval_settle(VNARNet___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNARNet__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNARNet___024root___eval_settle\n"); );
    // Body
    VNARNet___024root___settle__TOP__3(vlSelf);
    VNARNet___024root___settle__TOP__8(vlSelf);
}

VL_ATTR_COLD void VNARNet___024root___final(VNARNet___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNARNet__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNARNet___024root___final\n"); );
}

VL_ATTR_COLD void VNARNet___024root___ctor_var_reset(VNARNet___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNARNet__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNARNet___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->__Vcellinp__neuron_v2__b = VL_RAND_RESET_I(10);
    vlSelf->__Vcellinp__neuron_v2__x = VL_RAND_RESET_I(10);
    vlSelf->__Vcellinp__neuron_v2__w = VL_RAND_RESET_I(10);
    vlSelf->__Vcellinp__neuron_v2__neuron_v2__02Erst = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__neuron_v2__inptReady = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__neuron_v2__neuron_v2__02Eclk = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__tanh_lut__tanh_lut__02Eclk = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__tanh_lut__addr = VL_RAND_RESET_I(10);
    vlSelf->__Vcellinp__NARNet__x_in = VL_RAND_RESET_I(8);
    vlSelf->__Vcellinp__NARNet__x_ready = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__NARNet__NARNet__02Erst = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__NARNet__enable = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__NARNet__NARNet__02Eclk = VL_RAND_RESET_I(1);
    vlSelf->neuron_v2__DOT__acc = VL_RAND_RESET_I(25);
    vlSelf->neuron_v2__DOT__mult_res = VL_RAND_RESET_I(21);
    vlSelf->neuron_v2__DOT__biasAdded = VL_RAND_RESET_I(1);
    vlSelf->tanh_lut__DOT__tanh_out_reg = VL_RAND_RESET_I(10);
    vlSelf->NARNet__DOT__x_in_reg = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->NARNet__DOT__b1[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        for (int __Vi1=0; __Vi1<16; ++__Vi1) {
            vlSelf->NARNet__DOT__w1[__Vi0][__Vi1] = VL_RAND_RESET_I(8);
        }
    }
    vlSelf->NARNet__DOT__b2 = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->NARNet__DOT__w2[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->NARNet__DOT__bram_counter = VL_RAND_RESET_I(8);
    vlSelf->NARNet__DOT__row = VL_RAND_RESET_I(3);
    vlSelf->NARNet__DOT__weights_loaded = VL_RAND_RESET_I(1);
    vlSelf->NARNet__DOT__current_state = VL_RAND_RESET_I(3);
    vlSelf->NARNet__DOT__ts = VL_RAND_RESET_I(9);
    vlSelf->NARNet__DOT__delay_set = VL_RAND_RESET_I(1);
    vlSelf->NARNet__DOT__b_n1 = VL_RAND_RESET_I(8);
    vlSelf->NARNet__DOT__b_n2 = VL_RAND_RESET_I(8);
    vlSelf->NARNet__DOT__b_n3 = VL_RAND_RESET_I(8);
    vlSelf->NARNet__DOT__b_n4 = VL_RAND_RESET_I(8);
    vlSelf->NARNet__DOT__b_n5 = VL_RAND_RESET_I(8);
    vlSelf->NARNet__DOT__n_reg1 = VL_RAND_RESET_I(8);
    vlSelf->NARNet__DOT__n_reg2 = VL_RAND_RESET_I(8);
    vlSelf->NARNet__DOT__n_reg3 = VL_RAND_RESET_I(8);
    vlSelf->NARNet__DOT__n_reg4 = VL_RAND_RESET_I(8);
    vlSelf->NARNet__DOT__n_reg5 = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->NARNet__DOT__tapdelay1[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<17; ++__Vi0) {
        vlSelf->NARNet__DOT__xdl[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->NARNet__DOT__tap = VL_RAND_RESET_I(5);
    vlSelf->NARNet__DOT__l1_ind = VL_RAND_RESET_I(5);
    vlSelf->NARNet__DOT____Vcellout__n1__out = VL_RAND_RESET_I(16);
    vlSelf->NARNet__DOT____Vcellout__n2__out = VL_RAND_RESET_I(16);
    vlSelf->NARNet__DOT____Vcellout__n3__out = VL_RAND_RESET_I(16);
    vlSelf->NARNet__DOT____Vcellout__n4__out = VL_RAND_RESET_I(16);
    vlSelf->NARNet__DOT____Vcellout__n5__out = VL_RAND_RESET_I(16);
    vlSelf->NARNet__DOT__y_out_reg = VL_RAND_RESET_I(8);
    vlSelf->NARNet__DOT__acc_res = VL_RAND_RESET_I(8);
    vlSelf->NARNet__DOT__xdts = VL_RAND_RESET_I(8);
    vlSelf->NARNet__DOT____Vlvbound_h8d390dc3__0 = VL_RAND_RESET_I(8);
    vlSelf->NARNet__DOT____Vlvbound_h2eb9a295__0 = VL_RAND_RESET_I(8);
    vlSelf->NARNet__DOT____Vlvbound_hd8f38ade__0 = VL_RAND_RESET_I(8);
    vlSelf->NARNet__DOT____Vlvbound_h6fa2b63f__0 = VL_RAND_RESET_I(8);
    vlSelf->NARNet__DOT__wrom__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->NARNet__DOT__wrom__DOT__rom[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->NARNet__DOT__wrom__DOT__rom_reg = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__NARNet__DOT__bram_counter = VL_RAND_RESET_I(8);
}
