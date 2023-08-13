// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCGRATemplateRTL__be12bc513b19c609.h for the primary calling header

#ifndef _VCGRATEMPLATERTL__BE12BC513B19C609___024UNIT_H_
#define _VCGRATEMPLATERTL__BE12BC513B19C609___024UNIT_H_  // guard

#include "verilated.h"

//==========

class VCGRATemplateRTL__be12bc513b19c609__Syms;

//----------

VL_MODULE(VCGRATemplateRTL__be12bc513b19c609___024unit) {
  public:
    
    // INTERNAL VARIABLES
  private:
    VCGRATemplateRTL__be12bc513b19c609__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VCGRATemplateRTL__be12bc513b19c609___024unit);  ///< Copying not allowed
  public:
    VCGRATemplateRTL__be12bc513b19c609___024unit(const char* name = "TOP");
    ~VCGRATemplateRTL__be12bc513b19c609___024unit();
    
    // INTERNAL METHODS
    void __Vconfigure(VCGRATemplateRTL__be12bc513b19c609__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
