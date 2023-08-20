// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VCGRATemplateRTL__da2b54794587890b__Syms.h"
#include "VCGRATemplateRTL__da2b54794587890b.h"
#include "VCGRATemplateRTL__da2b54794587890b___024unit.h"



// FUNCTIONS
VCGRATemplateRTL__da2b54794587890b__Syms::VCGRATemplateRTL__da2b54794587890b__Syms(VCGRATemplateRTL__da2b54794587890b* topp, const char* namep)
    // Setup locals
    : __Vm_namep(namep)
    , __Vm_activity(false)
    , __Vm_baseCode(0)
    , __Vm_didInit(false)
    // Setup submodule names
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
}
