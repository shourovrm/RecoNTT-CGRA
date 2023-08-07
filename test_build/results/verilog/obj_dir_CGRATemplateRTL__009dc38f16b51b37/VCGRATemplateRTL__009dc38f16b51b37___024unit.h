// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCGRATemplateRTL__009dc38f16b51b37.h for the primary calling header

#ifndef _VCGRATEMPLATERTL__009DC38F16B51B37___024UNIT_H_
#define _VCGRATEMPLATERTL__009DC38F16B51B37___024UNIT_H_  // guard

#include "verilated.h"

//==========

class VCGRATemplateRTL__009dc38f16b51b37__Syms;
class VCGRATemplateRTL__009dc38f16b51b37_VerilatedVcd;


//----------

VL_MODULE(VCGRATemplateRTL__009dc38f16b51b37___024unit) {
  public:
    
    // INTERNAL VARIABLES
  private:
    VCGRATemplateRTL__009dc38f16b51b37__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VCGRATemplateRTL__009dc38f16b51b37___024unit);  ///< Copying not allowed
  public:
    VCGRATemplateRTL__009dc38f16b51b37___024unit(const char* name = "TOP");
    ~VCGRATemplateRTL__009dc38f16b51b37___024unit();
    
    // INTERNAL METHODS
    void __Vconfigure(VCGRATemplateRTL__009dc38f16b51b37__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
