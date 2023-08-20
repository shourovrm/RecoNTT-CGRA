// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VCGRATEMPLATERTL__DA2B54794587890B__SYMS_H_
#define _VCGRATEMPLATERTL__DA2B54794587890B__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VCGRATemplateRTL__da2b54794587890b.h"
#include "VCGRATemplateRTL__da2b54794587890b___024unit.h"

// SYMS CLASS
class VCGRATemplateRTL__da2b54794587890b__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VCGRATemplateRTL__da2b54794587890b* TOPp;
    
    // CREATORS
    VCGRATemplateRTL__da2b54794587890b__Syms(VCGRATemplateRTL__da2b54794587890b* topp, const char* namep);
    ~VCGRATemplateRTL__da2b54794587890b__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
