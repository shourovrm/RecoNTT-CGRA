// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCGRATemplateRTL__64e0445f861cddea.h for the primary calling header

#ifndef _VCGRATEMPLATERTL__64E0445F861CDDEA___024UNIT_H_
#define _VCGRATEMPLATERTL__64E0445F861CDDEA___024UNIT_H_  // guard

#include "verilated.h"

//==========

class VCGRATemplateRTL__64e0445f861cddea__Syms;
class VCGRATemplateRTL__64e0445f861cddea_VerilatedVcd;


//----------

VL_MODULE(VCGRATemplateRTL__64e0445f861cddea___024unit) {
  public:
    
    // INTERNAL VARIABLES
  private:
    VCGRATemplateRTL__64e0445f861cddea__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VCGRATemplateRTL__64e0445f861cddea___024unit);  ///< Copying not allowed
  public:
    VCGRATemplateRTL__64e0445f861cddea___024unit(const char* name = "TOP");
    ~VCGRATemplateRTL__64e0445f861cddea___024unit();
    
    // INTERNAL METHODS
    void __Vconfigure(VCGRATemplateRTL__64e0445f861cddea__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
