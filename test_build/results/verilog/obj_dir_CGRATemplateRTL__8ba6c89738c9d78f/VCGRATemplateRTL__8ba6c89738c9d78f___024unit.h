// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCGRATemplateRTL__8ba6c89738c9d78f.h for the primary calling header

#ifndef _VCGRATEMPLATERTL__8BA6C89738C9D78F___024UNIT_H_
#define _VCGRATEMPLATERTL__8BA6C89738C9D78F___024UNIT_H_  // guard

#include "verilated.h"

//==========

class VCGRATemplateRTL__8ba6c89738c9d78f__Syms;
class VCGRATemplateRTL__8ba6c89738c9d78f_VerilatedVcd;


//----------

VL_MODULE(VCGRATemplateRTL__8ba6c89738c9d78f___024unit) {
  public:
    
    // INTERNAL VARIABLES
  private:
    VCGRATemplateRTL__8ba6c89738c9d78f__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VCGRATemplateRTL__8ba6c89738c9d78f___024unit);  ///< Copying not allowed
  public:
    VCGRATemplateRTL__8ba6c89738c9d78f___024unit(const char* name = "TOP");
    ~VCGRATemplateRTL__8ba6c89738c9d78f___024unit();
    
    // INTERNAL METHODS
    void __Vconfigure(VCGRATemplateRTL__8ba6c89738c9d78f__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
