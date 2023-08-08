// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCGRATemplateRTL___05F3498633b417245a0.h for the primary calling header

#ifndef VERILATED_VCGRATEMPLATERTL___05F3498633B417245A0_STD__03A__03ASEMAPHORE__VCLPKG_H_
#define VERILATED_VCGRATEMPLATERTL___05F3498633B417245A0_STD__03A__03ASEMAPHORE__VCLPKG_H_  // guard

#include "verilated.h"


class VCGRATemplateRTL___05F3498633b417245a0__Syms;

class alignas(VL_CACHE_LINE_BYTES) VCGRATemplateRTL___05F3498633b417245a0_std__03a__03asemaphore__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    VCGRATemplateRTL___05F3498633b417245a0__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCGRATemplateRTL___05F3498633b417245a0_std__03a__03asemaphore__Vclpkg(VCGRATemplateRTL___05F3498633b417245a0__Syms* symsp, const char* v__name);
    ~VCGRATemplateRTL___05F3498633b417245a0_std__03a__03asemaphore__Vclpkg();
    VL_UNCOPYABLE(VCGRATemplateRTL___05F3498633b417245a0_std__03a__03asemaphore__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class VCGRATemplateRTL___05F3498633b417245a0__Syms;

class VCGRATemplateRTL___05F3498633b417245a0_std__03a__03asemaphore : public VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_keyCount;
    void __VnoInFunc_get(VCGRATemplateRTL___05F3498633b417245a0__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount);
    void __VnoInFunc_put(VCGRATemplateRTL___05F3498633b417245a0__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount);
    void __VnoInFunc_try_get(VCGRATemplateRTL___05F3498633b417245a0__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount, IData/*31:0*/ &try_get__Vfuncrtn);
  private:
    void _ctor_var_reset(VCGRATemplateRTL___05F3498633b417245a0__Syms* __restrict vlSymsp);
  public:
    VCGRATemplateRTL___05F3498633b417245a0_std__03a__03asemaphore(VCGRATemplateRTL___05F3498633b417245a0__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~VCGRATemplateRTL___05F3498633b417245a0_std__03a__03asemaphore();
};

std::string VL_TO_STRING(const VlClassRef<VCGRATemplateRTL___05F3498633b417245a0_std__03a__03asemaphore>& obj);

#endif  // guard
