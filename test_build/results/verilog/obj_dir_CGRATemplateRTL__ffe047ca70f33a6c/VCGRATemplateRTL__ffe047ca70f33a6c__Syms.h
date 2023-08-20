// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VCGRATEMPLATERTL__FFE047CA70F33A6C__SYMS_H_
#define _VCGRATEMPLATERTL__FFE047CA70F33A6C__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VCGRATemplateRTL__ffe047ca70f33a6c.h"
#include "VCGRATemplateRTL__ffe047ca70f33a6c___024unit.h"

// SYMS CLASS
class VCGRATemplateRTL__ffe047ca70f33a6c__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VCGRATemplateRTL__ffe047ca70f33a6c* TOPp;
    
    // CREATORS
    VCGRATemplateRTL__ffe047ca70f33a6c__Syms(VCGRATemplateRTL__ffe047ca70f33a6c* topp, const char* namep);
    ~VCGRATemplateRTL__ffe047ca70f33a6c__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
