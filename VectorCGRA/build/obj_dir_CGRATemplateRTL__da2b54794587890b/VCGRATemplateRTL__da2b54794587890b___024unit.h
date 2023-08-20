// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCGRATemplateRTL__da2b54794587890b.h for the primary calling header

#ifndef _VCGRATEMPLATERTL__DA2B54794587890B___024UNIT_H_
#define _VCGRATEMPLATERTL__DA2B54794587890B___024UNIT_H_  // guard

#include "verilated.h"

//==========

class VCGRATemplateRTL__da2b54794587890b__Syms;
class VCGRATemplateRTL__da2b54794587890b_VerilatedVcd;


//----------

VL_MODULE(VCGRATemplateRTL__da2b54794587890b___024unit) {
  public:
    
    // INTERNAL VARIABLES
  private:
    VCGRATemplateRTL__da2b54794587890b__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VCGRATemplateRTL__da2b54794587890b___024unit);  ///< Copying not allowed
  public:
    VCGRATemplateRTL__da2b54794587890b___024unit(const char* name = "TOP");
    ~VCGRATemplateRTL__da2b54794587890b___024unit();
    
    // INTERNAL METHODS
    void __Vconfigure(VCGRATemplateRTL__da2b54794587890b__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
