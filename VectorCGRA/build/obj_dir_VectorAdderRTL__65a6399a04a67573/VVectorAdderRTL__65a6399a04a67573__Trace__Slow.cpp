// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VVectorAdderRTL__65a6399a04a67573__Syms.h"


//======================

void VVectorAdderRTL__65a6399a04a67573::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VVectorAdderRTL__65a6399a04a67573::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VVectorAdderRTL__65a6399a04a67573__Syms* __restrict vlSymsp = static_cast<VVectorAdderRTL__65a6399a04a67573__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VVectorAdderRTL__65a6399a04a67573::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VVectorAdderRTL__65a6399a04a67573::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VVectorAdderRTL__65a6399a04a67573__Syms* __restrict vlSymsp = static_cast<VVectorAdderRTL__65a6399a04a67573__Syms*>(userp);
    VVectorAdderRTL__65a6399a04a67573* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VVectorAdderRTL__65a6399a04a67573::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VVectorAdderRTL__65a6399a04a67573__Syms* __restrict vlSymsp = static_cast<VVectorAdderRTL__65a6399a04a67573__Syms*>(userp);
    VVectorAdderRTL__65a6399a04a67573* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+1,"carry_in", false,-1, 0,0);
        tracep->declBus(c+2,"carry_out", false,-1, 0,0);
        tracep->declBus(c+3,"clk", false,-1, 0,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+4+i*1,"recv_in_count", true,(i+0), 1,0);}}
        tracep->declBus(c+6,"reset", false,-1, 0,0);
        tracep->declBus(c+7,"recv_const__en", false,-1, 0,0);
        tracep->declBus(c+8,"recv_const__msg", false,-1, 8,0);
        tracep->declBus(c+9,"recv_const__rdy", false,-1, 0,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+10+i*1,"recv_in__en", true,(i+0), 0,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+12+i*1,"recv_in__msg", true,(i+0), 8,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+14+i*1,"recv_in__rdy", true,(i+0), 0,0);}}
        tracep->declBus(c+16,"recv_opt__en", false,-1, 0,0);
        tracep->declBus(c+17,"recv_opt__msg", false,-1, 30,0);
        tracep->declBus(c+18,"recv_opt__rdy", false,-1, 0,0);
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+19+i*1,"send_out__en", true,(i+0), 0,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+20+i*1,"send_out__msg", true,(i+0), 8,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+21+i*1,"send_out__rdy", true,(i+0), 0,0);}}
        tracep->declBus(c+1,"VectorAdderRTL__65a6399a04a67573 carry_in", false,-1, 0,0);
        tracep->declBus(c+2,"VectorAdderRTL__65a6399a04a67573 carry_out", false,-1, 0,0);
        tracep->declBus(c+3,"VectorAdderRTL__65a6399a04a67573 clk", false,-1, 0,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+4+i*1,"VectorAdderRTL__65a6399a04a67573 recv_in_count", true,(i+0), 1,0);}}
        tracep->declBus(c+6,"VectorAdderRTL__65a6399a04a67573 reset", false,-1, 0,0);
        tracep->declBus(c+7,"VectorAdderRTL__65a6399a04a67573 recv_const__en", false,-1, 0,0);
        tracep->declBus(c+8,"VectorAdderRTL__65a6399a04a67573 recv_const__msg", false,-1, 8,0);
        tracep->declBus(c+9,"VectorAdderRTL__65a6399a04a67573 recv_const__rdy", false,-1, 0,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+10+i*1,"VectorAdderRTL__65a6399a04a67573 recv_in__en", true,(i+0), 0,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+12+i*1,"VectorAdderRTL__65a6399a04a67573 recv_in__msg", true,(i+0), 8,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+14+i*1,"VectorAdderRTL__65a6399a04a67573 recv_in__rdy", true,(i+0), 0,0);}}
        tracep->declBus(c+16,"VectorAdderRTL__65a6399a04a67573 recv_opt__en", false,-1, 0,0);
        tracep->declBus(c+17,"VectorAdderRTL__65a6399a04a67573 recv_opt__msg", false,-1, 30,0);
        tracep->declBus(c+18,"VectorAdderRTL__65a6399a04a67573 recv_opt__rdy", false,-1, 0,0);
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+19+i*1,"VectorAdderRTL__65a6399a04a67573 send_out__en", true,(i+0), 0,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+20+i*1,"VectorAdderRTL__65a6399a04a67573 send_out__msg", true,(i+0), 8,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+21+i*1,"VectorAdderRTL__65a6399a04a67573 send_out__rdy", true,(i+0), 0,0);}}
        tracep->declBus(c+24,"VectorAdderRTL__65a6399a04a67573 const_one", false,-1, 8,0);
        tracep->declBus(c+22,"VectorAdderRTL__65a6399a04a67573 carry_in_temp", false,-1, 8,0);
        tracep->declBus(c+25,"VectorAdderRTL__65a6399a04a67573 comb_logic unnamedblk1 i", false,-1, 31,0);
        tracep->declBus(c+26,"VectorAdderRTL__65a6399a04a67573 comb_logic unnamedblk2 j", false,-1, 31,0);
        tracep->declBus(c+23,"VectorAdderRTL__65a6399a04a67573 comb_logic unnamedblk3 j", false,-1, 31,0);
        tracep->declBus(c+26,"VectorAdderRTL__65a6399a04a67573 update_signal unnamedblk4 j", false,-1, 31,0);
    }
}

void VVectorAdderRTL__65a6399a04a67573::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VVectorAdderRTL__65a6399a04a67573::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VVectorAdderRTL__65a6399a04a67573__Syms* __restrict vlSymsp = static_cast<VVectorAdderRTL__65a6399a04a67573__Syms*>(userp);
    VVectorAdderRTL__65a6399a04a67573* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VVectorAdderRTL__65a6399a04a67573::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VVectorAdderRTL__65a6399a04a67573__Syms* __restrict vlSymsp = static_cast<VVectorAdderRTL__65a6399a04a67573__Syms*>(userp);
    VVectorAdderRTL__65a6399a04a67573* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->carry_in));
        tracep->fullBit(oldp+2,(vlTOPp->carry_out));
        tracep->fullBit(oldp+3,(vlTOPp->clk));
        tracep->fullCData(oldp+4,(vlTOPp->recv_in_count[0]),2);
        tracep->fullCData(oldp+5,(vlTOPp->recv_in_count[1]),2);
        tracep->fullBit(oldp+6,(vlTOPp->reset));
        tracep->fullBit(oldp+7,(vlTOPp->recv_const___05Fen));
        tracep->fullSData(oldp+8,(vlTOPp->recv_const___05Fmsg),9);
        tracep->fullBit(oldp+9,(vlTOPp->recv_const___05Frdy));
        tracep->fullBit(oldp+10,(vlTOPp->recv_in___05Fen[0]));
        tracep->fullBit(oldp+11,(vlTOPp->recv_in___05Fen[1]));
        tracep->fullSData(oldp+12,(vlTOPp->recv_in___05Fmsg[0]),9);
        tracep->fullSData(oldp+13,(vlTOPp->recv_in___05Fmsg[1]),9);
        tracep->fullBit(oldp+14,(vlTOPp->recv_in___05Frdy[0]));
        tracep->fullBit(oldp+15,(vlTOPp->recv_in___05Frdy[1]));
        tracep->fullBit(oldp+16,(vlTOPp->recv_opt___05Fen));
        tracep->fullIData(oldp+17,(vlTOPp->recv_opt___05Fmsg),31);
        tracep->fullBit(oldp+18,(vlTOPp->recv_opt___05Frdy));
        tracep->fullBit(oldp+19,(vlTOPp->send_out___05Fen[0]));
        tracep->fullSData(oldp+20,(vlTOPp->send_out___05Fmsg[0]),9);
        tracep->fullBit(oldp+21,(vlTOPp->send_out___05Frdy[0]));
        tracep->fullSData(oldp+22,(vlTOPp->VectorAdderRTL___05F65a6399a04a67573__DOT__carry_in_temp),9);
        tracep->fullIData(oldp+23,(vlTOPp->VectorAdderRTL___05F65a6399a04a67573__DOT__comb_logic__DOT__unnamedblk3__DOT__j),32);
        tracep->fullSData(oldp+24,(1U),9);
        tracep->fullIData(oldp+25,(2U),32);
        tracep->fullIData(oldp+26,(1U),32);
    }
}
