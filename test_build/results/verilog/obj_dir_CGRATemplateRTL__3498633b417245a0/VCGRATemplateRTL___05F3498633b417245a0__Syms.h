// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCGRATEMPLATERTL___05F3498633B417245A0__SYMS_H_
#define VERILATED_VCGRATEMPLATERTL___05F3498633B417245A0__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VCGRATemplateRTL___05F3498633b417245a0.h"

// INCLUDE MODULE CLASSES
#include "VCGRATemplateRTL___05F3498633b417245a0___024root.h"
#include "VCGRATemplateRTL___05F3498633b417245a0___024unit.h"
#include "VCGRATemplateRTL___05F3498633b417245a0_std.h"
#include "VCGRATemplateRTL___05F3498633b417245a0_std__03a__03asemaphore__Vclpkg.h"
#include "VCGRATemplateRTL___05F3498633b417245a0_std__03a__03aprocess__Vclpkg.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VCGRATemplateRTL___05F3498633b417245a0__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VCGRATemplateRTL___05F3498633b417245a0* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VCGRATemplateRTL___05F3498633b417245a0___024root TOP;
    VCGRATemplateRTL___05F3498633b417245a0_std TOP__std;
    VCGRATemplateRTL___05F3498633b417245a0_std__03a__03aprocess__Vclpkg TOP__std__03a__03aprocess__Vclpkg;
    VCGRATemplateRTL___05F3498633b417245a0_std__03a__03asemaphore__Vclpkg TOP__std__03a__03asemaphore__Vclpkg;

    // SCOPE NAMES
    VerilatedScope __Vscope_std__process;
    VerilatedScope __Vscope_std__process__suspend;

    // CONSTRUCTORS
    VCGRATemplateRTL___05F3498633b417245a0__Syms(VerilatedContext* contextp, const char* namep, VCGRATemplateRTL___05F3498633b417245a0* modelp);
    ~VCGRATemplateRTL___05F3498633b417245a0__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
