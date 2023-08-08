// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCGRATemplateRTL___05Fb04356ddf53ae174.h for the primary calling header

#include "verilated.h"

#include "VCGRATemplateRTL___05Fb04356ddf53ae174__Syms.h"
#include "VCGRATemplateRTL___05Fb04356ddf53ae174___024root.h"

VL_ATTR_COLD void VCGRATemplateRTL___05Fb04356ddf53ae174___024root___eval_static(VCGRATemplateRTL___05Fb04356ddf53ae174___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCGRATemplateRTL___05Fb04356ddf53ae174__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL___05Fb04356ddf53ae174___024root___eval_static\n"); );
}

VL_ATTR_COLD void VCGRATemplateRTL___05Fb04356ddf53ae174___024root___eval_initial__TOP(VCGRATemplateRTL___05Fb04356ddf53ae174___024root* vlSelf);

VL_ATTR_COLD void VCGRATemplateRTL___05Fb04356ddf53ae174___024root___eval_initial(VCGRATemplateRTL___05Fb04356ddf53ae174___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCGRATemplateRTL___05Fb04356ddf53ae174__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL___05Fb04356ddf53ae174___024root___eval_initial\n"); );
    // Body
    VCGRATemplateRTL___05Fb04356ddf53ae174___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void VCGRATemplateRTL___05Fb04356ddf53ae174___024root___eval_initial__TOP(VCGRATemplateRTL___05Fb04356ddf53ae174___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCGRATemplateRTL___05Fb04356ddf53ae174__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL___05Fb04356ddf53ae174___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->recv_waddr___05Frdy[0U] = 1U;
    vlSelf->recv_waddr___05Frdy[1U] = 1U;
    vlSelf->recv_waddr___05Frdy[2U] = 1U;
    vlSelf->recv_waddr___05Frdy[3U] = 1U;
    vlSelf->recv_wopt___05Frdy[0U] = 1U;
    vlSelf->recv_wopt___05Frdy[1U] = 1U;
    vlSelf->recv_wopt___05Frdy[2U] = 1U;
    vlSelf->recv_wopt___05Frdy[3U] = 1U;
}

VL_ATTR_COLD void VCGRATemplateRTL___05Fb04356ddf53ae174___024root___eval_final(VCGRATemplateRTL___05Fb04356ddf53ae174___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCGRATemplateRTL___05Fb04356ddf53ae174__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL___05Fb04356ddf53ae174___024root___eval_final\n"); );
}

VL_ATTR_COLD void VCGRATemplateRTL___05Fb04356ddf53ae174___024root___eval_settle(VCGRATemplateRTL___05Fb04356ddf53ae174___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCGRATemplateRTL___05Fb04356ddf53ae174__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL___05Fb04356ddf53ae174___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCGRATemplateRTL___05Fb04356ddf53ae174___024root___dump_triggers__act(VCGRATemplateRTL___05Fb04356ddf53ae174___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCGRATemplateRTL___05Fb04356ddf53ae174__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL___05Fb04356ddf53ae174___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VCGRATemplateRTL___05Fb04356ddf53ae174___024root___dump_triggers__nba(VCGRATemplateRTL___05Fb04356ddf53ae174___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCGRATemplateRTL___05Fb04356ddf53ae174__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL___05Fb04356ddf53ae174___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VCGRATemplateRTL___05Fb04356ddf53ae174___024root___ctor_var_reset(VCGRATemplateRTL___05Fb04356ddf53ae174___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCGRATemplateRTL___05Fb04356ddf53ae174__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL___05Fb04356ddf53ae174___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->recv_waddr___05Fen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->recv_waddr___05Fmsg[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->recv_waddr___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->recv_wopt___05Fen[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(77, vlSelf->recv_wopt___05Fmsg[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->recv_wopt___05Frdy[__Vi0] = VL_RAND_RESET_I(1);
    }
}
