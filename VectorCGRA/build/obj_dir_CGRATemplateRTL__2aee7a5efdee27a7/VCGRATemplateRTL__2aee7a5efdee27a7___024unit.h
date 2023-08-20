// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCGRATemplateRTL__2aee7a5efdee27a7.h for the primary calling header

#ifndef _VCGRATEMPLATERTL__2AEE7A5EFDEE27A7___024UNIT_H_
#define _VCGRATEMPLATERTL__2AEE7A5EFDEE27A7___024UNIT_H_  // guard

#include "verilated.h"

//==========

class VCGRATemplateRTL__2aee7a5efdee27a7__Syms;
class VCGRATemplateRTL__2aee7a5efdee27a7_VerilatedVcd;


//----------

VL_MODULE(VCGRATemplateRTL__2aee7a5efdee27a7___024unit) {
  public:
    
    // INTERNAL VARIABLES
  private:
    VCGRATemplateRTL__2aee7a5efdee27a7__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VCGRATemplateRTL__2aee7a5efdee27a7___024unit);  ///< Copying not allowed
  public:
    VCGRATemplateRTL__2aee7a5efdee27a7___024unit(const char* name = "TOP");
    ~VCGRATemplateRTL__2aee7a5efdee27a7___024unit();
    
    // INTERNAL METHODS
    void __Vconfigure(VCGRATemplateRTL__2aee7a5efdee27a7__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
