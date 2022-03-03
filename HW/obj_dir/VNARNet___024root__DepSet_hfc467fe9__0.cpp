// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNARNet.h for the primary calling header

#include "verilated.h"

#include "VNARNet___024root.h"

VL_INLINE_OPT void VNARNet___024root___combo__TOP__2(VNARNet___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNARNet__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNARNet___024root___combo__TOP__2\n"); );
    // Body
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__tanh_lut__tanh_lut__02Eclk, vlSelf->tanh_lut__02Eclk);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__neuron_v2__neuron_v2__02Eclk, vlSelf->neuron_v2__02Eclk);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__NARNet__NARNet__02Eclk, vlSelf->NARNet__02Eclk);
}

extern const VlUnpacked<SData/*9:0*/, 1024> VNARNet__ConstPool__TABLE_h26ddaa67_0;

VL_INLINE_OPT void VNARNet___024root___sequent__TOP__5(VNARNet___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNARNet__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNARNet___024root___sequent__TOP__5\n"); );
    // Init
    SData/*9:0*/ __Vtableidx1;
    // Body
    __Vtableidx1 = vlSelf->__Vcellinp__tanh_lut__addr;
    vlSelf->tanh_lut__DOT__tanh_out_reg = VNARNet__ConstPool__TABLE_h26ddaa67_0
        [__Vtableidx1];
    VL_ASSIGN_SII(10,vlSelf->tanh_out, vlSelf->tanh_lut__DOT__tanh_out_reg);
}

VL_INLINE_OPT void VNARNet___024root___sequent__TOP__6(VNARNet___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNARNet__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNARNet___024root___sequent__TOP__6\n"); );
    // Init
    IData/*24:0*/ neuron_v2__DOT____Vconcswap_1_h606ec52b__0;
    IData/*24:0*/ neuron_v2__DOT____Vconcswap_1_hd7823fce__0;
    // Body
    if (vlSelf->__Vcellinp__neuron_v2__neuron_v2__02Erst) {
        vlSelf->neuron_v2__DOT__acc = 0U;
        vlSelf->neuron_v2__DOT__biasAdded = 0U;
    } else if (vlSelf->__Vcellinp__neuron_v2__inptReady) {
        vlSelf->neuron_v2__DOT__mult_res = (0x1fffffU 
                                            & VL_MULS_III(21, 
                                                          (0x1fffffU 
                                                           & VL_EXTENDS_II(21,10, (IData)(vlSelf->__Vcellinp__neuron_v2__w))), 
                                                          (0x1fffffU 
                                                           & VL_EXTENDS_II(21,10, (IData)(vlSelf->__Vcellinp__neuron_v2__x)))));
        neuron_v2__DOT____Vconcswap_1_h606ec52b__0 
            = (0x1ffffffU & ((0x3ffffffU & VL_EXTENDS_II(26,25, vlSelf->neuron_v2__DOT__acc)) 
                             + (0x3ffffffU & VL_EXTENDS_II(26,21, vlSelf->neuron_v2__DOT__mult_res))));
        vlSelf->neuron_v2__DOT__acc = neuron_v2__DOT____Vconcswap_1_h606ec52b__0;
    } else if ((1U & (~ (IData)(vlSelf->neuron_v2__DOT__biasAdded)))) {
        vlSelf->neuron_v2__DOT__biasAdded = 1U;
        neuron_v2__DOT____Vconcswap_1_hd7823fce__0 
            = (0x1ffffffU & ((0x3ffffffU & VL_EXTENDS_II(26,25, vlSelf->neuron_v2__DOT__acc)) 
                             + (0x3ffffffU & (VL_EXTENDS_II(26,10, (IData)(vlSelf->__Vcellinp__neuron_v2__b)) 
                                              << 9U))));
        vlSelf->neuron_v2__DOT__acc = neuron_v2__DOT____Vconcswap_1_hd7823fce__0;
    }
    VL_ASSIGN_SII(10,vlSelf->out, ((0x200U & (vlSelf->neuron_v2__DOT__acc 
                                              >> 0xfU)) 
                                   | (0x1ffU & (vlSelf->neuron_v2__DOT__acc 
                                                >> 9U))));
}

VL_INLINE_OPT void VNARNet___024root___sequent__TOP__7(VNARNet___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNARNet__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNARNet___024root___sequent__TOP__7\n"); );
    // Init
    CData/*0:0*/ __Vfunc_NARNet__DOT__tanh_LUT__0__Vfuncout;
    CData/*7:0*/ __Vfunc_NARNet__DOT__tanh_LUT__0__x;
    CData/*0:0*/ __Vfunc_NARNet__DOT__tanh_LUT__1__Vfuncout;
    CData/*7:0*/ __Vfunc_NARNet__DOT__tanh_LUT__1__x;
    CData/*0:0*/ __Vfunc_NARNet__DOT__tanh_LUT__2__Vfuncout;
    CData/*7:0*/ __Vfunc_NARNet__DOT__tanh_LUT__2__x;
    CData/*0:0*/ __Vfunc_NARNet__DOT__tanh_LUT__3__Vfuncout;
    CData/*7:0*/ __Vfunc_NARNet__DOT__tanh_LUT__3__x;
    CData/*0:0*/ __Vfunc_NARNet__DOT__tanh_LUT__4__Vfuncout;
    CData/*7:0*/ __Vfunc_NARNet__DOT__tanh_LUT__4__x;
    CData/*2:0*/ __Vdlyvdim0__NARNet__DOT__b1__v0;
    CData/*7:0*/ __Vdlyvval__NARNet__DOT__b1__v0;
    CData/*0:0*/ __Vdlyvset__NARNet__DOT__b1__v0;
    CData/*2:0*/ __Vdlyvdim0__NARNet__DOT__w1__v0;
    CData/*3:0*/ __Vdlyvdim1__NARNet__DOT__w1__v0;
    CData/*7:0*/ __Vdlyvval__NARNet__DOT__w1__v0;
    CData/*0:0*/ __Vdlyvset__NARNet__DOT__w1__v0;
    CData/*2:0*/ __Vdly__NARNet__DOT__row;
    CData/*2:0*/ __Vdlyvdim0__NARNet__DOT__w2__v0;
    CData/*7:0*/ __Vdlyvval__NARNet__DOT__w2__v0;
    CData/*0:0*/ __Vdlyvset__NARNet__DOT__w2__v0;
    CData/*2:0*/ __Vdly__NARNet__DOT__current_state;
    CData/*0:0*/ __Vdlyvset__NARNet__DOT__xdl__v0;
    CData/*7:0*/ __Vdly__NARNet__DOT__x_in_reg;
    CData/*3:0*/ __Vdlyvdim0__NARNet__DOT__tapdelay1__v0;
    CData/*7:0*/ __Vdlyvval__NARNet__DOT__tapdelay1__v0;
    CData/*0:0*/ __Vdlyvset__NARNet__DOT__tapdelay1__v0;
    CData/*4:0*/ __Vdlyvdim0__NARNet__DOT__xdl__v17;
    CData/*7:0*/ __Vdlyvval__NARNet__DOT__xdl__v17;
    CData/*0:0*/ __Vdlyvset__NARNet__DOT__xdl__v17;
    CData/*7:0*/ __Vdly__NARNet__DOT__acc_res;
    // Body
    __Vdly__NARNet__DOT__row = vlSelf->NARNet__DOT__row;
    vlSelf->__Vdly__NARNet__DOT__bram_counter = vlSelf->NARNet__DOT__bram_counter;
    __Vdlyvset__NARNet__DOT__b1__v0 = 0U;
    __Vdlyvset__NARNet__DOT__w2__v0 = 0U;
    __Vdlyvset__NARNet__DOT__w1__v0 = 0U;
    __Vdly__NARNet__DOT__acc_res = vlSelf->NARNet__DOT__acc_res;
    __Vdly__NARNet__DOT__x_in_reg = vlSelf->NARNet__DOT__x_in_reg;
    __Vdly__NARNet__DOT__current_state = vlSelf->NARNet__DOT__current_state;
    __Vdlyvset__NARNet__DOT__tapdelay1__v0 = 0U;
    __Vdlyvset__NARNet__DOT__xdl__v0 = 0U;
    __Vdlyvset__NARNet__DOT__xdl__v17 = 0U;
    if (vlSelf->__Vcellinp__NARNet__NARNet__02Erst) {
        __Vdly__NARNet__DOT__current_state = 0U;
        __Vdlyvset__NARNet__DOT__xdl__v0 = 1U;
    } else if (vlSelf->__Vcellinp__NARNet__enable) {
        if ((0U == (IData)(vlSelf->NARNet__DOT__current_state))) {
            if (((IData)(vlSelf->__Vcellinp__NARNet__x_ready) 
                 & (IData)(vlSelf->NARNet__DOT__weights_loaded))) {
                __Vdly__NARNet__DOT__x_in_reg = vlSelf->__Vcellinp__NARNet__x_in;
                __Vdly__NARNet__DOT__current_state = 1U;
            }
        } else if ((1U == (IData)(vlSelf->NARNet__DOT__current_state))) {
            if (vlSelf->NARNet__DOT__delay_set) {
                if ((0x10U > (IData)(vlSelf->NARNet__DOT__tap))) {
                    __Vdlyvval__NARNet__DOT__tapdelay1__v0 
                        = ((0x10U >= (0x1fU & VL_MODDIV_III(32, 
                                                            (((IData)(vlSelf->NARNet__DOT__xdts) 
                                                              - (IData)(vlSelf->NARNet__DOT__tap)) 
                                                             - (IData)(1U)), (IData)(0x11U))))
                            ? vlSelf->NARNet__DOT__xdl
                           [(0x1fU & VL_MODDIV_III(32, 
                                                   (((IData)(vlSelf->NARNet__DOT__xdts) 
                                                     - (IData)(vlSelf->NARNet__DOT__tap)) 
                                                    - (IData)(1U)), (IData)(0x11U)))]
                            : 0U);
                    __Vdlyvset__NARNet__DOT__tapdelay1__v0 = 1U;
                    __Vdlyvdim0__NARNet__DOT__tapdelay1__v0 
                        = (0xfU & (IData)(vlSelf->NARNet__DOT__tap));
                    vlSelf->NARNet__DOT__tap = (0x1fU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->NARNet__DOT__tap)));
                } else {
                    vlSelf->NARNet__DOT__tap = 0U;
                    __Vdly__NARNet__DOT__current_state = 2U;
                    vlSelf->NARNet__DOT__delay_set = 0U;
                    vlSelf->NARNet__DOT__tap = 0U;
                    vlSelf->NARNet__DOT__b_n1 = vlSelf->NARNet__DOT__b1
                        [0U];
                    vlSelf->NARNet__DOT__b_n2 = vlSelf->NARNet__DOT__b1
                        [1U];
                    vlSelf->NARNet__DOT__b_n3 = vlSelf->NARNet__DOT__b1
                        [2U];
                    vlSelf->NARNet__DOT__b_n4 = vlSelf->NARNet__DOT__b1
                        [3U];
                    vlSelf->NARNet__DOT__b_n5 = vlSelf->NARNet__DOT__b1
                        [4U];
                }
            } else {
                vlSelf->NARNet__DOT____Vlvbound_h6fa2b63f__0 
                    = vlSelf->NARNet__DOT__x_in_reg;
                if ((0x10U >= (0x1fU & VL_MODDIV_III(32, 
                                                     ((IData)(0x10U) 
                                                      + (IData)(vlSelf->NARNet__DOT__ts)), (IData)(0x11U))))) {
                    __Vdlyvval__NARNet__DOT__xdl__v17 
                        = vlSelf->NARNet__DOT____Vlvbound_h6fa2b63f__0;
                    __Vdlyvset__NARNet__DOT__xdl__v17 = 1U;
                    __Vdlyvdim0__NARNet__DOT__xdl__v17 
                        = (0x1fU & VL_MODDIV_III(32, 
                                                 ((IData)(0x10U) 
                                                  + (IData)(vlSelf->NARNet__DOT__ts)), (IData)(0x11U)));
                }
                vlSelf->NARNet__DOT__delay_set = 1U;
                vlSelf->NARNet__DOT__xdts = (0xffU 
                                             & VL_MODDIV_III(32, 
                                                             ((IData)(0x10U) 
                                                              + (IData)(vlSelf->NARNet__DOT__ts)), (IData)(0x11U)));
            }
        } else if ((2U == (IData)(vlSelf->NARNet__DOT__current_state))) {
            if ((0x10U > (IData)(vlSelf->NARNet__DOT__l1_ind))) {
                vlSelf->NARNet__DOT__l1_ind = (0x1fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->NARNet__DOT__l1_ind)));
                vlSelf->NARNet__DOT__n_reg1 = (0xffU 
                                               & (IData)(vlSelf->NARNet__DOT____Vcellout__n1__out));
                vlSelf->NARNet__DOT__n_reg2 = (0xffU 
                                               & (IData)(vlSelf->NARNet__DOT____Vcellout__n2__out));
                vlSelf->NARNet__DOT__n_reg3 = (0xffU 
                                               & (IData)(vlSelf->NARNet__DOT____Vcellout__n3__out));
                vlSelf->NARNet__DOT__n_reg4 = (0xffU 
                                               & (IData)(vlSelf->NARNet__DOT____Vcellout__n4__out));
                vlSelf->NARNet__DOT__n_reg5 = (0xffU 
                                               & (IData)(vlSelf->NARNet__DOT____Vcellout__n5__out));
                vlSelf->NARNet__DOT__b_n1 = (0xffU 
                                             & (IData)(vlSelf->NARNet__DOT____Vcellout__n1__out));
                vlSelf->NARNet__DOT__b_n2 = (0xffU 
                                             & (IData)(vlSelf->NARNet__DOT____Vcellout__n2__out));
                vlSelf->NARNet__DOT__b_n3 = (0xffU 
                                             & (IData)(vlSelf->NARNet__DOT____Vcellout__n3__out));
                vlSelf->NARNet__DOT__b_n4 = (0xffU 
                                             & (IData)(vlSelf->NARNet__DOT____Vcellout__n4__out));
                vlSelf->NARNet__DOT__b_n5 = (0xffU 
                                             & (IData)(vlSelf->NARNet__DOT____Vcellout__n5__out));
            } else {
                __Vfunc_NARNet__DOT__tanh_LUT__0__x 
                    = (0xffU & (IData)(vlSelf->NARNet__DOT____Vcellout__n1__out));
                __Vfunc_NARNet__DOT__tanh_LUT__1__x 
                    = (0xffU & (IData)(vlSelf->NARNet__DOT____Vcellout__n2__out));
                __Vfunc_NARNet__DOT__tanh_LUT__2__x 
                    = (0xffU & (IData)(vlSelf->NARNet__DOT____Vcellout__n3__out));
                __Vfunc_NARNet__DOT__tanh_LUT__3__x 
                    = (0xffU & (IData)(vlSelf->NARNet__DOT____Vcellout__n4__out));
                __Vfunc_NARNet__DOT__tanh_LUT__4__x 
                    = (0xffU & (IData)(vlSelf->NARNet__DOT____Vcellout__n5__out));
                vlSelf->NARNet__DOT__l1_ind = 0U;
                if (((((((((0U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                           | (1U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                          | (2U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                         | (3U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                        | (4U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                       | (5U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                      | (6U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                     | (7U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__0__Vfuncout 
                        = ((0U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                           & ((1U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                              & ((2U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                 | ((3U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                    & ((4U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                       | ((5U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                          & (6U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))))))));
                } else if (((((((((8U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                  | (9U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                                 | (0xaU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                                | (0xbU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                               | (0xcU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                              | (0xdU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                             | (0xeU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                            | (0xfU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__0__Vfuncout 
                        = ((8U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                           | ((9U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                              & ((0xaU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                 | ((0xbU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                    & ((0xcU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                       | ((0xdU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                          & (0xeU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))))))));
                } else if (((((((((0x10U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                  | (0x11U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                                 | (0x12U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                                | (0x13U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                               | (0x14U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                              | (0x15U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                             | (0x16U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                            | (0x17U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__0__Vfuncout 
                        = ((0x10U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                           | ((0x11U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                              & ((0x12U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                 | ((0x13U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                    & ((0x14U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                       | ((0x15U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                          & (0x16U 
                                             == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))))))));
                } else if (((((((((0x18U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                  | (0x19U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                                 | (0x1aU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                                | (0x1bU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                               | (0x1cU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                              | (0x1dU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                             | (0x1eU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                            | (0x1fU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__0__Vfuncout 
                        = ((0x18U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                           | ((0x19U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                              & ((0x1aU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                 | ((0x1bU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                    & ((0x1cU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                       | ((0x1dU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                          & (0x1eU 
                                             == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))))))));
                } else if (((((((((0x20U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                  | (0x21U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                                 | (0x22U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                                | (0x23U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                               | (0x24U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                              | (0x25U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                             | (0x26U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                            | (0x27U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__0__Vfuncout 
                        = ((0x20U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                           | ((0x21U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                              & ((0x22U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                 | ((0x23U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                    | ((0x24U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                       & ((0x25U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                          | (0x26U 
                                             != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))))))));
                } else if (((((((((0x28U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                  | (0x29U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                                 | (0x2aU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                                | (0x2bU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                               | (0x2cU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                              | (0x2dU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                             | (0x2eU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                            | (0x2fU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__0__Vfuncout 
                        = ((0x28U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                           & ((0x29U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                              & ((0x2aU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                 | ((0x2bU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                    & ((0x2cU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                       | ((0x2dU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                          & (0x2eU 
                                             == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))))))));
                } else if (((((((((0x30U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                  | (0x31U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                                 | (0x32U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                                | (0x33U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                               | (0x34U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                              | (0x35U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                             | (0x36U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                            | (0x37U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__0__Vfuncout 
                        = ((0x30U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                           | ((0x31U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                              & ((0x32U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                 | ((0x33U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                    & ((0x34U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                       | ((0x35U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                          & (0x36U 
                                             == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))))))));
                } else if (((((((((0x38U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                  | (0x39U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                                 | (0x3aU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                                | (0x3bU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                               | (0x3cU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                              | (0x3dU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                             | (0x3eU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                            | (0x3fU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__0__Vfuncout 
                        = ((0x38U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                           | ((0x39U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                              & ((0x3aU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                 | ((0x3bU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                    & ((0x3cU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                       | ((0x3dU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                          & (0x3eU 
                                             == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))))))));
                } else if (((((((((0x40U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                  | (0x41U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                                 | (0x42U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                                | (0x43U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                               | (0x44U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                              | (0x45U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                             | (0x46U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                            | (0x47U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__0__Vfuncout 
                        = ((0x40U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                           & ((0x41U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                              & ((0x42U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                 | ((0x43U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                    | ((0x44U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                       & ((0x45U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                          & (0x46U 
                                             != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))))))));
                } else if (((((((((0x48U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                  | (0x49U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                                 | (0x4aU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                                | (0x4bU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                               | (0x4cU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                              | (0x4dU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                             | (0x4eU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                            | (0x4fU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__0__Vfuncout 
                        = ((0x48U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                           | ((0x49U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                              & ((0x4aU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                 & ((0x4bU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                    | ((0x4cU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                       & (0x4dU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)))))));
                } else if (((((((((0x50U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                  | (0x51U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                                 | (0x52U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                                | (0x53U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                               | (0x54U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                              | (0x55U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                             | (0x56U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                            | (0x57U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__0__Vfuncout 
                        = ((0x50U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                           & ((0x51U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                              & ((0x52U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                 | ((0x53U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                    & ((0x54U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                       & (0x55U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)))))));
                } else if (((((((((0x58U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                  | (0x59U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                                 | (0x5aU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                                | (0x5bU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                               | (0x5cU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                              | (0x5dU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                             | (0x5eU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                            | (0x5fU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__0__Vfuncout 
                        = ((0x58U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                           | ((0x59U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                              & ((0x5aU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                 & ((0x5bU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                    | ((0x5cU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                       & ((0x5dU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                          | (0x5eU 
                                             == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))))))));
                } else if (((((((((0x60U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                  | (0x61U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                                 | (0x62U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                                | (0x63U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                               | (0x64U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                              | (0x65U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                             | (0x66U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                            | (0x67U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__0__Vfuncout 
                        = ((0x60U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                           | ((0x61U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                              & ((0x62U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                 | ((0x63U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                    | ((0x64U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                       & ((0x65U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                          | (0x66U 
                                             != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))))))));
                } else if (((((((((0x68U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                  | (0x69U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                                 | (0x6aU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                                | (0x6bU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                               | (0x6cU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                              | (0x6dU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                             | (0x6eU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                            | (0x6fU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__0__Vfuncout 
                        = ((0x68U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                           & ((0x69U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                              & ((0x6aU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                 | ((0x6bU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                    & ((0x6cU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                       | ((0x6dU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                          & (0x6eU 
                                             == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))))))));
                } else if (((((((((0x70U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                  | (0x71U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                                 | (0x72U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                                | (0x73U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                               | (0x74U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                              | (0x75U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                             | (0x76U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                            | (0x77U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__0__Vfuncout 
                        = ((0x70U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                           | ((0x71U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                              & ((0x72U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                 | ((0x73U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                    & ((0x74U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                       | ((0x75U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                          & (0x76U 
                                             == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))))))));
                } else if (((((((((0x78U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                  | (0x79U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                                 | (0x7aU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                                | (0x7bU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                               | (0x7cU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                              | (0x7dU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                             | (0x7eU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                            | (0x7fU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__0__Vfuncout 
                        = ((0x78U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                           | ((0x79U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                              & ((0x7aU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                 | ((0x7bU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                    & ((0x7cU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                       | ((0x7dU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                          & (0x7eU 
                                             == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))))))));
                } else if (((((((((0x80U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                  | (0x81U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                                 | (0x82U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                                | (0x83U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                               | (0x84U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                              | (0x85U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                             | (0x86U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                            | (0x87U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__0__Vfuncout = 1U;
                } else if (((((((((0x88U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                  | (0x89U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                                 | (0x8aU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                                | (0x8bU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                               | (0x8cU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                              | (0x8dU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                             | (0x8eU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                            | (0x8fU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__0__Vfuncout 
                        = (0x88U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x));
                } else if (((((((((0x90U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                  | (0x91U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                                 | (0x92U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                                | (0x93U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                               | (0x94U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                              | (0x95U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                             | (0x96U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                            | (0x97U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__0__Vfuncout 
                        = ((0x90U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                           & ((0x91U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                              & (0x92U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))));
                } else if (((((((((0x98U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                  | (0x99U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                                 | (0x9aU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                                | (0x9bU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                               | (0x9cU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                              | (0x9dU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                             | (0x9eU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                            | (0x9fU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__0__Vfuncout 
                        = ((0x98U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                           | (0x99U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)));
                } else if (((((((((0xa0U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                  | (0xa1U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                                 | (0xa2U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                                | (0xa3U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                               | (0xa4U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                              | (0xa5U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                             | (0xa6U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                            | (0xa7U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__0__Vfuncout 
                        = ((0xa0U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                           | ((0xa1U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                              | ((0xa2U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                 | ((0xa3U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                    | (0xa4U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))))));
                } else if (((((((((0xa8U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                  | (0xa9U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                                 | (0xaaU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                                | (0xabU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                               | (0xacU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                              | (0xadU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                             | (0xaeU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                            | (0xafU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__0__Vfuncout 
                        = ((0xa8U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                           & ((0xa9U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                              & ((0xaaU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                 | ((0xabU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                    | ((0xacU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                       | (0xadU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)))))));
                } else if (((((((((0xb0U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                  | (0xb1U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                                 | (0xb2U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                                | (0xb3U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                               | (0xb4U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                              | (0xb5U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                             | (0xb6U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                            | (0xb7U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__0__Vfuncout 
                        = ((0xb0U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                           & ((0xb1U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                              & ((0xb2U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                 | ((0xb3U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                    | (0xb4U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))))));
                } else if (((((((((0xb8U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                  | (0xb9U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                                 | (0xbaU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                                | (0xbbU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                               | (0xbcU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                              | (0xbdU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                             | (0xbeU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                            | (0xbfU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__0__Vfuncout 
                        = ((0xb8U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                           | ((0xb9U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                              | ((0xbaU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                 | ((0xbbU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                    & (0xbcU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))))));
                } else if (((((((((0xc0U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                  | (0xc1U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                                 | (0xc2U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                                | (0xc3U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                               | (0xc4U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                              | (0xc5U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                             | (0xc6U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                            | (0xc7U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__0__Vfuncout 
                        = ((0xc0U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                           & ((0xc1U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                              & ((0xc2U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                 | ((0xc3U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                    | ((0xc4U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                       & ((0xc5U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                          & (0xc6U 
                                             != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))))))));
                } else if (((((((((0xc8U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                  | (0xc9U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                                 | (0xcaU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                                | (0xcbU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                               | (0xccU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                              | (0xcdU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                             | (0xceU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                            | (0xcfU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__0__Vfuncout 
                        = ((0xc8U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                           | ((0xc9U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                              & ((0xcaU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                 & ((0xcbU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                    | ((0xccU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                       & (0xcdU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)))))));
                } else if (((((((((0xd0U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                  | (0xd1U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                                 | (0xd2U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                                | (0xd3U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                               | (0xd4U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                              | (0xd5U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                             | (0xd6U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                            | (0xd7U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__0__Vfuncout 
                        = ((0xd0U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                           & ((0xd1U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                              & ((0xd2U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                 | ((0xd3U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                    & ((0xd4U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                       & (0xd5U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)))))));
                } else if (((((((((0xd8U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                  | (0xd9U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                                 | (0xdaU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                                | (0xdbU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                               | (0xdcU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                              | (0xddU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                             | (0xdeU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                            | (0xdfU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__0__Vfuncout 
                        = ((0xd8U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                           | ((0xd9U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                              & ((0xdaU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                 & ((0xdbU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                    | ((0xdcU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                       & ((0xddU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                          | (0xdeU 
                                             == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))))))));
                } else if (((((((((0xe0U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                  | (0xe1U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                                 | (0xe2U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                                | (0xe3U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                               | (0xe4U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                              | (0xe5U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                             | (0xe6U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                            | (0xe7U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__0__Vfuncout 
                        = ((0xe0U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                           | ((0xe1U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                              & ((0xe2U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                 | ((0xe3U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                    | ((0xe4U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                       & ((0xe5U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                          | (0xe6U 
                                             != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))))))));
                } else if (((((((((0xe8U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                  | (0xe9U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                                 | (0xeaU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                                | (0xebU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                               | (0xecU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                              | (0xedU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                             | (0xeeU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                            | (0xefU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__0__Vfuncout 
                        = ((0xe8U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                           & ((0xe9U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                              & ((0xeaU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                 | ((0xebU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                    & ((0xecU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                       | ((0xedU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                          & (0xeeU 
                                             == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))))))));
                } else if (((((((((0xf0U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                  | (0xf1U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                                 | (0xf2U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                                | (0xf3U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                               | (0xf4U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                              | (0xf5U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                             | (0xf6U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) 
                            | (0xf7U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__0__Vfuncout 
                        = ((0xf0U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                           | ((0xf1U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                              & ((0xf2U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                 | ((0xf3U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                    & ((0xf4U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                       | ((0xf5U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x)) 
                                          & (0xf6U 
                                             == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))))))));
                } else if ((0xf8U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__0__Vfuncout = 1U;
                } else if ((0xf9U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__0__Vfuncout = 0U;
                } else if ((0xfaU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__0__Vfuncout = 1U;
                } else if ((0xfbU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__0__Vfuncout = 0U;
                } else if ((0xfcU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__0__Vfuncout = 1U;
                } else if ((0xfdU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__0__Vfuncout = 0U;
                } else if ((0xfeU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__0__x))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__0__Vfuncout = 1U;
                }
                if (((((((((0U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                           | (1U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                          | (2U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                         | (3U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                        | (4U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                       | (5U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                      | (6U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                     | (7U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__1__Vfuncout 
                        = ((0U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                           & ((1U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                              & ((2U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                 | ((3U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                    & ((4U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                       | ((5U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                          & (6U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))))))));
                } else if (((((((((8U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                  | (9U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                                 | (0xaU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                                | (0xbU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                               | (0xcU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                              | (0xdU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                             | (0xeU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                            | (0xfU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__1__Vfuncout 
                        = ((8U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                           | ((9U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                              & ((0xaU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                 | ((0xbU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                    & ((0xcU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                       | ((0xdU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                          & (0xeU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))))))));
                } else if (((((((((0x10U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                  | (0x11U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                                 | (0x12U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                                | (0x13U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                               | (0x14U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                              | (0x15U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                             | (0x16U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                            | (0x17U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__1__Vfuncout 
                        = ((0x10U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                           | ((0x11U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                              & ((0x12U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                 | ((0x13U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                    & ((0x14U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                       | ((0x15U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                          & (0x16U 
                                             == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))))))));
                } else if (((((((((0x18U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                  | (0x19U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                                 | (0x1aU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                                | (0x1bU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                               | (0x1cU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                              | (0x1dU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                             | (0x1eU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                            | (0x1fU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__1__Vfuncout 
                        = ((0x18U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                           | ((0x19U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                              & ((0x1aU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                 | ((0x1bU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                    & ((0x1cU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                       | ((0x1dU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                          & (0x1eU 
                                             == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))))))));
                } else if (((((((((0x20U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                  | (0x21U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                                 | (0x22U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                                | (0x23U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                               | (0x24U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                              | (0x25U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                             | (0x26U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                            | (0x27U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__1__Vfuncout 
                        = ((0x20U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                           | ((0x21U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                              & ((0x22U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                 | ((0x23U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                    | ((0x24U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                       & ((0x25U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                          | (0x26U 
                                             != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))))))));
                } else if (((((((((0x28U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                  | (0x29U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                                 | (0x2aU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                                | (0x2bU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                               | (0x2cU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                              | (0x2dU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                             | (0x2eU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                            | (0x2fU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__1__Vfuncout 
                        = ((0x28U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                           & ((0x29U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                              & ((0x2aU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                 | ((0x2bU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                    & ((0x2cU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                       | ((0x2dU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                          & (0x2eU 
                                             == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))))))));
                } else if (((((((((0x30U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                  | (0x31U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                                 | (0x32U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                                | (0x33U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                               | (0x34U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                              | (0x35U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                             | (0x36U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                            | (0x37U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__1__Vfuncout 
                        = ((0x30U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                           | ((0x31U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                              & ((0x32U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                 | ((0x33U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                    & ((0x34U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                       | ((0x35U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                          & (0x36U 
                                             == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))))))));
                } else if (((((((((0x38U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                  | (0x39U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                                 | (0x3aU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                                | (0x3bU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                               | (0x3cU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                              | (0x3dU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                             | (0x3eU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                            | (0x3fU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__1__Vfuncout 
                        = ((0x38U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                           | ((0x39U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                              & ((0x3aU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                 | ((0x3bU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                    & ((0x3cU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                       | ((0x3dU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                          & (0x3eU 
                                             == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))))))));
                } else if (((((((((0x40U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                  | (0x41U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                                 | (0x42U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                                | (0x43U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                               | (0x44U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                              | (0x45U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                             | (0x46U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                            | (0x47U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__1__Vfuncout 
                        = ((0x40U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                           & ((0x41U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                              & ((0x42U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                 | ((0x43U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                    | ((0x44U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                       & ((0x45U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                          & (0x46U 
                                             != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))))))));
                } else if (((((((((0x48U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                  | (0x49U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                                 | (0x4aU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                                | (0x4bU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                               | (0x4cU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                              | (0x4dU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                             | (0x4eU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                            | (0x4fU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__1__Vfuncout 
                        = ((0x48U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                           | ((0x49U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                              & ((0x4aU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                 & ((0x4bU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                    | ((0x4cU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                       & (0x4dU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)))))));
                } else if (((((((((0x50U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                  | (0x51U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                                 | (0x52U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                                | (0x53U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                               | (0x54U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                              | (0x55U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                             | (0x56U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                            | (0x57U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__1__Vfuncout 
                        = ((0x50U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                           & ((0x51U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                              & ((0x52U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                 | ((0x53U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                    & ((0x54U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                       & (0x55U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)))))));
                } else if (((((((((0x58U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                  | (0x59U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                                 | (0x5aU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                                | (0x5bU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                               | (0x5cU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                              | (0x5dU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                             | (0x5eU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                            | (0x5fU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__1__Vfuncout 
                        = ((0x58U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                           | ((0x59U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                              & ((0x5aU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                 & ((0x5bU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                    | ((0x5cU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                       & ((0x5dU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                          | (0x5eU 
                                             == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))))))));
                } else if (((((((((0x60U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                  | (0x61U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                                 | (0x62U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                                | (0x63U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                               | (0x64U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                              | (0x65U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                             | (0x66U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                            | (0x67U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__1__Vfuncout 
                        = ((0x60U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                           | ((0x61U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                              & ((0x62U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                 | ((0x63U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                    | ((0x64U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                       & ((0x65U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                          | (0x66U 
                                             != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))))))));
                } else if (((((((((0x68U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                  | (0x69U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                                 | (0x6aU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                                | (0x6bU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                               | (0x6cU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                              | (0x6dU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                             | (0x6eU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                            | (0x6fU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__1__Vfuncout 
                        = ((0x68U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                           & ((0x69U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                              & ((0x6aU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                 | ((0x6bU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                    & ((0x6cU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                       | ((0x6dU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                          & (0x6eU 
                                             == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))))))));
                } else if (((((((((0x70U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                  | (0x71U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                                 | (0x72U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                                | (0x73U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                               | (0x74U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                              | (0x75U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                             | (0x76U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                            | (0x77U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__1__Vfuncout 
                        = ((0x70U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                           | ((0x71U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                              & ((0x72U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                 | ((0x73U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                    & ((0x74U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                       | ((0x75U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                          & (0x76U 
                                             == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))))))));
                } else if (((((((((0x78U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                  | (0x79U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                                 | (0x7aU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                                | (0x7bU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                               | (0x7cU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                              | (0x7dU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                             | (0x7eU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                            | (0x7fU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__1__Vfuncout 
                        = ((0x78U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                           | ((0x79U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                              & ((0x7aU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                 | ((0x7bU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                    & ((0x7cU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                       | ((0x7dU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                          & (0x7eU 
                                             == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))))))));
                } else if (((((((((0x80U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                  | (0x81U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                                 | (0x82U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                                | (0x83U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                               | (0x84U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                              | (0x85U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                             | (0x86U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                            | (0x87U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__1__Vfuncout = 1U;
                } else if (((((((((0x88U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                  | (0x89U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                                 | (0x8aU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                                | (0x8bU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                               | (0x8cU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                              | (0x8dU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                             | (0x8eU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                            | (0x8fU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__1__Vfuncout 
                        = (0x88U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x));
                } else if (((((((((0x90U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                  | (0x91U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                                 | (0x92U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                                | (0x93U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                               | (0x94U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                              | (0x95U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                             | (0x96U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                            | (0x97U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__1__Vfuncout 
                        = ((0x90U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                           & ((0x91U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                              & (0x92U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))));
                } else if (((((((((0x98U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                  | (0x99U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                                 | (0x9aU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                                | (0x9bU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                               | (0x9cU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                              | (0x9dU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                             | (0x9eU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                            | (0x9fU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__1__Vfuncout 
                        = ((0x98U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                           | (0x99U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)));
                } else if (((((((((0xa0U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                  | (0xa1U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                                 | (0xa2U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                                | (0xa3U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                               | (0xa4U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                              | (0xa5U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                             | (0xa6U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                            | (0xa7U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__1__Vfuncout 
                        = ((0xa0U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                           | ((0xa1U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                              | ((0xa2U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                 | ((0xa3U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                    | (0xa4U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))))));
                } else if (((((((((0xa8U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                  | (0xa9U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                                 | (0xaaU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                                | (0xabU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                               | (0xacU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                              | (0xadU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                             | (0xaeU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                            | (0xafU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__1__Vfuncout 
                        = ((0xa8U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                           & ((0xa9U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                              & ((0xaaU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                 | ((0xabU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                    | ((0xacU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                       | (0xadU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)))))));
                } else if (((((((((0xb0U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                  | (0xb1U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                                 | (0xb2U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                                | (0xb3U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                               | (0xb4U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                              | (0xb5U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                             | (0xb6U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                            | (0xb7U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__1__Vfuncout 
                        = ((0xb0U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                           & ((0xb1U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                              & ((0xb2U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                 | ((0xb3U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                    | (0xb4U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))))));
                } else if (((((((((0xb8U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                  | (0xb9U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                                 | (0xbaU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                                | (0xbbU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                               | (0xbcU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                              | (0xbdU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                             | (0xbeU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                            | (0xbfU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__1__Vfuncout 
                        = ((0xb8U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                           | ((0xb9U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                              | ((0xbaU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                 | ((0xbbU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                    & (0xbcU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))))));
                } else if (((((((((0xc0U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                  | (0xc1U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                                 | (0xc2U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                                | (0xc3U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                               | (0xc4U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                              | (0xc5U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                             | (0xc6U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                            | (0xc7U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__1__Vfuncout 
                        = ((0xc0U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                           & ((0xc1U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                              & ((0xc2U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                 | ((0xc3U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                    | ((0xc4U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                       & ((0xc5U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                          & (0xc6U 
                                             != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))))))));
                } else if (((((((((0xc8U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                  | (0xc9U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                                 | (0xcaU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                                | (0xcbU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                               | (0xccU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                              | (0xcdU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                             | (0xceU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                            | (0xcfU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__1__Vfuncout 
                        = ((0xc8U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                           | ((0xc9U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                              & ((0xcaU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                 & ((0xcbU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                    | ((0xccU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                       & (0xcdU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)))))));
                } else if (((((((((0xd0U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                  | (0xd1U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                                 | (0xd2U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                                | (0xd3U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                               | (0xd4U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                              | (0xd5U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                             | (0xd6U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                            | (0xd7U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__1__Vfuncout 
                        = ((0xd0U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                           & ((0xd1U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                              & ((0xd2U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                 | ((0xd3U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                    & ((0xd4U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                       & (0xd5U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)))))));
                } else if (((((((((0xd8U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                  | (0xd9U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                                 | (0xdaU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                                | (0xdbU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                               | (0xdcU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                              | (0xddU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                             | (0xdeU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                            | (0xdfU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__1__Vfuncout 
                        = ((0xd8U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                           | ((0xd9U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                              & ((0xdaU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                 & ((0xdbU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                    | ((0xdcU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                       & ((0xddU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                          | (0xdeU 
                                             == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))))))));
                } else if (((((((((0xe0U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                  | (0xe1U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                                 | (0xe2U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                                | (0xe3U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                               | (0xe4U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                              | (0xe5U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                             | (0xe6U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                            | (0xe7U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__1__Vfuncout 
                        = ((0xe0U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                           | ((0xe1U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                              & ((0xe2U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                 | ((0xe3U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                    | ((0xe4U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                       & ((0xe5U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                          | (0xe6U 
                                             != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))))))));
                } else if (((((((((0xe8U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                  | (0xe9U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                                 | (0xeaU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                                | (0xebU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                               | (0xecU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                              | (0xedU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                             | (0xeeU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                            | (0xefU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__1__Vfuncout 
                        = ((0xe8U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                           & ((0xe9U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                              & ((0xeaU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                 | ((0xebU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                    & ((0xecU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                       | ((0xedU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                          & (0xeeU 
                                             == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))))))));
                } else if (((((((((0xf0U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                  | (0xf1U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                                 | (0xf2U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                                | (0xf3U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                               | (0xf4U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                              | (0xf5U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                             | (0xf6U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) 
                            | (0xf7U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__1__Vfuncout 
                        = ((0xf0U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                           | ((0xf1U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                              & ((0xf2U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                 | ((0xf3U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                    & ((0xf4U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                       | ((0xf5U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x)) 
                                          & (0xf6U 
                                             == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))))))));
                } else if ((0xf8U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__1__Vfuncout = 1U;
                } else if ((0xf9U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__1__Vfuncout = 0U;
                } else if ((0xfaU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__1__Vfuncout = 1U;
                } else if ((0xfbU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__1__Vfuncout = 0U;
                } else if ((0xfcU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__1__Vfuncout = 1U;
                } else if ((0xfdU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__1__Vfuncout = 0U;
                } else if ((0xfeU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__1__x))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__1__Vfuncout = 1U;
                }
                if (((((((((0U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                           | (1U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                          | (2U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                         | (3U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                        | (4U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                       | (5U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                      | (6U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                     | (7U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__2__Vfuncout 
                        = ((0U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                           & ((1U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                              & ((2U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                 | ((3U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                    & ((4U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                       | ((5U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                          & (6U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))))))));
                } else if (((((((((8U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                  | (9U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                                 | (0xaU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                                | (0xbU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                               | (0xcU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                              | (0xdU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                             | (0xeU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                            | (0xfU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__2__Vfuncout 
                        = ((8U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                           | ((9U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                              & ((0xaU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                 | ((0xbU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                    & ((0xcU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                       | ((0xdU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                          & (0xeU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))))))));
                } else if (((((((((0x10U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                  | (0x11U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                                 | (0x12U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                                | (0x13U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                               | (0x14U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                              | (0x15U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                             | (0x16U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                            | (0x17U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__2__Vfuncout 
                        = ((0x10U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                           | ((0x11U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                              & ((0x12U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                 | ((0x13U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                    & ((0x14U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                       | ((0x15U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                          & (0x16U 
                                             == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))))))));
                } else if (((((((((0x18U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                  | (0x19U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                                 | (0x1aU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                                | (0x1bU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                               | (0x1cU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                              | (0x1dU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                             | (0x1eU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                            | (0x1fU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__2__Vfuncout 
                        = ((0x18U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                           | ((0x19U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                              & ((0x1aU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                 | ((0x1bU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                    & ((0x1cU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                       | ((0x1dU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                          & (0x1eU 
                                             == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))))))));
                } else if (((((((((0x20U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                  | (0x21U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                                 | (0x22U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                                | (0x23U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                               | (0x24U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                              | (0x25U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                             | (0x26U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                            | (0x27U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__2__Vfuncout 
                        = ((0x20U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                           | ((0x21U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                              & ((0x22U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                 | ((0x23U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                    | ((0x24U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                       & ((0x25U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                          | (0x26U 
                                             != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))))))));
                } else if (((((((((0x28U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                  | (0x29U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                                 | (0x2aU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                                | (0x2bU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                               | (0x2cU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                              | (0x2dU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                             | (0x2eU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                            | (0x2fU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__2__Vfuncout 
                        = ((0x28U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                           & ((0x29U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                              & ((0x2aU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                 | ((0x2bU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                    & ((0x2cU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                       | ((0x2dU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                          & (0x2eU 
                                             == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))))))));
                } else if (((((((((0x30U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                  | (0x31U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                                 | (0x32U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                                | (0x33U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                               | (0x34U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                              | (0x35U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                             | (0x36U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                            | (0x37U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__2__Vfuncout 
                        = ((0x30U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                           | ((0x31U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                              & ((0x32U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                 | ((0x33U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                    & ((0x34U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                       | ((0x35U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                          & (0x36U 
                                             == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))))))));
                } else if (((((((((0x38U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                  | (0x39U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                                 | (0x3aU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                                | (0x3bU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                               | (0x3cU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                              | (0x3dU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                             | (0x3eU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                            | (0x3fU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__2__Vfuncout 
                        = ((0x38U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                           | ((0x39U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                              & ((0x3aU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                 | ((0x3bU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                    & ((0x3cU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                       | ((0x3dU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                          & (0x3eU 
                                             == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))))))));
                } else if (((((((((0x40U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                  | (0x41U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                                 | (0x42U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                                | (0x43U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                               | (0x44U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                              | (0x45U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                             | (0x46U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                            | (0x47U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__2__Vfuncout 
                        = ((0x40U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                           & ((0x41U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                              & ((0x42U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                 | ((0x43U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                    | ((0x44U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                       & ((0x45U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                          & (0x46U 
                                             != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))))))));
                } else if (((((((((0x48U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                  | (0x49U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                                 | (0x4aU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                                | (0x4bU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                               | (0x4cU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                              | (0x4dU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                             | (0x4eU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                            | (0x4fU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__2__Vfuncout 
                        = ((0x48U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                           | ((0x49U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                              & ((0x4aU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                 & ((0x4bU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                    | ((0x4cU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                       & (0x4dU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)))))));
                } else if (((((((((0x50U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                  | (0x51U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                                 | (0x52U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                                | (0x53U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                               | (0x54U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                              | (0x55U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                             | (0x56U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                            | (0x57U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__2__Vfuncout 
                        = ((0x50U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                           & ((0x51U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                              & ((0x52U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                 | ((0x53U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                    & ((0x54U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                       & (0x55U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)))))));
                } else if (((((((((0x58U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                  | (0x59U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                                 | (0x5aU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                                | (0x5bU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                               | (0x5cU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                              | (0x5dU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                             | (0x5eU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                            | (0x5fU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__2__Vfuncout 
                        = ((0x58U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                           | ((0x59U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                              & ((0x5aU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                 & ((0x5bU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                    | ((0x5cU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                       & ((0x5dU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                          | (0x5eU 
                                             == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))))))));
                } else if (((((((((0x60U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                  | (0x61U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                                 | (0x62U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                                | (0x63U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                               | (0x64U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                              | (0x65U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                             | (0x66U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                            | (0x67U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__2__Vfuncout 
                        = ((0x60U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                           | ((0x61U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                              & ((0x62U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                 | ((0x63U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                    | ((0x64U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                       & ((0x65U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                          | (0x66U 
                                             != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))))))));
                } else if (((((((((0x68U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                  | (0x69U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                                 | (0x6aU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                                | (0x6bU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                               | (0x6cU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                              | (0x6dU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                             | (0x6eU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                            | (0x6fU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__2__Vfuncout 
                        = ((0x68U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                           & ((0x69U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                              & ((0x6aU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                 | ((0x6bU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                    & ((0x6cU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                       | ((0x6dU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                          & (0x6eU 
                                             == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))))))));
                } else if (((((((((0x70U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                  | (0x71U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                                 | (0x72U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                                | (0x73U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                               | (0x74U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                              | (0x75U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                             | (0x76U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                            | (0x77U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__2__Vfuncout 
                        = ((0x70U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                           | ((0x71U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                              & ((0x72U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                 | ((0x73U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                    & ((0x74U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                       | ((0x75U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                          & (0x76U 
                                             == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))))))));
                } else if (((((((((0x78U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                  | (0x79U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                                 | (0x7aU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                                | (0x7bU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                               | (0x7cU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                              | (0x7dU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                             | (0x7eU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                            | (0x7fU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__2__Vfuncout 
                        = ((0x78U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                           | ((0x79U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                              & ((0x7aU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                 | ((0x7bU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                    & ((0x7cU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                       | ((0x7dU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                          & (0x7eU 
                                             == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))))))));
                } else if (((((((((0x80U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                  | (0x81U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                                 | (0x82U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                                | (0x83U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                               | (0x84U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                              | (0x85U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                             | (0x86U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                            | (0x87U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__2__Vfuncout = 1U;
                } else if (((((((((0x88U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                  | (0x89U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                                 | (0x8aU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                                | (0x8bU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                               | (0x8cU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                              | (0x8dU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                             | (0x8eU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                            | (0x8fU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__2__Vfuncout 
                        = (0x88U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x));
                } else if (((((((((0x90U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                  | (0x91U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                                 | (0x92U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                                | (0x93U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                               | (0x94U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                              | (0x95U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                             | (0x96U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                            | (0x97U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__2__Vfuncout 
                        = ((0x90U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                           & ((0x91U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                              & (0x92U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))));
                } else if (((((((((0x98U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                  | (0x99U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                                 | (0x9aU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                                | (0x9bU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                               | (0x9cU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                              | (0x9dU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                             | (0x9eU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                            | (0x9fU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__2__Vfuncout 
                        = ((0x98U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                           | (0x99U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)));
                } else if (((((((((0xa0U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                  | (0xa1U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                                 | (0xa2U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                                | (0xa3U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                               | (0xa4U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                              | (0xa5U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                             | (0xa6U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                            | (0xa7U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__2__Vfuncout 
                        = ((0xa0U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                           | ((0xa1U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                              | ((0xa2U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                 | ((0xa3U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                    | (0xa4U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))))));
                } else if (((((((((0xa8U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                  | (0xa9U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                                 | (0xaaU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                                | (0xabU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                               | (0xacU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                              | (0xadU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                             | (0xaeU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                            | (0xafU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__2__Vfuncout 
                        = ((0xa8U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                           & ((0xa9U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                              & ((0xaaU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                 | ((0xabU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                    | ((0xacU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                       | (0xadU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)))))));
                } else if (((((((((0xb0U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                  | (0xb1U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                                 | (0xb2U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                                | (0xb3U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                               | (0xb4U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                              | (0xb5U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                             | (0xb6U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                            | (0xb7U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__2__Vfuncout 
                        = ((0xb0U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                           & ((0xb1U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                              & ((0xb2U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                 | ((0xb3U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                    | (0xb4U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))))));
                } else if (((((((((0xb8U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                  | (0xb9U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                                 | (0xbaU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                                | (0xbbU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                               | (0xbcU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                              | (0xbdU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                             | (0xbeU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                            | (0xbfU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__2__Vfuncout 
                        = ((0xb8U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                           | ((0xb9U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                              | ((0xbaU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                 | ((0xbbU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                    & (0xbcU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))))));
                } else if (((((((((0xc0U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                  | (0xc1U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                                 | (0xc2U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                                | (0xc3U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                               | (0xc4U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                              | (0xc5U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                             | (0xc6U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                            | (0xc7U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__2__Vfuncout 
                        = ((0xc0U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                           & ((0xc1U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                              & ((0xc2U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                 | ((0xc3U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                    | ((0xc4U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                       & ((0xc5U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                          & (0xc6U 
                                             != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))))))));
                } else if (((((((((0xc8U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                  | (0xc9U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                                 | (0xcaU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                                | (0xcbU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                               | (0xccU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                              | (0xcdU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                             | (0xceU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                            | (0xcfU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__2__Vfuncout 
                        = ((0xc8U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                           | ((0xc9U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                              & ((0xcaU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                 & ((0xcbU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                    | ((0xccU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                       & (0xcdU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)))))));
                } else if (((((((((0xd0U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                  | (0xd1U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                                 | (0xd2U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                                | (0xd3U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                               | (0xd4U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                              | (0xd5U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                             | (0xd6U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                            | (0xd7U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__2__Vfuncout 
                        = ((0xd0U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                           & ((0xd1U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                              & ((0xd2U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                 | ((0xd3U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                    & ((0xd4U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                       & (0xd5U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)))))));
                } else if (((((((((0xd8U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                  | (0xd9U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                                 | (0xdaU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                                | (0xdbU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                               | (0xdcU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                              | (0xddU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                             | (0xdeU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                            | (0xdfU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__2__Vfuncout 
                        = ((0xd8U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                           | ((0xd9U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                              & ((0xdaU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                 & ((0xdbU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                    | ((0xdcU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                       & ((0xddU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                          | (0xdeU 
                                             == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))))))));
                } else if (((((((((0xe0U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                  | (0xe1U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                                 | (0xe2U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                                | (0xe3U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                               | (0xe4U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                              | (0xe5U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                             | (0xe6U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                            | (0xe7U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__2__Vfuncout 
                        = ((0xe0U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                           | ((0xe1U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                              & ((0xe2U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                 | ((0xe3U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                    | ((0xe4U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                       & ((0xe5U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                          | (0xe6U 
                                             != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))))))));
                } else if (((((((((0xe8U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                  | (0xe9U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                                 | (0xeaU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                                | (0xebU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                               | (0xecU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                              | (0xedU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                             | (0xeeU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                            | (0xefU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__2__Vfuncout 
                        = ((0xe8U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                           & ((0xe9U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                              & ((0xeaU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                 | ((0xebU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                    & ((0xecU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                       | ((0xedU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                          & (0xeeU 
                                             == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))))))));
                } else if (((((((((0xf0U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                  | (0xf1U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                                 | (0xf2U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                                | (0xf3U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                               | (0xf4U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                              | (0xf5U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                             | (0xf6U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) 
                            | (0xf7U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__2__Vfuncout 
                        = ((0xf0U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                           | ((0xf1U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                              & ((0xf2U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                 | ((0xf3U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                    & ((0xf4U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                       | ((0xf5U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x)) 
                                          & (0xf6U 
                                             == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))))))));
                } else if ((0xf8U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__2__Vfuncout = 1U;
                } else if ((0xf9U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__2__Vfuncout = 0U;
                } else if ((0xfaU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__2__Vfuncout = 1U;
                } else if ((0xfbU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__2__Vfuncout = 0U;
                } else if ((0xfcU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__2__Vfuncout = 1U;
                } else if ((0xfdU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__2__Vfuncout = 0U;
                } else if ((0xfeU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__2__x))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__2__Vfuncout = 1U;
                }
                if (((((((((0U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                           | (1U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                          | (2U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                         | (3U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                        | (4U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                       | (5U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                      | (6U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                     | (7U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__3__Vfuncout 
                        = ((0U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                           & ((1U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                              & ((2U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                 | ((3U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                    & ((4U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                       | ((5U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                          & (6U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))))))));
                } else if (((((((((8U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                  | (9U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                                 | (0xaU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                                | (0xbU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                               | (0xcU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                              | (0xdU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                             | (0xeU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                            | (0xfU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__3__Vfuncout 
                        = ((8U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                           | ((9U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                              & ((0xaU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                 | ((0xbU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                    & ((0xcU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                       | ((0xdU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                          & (0xeU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))))))));
                } else if (((((((((0x10U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                  | (0x11U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                                 | (0x12U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                                | (0x13U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                               | (0x14U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                              | (0x15U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                             | (0x16U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                            | (0x17U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__3__Vfuncout 
                        = ((0x10U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                           | ((0x11U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                              & ((0x12U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                 | ((0x13U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                    & ((0x14U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                       | ((0x15U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                          & (0x16U 
                                             == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))))))));
                } else if (((((((((0x18U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                  | (0x19U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                                 | (0x1aU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                                | (0x1bU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                               | (0x1cU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                              | (0x1dU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                             | (0x1eU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                            | (0x1fU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__3__Vfuncout 
                        = ((0x18U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                           | ((0x19U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                              & ((0x1aU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                 | ((0x1bU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                    & ((0x1cU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                       | ((0x1dU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                          & (0x1eU 
                                             == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))))))));
                } else if (((((((((0x20U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                  | (0x21U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                                 | (0x22U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                                | (0x23U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                               | (0x24U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                              | (0x25U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                             | (0x26U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                            | (0x27U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__3__Vfuncout 
                        = ((0x20U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                           | ((0x21U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                              & ((0x22U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                 | ((0x23U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                    | ((0x24U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                       & ((0x25U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                          | (0x26U 
                                             != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))))))));
                } else if (((((((((0x28U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                  | (0x29U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                                 | (0x2aU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                                | (0x2bU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                               | (0x2cU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                              | (0x2dU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                             | (0x2eU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                            | (0x2fU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__3__Vfuncout 
                        = ((0x28U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                           & ((0x29U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                              & ((0x2aU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                 | ((0x2bU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                    & ((0x2cU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                       | ((0x2dU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                          & (0x2eU 
                                             == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))))))));
                } else if (((((((((0x30U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                  | (0x31U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                                 | (0x32U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                                | (0x33U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                               | (0x34U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                              | (0x35U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                             | (0x36U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                            | (0x37U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__3__Vfuncout 
                        = ((0x30U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                           | ((0x31U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                              & ((0x32U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                 | ((0x33U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                    & ((0x34U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                       | ((0x35U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                          & (0x36U 
                                             == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))))))));
                } else if (((((((((0x38U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                  | (0x39U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                                 | (0x3aU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                                | (0x3bU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                               | (0x3cU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                              | (0x3dU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                             | (0x3eU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                            | (0x3fU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__3__Vfuncout 
                        = ((0x38U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                           | ((0x39U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                              & ((0x3aU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                 | ((0x3bU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                    & ((0x3cU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                       | ((0x3dU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                          & (0x3eU 
                                             == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))))))));
                } else if (((((((((0x40U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                  | (0x41U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                                 | (0x42U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                                | (0x43U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                               | (0x44U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                              | (0x45U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                             | (0x46U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                            | (0x47U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__3__Vfuncout 
                        = ((0x40U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                           & ((0x41U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                              & ((0x42U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                 | ((0x43U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                    | ((0x44U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                       & ((0x45U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                          & (0x46U 
                                             != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))))))));
                } else if (((((((((0x48U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                  | (0x49U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                                 | (0x4aU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                                | (0x4bU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                               | (0x4cU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                              | (0x4dU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                             | (0x4eU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                            | (0x4fU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__3__Vfuncout 
                        = ((0x48U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                           | ((0x49U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                              & ((0x4aU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                 & ((0x4bU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                    | ((0x4cU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                       & (0x4dU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)))))));
                } else if (((((((((0x50U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                  | (0x51U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                                 | (0x52U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                                | (0x53U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                               | (0x54U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                              | (0x55U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                             | (0x56U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                            | (0x57U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__3__Vfuncout 
                        = ((0x50U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                           & ((0x51U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                              & ((0x52U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                 | ((0x53U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                    & ((0x54U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                       & (0x55U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)))))));
                } else if (((((((((0x58U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                  | (0x59U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                                 | (0x5aU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                                | (0x5bU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                               | (0x5cU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                              | (0x5dU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                             | (0x5eU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                            | (0x5fU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__3__Vfuncout 
                        = ((0x58U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                           | ((0x59U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                              & ((0x5aU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                 & ((0x5bU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                    | ((0x5cU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                       & ((0x5dU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                          | (0x5eU 
                                             == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))))))));
                } else if (((((((((0x60U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                  | (0x61U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                                 | (0x62U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                                | (0x63U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                               | (0x64U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                              | (0x65U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                             | (0x66U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                            | (0x67U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__3__Vfuncout 
                        = ((0x60U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                           | ((0x61U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                              & ((0x62U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                 | ((0x63U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                    | ((0x64U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                       & ((0x65U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                          | (0x66U 
                                             != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))))))));
                } else if (((((((((0x68U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                  | (0x69U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                                 | (0x6aU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                                | (0x6bU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                               | (0x6cU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                              | (0x6dU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                             | (0x6eU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                            | (0x6fU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__3__Vfuncout 
                        = ((0x68U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                           & ((0x69U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                              & ((0x6aU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                 | ((0x6bU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                    & ((0x6cU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                       | ((0x6dU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                          & (0x6eU 
                                             == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))))))));
                } else if (((((((((0x70U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                  | (0x71U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                                 | (0x72U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                                | (0x73U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                               | (0x74U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                              | (0x75U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                             | (0x76U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                            | (0x77U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__3__Vfuncout 
                        = ((0x70U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                           | ((0x71U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                              & ((0x72U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                 | ((0x73U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                    & ((0x74U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                       | ((0x75U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                          & (0x76U 
                                             == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))))))));
                } else if (((((((((0x78U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                  | (0x79U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                                 | (0x7aU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                                | (0x7bU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                               | (0x7cU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                              | (0x7dU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                             | (0x7eU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                            | (0x7fU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__3__Vfuncout 
                        = ((0x78U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                           | ((0x79U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                              & ((0x7aU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                 | ((0x7bU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                    & ((0x7cU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                       | ((0x7dU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                          & (0x7eU 
                                             == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))))))));
                } else if (((((((((0x80U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                  | (0x81U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                                 | (0x82U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                                | (0x83U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                               | (0x84U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                              | (0x85U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                             | (0x86U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                            | (0x87U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__3__Vfuncout = 1U;
                } else if (((((((((0x88U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                  | (0x89U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                                 | (0x8aU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                                | (0x8bU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                               | (0x8cU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                              | (0x8dU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                             | (0x8eU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                            | (0x8fU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__3__Vfuncout 
                        = (0x88U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x));
                } else if (((((((((0x90U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                  | (0x91U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                                 | (0x92U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                                | (0x93U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                               | (0x94U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                              | (0x95U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                             | (0x96U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                            | (0x97U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__3__Vfuncout 
                        = ((0x90U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                           & ((0x91U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                              & (0x92U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))));
                } else if (((((((((0x98U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                  | (0x99U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                                 | (0x9aU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                                | (0x9bU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                               | (0x9cU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                              | (0x9dU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                             | (0x9eU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                            | (0x9fU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__3__Vfuncout 
                        = ((0x98U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                           | (0x99U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)));
                } else if (((((((((0xa0U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                  | (0xa1U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                                 | (0xa2U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                                | (0xa3U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                               | (0xa4U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                              | (0xa5U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                             | (0xa6U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                            | (0xa7U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__3__Vfuncout 
                        = ((0xa0U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                           | ((0xa1U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                              | ((0xa2U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                 | ((0xa3U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                    | (0xa4U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))))));
                } else if (((((((((0xa8U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                  | (0xa9U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                                 | (0xaaU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                                | (0xabU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                               | (0xacU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                              | (0xadU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                             | (0xaeU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                            | (0xafU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__3__Vfuncout 
                        = ((0xa8U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                           & ((0xa9U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                              & ((0xaaU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                 | ((0xabU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                    | ((0xacU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                       | (0xadU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)))))));
                } else if (((((((((0xb0U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                  | (0xb1U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                                 | (0xb2U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                                | (0xb3U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                               | (0xb4U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                              | (0xb5U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                             | (0xb6U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                            | (0xb7U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__3__Vfuncout 
                        = ((0xb0U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                           & ((0xb1U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                              & ((0xb2U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                 | ((0xb3U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                    | (0xb4U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))))));
                } else if (((((((((0xb8U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                  | (0xb9U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                                 | (0xbaU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                                | (0xbbU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                               | (0xbcU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                              | (0xbdU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                             | (0xbeU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                            | (0xbfU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__3__Vfuncout 
                        = ((0xb8U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                           | ((0xb9U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                              | ((0xbaU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                 | ((0xbbU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                    & (0xbcU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))))));
                } else if (((((((((0xc0U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                  | (0xc1U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                                 | (0xc2U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                                | (0xc3U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                               | (0xc4U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                              | (0xc5U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                             | (0xc6U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                            | (0xc7U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__3__Vfuncout 
                        = ((0xc0U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                           & ((0xc1U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                              & ((0xc2U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                 | ((0xc3U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                    | ((0xc4U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                       & ((0xc5U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                          & (0xc6U 
                                             != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))))))));
                } else if (((((((((0xc8U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                  | (0xc9U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                                 | (0xcaU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                                | (0xcbU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                               | (0xccU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                              | (0xcdU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                             | (0xceU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                            | (0xcfU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__3__Vfuncout 
                        = ((0xc8U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                           | ((0xc9U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                              & ((0xcaU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                 & ((0xcbU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                    | ((0xccU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                       & (0xcdU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)))))));
                } else if (((((((((0xd0U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                  | (0xd1U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                                 | (0xd2U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                                | (0xd3U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                               | (0xd4U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                              | (0xd5U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                             | (0xd6U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                            | (0xd7U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__3__Vfuncout 
                        = ((0xd0U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                           & ((0xd1U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                              & ((0xd2U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                 | ((0xd3U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                    & ((0xd4U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                       & (0xd5U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)))))));
                } else if (((((((((0xd8U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                  | (0xd9U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                                 | (0xdaU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                                | (0xdbU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                               | (0xdcU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                              | (0xddU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                             | (0xdeU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                            | (0xdfU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__3__Vfuncout 
                        = ((0xd8U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                           | ((0xd9U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                              & ((0xdaU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                 & ((0xdbU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                    | ((0xdcU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                       & ((0xddU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                          | (0xdeU 
                                             == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))))))));
                } else if (((((((((0xe0U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                  | (0xe1U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                                 | (0xe2U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                                | (0xe3U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                               | (0xe4U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                              | (0xe5U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                             | (0xe6U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                            | (0xe7U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__3__Vfuncout 
                        = ((0xe0U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                           | ((0xe1U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                              & ((0xe2U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                 | ((0xe3U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                    | ((0xe4U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                       & ((0xe5U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                          | (0xe6U 
                                             != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))))))));
                } else if (((((((((0xe8U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                  | (0xe9U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                                 | (0xeaU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                                | (0xebU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                               | (0xecU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                              | (0xedU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                             | (0xeeU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                            | (0xefU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__3__Vfuncout 
                        = ((0xe8U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                           & ((0xe9U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                              & ((0xeaU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                 | ((0xebU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                    & ((0xecU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                       | ((0xedU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                          & (0xeeU 
                                             == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))))))));
                } else if (((((((((0xf0U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                  | (0xf1U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                                 | (0xf2U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                                | (0xf3U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                               | (0xf4U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                              | (0xf5U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                             | (0xf6U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) 
                            | (0xf7U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__3__Vfuncout 
                        = ((0xf0U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                           | ((0xf1U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                              & ((0xf2U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                 | ((0xf3U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                    & ((0xf4U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                       | ((0xf5U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x)) 
                                          & (0xf6U 
                                             == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))))))));
                } else if ((0xf8U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__3__Vfuncout = 1U;
                } else if ((0xf9U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__3__Vfuncout = 0U;
                } else if ((0xfaU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__3__Vfuncout = 1U;
                } else if ((0xfbU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__3__Vfuncout = 0U;
                } else if ((0xfcU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__3__Vfuncout = 1U;
                } else if ((0xfdU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__3__Vfuncout = 0U;
                } else if ((0xfeU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__3__x))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__3__Vfuncout = 1U;
                }
                if (((((((((0U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                           | (1U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                          | (2U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                         | (3U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                        | (4U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                       | (5U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                      | (6U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                     | (7U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__4__Vfuncout 
                        = ((0U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                           & ((1U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                              & ((2U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                 | ((3U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                    & ((4U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                       | ((5U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                          & (6U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))))))));
                } else if (((((((((8U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                  | (9U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                                 | (0xaU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                                | (0xbU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                               | (0xcU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                              | (0xdU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                             | (0xeU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                            | (0xfU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__4__Vfuncout 
                        = ((8U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                           | ((9U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                              & ((0xaU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                 | ((0xbU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                    & ((0xcU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                       | ((0xdU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                          & (0xeU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))))))));
                } else if (((((((((0x10U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                  | (0x11U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                                 | (0x12U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                                | (0x13U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                               | (0x14U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                              | (0x15U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                             | (0x16U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                            | (0x17U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__4__Vfuncout 
                        = ((0x10U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                           | ((0x11U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                              & ((0x12U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                 | ((0x13U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                    & ((0x14U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                       | ((0x15U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                          & (0x16U 
                                             == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))))))));
                } else if (((((((((0x18U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                  | (0x19U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                                 | (0x1aU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                                | (0x1bU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                               | (0x1cU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                              | (0x1dU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                             | (0x1eU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                            | (0x1fU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__4__Vfuncout 
                        = ((0x18U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                           | ((0x19U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                              & ((0x1aU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                 | ((0x1bU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                    & ((0x1cU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                       | ((0x1dU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                          & (0x1eU 
                                             == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))))))));
                } else if (((((((((0x20U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                  | (0x21U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                                 | (0x22U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                                | (0x23U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                               | (0x24U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                              | (0x25U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                             | (0x26U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                            | (0x27U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__4__Vfuncout 
                        = ((0x20U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                           | ((0x21U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                              & ((0x22U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                 | ((0x23U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                    | ((0x24U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                       & ((0x25U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                          | (0x26U 
                                             != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))))))));
                } else if (((((((((0x28U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                  | (0x29U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                                 | (0x2aU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                                | (0x2bU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                               | (0x2cU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                              | (0x2dU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                             | (0x2eU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                            | (0x2fU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__4__Vfuncout 
                        = ((0x28U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                           & ((0x29U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                              & ((0x2aU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                 | ((0x2bU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                    & ((0x2cU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                       | ((0x2dU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                          & (0x2eU 
                                             == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))))))));
                } else if (((((((((0x30U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                  | (0x31U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                                 | (0x32U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                                | (0x33U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                               | (0x34U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                              | (0x35U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                             | (0x36U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                            | (0x37U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__4__Vfuncout 
                        = ((0x30U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                           | ((0x31U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                              & ((0x32U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                 | ((0x33U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                    & ((0x34U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                       | ((0x35U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                          & (0x36U 
                                             == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))))))));
                } else if (((((((((0x38U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                  | (0x39U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                                 | (0x3aU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                                | (0x3bU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                               | (0x3cU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                              | (0x3dU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                             | (0x3eU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                            | (0x3fU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__4__Vfuncout 
                        = ((0x38U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                           | ((0x39U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                              & ((0x3aU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                 | ((0x3bU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                    & ((0x3cU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                       | ((0x3dU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                          & (0x3eU 
                                             == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))))))));
                } else if (((((((((0x40U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                  | (0x41U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                                 | (0x42U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                                | (0x43U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                               | (0x44U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                              | (0x45U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                             | (0x46U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                            | (0x47U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__4__Vfuncout 
                        = ((0x40U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                           & ((0x41U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                              & ((0x42U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                 | ((0x43U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                    | ((0x44U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                       & ((0x45U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                          & (0x46U 
                                             != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))))))));
                } else if (((((((((0x48U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                  | (0x49U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                                 | (0x4aU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                                | (0x4bU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                               | (0x4cU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                              | (0x4dU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                             | (0x4eU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                            | (0x4fU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__4__Vfuncout 
                        = ((0x48U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                           | ((0x49U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                              & ((0x4aU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                 & ((0x4bU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                    | ((0x4cU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                       & (0x4dU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)))))));
                } else if (((((((((0x50U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                  | (0x51U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                                 | (0x52U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                                | (0x53U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                               | (0x54U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                              | (0x55U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                             | (0x56U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                            | (0x57U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__4__Vfuncout 
                        = ((0x50U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                           & ((0x51U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                              & ((0x52U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                 | ((0x53U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                    & ((0x54U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                       & (0x55U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)))))));
                } else if (((((((((0x58U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                  | (0x59U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                                 | (0x5aU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                                | (0x5bU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                               | (0x5cU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                              | (0x5dU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                             | (0x5eU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                            | (0x5fU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__4__Vfuncout 
                        = ((0x58U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                           | ((0x59U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                              & ((0x5aU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                 & ((0x5bU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                    | ((0x5cU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                       & ((0x5dU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                          | (0x5eU 
                                             == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))))))));
                } else if (((((((((0x60U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                  | (0x61U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                                 | (0x62U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                                | (0x63U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                               | (0x64U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                              | (0x65U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                             | (0x66U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                            | (0x67U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__4__Vfuncout 
                        = ((0x60U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                           | ((0x61U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                              & ((0x62U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                 | ((0x63U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                    | ((0x64U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                       & ((0x65U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                          | (0x66U 
                                             != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))))))));
                } else if (((((((((0x68U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                  | (0x69U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                                 | (0x6aU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                                | (0x6bU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                               | (0x6cU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                              | (0x6dU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                             | (0x6eU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                            | (0x6fU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__4__Vfuncout 
                        = ((0x68U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                           & ((0x69U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                              & ((0x6aU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                 | ((0x6bU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                    & ((0x6cU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                       | ((0x6dU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                          & (0x6eU 
                                             == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))))))));
                } else if (((((((((0x70U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                  | (0x71U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                                 | (0x72U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                                | (0x73U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                               | (0x74U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                              | (0x75U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                             | (0x76U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                            | (0x77U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__4__Vfuncout 
                        = ((0x70U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                           | ((0x71U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                              & ((0x72U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                 | ((0x73U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                    & ((0x74U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                       | ((0x75U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                          & (0x76U 
                                             == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))))))));
                } else if (((((((((0x78U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                  | (0x79U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                                 | (0x7aU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                                | (0x7bU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                               | (0x7cU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                              | (0x7dU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                             | (0x7eU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                            | (0x7fU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__4__Vfuncout 
                        = ((0x78U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                           | ((0x79U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                              & ((0x7aU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                 | ((0x7bU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                    & ((0x7cU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                       | ((0x7dU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                          & (0x7eU 
                                             == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))))))));
                } else if (((((((((0x80U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                  | (0x81U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                                 | (0x82U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                                | (0x83U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                               | (0x84U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                              | (0x85U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                             | (0x86U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                            | (0x87U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__4__Vfuncout = 1U;
                } else if (((((((((0x88U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                  | (0x89U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                                 | (0x8aU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                                | (0x8bU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                               | (0x8cU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                              | (0x8dU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                             | (0x8eU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                            | (0x8fU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__4__Vfuncout 
                        = (0x88U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x));
                } else if (((((((((0x90U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                  | (0x91U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                                 | (0x92U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                                | (0x93U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                               | (0x94U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                              | (0x95U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                             | (0x96U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                            | (0x97U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__4__Vfuncout 
                        = ((0x90U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                           & ((0x91U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                              & (0x92U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))));
                } else if (((((((((0x98U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                  | (0x99U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                                 | (0x9aU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                                | (0x9bU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                               | (0x9cU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                              | (0x9dU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                             | (0x9eU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                            | (0x9fU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__4__Vfuncout 
                        = ((0x98U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                           | (0x99U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)));
                } else if (((((((((0xa0U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                  | (0xa1U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                                 | (0xa2U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                                | (0xa3U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                               | (0xa4U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                              | (0xa5U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                             | (0xa6U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                            | (0xa7U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__4__Vfuncout 
                        = ((0xa0U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                           | ((0xa1U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                              | ((0xa2U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                 | ((0xa3U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                    | (0xa4U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))))));
                } else if (((((((((0xa8U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                  | (0xa9U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                                 | (0xaaU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                                | (0xabU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                               | (0xacU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                              | (0xadU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                             | (0xaeU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                            | (0xafU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__4__Vfuncout 
                        = ((0xa8U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                           & ((0xa9U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                              & ((0xaaU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                 | ((0xabU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                    | ((0xacU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                       | (0xadU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)))))));
                } else if (((((((((0xb0U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                  | (0xb1U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                                 | (0xb2U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                                | (0xb3U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                               | (0xb4U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                              | (0xb5U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                             | (0xb6U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                            | (0xb7U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__4__Vfuncout 
                        = ((0xb0U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                           & ((0xb1U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                              & ((0xb2U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                 | ((0xb3U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                    | (0xb4U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))))));
                } else if (((((((((0xb8U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                  | (0xb9U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                                 | (0xbaU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                                | (0xbbU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                               | (0xbcU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                              | (0xbdU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                             | (0xbeU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                            | (0xbfU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__4__Vfuncout 
                        = ((0xb8U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                           | ((0xb9U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                              | ((0xbaU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                 | ((0xbbU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                    & (0xbcU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))))));
                } else if (((((((((0xc0U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                  | (0xc1U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                                 | (0xc2U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                                | (0xc3U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                               | (0xc4U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                              | (0xc5U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                             | (0xc6U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                            | (0xc7U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__4__Vfuncout 
                        = ((0xc0U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                           & ((0xc1U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                              & ((0xc2U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                 | ((0xc3U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                    | ((0xc4U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                       & ((0xc5U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                          & (0xc6U 
                                             != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))))))));
                } else if (((((((((0xc8U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                  | (0xc9U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                                 | (0xcaU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                                | (0xcbU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                               | (0xccU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                              | (0xcdU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                             | (0xceU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                            | (0xcfU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__4__Vfuncout 
                        = ((0xc8U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                           | ((0xc9U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                              & ((0xcaU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                 & ((0xcbU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                    | ((0xccU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                       & (0xcdU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)))))));
                } else if (((((((((0xd0U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                  | (0xd1U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                                 | (0xd2U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                                | (0xd3U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                               | (0xd4U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                              | (0xd5U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                             | (0xd6U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                            | (0xd7U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__4__Vfuncout 
                        = ((0xd0U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                           & ((0xd1U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                              & ((0xd2U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                 | ((0xd3U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                    & ((0xd4U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                       & (0xd5U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)))))));
                } else if (((((((((0xd8U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                  | (0xd9U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                                 | (0xdaU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                                | (0xdbU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                               | (0xdcU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                              | (0xddU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                             | (0xdeU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                            | (0xdfU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__4__Vfuncout 
                        = ((0xd8U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                           | ((0xd9U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                              & ((0xdaU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                 & ((0xdbU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                    | ((0xdcU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                       & ((0xddU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                          | (0xdeU 
                                             == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))))))));
                } else if (((((((((0xe0U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                  | (0xe1U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                                 | (0xe2U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                                | (0xe3U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                               | (0xe4U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                              | (0xe5U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                             | (0xe6U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                            | (0xe7U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__4__Vfuncout 
                        = ((0xe0U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                           | ((0xe1U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                              & ((0xe2U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                 | ((0xe3U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                    | ((0xe4U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                       & ((0xe5U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                          | (0xe6U 
                                             != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))))))));
                } else if (((((((((0xe8U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                  | (0xe9U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                                 | (0xeaU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                                | (0xebU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                               | (0xecU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                              | (0xedU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                             | (0xeeU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                            | (0xefU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__4__Vfuncout 
                        = ((0xe8U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                           & ((0xe9U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                              & ((0xeaU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                 | ((0xebU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                    & ((0xecU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                       | ((0xedU != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                          & (0xeeU 
                                             == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))))))));
                } else if (((((((((0xf0U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                  | (0xf1U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                                 | (0xf2U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                                | (0xf3U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                               | (0xf4U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                              | (0xf5U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                             | (0xf6U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) 
                            | (0xf7U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__4__Vfuncout 
                        = ((0xf0U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                           | ((0xf1U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                              & ((0xf2U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                 | ((0xf3U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                    & ((0xf4U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                       | ((0xf5U != (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x)) 
                                          & (0xf6U 
                                             == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))))))));
                } else if ((0xf8U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__4__Vfuncout = 1U;
                } else if ((0xf9U == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__4__Vfuncout = 0U;
                } else if ((0xfaU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__4__Vfuncout = 1U;
                } else if ((0xfbU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__4__Vfuncout = 0U;
                } else if ((0xfcU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__4__Vfuncout = 1U;
                } else if ((0xfdU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__4__Vfuncout = 0U;
                } else if ((0xfeU == (IData)(__Vfunc_NARNet__DOT__tanh_LUT__4__x))) {
                    __Vfunc_NARNet__DOT__tanh_LUT__4__Vfuncout = 1U;
                }
                vlSelf->NARNet__DOT__b_n1 = 0U;
                vlSelf->NARNet__DOT__b_n2 = 0U;
                vlSelf->NARNet__DOT__b_n3 = 0U;
                vlSelf->NARNet__DOT__b_n4 = 0U;
                vlSelf->NARNet__DOT__b_n5 = 0U;
                vlSelf->NARNet__DOT__n_reg1 = __Vfunc_NARNet__DOT__tanh_LUT__0__Vfuncout;
                vlSelf->NARNet__DOT__n_reg2 = __Vfunc_NARNet__DOT__tanh_LUT__1__Vfuncout;
                vlSelf->NARNet__DOT__n_reg3 = __Vfunc_NARNet__DOT__tanh_LUT__2__Vfuncout;
                vlSelf->NARNet__DOT__n_reg4 = __Vfunc_NARNet__DOT__tanh_LUT__3__Vfuncout;
                vlSelf->NARNet__DOT__n_reg5 = __Vfunc_NARNet__DOT__tanh_LUT__4__Vfuncout;
                __Vdly__NARNet__DOT__current_state = 3U;
            }
        } else if ((3U == (IData)(vlSelf->NARNet__DOT__current_state))) {
            __Vdly__NARNet__DOT__acc_res = (0xffU & 
                                            ((((((IData)(vlSelf->NARNet__DOT____Vcellout__n1__out) 
                                                 + (IData)(vlSelf->NARNet__DOT____Vcellout__n2__out)) 
                                                + (IData)(vlSelf->NARNet__DOT____Vcellout__n3__out)) 
                                               + (IData)(vlSelf->NARNet__DOT____Vcellout__n4__out)) 
                                              + (IData)(vlSelf->NARNet__DOT____Vcellout__n5__out)) 
                                             + (IData)(vlSelf->NARNet__DOT__b2)));
            __Vdly__NARNet__DOT__current_state = 4U;
        } else if ((4U == (IData)(vlSelf->NARNet__DOT__current_state))) {
            vlSelf->NARNet__DOT__y_out_reg = vlSelf->NARNet__DOT__acc_res;
            __Vdly__NARNet__DOT__current_state = 0U;
        }
    }
    vlSelf->NARNet__DOT__x_in_reg = __Vdly__NARNet__DOT__x_in_reg;
    vlSelf->NARNet__DOT__acc_res = __Vdly__NARNet__DOT__acc_res;
    if (__Vdlyvset__NARNet__DOT__xdl__v0) {
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
    }
    if (__Vdlyvset__NARNet__DOT__xdl__v17) {
        vlSelf->NARNet__DOT__xdl[__Vdlyvdim0__NARNet__DOT__xdl__v17] 
            = __Vdlyvval__NARNet__DOT__xdl__v17;
    }
    if (__Vdlyvset__NARNet__DOT__tapdelay1__v0) {
        vlSelf->NARNet__DOT__tapdelay1[__Vdlyvdim0__NARNet__DOT__tapdelay1__v0] 
            = __Vdlyvval__NARNet__DOT__tapdelay1__v0;
    }
    vlSelf->NARNet__DOT__current_state = __Vdly__NARNet__DOT__current_state;
    VL_ASSIGN_SII(8,vlSelf->y_out, vlSelf->NARNet__DOT__y_out_reg);
    if (vlSelf->__Vcellinp__NARNet__NARNet__02Erst) {
        vlSelf->NARNet__DOT__ts = 0U;
    }
    if (vlSelf->__Vcellinp__NARNet__enable) {
        if ((5U > (IData)(vlSelf->NARNet__DOT__bram_counter))) {
            vlSelf->NARNet__DOT____Vlvbound_h8d390dc3__0 
                = vlSelf->NARNet__DOT__wrom__DOT__rom_reg;
            if ((4U >= (7U & (IData)(vlSelf->NARNet__DOT__bram_counter)))) {
                __Vdlyvval__NARNet__DOT__b1__v0 = vlSelf->NARNet__DOT____Vlvbound_h8d390dc3__0;
                __Vdlyvset__NARNet__DOT__b1__v0 = 1U;
                __Vdlyvdim0__NARNet__DOT__b1__v0 = 
                    (7U & (IData)(vlSelf->NARNet__DOT__bram_counter));
            }
            vlSelf->__Vdly__NARNet__DOT__bram_counter 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->NARNet__DOT__bram_counter)));
        } else if ((0x55U > (IData)(vlSelf->NARNet__DOT__bram_counter))) {
            vlSelf->NARNet__DOT____Vlvbound_h2eb9a295__0 
                = vlSelf->NARNet__DOT__wrom__DOT__rom_reg;
            if ((4U >= (IData)(vlSelf->NARNet__DOT__row))) {
                __Vdlyvval__NARNet__DOT__w1__v0 = vlSelf->NARNet__DOT____Vlvbound_h2eb9a295__0;
                __Vdlyvset__NARNet__DOT__w1__v0 = 1U;
                __Vdlyvdim1__NARNet__DOT__w1__v0 = 
                    (0xfU & ((IData)(vlSelf->NARNet__DOT__bram_counter) 
                             - (IData)(5U)));
                __Vdlyvdim0__NARNet__DOT__w1__v0 = vlSelf->NARNet__DOT__row;
            }
            if ((0U == (0xfU & ((IData)(1U) + ((IData)(vlSelf->NARNet__DOT__bram_counter) 
                                               - (IData)(5U)))))) {
                __Vdly__NARNet__DOT__row = (7U & ((IData)(1U) 
                                                  + (IData)(vlSelf->NARNet__DOT__row)));
            }
            vlSelf->__Vdly__NARNet__DOT__bram_counter 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->NARNet__DOT__bram_counter)));
        } else if ((0x55U == (IData)(vlSelf->NARNet__DOT__bram_counter))) {
            vlSelf->__Vdly__NARNet__DOT__bram_counter 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->NARNet__DOT__bram_counter)));
            vlSelf->NARNet__DOT__b2 = vlSelf->NARNet__DOT__wrom__DOT__rom_reg;
            __Vdly__NARNet__DOT__row = 0U;
        } else if ((0x5bU > (IData)(vlSelf->NARNet__DOT__bram_counter))) {
            vlSelf->NARNet__DOT____Vlvbound_hd8f38ade__0 
                = vlSelf->NARNet__DOT__wrom__DOT__rom_reg;
            vlSelf->__Vdly__NARNet__DOT__bram_counter 
                = (0xffU & ((IData)(1U) + (IData)(vlSelf->NARNet__DOT__bram_counter)));
            if ((4U >= (IData)(vlSelf->NARNet__DOT__row))) {
                __Vdlyvval__NARNet__DOT__w2__v0 = vlSelf->NARNet__DOT____Vlvbound_hd8f38ade__0;
                __Vdlyvset__NARNet__DOT__w2__v0 = 1U;
                __Vdlyvdim0__NARNet__DOT__w2__v0 = vlSelf->NARNet__DOT__row;
            }
            __Vdly__NARNet__DOT__row = (7U & ((IData)(1U) 
                                              + (IData)(vlSelf->NARNet__DOT__row)));
        } else {
            vlSelf->NARNet__DOT__weights_loaded = 1U;
        }
    }
    if (__Vdlyvset__NARNet__DOT__b1__v0) {
        vlSelf->NARNet__DOT__b1[__Vdlyvdim0__NARNet__DOT__b1__v0] 
            = __Vdlyvval__NARNet__DOT__b1__v0;
    }
    vlSelf->NARNet__DOT__row = __Vdly__NARNet__DOT__row;
    if (__Vdlyvset__NARNet__DOT__w2__v0) {
        vlSelf->NARNet__DOT__w2[__Vdlyvdim0__NARNet__DOT__w2__v0] 
            = __Vdlyvval__NARNet__DOT__w2__v0;
    }
    if (__Vdlyvset__NARNet__DOT__w1__v0) {
        vlSelf->NARNet__DOT__w1[__Vdlyvdim0__NARNet__DOT__w1__v0][__Vdlyvdim1__NARNet__DOT__w1__v0] 
            = __Vdlyvval__NARNet__DOT__w1__v0;
    }
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

VL_INLINE_OPT void VNARNet___024root___combo__TOP__9(VNARNet___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNARNet__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNARNet___024root___combo__TOP__9\n"); );
    // Body
    VL_ASSIGN_ISI(10,vlSelf->__Vcellinp__tanh_lut__addr, vlSelf->addr);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__neuron_v2__neuron_v2__02Erst, vlSelf->neuron_v2__02Erst);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__neuron_v2__inptReady, vlSelf->inptReady);
    VL_ASSIGN_ISI(10,vlSelf->__Vcellinp__neuron_v2__w, vlSelf->w);
    VL_ASSIGN_ISI(10,vlSelf->__Vcellinp__neuron_v2__x, vlSelf->x);
    VL_ASSIGN_ISI(10,vlSelf->__Vcellinp__neuron_v2__b, vlSelf->b);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__NARNet__x_ready, vlSelf->x_ready);
    VL_ASSIGN_ISI(8,vlSelf->__Vcellinp__NARNet__x_in, vlSelf->x_in);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__NARNet__NARNet__02Erst, vlSelf->NARNet__02Erst);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__NARNet__enable, vlSelf->enable);
}

VL_INLINE_OPT void VNARNet___024root___sequent__TOP__10(VNARNet___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNARNet__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNARNet___024root___sequent__TOP__10\n"); );
    // Body
    vlSelf->NARNet__DOT__wrom__DOT__rom_reg = vlSelf->NARNet__DOT__wrom__DOT__rom
        [vlSelf->NARNet__DOT__bram_counter];
}

VL_INLINE_OPT void VNARNet___024root___sequent__TOP__11(VNARNet___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNARNet__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNARNet___024root___sequent__TOP__11\n"); );
    // Body
    vlSelf->NARNet__DOT__bram_counter = vlSelf->__Vdly__NARNet__DOT__bram_counter;
}

void VNARNet___024root___eval(VNARNet___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNARNet__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNARNet___024root___eval\n"); );
    // Body
    VNARNet___024root___combo__TOP__2(vlSelf);
    if (((~ (IData)(vlSelf->__Vcellinp__tanh_lut__tanh_lut__02Eclk)) 
         & (IData)(vlSelf->__Vclklast__TOP____Vcellinp__tanh_lut__tanh_lut__02Eclk))) {
        VNARNet___024root___sequent__TOP__5(vlSelf);
    }
    if (((IData)(vlSelf->__Vcellinp__neuron_v2__neuron_v2__02Eclk) 
         & (~ (IData)(vlSelf->__Vclklast__TOP____Vcellinp__neuron_v2__neuron_v2__02Eclk)))) {
        VNARNet___024root___sequent__TOP__6(vlSelf);
    }
    if (((IData)(vlSelf->__Vcellinp__NARNet__NARNet__02Eclk) 
         & (~ (IData)(vlSelf->__Vclklast__TOP____Vcellinp__NARNet__NARNet__02Eclk)))) {
        VNARNet___024root___sequent__TOP__7(vlSelf);
    }
    VNARNet___024root___combo__TOP__9(vlSelf);
    if (((~ (IData)(vlSelf->NARNet__DOT__wrom__DOT__clk)) 
         & (IData)(vlSelf->__Vclklast__TOP__NARNet__DOT__wrom__DOT__clk))) {
        VNARNet___024root___sequent__TOP__10(vlSelf);
    }
    if (((IData)(vlSelf->__Vcellinp__NARNet__NARNet__02Eclk) 
         & (~ (IData)(vlSelf->__Vclklast__TOP____Vcellinp__NARNet__NARNet__02Eclk)))) {
        VNARNet___024root___sequent__TOP__11(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__NARNet__DOT__wrom__DOT__clk 
        = vlSelf->NARNet__DOT__wrom__DOT__clk;
    vlSelf->__Vclklast__TOP____Vcellinp__tanh_lut__tanh_lut__02Eclk 
        = vlSelf->__Vcellinp__tanh_lut__tanh_lut__02Eclk;
    vlSelf->__Vclklast__TOP____Vcellinp__neuron_v2__neuron_v2__02Eclk 
        = vlSelf->__Vcellinp__neuron_v2__neuron_v2__02Eclk;
    vlSelf->__Vclklast__TOP____Vcellinp__NARNet__NARNet__02Eclk 
        = vlSelf->__Vcellinp__NARNet__NARNet__02Eclk;
}

#ifdef VL_DEBUG
void VNARNet___024root___eval_debug_assertions(VNARNet___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNARNet__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNARNet___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
