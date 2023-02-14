/* SPDX-License-Identifier: GPL-2.0 */

/*
 * Copyright (c) 2022 Qualcomm Innovation Center, Inc. All rights reserved.
 */

#undef TRACE_SYSTEM
#define TRACE_SYSTEM cpuidle

#define TRACE_INCLUDE_PATH trace/hooks

#if !defined(_TRACE_HOOK_CPUIDLE_H) || defined(TRACE_HEADER_MULTI_READ)
#define _TRACE_HOOK_CPUIDLE_H

#if defined(CONFIG_CPU_IDLE_GOV_QCOM_LPM)
#include <trace/hooks/vendor_hooks_declare.h>
#else
#include <trace/hooks/vendor_hooks.h>
#endif

#ifdef __GENKSYMS__
#include <linux/cpuidle.h>
#endif

struct cpuidle_device;

DECLARE_HOOK(android_vh_cpu_idle_enter,
	TP_PROTO(int *state, struct cpuidle_device *dev),
	TP_ARGS(state, dev))
DECLARE_HOOK(android_vh_cpu_idle_exit,
	TP_PROTO(int state, struct cpuidle_device *dev),
	TP_ARGS(state, dev))

#endif /* _TRACE_HOOK_CPUIDLE_H */
/* This part must be outside protection */
#include <trace/define_trace.h>

