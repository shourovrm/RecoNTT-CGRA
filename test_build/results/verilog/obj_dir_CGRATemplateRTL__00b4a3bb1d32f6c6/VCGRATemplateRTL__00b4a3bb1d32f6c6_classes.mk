# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VCGRATemplateRTL__00b4a3bb1d32f6c6.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (from --threads, --trace-threads or use of classes)
VM_C11 = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Threaded output mode?  0/1/N threads (from --threads)
VM_THREADS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing threaded output mode?  0/1/N threads (from --trace-thread)
VM_TRACE_THREADS = 0
# Separate FST writer thread? 0/1 (from --trace-fst with --trace-thread > 0)
VM_TRACE_FST_WRITER_THREAD = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	VCGRATemplateRTL__00b4a3bb1d32f6c6 \
	VCGRATemplateRTL__00b4a3bb1d32f6c6__1 \
	VCGRATemplateRTL__00b4a3bb1d32f6c6__2 \
	VCGRATemplateRTL__00b4a3bb1d32f6c6__3 \
	VCGRATemplateRTL__00b4a3bb1d32f6c6__4 \
	VCGRATemplateRTL__00b4a3bb1d32f6c6___024unit \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VCGRATemplateRTL__00b4a3bb1d32f6c6__Slow \
	VCGRATemplateRTL__00b4a3bb1d32f6c6__1__Slow \
	VCGRATemplateRTL__00b4a3bb1d32f6c6__2__Slow \
	VCGRATemplateRTL__00b4a3bb1d32f6c6__3__Slow \
	VCGRATemplateRTL__00b4a3bb1d32f6c6__4__Slow \
	VCGRATemplateRTL__00b4a3bb1d32f6c6___024unit__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	VCGRATemplateRTL__00b4a3bb1d32f6c6__Trace \
	VCGRATemplateRTL__00b4a3bb1d32f6c6__Trace__1 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VCGRATemplateRTL__00b4a3bb1d32f6c6__Syms \
	VCGRATemplateRTL__00b4a3bb1d32f6c6__Trace__Slow \
	VCGRATemplateRTL__00b4a3bb1d32f6c6__Trace__1__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_vcd_c \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
