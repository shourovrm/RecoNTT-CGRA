// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCGRATemplateRTL___05F3498633b417245a0.h for the primary calling header

#include "verilated.h"

#include "VCGRATemplateRTL___05F3498633b417245a0__Syms.h"
#include "VCGRATemplateRTL___05F3498633b417245a0__Syms.h"
#include "VCGRATemplateRTL___05F3498633b417245a0_std__03a__03asemaphore__Vclpkg.h"

VCGRATemplateRTL___05F3498633b417245a0_std__03a__03asemaphore::VCGRATemplateRTL___05F3498633b417245a0_std__03a__03asemaphore(VCGRATemplateRTL___05F3498633b417245a0__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VCGRATemplateRTL___05F3498633b417245a0_std__03a__03asemaphore::new\n"); );
    // Init
    _ctor_var_reset(vlSymsp);
    // Body
    this->__PVT__m_keyCount = keyCount;
}

void VCGRATemplateRTL___05F3498633b417245a0_std__03a__03asemaphore::_ctor_var_reset(VCGRATemplateRTL___05F3498633b417245a0__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VCGRATemplateRTL___05F3498633b417245a0_std__03a__03asemaphore::_ctor_var_reset\n"); );
    // Body
    if (false && vlSymsp) {}  // Prevent unused
    __PVT__m_keyCount = 0;
}
