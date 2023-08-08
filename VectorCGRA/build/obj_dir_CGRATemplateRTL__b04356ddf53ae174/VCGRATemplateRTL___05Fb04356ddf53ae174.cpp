// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VCGRATemplateRTL___05Fb04356ddf53ae174.h"
#include "VCGRATemplateRTL___05Fb04356ddf53ae174__Syms.h"

//============================================================
// Constructors

VCGRATemplateRTL___05Fb04356ddf53ae174::VCGRATemplateRTL___05Fb04356ddf53ae174(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VCGRATemplateRTL___05Fb04356ddf53ae174__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , recv_waddr___05Fen{vlSymsp->TOP.recv_waddr___05Fen}
    , recv_waddr___05Fmsg{vlSymsp->TOP.recv_waddr___05Fmsg}
    , recv_waddr___05Frdy{vlSymsp->TOP.recv_waddr___05Frdy}
    , recv_wopt___05Fen{vlSymsp->TOP.recv_wopt___05Fen}
    , recv_wopt___05Fmsg{vlSymsp->TOP.recv_wopt___05Fmsg}
    , recv_wopt___05Frdy{vlSymsp->TOP.recv_wopt___05Frdy}
    , __PVT__std{vlSymsp->TOP.__PVT__std}
    , std__03a__03asemaphore__Vclpkg{vlSymsp->TOP.std__03a__03asemaphore__Vclpkg}
    , std__03a__03aprocess__Vclpkg{vlSymsp->TOP.std__03a__03aprocess__Vclpkg}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VCGRATemplateRTL___05Fb04356ddf53ae174::VCGRATemplateRTL___05Fb04356ddf53ae174(const char* _vcname__)
    : VCGRATemplateRTL___05Fb04356ddf53ae174(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VCGRATemplateRTL___05Fb04356ddf53ae174::~VCGRATemplateRTL___05Fb04356ddf53ae174() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VCGRATemplateRTL___05Fb04356ddf53ae174___024root___eval_debug_assertions(VCGRATemplateRTL___05Fb04356ddf53ae174___024root* vlSelf);
#endif  // VL_DEBUG
void VCGRATemplateRTL___05Fb04356ddf53ae174___024root___eval_static(VCGRATemplateRTL___05Fb04356ddf53ae174___024root* vlSelf);
void VCGRATemplateRTL___05Fb04356ddf53ae174___024root___eval_initial(VCGRATemplateRTL___05Fb04356ddf53ae174___024root* vlSelf);
void VCGRATemplateRTL___05Fb04356ddf53ae174___024root___eval_settle(VCGRATemplateRTL___05Fb04356ddf53ae174___024root* vlSelf);
void VCGRATemplateRTL___05Fb04356ddf53ae174___024root___eval(VCGRATemplateRTL___05Fb04356ddf53ae174___024root* vlSelf);

void VCGRATemplateRTL___05Fb04356ddf53ae174::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VCGRATemplateRTL___05Fb04356ddf53ae174::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VCGRATemplateRTL___05Fb04356ddf53ae174___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VCGRATemplateRTL___05Fb04356ddf53ae174___024root___eval_static(&(vlSymsp->TOP));
        VCGRATemplateRTL___05Fb04356ddf53ae174___024root___eval_initial(&(vlSymsp->TOP));
        VCGRATemplateRTL___05Fb04356ddf53ae174___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VCGRATemplateRTL___05Fb04356ddf53ae174___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VCGRATemplateRTL___05Fb04356ddf53ae174::eventsPending() { return false; }

uint64_t VCGRATemplateRTL___05Fb04356ddf53ae174::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VCGRATemplateRTL___05Fb04356ddf53ae174::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VCGRATemplateRTL___05Fb04356ddf53ae174___024root___eval_final(VCGRATemplateRTL___05Fb04356ddf53ae174___024root* vlSelf);

VL_ATTR_COLD void VCGRATemplateRTL___05Fb04356ddf53ae174::final() {
    VCGRATemplateRTL___05Fb04356ddf53ae174___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VCGRATemplateRTL___05Fb04356ddf53ae174::hierName() const { return vlSymsp->name(); }
const char* VCGRATemplateRTL___05Fb04356ddf53ae174::modelName() const { return "VCGRATemplateRTL___05Fb04356ddf53ae174"; }
unsigned VCGRATemplateRTL___05Fb04356ddf53ae174::threads() const { return 1; }
