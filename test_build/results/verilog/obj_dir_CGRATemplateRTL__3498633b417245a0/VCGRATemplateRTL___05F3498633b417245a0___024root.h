// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCGRATemplateRTL___05F3498633b417245a0.h for the primary calling header

#ifndef VERILATED_VCGRATEMPLATERTL___05F3498633B417245A0___024ROOT_H_
#define VERILATED_VCGRATEMPLATERTL___05F3498633B417245A0___024ROOT_H_  // guard

#include "verilated.h"
class VCGRATemplateRTL___05F3498633b417245a0_std;
class VCGRATemplateRTL___05F3498633b417245a0_std__03a__03aprocess__Vclpkg;
class VCGRATemplateRTL___05F3498633b417245a0_std__03a__03asemaphore__Vclpkg;


class VCGRATemplateRTL___05F3498633b417245a0__Syms;

class alignas(VL_CACHE_LINE_BYTES) VCGRATemplateRTL___05F3498633b417245a0___024root final : public VerilatedModule {
  public:
    // CELLS
    VCGRATemplateRTL___05F3498633b417245a0_std* __PVT__std;
    VCGRATemplateRTL___05F3498633b417245a0_std__03a__03asemaphore__Vclpkg* std__03a__03asemaphore__Vclpkg;
    VCGRATemplateRTL___05F3498633b417245a0_std__03a__03aprocess__Vclpkg* std__03a__03aprocess__Vclpkg;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VL_IN8(recv_waddr___05Fen[4],0,0);
    VL_IN8(recv_waddr___05Fmsg[4],2,0);
    VL_OUT8(recv_waddr___05Frdy[4],0,0);
    VL_IN8(recv_wopt___05Fen[4],0,0);
    VL_IN64(recv_wopt___05Fmsg[4],58,0);
    VL_OUT8(recv_wopt___05Frdy[4],0,0);
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    VCGRATemplateRTL___05F3498633b417245a0__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCGRATemplateRTL___05F3498633b417245a0___024root(VCGRATemplateRTL___05F3498633b417245a0__Syms* symsp, const char* v__name);
    ~VCGRATemplateRTL___05F3498633b417245a0___024root();
    VL_UNCOPYABLE(VCGRATemplateRTL___05F3498633b417245a0___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
