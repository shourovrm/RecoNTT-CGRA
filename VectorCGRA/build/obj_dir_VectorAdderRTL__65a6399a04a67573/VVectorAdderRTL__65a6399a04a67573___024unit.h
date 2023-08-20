// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VVectorAdderRTL__65a6399a04a67573.h for the primary calling header

#ifndef _VVECTORADDERRTL__65A6399A04A67573___024UNIT_H_
#define _VVECTORADDERRTL__65A6399A04A67573___024UNIT_H_  // guard

#include "verilated.h"

//==========

class VVectorAdderRTL__65a6399a04a67573__Syms;
class VVectorAdderRTL__65a6399a04a67573_VerilatedVcd;


//----------

VL_MODULE(VVectorAdderRTL__65a6399a04a67573___024unit) {
  public:
    
    // INTERNAL VARIABLES
  private:
    VVectorAdderRTL__65a6399a04a67573__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VVectorAdderRTL__65a6399a04a67573___024unit);  ///< Copying not allowed
  public:
    VVectorAdderRTL__65a6399a04a67573___024unit(const char* name = "TOP");
    ~VVectorAdderRTL__65a6399a04a67573___024unit();
    
    // INTERNAL METHODS
    void __Vconfigure(VVectorAdderRTL__65a6399a04a67573__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
