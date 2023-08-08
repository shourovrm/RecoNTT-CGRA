// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCGRATemplateRTL___05Fb04356ddf53ae174.h for the primary calling header

#include "verilated.h"

#include "VCGRATemplateRTL___05Fb04356ddf53ae174__Syms.h"
#include "VCGRATemplateRTL___05Fb04356ddf53ae174_std__03a__03aprocess__Vclpkg.h"

void VCGRATemplateRTL___05Fb04356ddf53ae174_std__03a__03aprocess::__VnoInFunc_set_status(VCGRATemplateRTL___05Fb04356ddf53ae174__Syms* __restrict vlSymsp, IData/*31:0*/ s) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VCGRATemplateRTL___05Fb04356ddf53ae174_std__03a__03aprocess::__VnoInFunc_set_status\n"); );
}

void VCGRATemplateRTL___05Fb04356ddf53ae174_std__03a__03aprocess::__VnoInFunc_status(VCGRATemplateRTL___05Fb04356ddf53ae174__Syms* __restrict vlSymsp, IData/*31:0*/ &status__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VCGRATemplateRTL___05Fb04356ddf53ae174_std__03a__03aprocess::__VnoInFunc_status\n"); );
    // Body
    status__Vfuncrtn = 1U;
}

void VCGRATemplateRTL___05Fb04356ddf53ae174_std__03a__03aprocess::__VnoInFunc_kill(VCGRATemplateRTL___05Fb04356ddf53ae174__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VCGRATemplateRTL___05Fb04356ddf53ae174_std__03a__03aprocess::__VnoInFunc_kill\n"); );
    // Body
    this->__VnoInFunc_set_status(vlSymsp, 4U);
}

void VCGRATemplateRTL___05Fb04356ddf53ae174_std__03a__03aprocess::__VnoInFunc_resume(VCGRATemplateRTL___05Fb04356ddf53ae174__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VCGRATemplateRTL___05Fb04356ddf53ae174_std__03a__03aprocess::__VnoInFunc_resume\n"); );
    // Body
    this->__VnoInFunc_set_status(vlSymsp, 1U);
}

void VCGRATemplateRTL___05Fb04356ddf53ae174_std__03a__03aprocess::__VnoInFunc_await(VCGRATemplateRTL___05Fb04356ddf53ae174__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VCGRATemplateRTL___05Fb04356ddf53ae174_std__03a__03aprocess::__VnoInFunc_await\n"); );
}

void VCGRATemplateRTL___05Fb04356ddf53ae174_std__03a__03aprocess::__VnoInFunc_get_randstate(VCGRATemplateRTL___05Fb04356ddf53ae174__Syms* __restrict vlSymsp, std::string &get_randstate__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VCGRATemplateRTL___05Fb04356ddf53ae174_std__03a__03aprocess::__VnoInFunc_get_randstate\n"); );
    // Body
    std::string s;
    s = VL_SFORMATF_NX("%0d",32,VL_RANDOM_I()) ;
    this->__VnoInFunc_set_randstate(vlSymsp, s);
    get_randstate__Vfuncrtn = s;
}

void VCGRATemplateRTL___05Fb04356ddf53ae174_std__03a__03aprocess::__VnoInFunc_set_randstate(VCGRATemplateRTL___05Fb04356ddf53ae174__Syms* __restrict vlSymsp, std::string s) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VCGRATemplateRTL___05Fb04356ddf53ae174_std__03a__03aprocess::__VnoInFunc_set_randstate\n"); );
    // Body
    (void)VL_URANDOM_SEEDED_II(VL_ATOI_N(s, 10));
}

VCGRATemplateRTL___05Fb04356ddf53ae174_std__03a__03aprocess::~VCGRATemplateRTL___05Fb04356ddf53ae174_std__03a__03aprocess() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VCGRATemplateRTL___05Fb04356ddf53ae174_std__03a__03aprocess::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<VCGRATemplateRTL___05Fb04356ddf53ae174_std__03a__03aprocess>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VCGRATemplateRTL___05Fb04356ddf53ae174_std__03a__03aprocess::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string VCGRATemplateRTL___05Fb04356ddf53ae174_std__03a__03aprocess::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VCGRATemplateRTL___05Fb04356ddf53ae174_std__03a__03aprocess::to_string\n"); );
    // Body
    return (std::string{"'{"} + to_string_middle() + "}");
}

std::string VCGRATemplateRTL___05Fb04356ddf53ae174_std__03a__03aprocess::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VCGRATemplateRTL___05Fb04356ddf53ae174_std__03a__03aprocess::to_string_middle\n"); );
    // Body
    std::string out;
    return out;
}
