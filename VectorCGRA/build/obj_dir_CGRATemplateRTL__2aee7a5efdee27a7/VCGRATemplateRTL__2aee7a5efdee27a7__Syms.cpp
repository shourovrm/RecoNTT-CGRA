// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VCGRATemplateRTL__2aee7a5efdee27a7__Syms.h"
#include "VCGRATemplateRTL__2aee7a5efdee27a7.h"
#include "VCGRATemplateRTL__2aee7a5efdee27a7___024unit.h"



// FUNCTIONS
VCGRATemplateRTL__2aee7a5efdee27a7__Syms::VCGRATemplateRTL__2aee7a5efdee27a7__Syms(VCGRATemplateRTL__2aee7a5efdee27a7* topp, const char* namep)
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
