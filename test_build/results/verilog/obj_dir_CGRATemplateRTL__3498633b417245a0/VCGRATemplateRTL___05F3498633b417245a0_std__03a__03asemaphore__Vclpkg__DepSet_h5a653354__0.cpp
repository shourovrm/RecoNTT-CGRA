// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCGRATemplateRTL___05F3498633b417245a0.h for the primary calling header

#include "verilated.h"

#include "VCGRATemplateRTL___05F3498633b417245a0__Syms.h"
#include "VCGRATemplateRTL___05F3498633b417245a0_std__03a__03asemaphore__Vclpkg.h"

void VCGRATemplateRTL___05F3498633b417245a0_std__03a__03asemaphore::__VnoInFunc_put(VCGRATemplateRTL___05F3498633b417245a0__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VCGRATemplateRTL___05F3498633b417245a0_std__03a__03asemaphore::__VnoInFunc_put\n"); );
    // Body
    this->__PVT__m_keyCount = (this->__PVT__m_keyCount 
                               + keyCount);
}

void VCGRATemplateRTL___05F3498633b417245a0_std__03a__03asemaphore::__VnoInFunc_get(VCGRATemplateRTL___05F3498633b417245a0__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VCGRATemplateRTL___05F3498633b417245a0_std__03a__03asemaphore::__VnoInFunc_get\n"); );
}

void VCGRATemplateRTL___05F3498633b417245a0_std__03a__03asemaphore::__VnoInFunc_try_get(VCGRATemplateRTL___05F3498633b417245a0__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount, IData/*31:0*/ &try_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VCGRATemplateRTL___05F3498633b417245a0_std__03a__03asemaphore::__VnoInFunc_try_get\n"); );
    // Body
    {
        if (VL_GTES_III(32, this->__PVT__m_keyCount, keyCount)) {
            this->__PVT__m_keyCount = (this->__PVT__m_keyCount 
                                       - keyCount);
            try_get__Vfuncrtn = 1U;
            goto __Vlabel1;
        }
        try_get__Vfuncrtn = 0U;
        __Vlabel1: ;
    }
}

VCGRATemplateRTL___05F3498633b417245a0_std__03a__03asemaphore::~VCGRATemplateRTL___05F3498633b417245a0_std__03a__03asemaphore() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VCGRATemplateRTL___05F3498633b417245a0_std__03a__03asemaphore::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<VCGRATemplateRTL___05F3498633b417245a0_std__03a__03asemaphore>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VCGRATemplateRTL___05F3498633b417245a0_std__03a__03asemaphore::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string VCGRATemplateRTL___05F3498633b417245a0_std__03a__03asemaphore::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VCGRATemplateRTL___05F3498633b417245a0_std__03a__03asemaphore::to_string\n"); );
    // Body
    return (std::string{"'{"} + to_string_middle() + "}");
}

std::string VCGRATemplateRTL___05F3498633b417245a0_std__03a__03asemaphore::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            VCGRATemplateRTL___05F3498633b417245a0_std__03a__03asemaphore::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_keyCount:" + VL_TO_STRING(__PVT__m_keyCount);
    return out;
}
