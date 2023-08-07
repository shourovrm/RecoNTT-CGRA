// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCGRATemplateRTL__f92d8c67ac8001c7.h for the primary calling header

#ifndef _VCGRATEMPLATERTL__F92D8C67AC8001C7___024UNIT_H_
#define _VCGRATEMPLATERTL__F92D8C67AC8001C7___024UNIT_H_  // guard

#include "verilated.h"

//==========

class VCGRATemplateRTL__f92d8c67ac8001c7__Syms;
class VCGRATemplateRTL__f92d8c67ac8001c7_VerilatedVcd;


//----------

VL_MODULE(VCGRATemplateRTL__f92d8c67ac8001c7___024unit) {
  public:
    
    // INTERNAL VARIABLES
  private:
    VCGRATemplateRTL__f92d8c67ac8001c7__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VCGRATemplateRTL__f92d8c67ac8001c7___024unit);  ///< Copying not allowed
  public:
    VCGRATemplateRTL__f92d8c67ac8001c7___024unit(const char* name = "TOP");
    ~VCGRATemplateRTL__f92d8c67ac8001c7___024unit();
    
    // INTERNAL METHODS
    void __Vconfigure(VCGRATemplateRTL__f92d8c67ac8001c7__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
