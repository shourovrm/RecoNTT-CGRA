# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VCGRATemplateRTL__009dc38f16b51b37.mk for the caller.

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
	VCGRATemplateRTL__009dc38f16b51b37 \
	VCGRATemplateRTL__009dc38f16b51b37__1 \
	VCGRATemplateRTL__009dc38f16b51b37__2 \
	VCGRATemplateRTL__009dc38f16b51b37__3 \
	VCGRATemplateRTL__009dc38f16b51b37__4 \
	VCGRATemplateRTL__009dc38f16b51b37___024unit \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VCGRATemplateRTL__009dc38f16b51b37__Slow \
	VCGRATemplateRTL__009dc38f16b51b37__1__Slow \
	VCGRATemplateRTL__009dc38f16b51b37__2__Slow \
	VCGRATemplateRTL__009dc38f16b51b37__3__Slow \
	VCGRATemplateRTL__009dc38f16b51b37__4__Slow \
	VCGRATemplateRTL__009dc38f16b51b37___024unit__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	VCGRATemplateRTL__009dc38f16b51b37__Trace \
	VCGRATemplateRTL__009dc38f16b51b37__Trace__1 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VCGRATemplateRTL__009dc38f16b51b37__Syms \
	VCGRATemplateRTL__009dc38f16b51b37__Trace__Slow \
	VCGRATemplateRTL__009dc38f16b51b37__Trace__1__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_vcd_c \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
