// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VCGRATEMPLATERTL__00B4A3BB1D32F6C6__SYMS_H_
#define _VCGRATEMPLATERTL__00B4A3BB1D32F6C6__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VCGRATemplateRTL__00b4a3bb1d32f6c6.h"
#include "VCGRATemplateRTL__00b4a3bb1d32f6c6___024unit.h"

// SYMS CLASS
class VCGRATemplateRTL__00b4a3bb1d32f6c6__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VCGRATemplateRTL__00b4a3bb1d32f6c6* TOPp;
    
    // CREATORS
    VCGRATemplateRTL__00b4a3bb1d32f6c6__Syms(VCGRATemplateRTL__00b4a3bb1d32f6c6* topp, const char* namep);
    ~VCGRATemplateRTL__00b4a3bb1d32f6c6__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
