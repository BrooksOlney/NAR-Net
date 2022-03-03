// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VNARNET_H_
#define VERILATED_VNARNET_H_  // guard

#include "systemc.h"
#include "verilated_sc.h"
#include "verilated.h"

class VNARNet__Syms;
class VNARNet___024root;

// This class is the main interface to the Verilated model
SC_MODULE(VNARNet) {
  private:
    // Symbol table holding complete model state (owned by this class)
    VNARNet__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    sc_in<bool> &neuron_v2__02Eclk;
    sc_in<bool> &inptReady;
    sc_in<bool> &neuron_v2__02Erst;
    sc_in<bool> &tanh_lut__02Eclk;
    sc_in<bool> &NARNet__02Eclk;
    sc_in<bool> &enable;
    sc_in<bool> &NARNet__02Erst;
    sc_in<bool> &x_ready;
    sc_in<uint32_t> &x_in;
    sc_out<uint32_t> &y_out;
    sc_in<uint32_t> &w;
    sc_in<uint32_t> &x;
    sc_in<uint32_t> &b;
    sc_out<uint32_t> &out;
    sc_in<uint32_t> &addr;
    sc_out<uint32_t> &tanh_out;

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    VNARNet___024root* const rootp;

    // CONSTRUCTORS
    SC_CTOR(VNARNet);
    virtual ~VNARNet();
  private:
    VL_UNCOPYABLE(VNARNet);  ///< Copying not allowed

  public:
    // API METHODS
  private:
    void eval() { eval_step(); }
    void eval_step();
  public:
    void final();
    /// Return current simulation context for this model.
    /// Used to get to e.g. simulation time via contextp()->time()
    VerilatedContext* contextp() const;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
