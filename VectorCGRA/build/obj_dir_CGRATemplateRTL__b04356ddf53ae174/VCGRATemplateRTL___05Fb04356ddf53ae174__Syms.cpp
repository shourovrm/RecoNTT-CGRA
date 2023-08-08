// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VCGRATemplateRTL___05Fb04356ddf53ae174__Syms.h"
#include "VCGRATemplateRTL___05Fb04356ddf53ae174.h"
#include "VCGRATemplateRTL___05Fb04356ddf53ae174___024root.h"
#include "VCGRATemplateRTL___05Fb04356ddf53ae174___024unit.h"
#include "VCGRATemplateRTL___05Fb04356ddf53ae174_std.h"
#include "VCGRATemplateRTL___05Fb04356ddf53ae174_std__03a__03asemaphore__Vclpkg.h"
#include "VCGRATemplateRTL___05Fb04356ddf53ae174_std__03a__03aprocess__Vclpkg.h"

// FUNCTIONS
VCGRATemplateRTL___05Fb04356ddf53ae174__Syms::~VCGRATemplateRTL___05Fb04356ddf53ae174__Syms()
{
}

VCGRATemplateRTL___05Fb04356ddf53ae174__Syms::VCGRATemplateRTL___05Fb04356ddf53ae174__Syms(VerilatedContext* contextp, const char* namep, VCGRATemplateRTL___05Fb04356ddf53ae174* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__std{this, Verilated::catName(namep, "std")}
    , TOP__std__03a__03aprocess__Vclpkg{this, Verilated::catName(namep, "std::process__Vclpkg")}
    , TOP__std__03a__03asemaphore__Vclpkg{this, Verilated::catName(namep, "std::semaphore__Vclpkg")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__std = &TOP__std;
    TOP.std__03a__03aprocess__Vclpkg = &TOP__std__03a__03aprocess__Vclpkg;
    TOP.std__03a__03asemaphore__Vclpkg = &TOP__std__03a__03asemaphore__Vclpkg;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__std.__Vconfigure(true);
    TOP__std__03a__03aprocess__Vclpkg.__Vconfigure(true);
    TOP__std__03a__03asemaphore__Vclpkg.__Vconfigure(true);
    // Setup scopes
    __Vscope_std__process.configure(this, name(), "std.process", "process", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_std__process__suspend.configure(this, name(), "std.process.suspend", "suspend", -12, VerilatedScope::SCOPE_OTHER);
}
