// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VCGRATEMPLATERTL__BB8B3042F2122E80__SYMS_H_
#define _VCGRATEMPLATERTL__BB8B3042F2122E80__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VCGRATemplateRTL__bb8b3042f2122e80.h"
#include "VCGRATemplateRTL__bb8b3042f2122e80___024unit.h"

// SYMS CLASS
class VCGRATemplateRTL__bb8b3042f2122e80__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VCGRATemplateRTL__bb8b3042f2122e80* TOPp;
    
    // CREATORS
    VCGRATemplateRTL__bb8b3042f2122e80__Syms(VCGRATemplateRTL__bb8b3042f2122e80* topp, const char* namep);
    ~VCGRATemplateRTL__bb8b3042f2122e80__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
