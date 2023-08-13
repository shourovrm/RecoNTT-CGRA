// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VCGRATEMPLATERTL__BE12BC513B19C609_H_
#define _VCGRATEMPLATERTL__BE12BC513B19C609_H_  // guard

#include "verilated.h"

//==========

class VCGRATemplateRTL__be12bc513b19c609__Syms;

//----------

VL_MODULE(VCGRATemplateRTL__be12bc513b19c609) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(recv_waddr___05Fen[4],0,0);
    VL_IN8(recv_waddr___05Fmsg[4],2,0);
    VL_OUT8(recv_waddr___05Frdy[4],0,0);
    VL_IN8(recv_wopt___05Fen[4],0,0);
    VL_INW(recv_wopt___05Fmsg[4],76,0,3);
    VL_OUT8(recv_wopt___05Frdy[4],0,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F0__DOT__const_queue___05Fclk;
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F0__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F0__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F0__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F0__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F0__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F0__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F0__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F0__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F0__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F0__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F0__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F0__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F0__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F1__DOT__const_queue___05Fclk;
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F1__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F1__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F1__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F1__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F1__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F1__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F1__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F1__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F1__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F1__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F1__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F1__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F1__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F2__DOT__const_queue___05Fclk;
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F2__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F2__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F2__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F2__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F2__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F2__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F2__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F2__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F2__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F2__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F2__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F2__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F2__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F3__DOT__const_queue___05Fclk;
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F3__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F3__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F3__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F3__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F3__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F3__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F3__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F3__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F3__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F3__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F3__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F3__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F3__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05Fclk[4];
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05Frecv_waddr___05Frdy[4];
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05Frecv_wopt___05Frdy[4];
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F0__DOT__channel___05Fclk[12];
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F0__DOT__channel___05F0__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F0__DOT__channel___05F1__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F0__DOT__channel___05F2__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F0__DOT__channel___05F3__DOT__queues___05Fclk[1];
    };
    struct {
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F0__DOT__channel___05F4__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F0__DOT__channel___05F5__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F0__DOT__channel___05F6__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F0__DOT__channel___05F7__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F0__DOT__channel___05F8__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F0__DOT__channel___05F9__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F0__DOT__channel___05F10__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F0__DOT__channel___05F11__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F0__DOT__element__DOT__fu___05Fclk[11];
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F0__DOT__reg_predicate__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F1__DOT__channel___05Fclk[12];
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F1__DOT__channel___05F0__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F1__DOT__channel___05F1__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F1__DOT__channel___05F2__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F1__DOT__channel___05F3__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F1__DOT__channel___05F4__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F1__DOT__channel___05F5__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F1__DOT__channel___05F6__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F1__DOT__channel___05F7__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F1__DOT__channel___05F8__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F1__DOT__channel___05F9__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F1__DOT__channel___05F10__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F1__DOT__channel___05F11__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F1__DOT__element__DOT__fu___05Fclk[11];
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F1__DOT__reg_predicate__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F2__DOT__channel___05Fclk[12];
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F2__DOT__channel___05F0__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F2__DOT__channel___05F1__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F2__DOT__channel___05F2__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F2__DOT__channel___05F3__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F2__DOT__channel___05F4__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F2__DOT__channel___05F5__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F2__DOT__channel___05F6__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F2__DOT__channel___05F7__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F2__DOT__channel___05F8__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F2__DOT__channel___05F9__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F2__DOT__channel___05F10__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F2__DOT__channel___05F11__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F2__DOT__element__DOT__fu___05Fclk[11];
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F2__DOT__reg_predicate__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F3__DOT__channel___05Fclk[12];
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F3__DOT__channel___05F0__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F3__DOT__channel___05F1__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F3__DOT__channel___05F2__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F3__DOT__channel___05F3__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F3__DOT__channel___05F4__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F3__DOT__channel___05F5__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F3__DOT__channel___05F6__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F3__DOT__channel___05F7__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F3__DOT__channel___05F8__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F3__DOT__channel___05F9__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F3__DOT__channel___05F10__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F3__DOT__channel___05F11__DOT__queues___05Fclk[1];
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F3__DOT__element__DOT__fu___05Fclk[11];
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F3__DOT__reg_predicate__DOT__queues___05Fclk[1];
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F10__clk;
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F10__clk;
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F10__clk;
        CData/*0:0*/ CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F10__clk;
        CData/*0:0*/ __Vclklast__TOP__clk;
        CData/*0:0*/ __Vclklast__TOP__CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F0__DOT__const_queue___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F1__DOT__const_queue___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F2__DOT__const_queue___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F3__DOT__const_queue___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F0__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F1__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F2__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F3__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F0__DOT__element__DOT____Vcellinp__fu___05F10__clk;
        CData/*0:0*/ __Vclklast__TOP__CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F1__DOT__element__DOT____Vcellinp__fu___05F10__clk;
        CData/*0:0*/ __Vclklast__TOP__CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F2__DOT__element__DOT____Vcellinp__fu___05F10__clk;
        CData/*0:0*/ __Vclklast__TOP__CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F3__DOT__element__DOT____Vcellinp__fu___05F10__clk;
        CData/*0:0*/ __Vclklast__TOP__CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F0__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F0__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F0__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F0__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F0__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F0__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F0__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F0__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F0__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F0__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F0__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F0__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F1__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F1__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F1__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F1__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F1__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F1__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F1__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F1__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F1__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F1__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F1__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F1__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F2__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F2__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F2__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F2__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F2__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F2__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F2__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F2__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F2__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F2__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F2__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F2__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F3__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F3__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F3__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F3__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F3__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F3__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F3__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F3__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F3__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F3__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl___05Fclk;
        CData/*0:0*/ __Vclklast__TOP__CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F3__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl___05Fclk;
    };
    struct {
        CData/*0:0*/ __Vclklast__TOP__CGRATemplateRTL___05Fbe12bc513b19c609__DOT__tile___05F3__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl___05Fclk;
    };
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VCGRATemplateRTL__be12bc513b19c609__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VCGRATemplateRTL__be12bc513b19c609);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VCGRATemplateRTL__be12bc513b19c609(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VCGRATemplateRTL__be12bc513b19c609();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VCGRATemplateRTL__be12bc513b19c609__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VCGRATemplateRTL__be12bc513b19c609__Syms* symsp, bool first);
  private:
    static QData _change_request(VCGRATemplateRTL__be12bc513b19c609__Syms* __restrict vlSymsp);
    static QData _change_request_1(VCGRATemplateRTL__be12bc513b19c609__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__3(VCGRATemplateRTL__be12bc513b19c609__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VCGRATemplateRTL__be12bc513b19c609__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VCGRATemplateRTL__be12bc513b19c609__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VCGRATemplateRTL__be12bc513b19c609__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__1(VCGRATemplateRTL__be12bc513b19c609__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
