// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VVECTORADDERRTL__65A6399A04A67573__SYMS_H_
#define _VVECTORADDERRTL__65A6399A04A67573__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VVectorAdderRTL__65a6399a04a67573.h"
#include "VVectorAdderRTL__65a6399a04a67573___024unit.h"

// SYMS CLASS
class VVectorAdderRTL__65a6399a04a67573__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VVectorAdderRTL__65a6399a04a67573* TOPp;
    
    // CREATORS
    VVectorAdderRTL__65a6399a04a67573__Syms(VVectorAdderRTL__65a6399a04a67573* topp, const char* namep);
    ~VVectorAdderRTL__65a6399a04a67573__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
