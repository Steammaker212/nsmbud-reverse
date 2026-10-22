#pragma once

// Fixed-width types for the 32-bit ARM target. NSMBU Deluxe is AArch32, so
// pointers and `long` are 4 bytes.
typedef unsigned char       u8;
typedef signed char         s8;
typedef unsigned short      u16;
typedef signed short        s16;
typedef unsigned int        u32;
typedef signed int          s32;
typedef unsigned long long  u64;
typedef signed long long    s64;
typedef unsigned long       uintptr_t32;

typedef float               f32;
typedef double              f64;

typedef unsigned int        size_t32;

#define NULL 0

// A small assertion helper that does not pull in a libc.
#define ASSERT_SIZE(T, N) \
    static_assert(sizeof(T) == (N), #T " has unexpected size")
