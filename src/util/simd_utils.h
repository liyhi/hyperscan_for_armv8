/*
版权和介绍后期增加和修改
 */

#ifndef SIMD_UTILS
#define SIMD_UTILS

#if defined(__x86_64__)
#include "simd_x86.h"
#elif defined(__aarch64__)
#include "simd_arm.h"
#endif

#endif