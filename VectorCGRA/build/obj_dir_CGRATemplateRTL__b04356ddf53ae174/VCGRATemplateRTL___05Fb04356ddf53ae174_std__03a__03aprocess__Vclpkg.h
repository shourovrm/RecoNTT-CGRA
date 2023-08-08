// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCGRATemplateRTL___05Fb04356ddf53ae174.h for the primary calling header

#ifndef VERILATED_VCGRATEMPLATERTL___05FB04356DDF53AE174_STD__03A__03APROCESS__VCLPKG_H_
#define VERILATED_VCGRATEMPLATERTL___05FB04356DDF53AE174_STD__03A__03APROCESS__VCLPKG_H_  // guard

#include "verilated.h"
class VCGRATemplateRTL___05Fb04356ddf53ae174_std__03a__03aprocess;


class VCGRATemplateRTL___05Fb04356ddf53ae174__Syms;

class alignas(VL_CACHE_LINE_BYTES) VCGRATemplateRTL___05Fb04356ddf53ae174_std__03a__03aprocess__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    VCGRATemplateRTL___05Fb04356ddf53ae174__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCGRATemplateRTL___05Fb04356ddf53ae174_std__03a__03aprocess__Vclpkg(VCGRATemplateRTL___05Fb04356ddf53ae174__Syms* symsp, const char* v__name);
    ~VCGRATemplateRTL___05Fb04356ddf53ae174_std__03a__03aprocess__Vclpkg();
    VL_UNCOPYABLE(VCGRATemplateRTL___05Fb04356ddf53ae174_std__03a__03aprocess__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_self(VlProcessRef vlProcess, VCGRATemplateRTL___05Fb04356ddf53ae174__Syms* __restrict vlSymsp, VlClassRef<VCGRATemplateRTL___05Fb04356ddf53ae174_std__03a__03aprocess> &self__Vfuncrtn);
};


class VCGRATemplateRTL___05Fb04356ddf53ae174__Syms;

class VCGRATemplateRTL___05Fb04356ddf53ae174_std__03a__03aprocess : public VlClass {
  public:
    void __VnoInFunc_await(VCGRATemplateRTL___05Fb04356ddf53ae174__Syms* __restrict vlSymsp);
    void __VnoInFunc_get_randstate(VCGRATemplateRTL___05Fb04356ddf53ae174__Syms* __restrict vlSymsp, std::string &get_randstate__Vfuncrtn);
    void __VnoInFunc_kill(VCGRATemplateRTL___05Fb04356ddf53ae174__Syms* __restrict vlSymsp);
    void __VnoInFunc_resume(VCGRATemplateRTL___05Fb04356ddf53ae174__Syms* __restrict vlSymsp);
    void __VnoInFunc_set_randstate(VCGRATemplateRTL___05Fb04356ddf53ae174__Syms* __restrict vlSymsp, std::string s);
    void __VnoInFunc_set_status(VCGRATemplateRTL___05Fb04356ddf53ae174__Syms* __restrict vlSymsp, IData/*31:0*/ s);
    void __VnoInFunc_status(VCGRATemplateRTL___05Fb04356ddf53ae174__Syms* __restrict vlSymsp, IData/*31:0*/ &status__Vfuncrtn);
    void __VnoInFunc_suspend(VCGRATemplateRTL___05Fb04356ddf53ae174__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(VCGRATemplateRTL___05Fb04356ddf53ae174__Syms* __restrict vlSymsp);
  public:
    VCGRATemplateRTL___05Fb04356ddf53ae174_std__03a__03aprocess(VCGRATemplateRTL___05Fb04356ddf53ae174__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~VCGRATemplateRTL___05Fb04356ddf53ae174_std__03a__03aprocess();
};

std::string VL_TO_STRING(const VlClassRef<VCGRATemplateRTL___05Fb04356ddf53ae174_std__03a__03aprocess>& obj);

#endif  // guard
