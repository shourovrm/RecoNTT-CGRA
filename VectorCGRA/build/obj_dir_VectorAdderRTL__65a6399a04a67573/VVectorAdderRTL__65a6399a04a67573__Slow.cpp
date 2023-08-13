// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVectorAdderRTL__65a6399a04a67573.h for the primary calling header

#include "VVectorAdderRTL__65a6399a04a67573.h"
#include "VVectorAdderRTL__65a6399a04a67573__Syms.h"

//==========

VL_CTOR_IMP(VVectorAdderRTL__65a6399a04a67573) {
    VVectorAdderRTL__65a6399a04a67573__Syms* __restrict vlSymsp = __VlSymsp = new VVectorAdderRTL__65a6399a04a67573__Syms(this, name());
    VVectorAdderRTL__65a6399a04a67573* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VVectorAdderRTL__65a6399a04a67573::__Vconfigure(VVectorAdderRTL__65a6399a04a67573__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VVectorAdderRTL__65a6399a04a67573::~VVectorAdderRTL__65a6399a04a67573() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VVectorAdderRTL__65a6399a04a67573::_eval_initial(VVectorAdderRTL__65a6399a04a67573__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVectorAdderRTL__65a6399a04a67573::_eval_initial\n"); );
    VVectorAdderRTL__65a6399a04a67573* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VVectorAdderRTL__65a6399a04a67573::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVectorAdderRTL__65a6399a04a67573::final\n"); );
    // Variables
    VVectorAdderRTL__65a6399a04a67573__Syms* __restrict vlSymsp = this->__VlSymsp;
    VVectorAdderRTL__65a6399a04a67573* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VVectorAdderRTL__65a6399a04a67573::_eval_settle(VVectorAdderRTL__65a6399a04a67573__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVectorAdderRTL__65a6399a04a67573::_eval_settle\n"); );
    VVectorAdderRTL__65a6399a04a67573* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void VVectorAdderRTL__65a6399a04a67573::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVectorAdderRTL__65a6399a04a67573::_ctor_var_reset\n"); );
    // Body
    carry_in = VL_RAND_RESET_I(1);
    carry_out = VL_RAND_RESET_I(1);
    clk = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            recv_in_count[__Vi0] = VL_RAND_RESET_I(2);
    }}
    reset = VL_RAND_RESET_I(1);
    recv_const___05Fen = VL_RAND_RESET_I(1);
    recv_const___05Fmsg = VL_RAND_RESET_I(9);
    recv_const___05Frdy = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            recv_in___05Fen[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            recv_in___05Fmsg[__Vi0] = VL_RAND_RESET_I(9);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            recv_in___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }}
    recv_opt___05Fen = VL_RAND_RESET_I(1);
    recv_opt___05Fmsg = VL_RAND_RESET_I(31);
    recv_opt___05Frdy = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            send_out___05Fen[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            send_out___05Fmsg[__Vi0] = VL_RAND_RESET_I(9);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            send_out___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }}
    VectorAdderRTL___05F65a6399a04a67573__DOT__carry_in_temp = VL_RAND_RESET_I(9);
    VectorAdderRTL___05F65a6399a04a67573__DOT_____05Ftmpvar___05Fcomb_logic_in0 = VL_RAND_RESET_I(2);
    VectorAdderRTL___05F65a6399a04a67573__DOT_____05Ftmpvar___05Fcomb_logic_in1 = VL_RAND_RESET_I(2);
    VectorAdderRTL___05F65a6399a04a67573__DOT__comb_logic__DOT__unnamedblk3__DOT__j = 0;
    VectorAdderRTL___05F65a6399a04a67573__DOT____Vlvbound1 = VL_RAND_RESET_I(1);
    __Vchglast__TOP__recv_const___05Frdy = VL_RAND_RESET_I(1);
    __Vchglast__TOP__recv_opt___05Frdy = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
