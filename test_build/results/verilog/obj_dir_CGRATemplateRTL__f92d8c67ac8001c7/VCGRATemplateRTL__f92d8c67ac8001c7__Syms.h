// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VCGRATEMPLATERTL__F92D8C67AC8001C7__SYMS_H_
#define _VCGRATEMPLATERTL__F92D8C67AC8001C7__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VCGRATemplateRTL__f92d8c67ac8001c7.h"
#include "VCGRATemplateRTL__f92d8c67ac8001c7___024unit.h"

// SYMS CLASS
class VCGRATemplateRTL__f92d8c67ac8001c7__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VCGRATemplateRTL__f92d8c67ac8001c7* TOPp;
    
    // CREATORS
    VCGRATemplateRTL__f92d8c67ac8001c7__Syms(VCGRATemplateRTL__f92d8c67ac8001c7* topp, const char* namep);
    ~VCGRATemplateRTL__f92d8c67ac8001c7__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
