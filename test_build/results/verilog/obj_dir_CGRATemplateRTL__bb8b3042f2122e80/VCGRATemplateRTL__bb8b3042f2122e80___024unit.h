// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCGRATemplateRTL__bb8b3042f2122e80.h for the primary calling header

#ifndef _VCGRATEMPLATERTL__BB8B3042F2122E80___024UNIT_H_
#define _VCGRATEMPLATERTL__BB8B3042F2122E80___024UNIT_H_  // guard

#include "verilated.h"

//==========

class VCGRATemplateRTL__bb8b3042f2122e80__Syms;
class VCGRATemplateRTL__bb8b3042f2122e80_VerilatedVcd;


//----------

VL_MODULE(VCGRATemplateRTL__bb8b3042f2122e80___024unit) {
  public:
    
    // INTERNAL VARIABLES
  private:
    VCGRATemplateRTL__bb8b3042f2122e80__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VCGRATemplateRTL__bb8b3042f2122e80___024unit);  ///< Copying not allowed
  public:
    VCGRATemplateRTL__bb8b3042f2122e80___024unit(const char* name = "TOP");
    ~VCGRATemplateRTL__bb8b3042f2122e80___024unit();
    
    // INTERNAL METHODS
    void __Vconfigure(VCGRATemplateRTL__bb8b3042f2122e80__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
