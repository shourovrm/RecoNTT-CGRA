// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VCGRATemplateRTL__66994df26e00eec2__Syms.h"
#include "VCGRATemplateRTL__66994df26e00eec2.h"
#include "VCGRATemplateRTL__66994df26e00eec2___024unit.h"



// FUNCTIONS
VCGRATemplateRTL__66994df26e00eec2__Syms::VCGRATemplateRTL__66994df26e00eec2__Syms(VCGRATemplateRTL__66994df26e00eec2* topp, const char* namep)
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
