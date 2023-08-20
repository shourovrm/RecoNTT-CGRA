// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VCGRATemplateRTL__940b289cd301d542__Syms.h"
#include "VCGRATemplateRTL__940b289cd301d542.h"
#include "VCGRATemplateRTL__940b289cd301d542___024unit.h"



// FUNCTIONS
VCGRATemplateRTL__940b289cd301d542__Syms::VCGRATemplateRTL__940b289cd301d542__Syms(VCGRATemplateRTL__940b289cd301d542* topp, const char* namep)
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
