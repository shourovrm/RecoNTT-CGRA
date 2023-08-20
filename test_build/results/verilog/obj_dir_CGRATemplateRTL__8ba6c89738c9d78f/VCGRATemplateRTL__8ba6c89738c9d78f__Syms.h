// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VCGRATEMPLATERTL__8BA6C89738C9D78F__SYMS_H_
#define _VCGRATEMPLATERTL__8BA6C89738C9D78F__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VCGRATemplateRTL__8ba6c89738c9d78f.h"
#include "VCGRATemplateRTL__8ba6c89738c9d78f___024unit.h"

// SYMS CLASS
class VCGRATemplateRTL__8ba6c89738c9d78f__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VCGRATemplateRTL__8ba6c89738c9d78f* TOPp;
    
    // CREATORS
    VCGRATemplateRTL__8ba6c89738c9d78f__Syms(VCGRATemplateRTL__8ba6c89738c9d78f* topp, const char* namep);
    ~VCGRATemplateRTL__8ba6c89738c9d78f__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
