// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VVectorAdderRTL__65a6399a04a67573__Syms.h"
#include "VVectorAdderRTL__65a6399a04a67573.h"
#include "VVectorAdderRTL__65a6399a04a67573___024unit.h"



// FUNCTIONS
VVectorAdderRTL__65a6399a04a67573__Syms::VVectorAdderRTL__65a6399a04a67573__Syms(VVectorAdderRTL__65a6399a04a67573* topp, const char* namep)
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
