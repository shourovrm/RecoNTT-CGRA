// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCGRATemplateRTL__ffe047ca70f33a6c.h for the primary calling header

#include "VCGRATemplateRTL__ffe047ca70f33a6c.h"
#include "VCGRATemplateRTL__ffe047ca70f33a6c__Syms.h"

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__60(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__60\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx91;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*1:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx91 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__reg_predicate__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__reg_predicate__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg91[__Vtableidx91])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable91_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx91];
    }
    if ((2U & vlTOPp->__Vtablechg91[__Vtableidx91])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable91_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx91];
    }
    if ((4U & vlTOPp->__Vtablechg91[__Vtableidx91])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable91_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx91];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__reg_predicate__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[1U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[2U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[3U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[4U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[5U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[6U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[7U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[8U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[9U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[0xaU] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__element__DOT____Vlvbound8;
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__61(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__61\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx104;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*1:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx104 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                       << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                  << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                                << 2U) 
                                               | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__reg_predicate__DOT__queues___05Fdeq___05Fen
                                                    [0U] 
                                                    & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                   << 1U) 
                                                  | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__reg_predicate__DOT__queues___05Freset
                                                  [0U])))));
    if ((1U & vlTOPp->__Vtablechg104[__Vtableidx104])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable104_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx104];
    }
    if ((2U & vlTOPp->__Vtablechg104[__Vtableidx104])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable104_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx104];
    }
    if ((4U & vlTOPp->__Vtablechg104[__Vtableidx104])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable104_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx104];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__reg_predicate__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[1U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[2U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[3U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[4U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[5U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[6U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[7U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[8U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[9U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[0xaU] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__element__DOT____Vlvbound8;
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__62(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__62\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx117;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*1:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx117 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                       << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                  << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                                << 2U) 
                                               | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__reg_predicate__DOT__queues___05Fdeq___05Fen
                                                    [0U] 
                                                    & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                   << 1U) 
                                                  | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__reg_predicate__DOT__queues___05Freset
                                                  [0U])))));
    if ((1U & vlTOPp->__Vtablechg117[__Vtableidx117])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable117_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx117];
    }
    if ((2U & vlTOPp->__Vtablechg117[__Vtableidx117])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable117_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx117];
    }
    if ((4U & vlTOPp->__Vtablechg117[__Vtableidx117])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable117_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx117];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__reg_predicate__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[1U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[2U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[3U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[4U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[5U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[6U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[7U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[8U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[9U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[0xaU] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F8__DOT__element__DOT____Vlvbound8;
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__63(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__63\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx130;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*1:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx130 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                       << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                  << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                                << 2U) 
                                               | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__reg_predicate__DOT__queues___05Fdeq___05Fen
                                                    [0U] 
                                                    & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                   << 1U) 
                                                  | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__reg_predicate__DOT__queues___05Freset
                                                  [0U])))));
    if ((1U & vlTOPp->__Vtablechg130[__Vtableidx130])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable130_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx130];
    }
    if ((2U & vlTOPp->__Vtablechg130[__Vtableidx130])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable130_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx130];
    }
    if ((4U & vlTOPp->__Vtablechg130[__Vtableidx130])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable130_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx130];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__reg_predicate__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[1U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[2U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[3U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[4U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[5U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[6U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[7U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[8U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[9U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[0xaU] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F9__DOT__element__DOT____Vlvbound8;
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__64(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__64\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx143;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*1:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx143 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                       << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                  << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                                << 2U) 
                                               | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__reg_predicate__DOT__queues___05Fdeq___05Fen
                                                    [0U] 
                                                    & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                   << 1U) 
                                                  | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__reg_predicate__DOT__queues___05Freset
                                                  [0U])))));
    if ((1U & vlTOPp->__Vtablechg143[__Vtableidx143])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable143_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx143];
    }
    if ((2U & vlTOPp->__Vtablechg143[__Vtableidx143])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable143_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx143];
    }
    if ((4U & vlTOPp->__Vtablechg143[__Vtableidx143])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable143_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx143];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__reg_predicate__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[1U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[2U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[3U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[4U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[5U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[6U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[7U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[8U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[9U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[0xaU] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F10__DOT__element__DOT____Vlvbound8;
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__65(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__65\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx156;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*1:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx156 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                       << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                  << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                                << 2U) 
                                               | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__reg_predicate__DOT__queues___05Fdeq___05Fen
                                                    [0U] 
                                                    & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                   << 1U) 
                                                  | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__reg_predicate__DOT__queues___05Freset
                                                  [0U])))));
    if ((1U & vlTOPp->__Vtablechg156[__Vtableidx156])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable156_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx156];
    }
    if ((2U & vlTOPp->__Vtablechg156[__Vtableidx156])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable156_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx156];
    }
    if ((4U & vlTOPp->__Vtablechg156[__Vtableidx156])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable156_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx156];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__reg_predicate__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[1U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[2U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[3U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[4U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[5U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[6U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[7U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[8U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[9U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[0xaU] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F11__DOT__element__DOT____Vlvbound8;
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__66(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__66\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx169;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*1:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx169 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                       << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                  << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                                << 2U) 
                                               | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__reg_predicate__DOT__queues___05Fdeq___05Fen
                                                    [0U] 
                                                    & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                   << 1U) 
                                                  | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__reg_predicate__DOT__queues___05Freset
                                                  [0U])))));
    if ((1U & vlTOPp->__Vtablechg169[__Vtableidx169])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable169_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx169];
    }
    if ((2U & vlTOPp->__Vtablechg169[__Vtableidx169])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable169_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx169];
    }
    if ((4U & vlTOPp->__Vtablechg169[__Vtableidx169])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable169_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx169];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__reg_predicate__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[1U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[2U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[3U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[4U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[5U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[6U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[7U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[8U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[9U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[0xaU] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F12__DOT__element__DOT____Vlvbound8;
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__67(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__67\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx182;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*1:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx182 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                       << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                  << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                                << 2U) 
                                               | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__reg_predicate__DOT__queues___05Fdeq___05Fen
                                                    [0U] 
                                                    & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                   << 1U) 
                                                  | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__reg_predicate__DOT__queues___05Freset
                                                  [0U])))));
    if ((1U & vlTOPp->__Vtablechg182[__Vtableidx182])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable182_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx182];
    }
    if ((2U & vlTOPp->__Vtablechg182[__Vtableidx182])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable182_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx182];
    }
    if ((4U & vlTOPp->__Vtablechg182[__Vtableidx182])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable182_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx182];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__reg_predicate__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[1U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[2U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[3U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[4U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[5U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[6U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[7U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[8U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[9U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[0xaU] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F13__DOT__element__DOT____Vlvbound8;
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__68(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__68\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx195;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*1:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx195 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                       << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                  << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                                << 2U) 
                                               | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__reg_predicate__DOT__queues___05Fdeq___05Fen
                                                    [0U] 
                                                    & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                   << 1U) 
                                                  | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__reg_predicate__DOT__queues___05Freset
                                                  [0U])))));
    if ((1U & vlTOPp->__Vtablechg195[__Vtableidx195])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable195_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx195];
    }
    if ((2U & vlTOPp->__Vtablechg195[__Vtableidx195])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable195_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx195];
    }
    if ((4U & vlTOPp->__Vtablechg195[__Vtableidx195])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable195_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx195];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__reg_predicate__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[1U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[2U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[3U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[4U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[5U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[6U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[7U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[8U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[9U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[0xaU] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F14__DOT__element__DOT____Vlvbound8;
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__69(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__69\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx208;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*1:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx208 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                       << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                  << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                                << 2U) 
                                               | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__reg_predicate__DOT__queues___05Fdeq___05Fen
                                                    [0U] 
                                                    & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                   << 1U) 
                                                  | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__reg_predicate__DOT__queues___05Freset
                                                  [0U])))));
    if ((1U & vlTOPp->__Vtablechg208[__Vtableidx208])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable208_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx208];
    }
    if ((2U & vlTOPp->__Vtablechg208[__Vtableidx208])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable208_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx208];
    }
    if ((4U & vlTOPp->__Vtablechg208[__Vtableidx208])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable208_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx208];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__reg_predicate__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__reg_predicate__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__reg_predicate__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[1U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[2U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[3U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[4U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[5U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[6U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[7U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[8U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[9U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__element__DOT____Vlvbound8;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__element__DOT____Vlvbound8 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__reg_predicate__DOT__queues___05Fdeq___05Fret
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__element__DOT__fu___05Frecv_predicate___05Fmsg[0xaU] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F15__DOT__element__DOT____Vlvbound8;
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__70(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__70\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx1;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx1 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                     << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                           << 3U) | 
                                          (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                            << 2U) 
                                           | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F0__DOT__queues___05Fdeq___05Fen
                                                [0U] 
                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                               << 1U) 
                                              | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F0__DOT__queues___05Freset
                                              [0U])))));
    if ((1U & vlTOPp->__Vtablechg1[__Vtableidx1])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable1_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx1];
    }
    if ((2U & vlTOPp->__Vtablechg1[__Vtableidx1])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable1_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx1];
    }
    if ((4U & vlTOPp->__Vtablechg1[__Vtableidx1])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable1_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx1];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F0__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F0__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F0__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__71(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__71\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx2;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx2 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                     << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                           << 3U) | 
                                          (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                            << 2U) 
                                           | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F1__DOT__queues___05Fdeq___05Fen
                                                [0U] 
                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                               << 1U) 
                                              | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F1__DOT__queues___05Freset
                                              [0U])))));
    if ((1U & vlTOPp->__Vtablechg2[__Vtableidx2])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable2_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx2];
    }
    if ((2U & vlTOPp->__Vtablechg2[__Vtableidx2])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable2_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx2];
    }
    if ((4U & vlTOPp->__Vtablechg2[__Vtableidx2])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable2_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx2];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F1__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05Fcount[1U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F1__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F1__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__72(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__72\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx3;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx3 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                     << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                           << 3U) | 
                                          (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                            << 2U) 
                                           | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F2__DOT__queues___05Fdeq___05Fen
                                                [0U] 
                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                               << 1U) 
                                              | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F2__DOT__queues___05Freset
                                              [0U])))));
    if ((1U & vlTOPp->__Vtablechg3[__Vtableidx3])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable3_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx3];
    }
    if ((2U & vlTOPp->__Vtablechg3[__Vtableidx3])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable3_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx3];
    }
    if ((4U & vlTOPp->__Vtablechg3[__Vtableidx3])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable3_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx3];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F2__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05Fcount[2U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F2__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F2__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__73(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__73\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx4;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx4 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                     << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                           << 3U) | 
                                          (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                            << 2U) 
                                           | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F3__DOT__queues___05Fdeq___05Fen
                                                [0U] 
                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                               << 1U) 
                                              | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F3__DOT__queues___05Freset
                                              [0U])))));
    if ((1U & vlTOPp->__Vtablechg4[__Vtableidx4])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable4_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx4];
    }
    if ((2U & vlTOPp->__Vtablechg4[__Vtableidx4])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable4_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx4];
    }
    if ((4U & vlTOPp->__Vtablechg4[__Vtableidx4])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable4_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx4];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F3__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05Fcount[3U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F3__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F3__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__74(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__74\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx5;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx5 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                     << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                           << 3U) | 
                                          (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                            << 2U) 
                                           | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F4__DOT__queues___05Fdeq___05Fen
                                                [0U] 
                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                               << 1U) 
                                              | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F4__DOT__queues___05Freset
                                              [0U])))));
    if ((1U & vlTOPp->__Vtablechg5[__Vtableidx5])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable5_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx5];
    }
    if ((2U & vlTOPp->__Vtablechg5[__Vtableidx5])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable5_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx5];
    }
    if ((4U & vlTOPp->__Vtablechg5[__Vtableidx5])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable5_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx5];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F4__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05Fcount[4U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F4__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F4__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__75(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__75\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx6;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx6 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                     << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                           << 3U) | 
                                          (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                            << 2U) 
                                           | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F5__DOT__queues___05Fdeq___05Fen
                                                [0U] 
                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                               << 1U) 
                                              | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F5__DOT__queues___05Freset
                                              [0U])))));
    if ((1U & vlTOPp->__Vtablechg6[__Vtableidx6])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable6_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx6];
    }
    if ((2U & vlTOPp->__Vtablechg6[__Vtableidx6])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable6_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx6];
    }
    if ((4U & vlTOPp->__Vtablechg6[__Vtableidx6])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable6_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx6];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F5__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05Fcount[5U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F5__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F5__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__76(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__76\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx7;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx7 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                     << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                           << 3U) | 
                                          (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                            << 2U) 
                                           | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F6__DOT__queues___05Fdeq___05Fen
                                                [0U] 
                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                               << 1U) 
                                              | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F6__DOT__queues___05Freset
                                              [0U])))));
    if ((1U & vlTOPp->__Vtablechg7[__Vtableidx7])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable7_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx7];
    }
    if ((2U & vlTOPp->__Vtablechg7[__Vtableidx7])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable7_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx7];
    }
    if ((4U & vlTOPp->__Vtablechg7[__Vtableidx7])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable7_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx7];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F6__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05Fcount[6U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F6__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F6__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__77(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__77\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx8;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx8 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                     << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                           << 3U) | 
                                          (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                            << 2U) 
                                           | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F7__DOT__queues___05Fdeq___05Fen
                                                [0U] 
                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                               << 1U) 
                                              | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F7__DOT__queues___05Freset
                                              [0U])))));
    if ((1U & vlTOPp->__Vtablechg8[__Vtableidx8])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable8_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx8];
    }
    if ((2U & vlTOPp->__Vtablechg8[__Vtableidx8])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable8_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx8];
    }
    if ((4U & vlTOPp->__Vtablechg8[__Vtableidx8])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable8_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx8];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F7__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05Fcount[7U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F7__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F7__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__78(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__78\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx9;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx9 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                     << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                           << 3U) | 
                                          (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                            << 2U) 
                                           | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F8__DOT__queues___05Fdeq___05Fen
                                                [0U] 
                                                & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                               << 1U) 
                                              | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F8__DOT__queues___05Freset
                                              [0U])))));
    if ((1U & vlTOPp->__Vtablechg9[__Vtableidx9])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable9_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx9];
    }
    if ((2U & vlTOPp->__Vtablechg9[__Vtableidx9])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable9_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx9];
    }
    if ((4U & vlTOPp->__Vtablechg9[__Vtableidx9])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable9_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx9];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F8__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05Fcount[8U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F8__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F8__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__79(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__79\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx10;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx10 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F9__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F9__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg10[__Vtableidx10])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable10_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx10];
    }
    if ((2U & vlTOPp->__Vtablechg10[__Vtableidx10])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable10_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx10];
    }
    if ((4U & vlTOPp->__Vtablechg10[__Vtableidx10])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable10_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx10];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F9__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05Fcount[9U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F9__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F9__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__80(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__80\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx11;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx11 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F10__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F10__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg11[__Vtableidx11])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable11_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx11];
    }
    if ((2U & vlTOPp->__Vtablechg11[__Vtableidx11])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable11_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx11];
    }
    if ((4U & vlTOPp->__Vtablechg11[__Vtableidx11])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable11_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx11];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F10__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05Fcount[0xaU] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F10__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F10__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__81(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__81\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx12;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx12 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F11__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F11__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg12[__Vtableidx12])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable12_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx12];
    }
    if ((2U & vlTOPp->__Vtablechg12[__Vtableidx12])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable12_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx12];
    }
    if ((4U & vlTOPp->__Vtablechg12[__Vtableidx12])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable12_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx12];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F11__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05Fcount[0xbU] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F11__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F11__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F0__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__82(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__82\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx14;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx14 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F0__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F0__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg14[__Vtableidx14])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable14_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx14];
    }
    if ((2U & vlTOPp->__Vtablechg14[__Vtableidx14])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable14_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx14];
    }
    if ((4U & vlTOPp->__Vtablechg14[__Vtableidx14])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable14_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx14];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F0__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F0__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F0__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__83(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__83\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx15;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx15 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F1__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F1__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg15[__Vtableidx15])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable15_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx15];
    }
    if ((2U & vlTOPp->__Vtablechg15[__Vtableidx15])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable15_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx15];
    }
    if ((4U & vlTOPp->__Vtablechg15[__Vtableidx15])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable15_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx15];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F1__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05Fcount[1U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F1__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F1__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__84(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__84\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx16;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx16 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F2__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F2__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg16[__Vtableidx16])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable16_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx16];
    }
    if ((2U & vlTOPp->__Vtablechg16[__Vtableidx16])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable16_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx16];
    }
    if ((4U & vlTOPp->__Vtablechg16[__Vtableidx16])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable16_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx16];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F2__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05Fcount[2U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F2__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F2__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__85(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__85\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx17;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx17 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F3__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F3__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg17[__Vtableidx17])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable17_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx17];
    }
    if ((2U & vlTOPp->__Vtablechg17[__Vtableidx17])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable17_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx17];
    }
    if ((4U & vlTOPp->__Vtablechg17[__Vtableidx17])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable17_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx17];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F3__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05Fcount[3U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F3__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F3__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__86(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__86\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx18;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx18 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F4__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F4__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg18[__Vtableidx18])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable18_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx18];
    }
    if ((2U & vlTOPp->__Vtablechg18[__Vtableidx18])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable18_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx18];
    }
    if ((4U & vlTOPp->__Vtablechg18[__Vtableidx18])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable18_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx18];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F4__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05Fcount[4U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F4__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F4__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__87(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__87\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx19;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx19 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F5__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F5__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg19[__Vtableidx19])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable19_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx19];
    }
    if ((2U & vlTOPp->__Vtablechg19[__Vtableidx19])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable19_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx19];
    }
    if ((4U & vlTOPp->__Vtablechg19[__Vtableidx19])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable19_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx19];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F5__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05Fcount[5U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F5__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F5__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__88(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__88\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx20;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx20 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F6__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F6__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg20[__Vtableidx20])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable20_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx20];
    }
    if ((2U & vlTOPp->__Vtablechg20[__Vtableidx20])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable20_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx20];
    }
    if ((4U & vlTOPp->__Vtablechg20[__Vtableidx20])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable20_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx20];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F6__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05Fcount[6U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F6__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F6__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__89(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__89\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx21;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx21 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F7__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F7__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg21[__Vtableidx21])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable21_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx21];
    }
    if ((2U & vlTOPp->__Vtablechg21[__Vtableidx21])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable21_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx21];
    }
    if ((4U & vlTOPp->__Vtablechg21[__Vtableidx21])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable21_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx21];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F7__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05Fcount[7U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F7__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F7__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__90(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__90\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx22;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx22 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F8__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F8__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg22[__Vtableidx22])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable22_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx22];
    }
    if ((2U & vlTOPp->__Vtablechg22[__Vtableidx22])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable22_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx22];
    }
    if ((4U & vlTOPp->__Vtablechg22[__Vtableidx22])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable22_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx22];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F8__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05Fcount[8U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F8__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F8__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__91(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__91\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx23;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx23 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F9__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F9__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg23[__Vtableidx23])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable23_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx23];
    }
    if ((2U & vlTOPp->__Vtablechg23[__Vtableidx23])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable23_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx23];
    }
    if ((4U & vlTOPp->__Vtablechg23[__Vtableidx23])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable23_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx23];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F9__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05Fcount[9U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F9__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F9__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__92(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__92\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx24;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx24 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F10__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F10__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg24[__Vtableidx24])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable24_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx24];
    }
    if ((2U & vlTOPp->__Vtablechg24[__Vtableidx24])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable24_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx24];
    }
    if ((4U & vlTOPp->__Vtablechg24[__Vtableidx24])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable24_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx24];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F10__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05Fcount[0xaU] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F10__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F10__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__93(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__93\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx25;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx25 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F11__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F11__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg25[__Vtableidx25])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable25_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx25];
    }
    if ((2U & vlTOPp->__Vtablechg25[__Vtableidx25])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable25_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx25];
    }
    if ((4U & vlTOPp->__Vtablechg25[__Vtableidx25])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable25_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx25];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F11__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05Fcount[0xbU] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F11__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F11__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F1__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__94(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__94\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx27;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx27 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F0__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F0__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg27[__Vtableidx27])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable27_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx27];
    }
    if ((2U & vlTOPp->__Vtablechg27[__Vtableidx27])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable27_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx27];
    }
    if ((4U & vlTOPp->__Vtablechg27[__Vtableidx27])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable27_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx27];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F0__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F0__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F0__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__95(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__95\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx28;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx28 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F1__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F1__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg28[__Vtableidx28])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable28_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx28];
    }
    if ((2U & vlTOPp->__Vtablechg28[__Vtableidx28])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable28_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx28];
    }
    if ((4U & vlTOPp->__Vtablechg28[__Vtableidx28])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable28_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx28];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F1__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05Fcount[1U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F1__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F1__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__96(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__96\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx29;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx29 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F2__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F2__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg29[__Vtableidx29])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable29_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx29];
    }
    if ((2U & vlTOPp->__Vtablechg29[__Vtableidx29])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable29_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx29];
    }
    if ((4U & vlTOPp->__Vtablechg29[__Vtableidx29])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable29_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx29];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F2__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05Fcount[2U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F2__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F2__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__97(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__97\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx30;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx30 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F3__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F3__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg30[__Vtableidx30])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable30_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx30];
    }
    if ((2U & vlTOPp->__Vtablechg30[__Vtableidx30])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable30_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx30];
    }
    if ((4U & vlTOPp->__Vtablechg30[__Vtableidx30])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable30_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx30];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F3__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05Fcount[3U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F3__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F3__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__98(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__98\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx31;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx31 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F4__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F4__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg31[__Vtableidx31])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable31_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx31];
    }
    if ((2U & vlTOPp->__Vtablechg31[__Vtableidx31])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable31_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx31];
    }
    if ((4U & vlTOPp->__Vtablechg31[__Vtableidx31])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable31_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx31];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F4__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05Fcount[4U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F4__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F4__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__99(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__99\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx32;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx32 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F5__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F5__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg32[__Vtableidx32])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable32_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx32];
    }
    if ((2U & vlTOPp->__Vtablechg32[__Vtableidx32])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable32_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx32];
    }
    if ((4U & vlTOPp->__Vtablechg32[__Vtableidx32])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable32_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx32];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F5__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05Fcount[5U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F5__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F5__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__100(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__100\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx33;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx33 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F6__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F6__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg33[__Vtableidx33])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable33_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx33];
    }
    if ((2U & vlTOPp->__Vtablechg33[__Vtableidx33])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable33_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx33];
    }
    if ((4U & vlTOPp->__Vtablechg33[__Vtableidx33])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable33_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx33];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F6__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05Fcount[6U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F6__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F6__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__101(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__101\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx34;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx34 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F7__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F7__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg34[__Vtableidx34])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable34_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx34];
    }
    if ((2U & vlTOPp->__Vtablechg34[__Vtableidx34])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable34_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx34];
    }
    if ((4U & vlTOPp->__Vtablechg34[__Vtableidx34])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable34_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx34];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F7__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05Fcount[7U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F7__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F7__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__102(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__102\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx35;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx35 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F8__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F8__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg35[__Vtableidx35])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable35_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx35];
    }
    if ((2U & vlTOPp->__Vtablechg35[__Vtableidx35])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable35_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx35];
    }
    if ((4U & vlTOPp->__Vtablechg35[__Vtableidx35])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable35_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx35];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F8__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05Fcount[8U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F8__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F8__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__103(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__103\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx36;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx36 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F9__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F9__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg36[__Vtableidx36])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable36_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx36];
    }
    if ((2U & vlTOPp->__Vtablechg36[__Vtableidx36])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable36_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx36];
    }
    if ((4U & vlTOPp->__Vtablechg36[__Vtableidx36])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable36_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx36];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F9__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05Fcount[9U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F9__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F9__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__104(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__104\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx37;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx37 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F10__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F10__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg37[__Vtableidx37])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable37_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx37];
    }
    if ((2U & vlTOPp->__Vtablechg37[__Vtableidx37])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable37_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx37];
    }
    if ((4U & vlTOPp->__Vtablechg37[__Vtableidx37])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable37_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx37];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F10__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05Fcount[0xaU] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F10__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F10__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__105(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__105\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx38;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx38 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F11__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F11__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg38[__Vtableidx38])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable38_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx38];
    }
    if ((2U & vlTOPp->__Vtablechg38[__Vtableidx38])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable38_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx38];
    }
    if ((4U & vlTOPp->__Vtablechg38[__Vtableidx38])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable38_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx38];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F11__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05Fcount[0xbU] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F11__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F11__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F2__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__106(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__106\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx40;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx40 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F0__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F0__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg40[__Vtableidx40])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable40_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx40];
    }
    if ((2U & vlTOPp->__Vtablechg40[__Vtableidx40])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable40_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx40];
    }
    if ((4U & vlTOPp->__Vtablechg40[__Vtableidx40])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable40_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx40];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F0__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F0__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F0__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__107(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__107\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx41;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx41 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F1__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F1__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg41[__Vtableidx41])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable41_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx41];
    }
    if ((2U & vlTOPp->__Vtablechg41[__Vtableidx41])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable41_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx41];
    }
    if ((4U & vlTOPp->__Vtablechg41[__Vtableidx41])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable41_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx41];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F1__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05Fcount[1U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F1__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F1__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__108(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__108\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx42;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx42 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F2__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F2__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg42[__Vtableidx42])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable42_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx42];
    }
    if ((2U & vlTOPp->__Vtablechg42[__Vtableidx42])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable42_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx42];
    }
    if ((4U & vlTOPp->__Vtablechg42[__Vtableidx42])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable42_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx42];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F2__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05Fcount[2U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F2__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F2__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__109(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__109\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx43;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx43 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F3__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F3__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg43[__Vtableidx43])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable43_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx43];
    }
    if ((2U & vlTOPp->__Vtablechg43[__Vtableidx43])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable43_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx43];
    }
    if ((4U & vlTOPp->__Vtablechg43[__Vtableidx43])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable43_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx43];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F3__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05Fcount[3U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F3__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F3__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__110(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__110\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx44;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx44 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F4__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F4__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg44[__Vtableidx44])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable44_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx44];
    }
    if ((2U & vlTOPp->__Vtablechg44[__Vtableidx44])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable44_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx44];
    }
    if ((4U & vlTOPp->__Vtablechg44[__Vtableidx44])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable44_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx44];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F4__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05Fcount[4U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F4__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F4__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__111(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__111\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx45;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx45 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F5__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F5__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg45[__Vtableidx45])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable45_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx45];
    }
    if ((2U & vlTOPp->__Vtablechg45[__Vtableidx45])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable45_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx45];
    }
    if ((4U & vlTOPp->__Vtablechg45[__Vtableidx45])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable45_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx45];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F5__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05Fcount[5U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F5__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F5__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__112(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__112\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx46;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx46 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F6__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F6__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg46[__Vtableidx46])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable46_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx46];
    }
    if ((2U & vlTOPp->__Vtablechg46[__Vtableidx46])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable46_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx46];
    }
    if ((4U & vlTOPp->__Vtablechg46[__Vtableidx46])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable46_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx46];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F6__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05Fcount[6U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F6__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F6__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__113(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__113\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx47;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx47 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F7__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F7__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg47[__Vtableidx47])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable47_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx47];
    }
    if ((2U & vlTOPp->__Vtablechg47[__Vtableidx47])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable47_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx47];
    }
    if ((4U & vlTOPp->__Vtablechg47[__Vtableidx47])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable47_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx47];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F7__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05Fcount[7U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F7__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F7__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__114(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__114\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx48;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx48 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F8__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F8__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg48[__Vtableidx48])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable48_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx48];
    }
    if ((2U & vlTOPp->__Vtablechg48[__Vtableidx48])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable48_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx48];
    }
    if ((4U & vlTOPp->__Vtablechg48[__Vtableidx48])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable48_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx48];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F8__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05Fcount[8U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F8__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F8__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__115(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__115\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx49;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx49 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F9__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F9__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg49[__Vtableidx49])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable49_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx49];
    }
    if ((2U & vlTOPp->__Vtablechg49[__Vtableidx49])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable49_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx49];
    }
    if ((4U & vlTOPp->__Vtablechg49[__Vtableidx49])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable49_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx49];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F9__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05Fcount[9U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F9__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F9__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__116(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__116\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx50;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx50 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F10__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F10__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg50[__Vtableidx50])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable50_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx50];
    }
    if ((2U & vlTOPp->__Vtablechg50[__Vtableidx50])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable50_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx50];
    }
    if ((4U & vlTOPp->__Vtablechg50[__Vtableidx50])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable50_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx50];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F10__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05Fcount[0xaU] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F10__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F10__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__117(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__117\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx51;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx51 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F11__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F11__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg51[__Vtableidx51])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable51_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx51];
    }
    if ((2U & vlTOPp->__Vtablechg51[__Vtableidx51])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable51_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx51];
    }
    if ((4U & vlTOPp->__Vtablechg51[__Vtableidx51])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable51_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx51];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F11__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05Fcount[0xbU] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F11__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F11__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F3__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__118(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__118\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx53;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx53 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F0__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F0__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg53[__Vtableidx53])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable53_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx53];
    }
    if ((2U & vlTOPp->__Vtablechg53[__Vtableidx53])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable53_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx53];
    }
    if ((4U & vlTOPp->__Vtablechg53[__Vtableidx53])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable53_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx53];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F0__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F0__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F0__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__119(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__119\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx54;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx54 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F1__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F1__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg54[__Vtableidx54])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable54_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx54];
    }
    if ((2U & vlTOPp->__Vtablechg54[__Vtableidx54])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable54_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx54];
    }
    if ((4U & vlTOPp->__Vtablechg54[__Vtableidx54])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable54_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx54];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F1__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05Fcount[1U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F1__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F1__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__120(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__120\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx55;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx55 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F2__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F2__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg55[__Vtableidx55])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable55_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx55];
    }
    if ((2U & vlTOPp->__Vtablechg55[__Vtableidx55])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable55_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx55];
    }
    if ((4U & vlTOPp->__Vtablechg55[__Vtableidx55])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable55_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx55];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F2__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05Fcount[2U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F2__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F2__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__121(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__121\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx56;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx56 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F3__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F3__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg56[__Vtableidx56])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable56_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx56];
    }
    if ((2U & vlTOPp->__Vtablechg56[__Vtableidx56])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable56_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx56];
    }
    if ((4U & vlTOPp->__Vtablechg56[__Vtableidx56])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable56_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx56];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F3__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05Fcount[3U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F3__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F3__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__122(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__122\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx57;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx57 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F4__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F4__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg57[__Vtableidx57])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable57_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx57];
    }
    if ((2U & vlTOPp->__Vtablechg57[__Vtableidx57])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable57_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx57];
    }
    if ((4U & vlTOPp->__Vtablechg57[__Vtableidx57])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable57_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx57];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F4__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05Fcount[4U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F4__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F4__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__123(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__123\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx58;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx58 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F5__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F5__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg58[__Vtableidx58])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable58_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx58];
    }
    if ((2U & vlTOPp->__Vtablechg58[__Vtableidx58])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable58_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx58];
    }
    if ((4U & vlTOPp->__Vtablechg58[__Vtableidx58])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable58_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx58];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F5__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05Fcount[5U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F5__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F5__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__124(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__124\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx59;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx59 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F6__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F6__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg59[__Vtableidx59])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable59_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx59];
    }
    if ((2U & vlTOPp->__Vtablechg59[__Vtableidx59])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable59_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx59];
    }
    if ((4U & vlTOPp->__Vtablechg59[__Vtableidx59])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable59_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx59];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F6__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05Fcount[6U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F6__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F6__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__125(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__125\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx60;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx60 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F7__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F7__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg60[__Vtableidx60])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable60_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx60];
    }
    if ((2U & vlTOPp->__Vtablechg60[__Vtableidx60])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable60_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx60];
    }
    if ((4U & vlTOPp->__Vtablechg60[__Vtableidx60])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable60_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx60];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F7__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05Fcount[7U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F7__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F7__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__126(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__126\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx61;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx61 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F8__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F8__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg61[__Vtableidx61])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable61_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx61];
    }
    if ((2U & vlTOPp->__Vtablechg61[__Vtableidx61])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable61_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx61];
    }
    if ((4U & vlTOPp->__Vtablechg61[__Vtableidx61])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable61_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx61];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F8__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05Fcount[8U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F8__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F8__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__127(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__127\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx62;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx62 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F9__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F9__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg62[__Vtableidx62])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable62_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx62];
    }
    if ((2U & vlTOPp->__Vtablechg62[__Vtableidx62])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable62_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx62];
    }
    if ((4U & vlTOPp->__Vtablechg62[__Vtableidx62])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable62_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx62];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F9__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05Fcount[9U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F9__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F9__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__128(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__128\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx63;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx63 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F10__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F10__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg63[__Vtableidx63])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable63_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx63];
    }
    if ((2U & vlTOPp->__Vtablechg63[__Vtableidx63])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable63_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx63];
    }
    if ((4U & vlTOPp->__Vtablechg63[__Vtableidx63])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable63_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx63];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F10__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05Fcount[0xaU] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F10__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F10__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__129(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__129\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx64;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx64 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F11__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F11__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg64[__Vtableidx64])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable64_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx64];
    }
    if ((2U & vlTOPp->__Vtablechg64[__Vtableidx64])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable64_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx64];
    }
    if ((4U & vlTOPp->__Vtablechg64[__Vtableidx64])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable64_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx64];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F11__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05Fcount[0xbU] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F11__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F11__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F4__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__130(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__130\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx66;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx66 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F0__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F0__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg66[__Vtableidx66])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable66_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx66];
    }
    if ((2U & vlTOPp->__Vtablechg66[__Vtableidx66])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable66_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx66];
    }
    if ((4U & vlTOPp->__Vtablechg66[__Vtableidx66])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable66_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx66];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F0__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F0__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F0__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__131(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__131\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx67;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx67 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F1__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F1__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg67[__Vtableidx67])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable67_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx67];
    }
    if ((2U & vlTOPp->__Vtablechg67[__Vtableidx67])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable67_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx67];
    }
    if ((4U & vlTOPp->__Vtablechg67[__Vtableidx67])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable67_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx67];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F1__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05Fcount[1U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F1__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F1__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__132(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__132\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx68;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx68 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F2__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F2__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg68[__Vtableidx68])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable68_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx68];
    }
    if ((2U & vlTOPp->__Vtablechg68[__Vtableidx68])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable68_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx68];
    }
    if ((4U & vlTOPp->__Vtablechg68[__Vtableidx68])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable68_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx68];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F2__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05Fcount[2U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F2__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F2__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__133(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__133\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx69;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx69 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F3__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F3__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg69[__Vtableidx69])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable69_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx69];
    }
    if ((2U & vlTOPp->__Vtablechg69[__Vtableidx69])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable69_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx69];
    }
    if ((4U & vlTOPp->__Vtablechg69[__Vtableidx69])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable69_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx69];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F3__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05Fcount[3U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F3__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F3__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__134(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__134\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx70;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx70 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F4__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F4__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg70[__Vtableidx70])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable70_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx70];
    }
    if ((2U & vlTOPp->__Vtablechg70[__Vtableidx70])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable70_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx70];
    }
    if ((4U & vlTOPp->__Vtablechg70[__Vtableidx70])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable70_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx70];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F4__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05Fcount[4U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F4__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F4__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__135(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__135\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx71;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx71 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F5__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F5__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg71[__Vtableidx71])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable71_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx71];
    }
    if ((2U & vlTOPp->__Vtablechg71[__Vtableidx71])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable71_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx71];
    }
    if ((4U & vlTOPp->__Vtablechg71[__Vtableidx71])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable71_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx71];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F5__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05Fcount[5U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F5__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F5__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__136(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__136\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx72;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx72 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F6__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F6__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg72[__Vtableidx72])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable72_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx72];
    }
    if ((2U & vlTOPp->__Vtablechg72[__Vtableidx72])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable72_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx72];
    }
    if ((4U & vlTOPp->__Vtablechg72[__Vtableidx72])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable72_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx72];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F6__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05Fcount[6U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F6__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F6__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__137(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__137\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx73;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx73 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F7__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F7__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg73[__Vtableidx73])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable73_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx73];
    }
    if ((2U & vlTOPp->__Vtablechg73[__Vtableidx73])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable73_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx73];
    }
    if ((4U & vlTOPp->__Vtablechg73[__Vtableidx73])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable73_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx73];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F7__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05Fcount[7U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F7__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F7__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__138(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__138\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx74;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx74 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F8__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F8__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg74[__Vtableidx74])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable74_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx74];
    }
    if ((2U & vlTOPp->__Vtablechg74[__Vtableidx74])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable74_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx74];
    }
    if ((4U & vlTOPp->__Vtablechg74[__Vtableidx74])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable74_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx74];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F8__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05Fcount[8U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F8__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F8__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__139(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__139\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx75;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx75 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F9__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F9__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg75[__Vtableidx75])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable75_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx75];
    }
    if ((2U & vlTOPp->__Vtablechg75[__Vtableidx75])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable75_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx75];
    }
    if ((4U & vlTOPp->__Vtablechg75[__Vtableidx75])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable75_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx75];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F9__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05Fcount[9U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F9__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F9__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__140(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__140\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx76;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx76 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F10__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F10__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg76[__Vtableidx76])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable76_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx76];
    }
    if ((2U & vlTOPp->__Vtablechg76[__Vtableidx76])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable76_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx76];
    }
    if ((4U & vlTOPp->__Vtablechg76[__Vtableidx76])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable76_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx76];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F10__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05Fcount[0xaU] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F10__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F10__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__141(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__141\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx77;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx77 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F11__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F11__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg77[__Vtableidx77])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable77_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx77];
    }
    if ((2U & vlTOPp->__Vtablechg77[__Vtableidx77])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable77_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx77];
    }
    if ((4U & vlTOPp->__Vtablechg77[__Vtableidx77])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable77_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx77];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F11__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05Fcount[0xbU] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F11__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F11__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F5__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__142(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__142\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx79;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx79 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F0__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F0__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg79[__Vtableidx79])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable79_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx79];
    }
    if ((2U & vlTOPp->__Vtablechg79[__Vtableidx79])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable79_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx79];
    }
    if ((4U & vlTOPp->__Vtablechg79[__Vtableidx79])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable79_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx79];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F0__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F0__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F0__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__143(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__143\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx80;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx80 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F1__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F1__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg80[__Vtableidx80])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable80_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx80];
    }
    if ((2U & vlTOPp->__Vtablechg80[__Vtableidx80])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable80_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx80];
    }
    if ((4U & vlTOPp->__Vtablechg80[__Vtableidx80])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable80_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx80];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F1__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05Fcount[1U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F1__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F1__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__144(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__144\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx81;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx81 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F2__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F2__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg81[__Vtableidx81])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable81_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx81];
    }
    if ((2U & vlTOPp->__Vtablechg81[__Vtableidx81])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable81_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx81];
    }
    if ((4U & vlTOPp->__Vtablechg81[__Vtableidx81])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable81_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx81];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F2__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05Fcount[2U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F2__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F2__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__145(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__145\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx82;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx82 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F3__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F3__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg82[__Vtableidx82])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable82_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx82];
    }
    if ((2U & vlTOPp->__Vtablechg82[__Vtableidx82])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable82_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx82];
    }
    if ((4U & vlTOPp->__Vtablechg82[__Vtableidx82])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable82_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx82];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F3__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05Fcount[3U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F3__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F3__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__146(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__146\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx83;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx83 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F4__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F4__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg83[__Vtableidx83])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable83_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx83];
    }
    if ((2U & vlTOPp->__Vtablechg83[__Vtableidx83])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable83_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx83];
    }
    if ((4U & vlTOPp->__Vtablechg83[__Vtableidx83])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable83_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx83];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F4__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05Fcount[4U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F4__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F4__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__147(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__147\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx84;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx84 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F5__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F5__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg84[__Vtableidx84])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable84_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx84];
    }
    if ((2U & vlTOPp->__Vtablechg84[__Vtableidx84])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable84_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx84];
    }
    if ((4U & vlTOPp->__Vtablechg84[__Vtableidx84])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable84_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx84];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F5__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05Fcount[5U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F5__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F5__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__148(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__148\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx85;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx85 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F6__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F6__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg85[__Vtableidx85])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable85_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx85];
    }
    if ((2U & vlTOPp->__Vtablechg85[__Vtableidx85])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable85_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx85];
    }
    if ((4U & vlTOPp->__Vtablechg85[__Vtableidx85])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable85_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx85];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F6__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05Fcount[6U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F6__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F6__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__149(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__149\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx86;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx86 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F7__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F7__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg86[__Vtableidx86])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable86_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx86];
    }
    if ((2U & vlTOPp->__Vtablechg86[__Vtableidx86])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable86_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx86];
    }
    if ((4U & vlTOPp->__Vtablechg86[__Vtableidx86])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable86_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx86];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F7__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05Fcount[7U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F7__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F7__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__150(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__150\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx87;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx87 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F8__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F8__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg87[__Vtableidx87])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable87_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx87];
    }
    if ((2U & vlTOPp->__Vtablechg87[__Vtableidx87])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable87_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx87];
    }
    if ((4U & vlTOPp->__Vtablechg87[__Vtableidx87])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable87_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx87];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F8__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05Fcount[8U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F8__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F8__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__151(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__151\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx88;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx88 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F9__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F9__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg88[__Vtableidx88])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable88_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx88];
    }
    if ((2U & vlTOPp->__Vtablechg88[__Vtableidx88])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable88_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx88];
    }
    if ((4U & vlTOPp->__Vtablechg88[__Vtableidx88])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable88_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx88];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F9__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05Fcount[9U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F9__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F9__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__152(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__152\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx89;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx89 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F10__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F10__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg89[__Vtableidx89])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable89_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx89];
    }
    if ((2U & vlTOPp->__Vtablechg89[__Vtableidx89])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable89_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx89];
    }
    if ((4U & vlTOPp->__Vtablechg89[__Vtableidx89])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable89_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx89];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F10__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05Fcount[0xaU] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F10__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F10__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__153(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__153\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx90;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx90 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F11__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F11__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg90[__Vtableidx90])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable90_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx90];
    }
    if ((2U & vlTOPp->__Vtablechg90[__Vtableidx90])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable90_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx90];
    }
    if ((4U & vlTOPp->__Vtablechg90[__Vtableidx90])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable90_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx90];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F11__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05Fcount[0xbU] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F11__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F11__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F6__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__154(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__154\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx92;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx92 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F0__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F0__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg92[__Vtableidx92])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable92_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx92];
    }
    if ((2U & vlTOPp->__Vtablechg92[__Vtableidx92])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable92_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx92];
    }
    if ((4U & vlTOPp->__Vtablechg92[__Vtableidx92])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable92_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx92];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F0__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F0__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F0__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F0__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F0__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__155(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__155\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx93;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx93 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F1__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F1__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg93[__Vtableidx93])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable93_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx93];
    }
    if ((2U & vlTOPp->__Vtablechg93[__Vtableidx93])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable93_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx93];
    }
    if ((4U & vlTOPp->__Vtablechg93[__Vtableidx93])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable93_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx93];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F1__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F1__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05Fcount[1U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F1__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F1__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F1__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__156(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__156\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx94;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx94 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F2__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F2__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg94[__Vtableidx94])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable94_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx94];
    }
    if ((2U & vlTOPp->__Vtablechg94[__Vtableidx94])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable94_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx94];
    }
    if ((4U & vlTOPp->__Vtablechg94[__Vtableidx94])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable94_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx94];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F2__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F2__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05Fcount[2U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F2__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F2__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F2__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__157(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__157\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx95;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx95 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F3__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F3__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg95[__Vtableidx95])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable95_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx95];
    }
    if ((2U & vlTOPp->__Vtablechg95[__Vtableidx95])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable95_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx95];
    }
    if ((4U & vlTOPp->__Vtablechg95[__Vtableidx95])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable95_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx95];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F3__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F3__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05Fcount[3U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F3__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F3__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F3__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__158(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__158\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx96;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx96 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F4__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F4__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg96[__Vtableidx96])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable96_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx96];
    }
    if ((2U & vlTOPp->__Vtablechg96[__Vtableidx96])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable96_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx96];
    }
    if ((4U & vlTOPp->__Vtablechg96[__Vtableidx96])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable96_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx96];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F4__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F4__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05Fcount[4U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F4__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F4__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F4__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__159(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__159\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx97;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx97 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F5__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F5__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg97[__Vtableidx97])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable97_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx97];
    }
    if ((2U & vlTOPp->__Vtablechg97[__Vtableidx97])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable97_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx97];
    }
    if ((4U & vlTOPp->__Vtablechg97[__Vtableidx97])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable97_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx97];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F5__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F5__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05Fcount[5U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F5__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F5__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F5__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__160(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__160\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx98;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx98 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F6__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F6__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg98[__Vtableidx98])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable98_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx98];
    }
    if ((2U & vlTOPp->__Vtablechg98[__Vtableidx98])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable98_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx98];
    }
    if ((4U & vlTOPp->__Vtablechg98[__Vtableidx98])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable98_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx98];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F6__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F6__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05Fcount[6U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F6__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F6__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F6__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__161(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__161\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx99;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx99 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                      << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                 << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                               << 2U) 
                                              | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F7__DOT__queues___05Fdeq___05Fen
                                                   [0U] 
                                                   & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                  << 1U) 
                                                 | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F7__DOT__queues___05Freset
                                                 [0U])))));
    if ((1U & vlTOPp->__Vtablechg99[__Vtableidx99])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable99_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx99];
    }
    if ((2U & vlTOPp->__Vtablechg99[__Vtableidx99])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable99_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx99];
    }
    if ((4U & vlTOPp->__Vtablechg99[__Vtableidx99])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable99_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx99];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F7__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F7__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05Fcount[7U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F7__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F7__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F7__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__162(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__162\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx100;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx100 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                       << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                  << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                                << 2U) 
                                               | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F8__DOT__queues___05Fdeq___05Fen
                                                    [0U] 
                                                    & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                   << 1U) 
                                                  | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F8__DOT__queues___05Freset
                                                  [0U])))));
    if ((1U & vlTOPp->__Vtablechg100[__Vtableidx100])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable100_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx100];
    }
    if ((2U & vlTOPp->__Vtablechg100[__Vtableidx100])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable100_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx100];
    }
    if ((4U & vlTOPp->__Vtablechg100[__Vtableidx100])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable100_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx100];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F8__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F8__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05Fcount[8U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F8__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F8__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F8__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__163(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__163\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx101;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx101 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                       << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                  << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                                << 2U) 
                                               | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F9__DOT__queues___05Fdeq___05Fen
                                                    [0U] 
                                                    & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                   << 1U) 
                                                  | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F9__DOT__queues___05Freset
                                                  [0U])))));
    if ((1U & vlTOPp->__Vtablechg101[__Vtableidx101])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable101_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx101];
    }
    if ((2U & vlTOPp->__Vtablechg101[__Vtableidx101])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable101_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx101];
    }
    if ((4U & vlTOPp->__Vtablechg101[__Vtableidx101])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable101_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx101];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F9__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F9__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05Fcount[9U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F9__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F9__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F9__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__164(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__164\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx102;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx102 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                       << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                  << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                                << 2U) 
                                               | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F10__DOT__queues___05Fdeq___05Fen
                                                    [0U] 
                                                    & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                   << 1U) 
                                                  | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F10__DOT__queues___05Freset
                                                  [0U])))));
    if ((1U & vlTOPp->__Vtablechg102[__Vtableidx102])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable102_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx102];
    }
    if ((2U & vlTOPp->__Vtablechg102[__Vtableidx102])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable102_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx102];
    }
    if ((4U & vlTOPp->__Vtablechg102[__Vtableidx102])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable102_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx102];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F10__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F10__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05Fcount[0xaU] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F10__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F10__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F10__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}

VL_INLINE_OPT void VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__165(VCGRATemplateRTL__ffe047ca70f33a6c__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCGRATemplateRTL__ffe047ca70f33a6c::_sequent__TOP__165\n"); );
    VCGRATemplateRTL__ffe047ca70f33a6c* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx103;
    CData/*0:0*/ __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    QData/*33:0*/ __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    // Body
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__up_rf_write__DOT__unnamedblk2__DOT__i = 1U;
    __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 0U;
    if (vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wen
        [0U]) {
        __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__wdata
            [0U];
        __Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 = 1U;
        __Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0 
            = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr
            [0U];
    }
    __Vtableidx103 = (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl___05Fcount) 
                       << 5U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl__DOT__tail) 
                                  << 4U) | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl__DOT__enq_xfer) 
                                             << 3U) 
                                            | (((IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl__DOT__head) 
                                                << 2U) 
                                               | (((vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F11__DOT__queues___05Fdeq___05Fen
                                                    [0U] 
                                                    & (IData)(vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl___05Fdeq_rdy)) 
                                                   << 1U) 
                                                  | vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F11__DOT__queues___05Freset
                                                  [0U])))));
    if ((1U & vlTOPp->__Vtablechg103[__Vtableidx103])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable103_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl__DOT__head
            [__Vtableidx103];
    }
    if ((2U & vlTOPp->__Vtablechg103[__Vtableidx103])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable103_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl__DOT__tail
            [__Vtableidx103];
    }
    if ((4U & vlTOPp->__Vtablechg103[__Vtableidx103])) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable103_CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl___05Fcount
            [__Vtableidx103];
    }
    if (__Vdlyvset__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0) {
        vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs[__Vdlyvdim0__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0] 
            = __Vdlyvval__CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs__v0;
    }
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl__DOT__tail;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F11__DOT__queues___05Fcount[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl___05Fcount;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F11__DOT__queues___05F0__DOT__ctrl__DOT__head;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__waddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fwaddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05Fcount[0xbU] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F11__DOT__queues___05Fcount
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue___05Fraddr
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT__regs
        [vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT____Vcellinp__queue__raddr
        [0U]];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue__DOT____Vlvbound1;
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT____Vcellout__queue__rdata
        [0U];
    vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F11__DOT__queues___05Fdeq___05Fret[0U] 
        = vlTOPp->CGRATemplateRTL___05Fffe047ca70f33a6c__DOT__tile___05F7__DOT__channel___05F11__DOT__queues___05F0__DOT__dpath__DOT__queue___05Frdata
        [0U];
}
