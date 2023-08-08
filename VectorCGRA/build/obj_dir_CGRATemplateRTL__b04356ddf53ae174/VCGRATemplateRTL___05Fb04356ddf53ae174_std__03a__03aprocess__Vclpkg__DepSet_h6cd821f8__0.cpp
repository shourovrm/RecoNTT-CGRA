// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCGRATemplateRTL___05Fb04356ddf53ae174.h for the primary calling header

#include "verilated.h"

#include "VCGRATemplateRTL___05Fb04356ddf53ae174__Syms.h"
#include "VCGRATemplateRTL___05Fb04356ddf53ae174__Syms.h"
#include "VCGRATemplateRTL___05Fb04356ddf53ae174_std__03a__03aprocess__Vclpkg.h"

void VCGRATemplateRTL___05Fb04356ddf53ae174_std__03a__03aprocess__Vclpkg::__VnoInFunc_self(VlProcessRef vlProcess, VCGRATemplateRTL___05Fb04356ddf53ae174__Syms* __restrict vlSymsp, VlClassRef<VCGRATemplateRTL___05Fb04356ddf53ae174_std__03a__03aprocess> &self__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  VCGRATemplateRTL___05Fb04356ddf53ae174_std__03a__03aprocess__Vclpkg::__VnoInFunc_self\n"); );
    // Body
    VlClassRef<VCGRATemplateRTL___05Fb04356ddf53ae174_std__03a__03aprocess> p;
    p = VL_NEW(VCGRATemplateRTL___05Fb04356ddf53ae174_std__03a__03aprocess, vlSymsp);
    self__Vfuncrtn = p;
}

void VCGRATemplateRTL___05Fb04356ddf53ae174_std__03a__03aprocess::__VnoInFunc_suspend(VCGRATemplateRTL___05Fb04356ddf53ae174__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VCGRATemplateRTL___05Fb04356ddf53ae174_std__03a__03aprocess::__VnoInFunc_suspend\n"); );
    // Body
    VL_WRITEF("[%0t] %%Error: verilated_std.sv:156: Assertion failed in %Nstd.process.suspend: std::process::suspend() not supported\n",
              64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
    VL_STOP_MT("/usr/local/share/verilator/include/verilated_std.sv", 156, "");
}

VCGRATemplateRTL___05Fb04356ddf53ae174_std__03a__03aprocess::VCGRATemplateRTL___05Fb04356ddf53ae174_std__03a__03aprocess(VCGRATemplateRTL___05Fb04356ddf53ae174__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VCGRATemplateRTL___05Fb04356ddf53ae174_std__03a__03aprocess::new\n"); );
    // Init
    _ctor_var_reset(vlSymsp);
}

void VCGRATemplateRTL___05Fb04356ddf53ae174_std__03a__03aprocess::_ctor_var_reset(VCGRATemplateRTL___05Fb04356ddf53ae174__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VCGRATemplateRTL___05Fb04356ddf53ae174_std__03a__03aprocess::_ctor_var_reset\n"); );
    // Body
    if (false && vlSymsp) {}  // Prevent unused
}
