// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCGRATemplateRTL___05F3498633b417245a0.h for the primary calling header

#include "verilated.h"

#include "VCGRATemplateRTL___05F3498633b417245a0__Syms.h"
#include "VCGRATemplateRTL___05F3498633b417245a0___024root.h"

void VCGRATemplateRTL___05F3498633b417245a0___024root___eval_act(VCGRATemplateRTL___05F3498633b417245a0___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCGRATemplateRTL___05F3498633b417245a0__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL___05F3498633b417245a0___024root___eval_act\n"); );
}

void VCGRATemplateRTL___05F3498633b417245a0___024root___eval_nba(VCGRATemplateRTL___05F3498633b417245a0___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCGRATemplateRTL___05F3498633b417245a0__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL___05F3498633b417245a0___024root___eval_nba\n"); );
}

void VCGRATemplateRTL___05F3498633b417245a0___024root___eval_triggers__act(VCGRATemplateRTL___05F3498633b417245a0___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VCGRATemplateRTL___05F3498633b417245a0___024root___dump_triggers__act(VCGRATemplateRTL___05F3498633b417245a0___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VCGRATemplateRTL___05F3498633b417245a0___024root___dump_triggers__nba(VCGRATemplateRTL___05F3498633b417245a0___024root* vlSelf);
#endif  // VL_DEBUG

void VCGRATemplateRTL___05F3498633b417245a0___024root___eval(VCGRATemplateRTL___05F3498633b417245a0___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCGRATemplateRTL___05F3498633b417245a0__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL___05F3498633b417245a0___024root___eval\n"); );
    // Init
    VlTriggerVec<0> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            VCGRATemplateRTL___05F3498633b417245a0___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VCGRATemplateRTL___05F3498633b417245a0___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("CGRATemplateRTL__3498633b417245a0.v", 4943, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                VCGRATemplateRTL___05F3498633b417245a0___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VCGRATemplateRTL___05F3498633b417245a0___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("CGRATemplateRTL__3498633b417245a0.v", 4943, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VCGRATemplateRTL___05F3498633b417245a0___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VCGRATemplateRTL___05F3498633b417245a0___024root___eval_debug_assertions(VCGRATemplateRTL___05F3498633b417245a0___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCGRATemplateRTL___05F3498633b417245a0__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL___05F3498633b417245a0___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
