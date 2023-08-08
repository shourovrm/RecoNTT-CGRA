// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCGRATemplateRTL___05Fb04356ddf53ae174.h for the primary calling header

#ifndef VERILATED_VCGRATEMPLATERTL___05FB04356DDF53AE174_STD__03A__03ASEMAPHORE__VCLPKG_H_
#define VERILATED_VCGRATEMPLATERTL___05FB04356DDF53AE174_STD__03A__03ASEMAPHORE__VCLPKG_H_  // guard

#include "verilated.h"


class VCGRATemplateRTL___05Fb04356ddf53ae174__Syms;

class alignas(VL_CACHE_LINE_BYTES) VCGRATemplateRTL___05Fb04356ddf53ae174_std__03a__03asemaphore__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    VCGRATemplateRTL___05Fb04356ddf53ae174__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCGRATemplateRTL___05Fb04356ddf53ae174_std__03a__03asemaphore__Vclpkg(VCGRATemplateRTL___05Fb04356ddf53ae174__Syms* symsp, const char* v__name);
    ~VCGRATemplateRTL___05Fb04356ddf53ae174_std__03a__03asemaphore__Vclpkg();
    VL_UNCOPYABLE(VCGRATemplateRTL___05Fb04356ddf53ae174_std__03a__03asemaphore__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class VCGRATemplateRTL___05Fb04356ddf53ae174__Syms;

class VCGRATemplateRTL___05Fb04356ddf53ae174_std__03a__03asemaphore : public VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_keyCount;
    void __VnoInFunc_get(VCGRATemplateRTL___05Fb04356ddf53ae174__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount);
    void __VnoInFunc_put(VCGRATemplateRTL___05Fb04356ddf53ae174__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount);
    void __VnoInFunc_try_get(VCGRATemplateRTL___05Fb04356ddf53ae174__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount, IData/*31:0*/ &try_get__Vfuncrtn);
  private:
    void _ctor_var_reset(VCGRATemplateRTL___05Fb04356ddf53ae174__Syms* __restrict vlSymsp);
  public:
    VCGRATemplateRTL___05Fb04356ddf53ae174_std__03a__03asemaphore(VCGRATemplateRTL___05Fb04356ddf53ae174__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~VCGRATemplateRTL___05Fb04356ddf53ae174_std__03a__03asemaphore();
};

std::string VL_TO_STRING(const VlClassRef<VCGRATemplateRTL___05Fb04356ddf53ae174_std__03a__03asemaphore>& obj);

#endif  // guard
