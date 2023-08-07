// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VCGRATemplateRTL__009dc38f16b51b37__Syms.h"
#include "VCGRATemplateRTL__009dc38f16b51b37.h"
#include "VCGRATemplateRTL__009dc38f16b51b37___024unit.h"



// FUNCTIONS
VCGRATemplateRTL__009dc38f16b51b37__Syms::VCGRATemplateRTL__009dc38f16b51b37__Syms(VCGRATemplateRTL__009dc38f16b51b37* topp, const char* namep)
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
