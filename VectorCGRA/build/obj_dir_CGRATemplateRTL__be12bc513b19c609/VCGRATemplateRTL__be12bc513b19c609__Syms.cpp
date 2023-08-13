// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VCGRATemplateRTL__be12bc513b19c609__Syms.h"
#include "VCGRATemplateRTL__be12bc513b19c609.h"
#include "VCGRATemplateRTL__be12bc513b19c609___024unit.h"



// FUNCTIONS
VCGRATemplateRTL__be12bc513b19c609__Syms::VCGRATemplateRTL__be12bc513b19c609__Syms(VCGRATemplateRTL__be12bc513b19c609* topp, const char* namep)
    // Setup locals
    : __Vm_namep(namep)
    , __Vm_didInit(false)
    // Setup submodule names
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
}
