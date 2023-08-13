// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VCGRATEMPLATERTL__BE12BC513B19C609__SYMS_H_
#define _VCGRATEMPLATERTL__BE12BC513B19C609__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VCGRATemplateRTL__be12bc513b19c609.h"
#include "VCGRATemplateRTL__be12bc513b19c609___024unit.h"

// SYMS CLASS
class VCGRATemplateRTL__be12bc513b19c609__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VCGRATemplateRTL__be12bc513b19c609* TOPp;
    
    // CREATORS
    VCGRATemplateRTL__be12bc513b19c609__Syms(VCGRATemplateRTL__be12bc513b19c609* topp, const char* namep);
    ~VCGRATemplateRTL__be12bc513b19c609__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
