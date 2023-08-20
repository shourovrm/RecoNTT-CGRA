// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCGRATemplateRTL__ffe047ca70f33a6c.h for the primary calling header

#ifndef _VCGRATEMPLATERTL__FFE047CA70F33A6C___024UNIT_H_
#define _VCGRATEMPLATERTL__FFE047CA70F33A6C___024UNIT_H_  // guard

#include "verilated.h"

//==========

class VCGRATemplateRTL__ffe047ca70f33a6c__Syms;
class VCGRATemplateRTL__ffe047ca70f33a6c_VerilatedVcd;


//----------

VL_MODULE(VCGRATemplateRTL__ffe047ca70f33a6c___024unit) {
  public:
    
    // INTERNAL VARIABLES
  private:
    VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VCGRATemplateRTL__ffe047ca70f33a6c___024unit);  ///< Copying not allowed
  public:
    VCGRATemplateRTL__ffe047ca70f33a6c___024unit(const char* name = "TOP");
    ~VCGRATemplateRTL__ffe047ca70f33a6c___024unit();
    
    // INTERNAL METHODS
    void __Vconfigure(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
