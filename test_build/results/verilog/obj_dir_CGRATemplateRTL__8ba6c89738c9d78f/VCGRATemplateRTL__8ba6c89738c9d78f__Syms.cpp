// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VCGRATemplateRTL__8ba6c89738c9d78f__Syms.h"
#include "VCGRATemplateRTL__8ba6c89738c9d78f.h"
#include "VCGRATemplateRTL__8ba6c89738c9d78f___024unit.h"



// FUNCTIONS
VCGRATemplateRTL__8ba6c89738c9d78f__Syms::VCGRATemplateRTL__8ba6c89738c9d78f__Syms(VCGRATemplateRTL__8ba6c89738c9d78f* topp, const char* namep)
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
