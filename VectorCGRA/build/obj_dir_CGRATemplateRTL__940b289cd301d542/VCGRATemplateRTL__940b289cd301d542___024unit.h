// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCGRATemplateRTL__940b289cd301d542.h for the primary calling header

#ifndef _VCGRATEMPLATERTL__940B289CD301D542___024UNIT_H_
#define _VCGRATEMPLATERTL__940B289CD301D542___024UNIT_H_  // guard

#include "verilated.h"

//==========

class VCGRATemplateRTL__940b289cd301d542__Syms;
class VCGRATemplateRTL__940b289cd301d542_VerilatedVcd;


//----------

VL_MODULE(VCGRATemplateRTL__940b289cd301d542___024unit) {
  public:
    
    // INTERNAL VARIABLES
  private:
    VCGRATemplateRTL__940b289cd301d542__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VCGRATemplateRTL__940b289cd301d542___024unit);  ///< Copying not allowed
  public:
    VCGRATemplateRTL__940b289cd301d542___024unit(const char* name = "TOP");
    ~VCGRATemplateRTL__940b289cd301d542___024unit();
    
    // INTERNAL METHODS
    void __Vconfigure(VCGRATemplateRTL__940b289cd301d542__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
