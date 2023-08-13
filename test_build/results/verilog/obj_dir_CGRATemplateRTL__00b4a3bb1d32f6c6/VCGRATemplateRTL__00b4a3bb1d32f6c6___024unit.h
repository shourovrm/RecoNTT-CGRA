// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCGRATemplateRTL__00b4a3bb1d32f6c6.h for the primary calling header

#ifndef _VCGRATEMPLATERTL__00B4A3BB1D32F6C6___024UNIT_H_
#define _VCGRATEMPLATERTL__00B4A3BB1D32F6C6___024UNIT_H_  // guard

#include "verilated.h"

//==========

class VCGRATemplateRTL__00b4a3bb1d32f6c6__Syms;
class VCGRATemplateRTL__00b4a3bb1d32f6c6_VerilatedVcd;


//----------

VL_MODULE(VCGRATemplateRTL__00b4a3bb1d32f6c6___024unit) {
  public:
    
    // INTERNAL VARIABLES
  private:
    VCGRATemplateRTL__00b4a3bb1d32f6c6__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VCGRATemplateRTL__00b4a3bb1d32f6c6___024unit);  ///< Copying not allowed
  public:
    VCGRATemplateRTL__00b4a3bb1d32f6c6___024unit(const char* name = "TOP");
    ~VCGRATemplateRTL__00b4a3bb1d32f6c6___024unit();
    
    // INTERNAL METHODS
    void __Vconfigure(VCGRATemplateRTL__00b4a3bb1d32f6c6__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
