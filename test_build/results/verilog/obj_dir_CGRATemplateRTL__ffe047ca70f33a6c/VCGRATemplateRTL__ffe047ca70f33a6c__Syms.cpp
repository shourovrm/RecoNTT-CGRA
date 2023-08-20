// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VCGRATemplateRTL__ffe047ca70f33a6c__Syms.h"
#include "VCGRATemplateRTL__ffe047ca70f33a6c.h"
#include "VCGRATemplateRTL__ffe047ca70f33a6c___024unit.h"



// FUNCTIONS
VCGRATemplateRTL__ffe047ca70f33a6c__Syms::VCGRATemplateRTL__ffe047ca70f33a6c__Syms(VCGRATemplateRTL__ffe047ca70f33a6c* topp, const char* namep)
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
