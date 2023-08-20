// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VVectorAdderRTL__65a6399a04a67573__Syms.h"


void VVectorAdderRTL__65a6399a04a67573::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VVectorAdderRTL__65a6399a04a67573__Syms* __restrict vlSymsp = static_cast<VVectorAdderRTL__65a6399a04a67573__Syms*>(userp);
    VVectorAdderRTL__65a6399a04a67573* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VVectorAdderRTL__65a6399a04a67573::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VVectorAdderRTL__65a6399a04a67573__Syms* __restrict vlSymsp = static_cast<VVectorAdderRTL__65a6399a04a67573__Syms*>(userp);
    VVectorAdderRTL__65a6399a04a67573* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->carry_in));
        tracep->chgBit(oldp+1,(vlTOPp->carry_out));
        tracep->chgBit(oldp+2,(vlTOPp->clk));
        tracep->chgCData(oldp+3,(vlTOPp->recv_in_count[0]),2);
        tracep->chgCData(oldp+4,(vlTOPp->recv_in_count[1]),2);
        tracep->chgBit(oldp+5,(vlTOPp->reset));
        tracep->chgBit(oldp+6,(vlTOPp->recv_const___05Fen));
        tracep->chgSData(oldp+7,(vlTOPp->recv_const___05Fmsg),9);
        tracep->chgBit(oldp+8,(vlTOPp->recv_const___05Frdy));
        tracep->chgBit(oldp+9,(vlTOPp->recv_in___05Fen[0]));
        tracep->chgBit(oldp+10,(vlTOPp->recv_in___05Fen[1]));
        tracep->chgSData(oldp+11,(vlTOPp->recv_in___05Fmsg[0]),9);
        tracep->chgSData(oldp+12,(vlTOPp->recv_in___05Fmsg[1]),9);
        tracep->chgBit(oldp+13,(vlTOPp->recv_in___05Frdy[0]));
        tracep->chgBit(oldp+14,(vlTOPp->recv_in___05Frdy[1]));
        tracep->chgBit(oldp+15,(vlTOPp->recv_opt___05Fen));
        tracep->chgIData(oldp+16,(vlTOPp->recv_opt___05Fmsg),31);
        tracep->chgBit(oldp+17,(vlTOPp->recv_opt___05Frdy));
        tracep->chgBit(oldp+18,(vlTOPp->send_out___05Fen[0]));
        tracep->chgSData(oldp+19,(vlTOPp->send_out___05Fmsg[0]),9);
        tracep->chgBit(oldp+20,(vlTOPp->send_out___05Frdy[0]));
        tracep->chgSData(oldp+21,(vlTOPp->VectorAdderRTL___05F65a6399a04a67573__DOT__carry_in_temp),9);
        tracep->chgIData(oldp+22,(vlTOPp->VectorAdderRTL___05F65a6399a04a67573__DOT__comb_logic__DOT__unnamedblk3__DOT__j),32);
    }
}

void VVectorAdderRTL__65a6399a04a67573::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VVectorAdderRTL__65a6399a04a67573__Syms* __restrict vlSymsp = static_cast<VVectorAdderRTL__65a6399a04a67573__Syms*>(userp);
    VVectorAdderRTL__65a6399a04a67573* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
