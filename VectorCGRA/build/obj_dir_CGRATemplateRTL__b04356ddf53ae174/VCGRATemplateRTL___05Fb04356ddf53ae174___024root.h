// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCGRATemplateRTL___05Fb04356ddf53ae174.h for the primary calling header

#ifndef VERILATED_VCGRATEMPLATERTL___05FB04356DDF53AE174___024ROOT_H_
#define VERILATED_VCGRATEMPLATERTL___05FB04356DDF53AE174___024ROOT_H_  // guard

#include "verilated.h"
class VCGRATemplateRTL___05Fb04356ddf53ae174_std;
class VCGRATemplateRTL___05Fb04356ddf53ae174_std__03a__03aprocess__Vclpkg;
class VCGRATemplateRTL___05Fb04356ddf53ae174_std__03a__03asemaphore__Vclpkg;


class VCGRATemplateRTL___05Fb04356ddf53ae174__Syms;

class alignas(VL_CACHE_LINE_BYTES) VCGRATemplateRTL___05Fb04356ddf53ae174___024root final : public VerilatedModule {
  public:
    // CELLS
    VCGRATemplateRTL___05Fb04356ddf53ae174_std* __PVT__std;
    VCGRATemplateRTL___05Fb04356ddf53ae174_std__03a__03asemaphore__Vclpkg* std__03a__03asemaphore__Vclpkg;
    VCGRATemplateRTL___05Fb04356ddf53ae174_std__03a__03aprocess__Vclpkg* std__03a__03aprocess__Vclpkg;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VL_IN8(recv_waddr___05Fen[4],0,0);
    VL_IN8(recv_waddr___05Fmsg[4],2,0);
    VL_OUT8(recv_waddr___05Frdy[4],0,0);
    VL_IN8(recv_wopt___05Fen[4],0,0);
    VL_INW(recv_wopt___05Fmsg[4],76,0,3);
    VL_OUT8(recv_wopt___05Frdy[4],0,0);
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    VCGRATemplateRTL___05Fb04356ddf53ae174__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCGRATemplateRTL___05Fb04356ddf53ae174___024root(VCGRATemplateRTL___05Fb04356ddf53ae174__Syms* symsp, const char* v__name);
    ~VCGRATemplateRTL___05Fb04356ddf53ae174___024root();
    VL_UNCOPYABLE(VCGRATemplateRTL___05Fb04356ddf53ae174___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
