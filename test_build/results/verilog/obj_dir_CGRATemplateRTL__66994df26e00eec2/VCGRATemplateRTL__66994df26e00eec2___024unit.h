// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCGRATemplateRTL__66994df26e00eec2.h for the primary calling header

#ifndef _VCGRATEMPLATERTL__66994DF26E00EEC2___024UNIT_H_
#define _VCGRATEMPLATERTL__66994DF26E00EEC2___024UNIT_H_  // guard

#include "verilated.h"

//==========

class VCGRATemplateRTL__66994df26e00eec2__Syms;
class VCGRATemplateRTL__66994df26e00eec2_VerilatedVcd;


//----------

VL_MODULE(VCGRATemplateRTL__66994df26e00eec2___024unit) {
  public:
    
    // INTERNAL VARIABLES
  private:
    VCGRATemplateRTL__66994df26e00eec2__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VCGRATemplateRTL__66994df26e00eec2___024unit);  ///< Copying not allowed
  public:
    VCGRATemplateRTL__66994df26e00eec2___024unit(const char* name = "TOP");
    ~VCGRATemplateRTL__66994df26e00eec2___024unit();
    
    // INTERNAL METHODS
    void __Vconfigure(VCGRATemplateRTL__66994df26e00eec2__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
