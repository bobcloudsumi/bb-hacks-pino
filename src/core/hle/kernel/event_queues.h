#pragma once

#include "core/hle/kernel/objects/event_queue.h"

namespace Core::Kernel {

using SceKernelUseconds = u32;
using SceKernelEqueue = EqueueInternal*;

int PS4_SYSV_ABI sceKernelCreateEqueue(SceKernelEqueue* eq, const char* name);
int PS4_SYSV_ABI sceKernelWaitEqueue(SceKernelEqueue eq, SceKernelEvent* ev,
                                     int num, int* out, SceKernelUseconds *timo);

} // namespace Core::Kernel
