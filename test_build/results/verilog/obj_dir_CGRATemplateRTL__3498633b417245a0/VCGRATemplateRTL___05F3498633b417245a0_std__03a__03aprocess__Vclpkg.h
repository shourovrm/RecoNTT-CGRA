// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCGRATemplateRTL___05F3498633b417245a0.h for the primary calling header

#ifndef VERILATED_VCGRATEMPLATERTL___05F3498633B417245A0_STD__03A__03APROCESS__VCLPKG_H_
#define VERILATED_VCGRATEMPLATERTL___05F3498633B417245A0_STD__03A__03APROCESS__VCLPKG_H_  // guard

#include "verilated.h"
class VCGRATemplateRTL___05F3498633b417245a0_std__03a__03aprocess;


class VCGRATemplateRTL___05F3498633b417245a0__Syms;

class alignas(VL_CACHE_LINE_BYTES) VCGRATemplateRTL___05F3498633b417245a0_std__03a__03aprocess__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    VCGRATemplateRTL___05F3498633b417245a0__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCGRATemplateRTL___05F3498633b417245a0_std__03a__03aprocess__Vclpkg(VCGRATemplateRTL___05F3498633b417245a0__Syms* symsp, const char* v__name);
    ~VCGRATemplateRTL___05F3498633b417245a0_std__03a__03aprocess__Vclpkg();
    VL_UNCOPYABLE(VCGRATemplateRTL___05F3498633b417245a0_std__03a__03aprocess__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_self(VlProcessRef vlProcess, VCGRATemplateRTL___05F3498633b417245a0__Syms* __restrict vlSymsp, VlClassRef<VCGRATemplateRTL___05F3498633b417245a0_std__03a__03aprocess> &self__Vfuncrtn);
};


class VCGRATemplateRTL___05F3498633b417245a0__Syms;

class VCGRATemplateRTL___05F3498633b417245a0_std__03a__03aprocess : public VlClass {
  public:
    void __VnoInFunc_await(VCGRATemplateRTL___05F3498633b417245a0__Syms* __restrict vlSymsp);
    void __VnoInFunc_get_randstate(VCGRATemplateRTL___05F3498633b417245a0__Syms* __restrict vlSymsp, std::string &get_randstate__Vfuncrtn);
    void __VnoInFunc_kill(VCGRATemplateRTL___05F3498633b417245a0__Syms* __restrict vlSymsp);
    void __VnoInFunc_resume(VCGRATemplateRTL___05F3498633b417245a0__Syms* __restrict vlSymsp);
    void __VnoInFunc_set_randstate(VCGRATemplateRTL___05F3498633b417245a0__Syms* __restrict vlSymsp, std::string s);
    void __VnoInFunc_set_status(VCGRATemplateRTL___05F3498633b417245a0__Syms* __restrict vlSymsp, IData/*31:0*/ s);
    void __VnoInFunc_status(VCGRATemplateRTL___05F3498633b417245a0__Syms* __restrict vlSymsp, IData/*31:0*/ &status__Vfuncrtn);
    void __VnoInFunc_suspend(VCGRATemplateRTL___05F3498633b417245a0__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(VCGRATemplateRTL___05F3498633b417245a0__Syms* __restrict vlSymsp);
  public:
    VCGRATemplateRTL___05F3498633b417245a0_std__03a__03aprocess(VCGRATemplateRTL___05F3498633b417245a0__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~VCGRATemplateRTL___05F3498633b417245a0_std__03a__03aprocess();
};

std::string VL_TO_STRING(const VlClassRef<VCGRATemplateRTL___05F3498633b417245a0_std__03a__03aprocess>& obj);

#endif  // guard
