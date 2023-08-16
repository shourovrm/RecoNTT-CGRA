// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCGRATemplateRTL__d80e03f95dce6322.h for the primary calling header

#ifndef _VCGRATEMPLATERTL__D80E03F95DCE6322___024UNIT_H_
#define _VCGRATEMPLATERTL__D80E03F95DCE6322___024UNIT_H_  // guard

#include "verilated.h"

//==========

class VCGRATemplateRTL__d80e03f95dce6322__Syms;
class VCGRATemplateRTL__d80e03f95dce6322_VerilatedVcd;


//----------

VL_MODULE(VCGRATemplateRTL__d80e03f95dce6322___024unit) {
  public:
    
    // INTERNAL VARIABLES
  private:
    VCGRATemplateRTL__d80e03f95dce6322__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VCGRATemplateRTL__d80e03f95dce6322___024unit);  ///< Copying not allowed
  public:
    VCGRATemplateRTL__d80e03f95dce6322___024unit(const char* name = "TOP");
    ~VCGRATemplateRTL__d80e03f95dce6322___024unit();
    
    // INTERNAL METHODS
    void __Vconfigure(VCGRATemplateRTL__d80e03f95dce6322__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
