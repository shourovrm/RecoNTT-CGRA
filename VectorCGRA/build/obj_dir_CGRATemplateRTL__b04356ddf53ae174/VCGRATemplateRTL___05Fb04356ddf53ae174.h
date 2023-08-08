// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VCGRATEMPLATERTL___05FB04356DDF53AE174_H_
#define VERILATED_VCGRATEMPLATERTL___05FB04356DDF53AE174_H_  // guard

#include "verilated.h"

class VCGRATemplateRTL___05Fb04356ddf53ae174__Syms;
class VCGRATemplateRTL___05Fb04356ddf53ae174___024root;
class VCGRATemplateRTL___05Fb04356ddf53ae174_std;
class VCGRATemplateRTL___05Fb04356ddf53ae174_std__03a__03asemaphore__Vclpkg;
class VCGRATemplateRTL___05Fb04356ddf53ae174_std__03a__03aprocess__Vclpkg;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) VCGRATemplateRTL___05Fb04356ddf53ae174 VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    VCGRATemplateRTL___05Fb04356ddf53ae174__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&reset,0,0);
    VL_IN8((&recv_waddr___05Fen)[4],0,0);
    VL_IN8((&recv_waddr___05Fmsg)[4],2,0);
    VL_OUT8((&recv_waddr___05Frdy)[4],0,0);
    VL_IN8((&recv_wopt___05Fen)[4],0,0);
    VL_INW((&recv_wopt___05Fmsg)[4],76,0,3);
    VL_OUT8((&recv_wopt___05Frdy)[4],0,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    VCGRATemplateRTL___05Fb04356ddf53ae174_std* const __PVT__std;
    VCGRATemplateRTL___05Fb04356ddf53ae174_std__03a__03asemaphore__Vclpkg* const std__03a__03asemaphore__Vclpkg;
    VCGRATemplateRTL___05Fb04356ddf53ae174_std__03a__03aprocess__Vclpkg* const std__03a__03aprocess__Vclpkg;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    VCGRATemplateRTL___05Fb04356ddf53ae174___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit VCGRATemplateRTL___05Fb04356ddf53ae174(VerilatedContext* contextp, const char* name = "TOP");
    explicit VCGRATemplateRTL___05Fb04356ddf53ae174(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~VCGRATemplateRTL___05Fb04356ddf53ae174();
  private:
    VL_UNCOPYABLE(VCGRATemplateRTL___05Fb04356ddf53ae174);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
};

#endif  // guard
