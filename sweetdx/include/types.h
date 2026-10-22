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

// ---------------------------------------------------------------------------
// Standard type names.
//
// sweet-dx builds with -nostdlib and no C library for armv7l-none-eabihf, so
// <stddef.h>/<stdarg.h> names are not available. Its own upstream headers use the
// standard spellings, so we must supply them here. Widths come from the compiler's
// builtin macros instead of being hardcoded, which keeps them correct for AArch32.
// ---------------------------------------------------------------------------
typedef __SIZE_TYPE__       size_t;
typedef __UINTPTR_TYPE__    uintptr_t;
typedef __PTRDIFF_TYPE__    ptrdiff_t;
typedef __builtin_va_list   va_list;

#ifndef va_start
#define va_start(ap, last)  __builtin_va_start(ap, last)
#endif
#ifndef va_end
#define va_end(ap)          __builtin_va_end(ap)
#endif
#ifndef va_arg
#define va_arg(ap, type)    __builtin_va_arg(ap, type)
#endif
#ifndef va_copy
#define va_copy(dst, src)   __builtin_va_copy(dst, src)
#endif

#ifndef NULL
#define NULL 0
#endif

// A small assertion helper that does not pull in a libc.
#define ASSERT_SIZE(T, N) \
    static_assert(sizeof(T) == (N), #T " has unexpected size")


// Direction constants. StageActor::direction stores one of these; RIGHT is 0, so
// a freshly constructed actor faces right.
enum Direction
{
    RIGHT = 0,
    LEFT  = 1,
    UP    = 2,
    DOWN  = 3
};


// Angle constants. Repeated here because actor sources use them without
// including math.h; math.h redefines nothing.
#ifndef M_PI
#define M_PI        3.14159265358979323846f
#endif
#ifndef M_2PI
#define M_2PI       6.28318530717958647692f
#endif
#ifndef M_PI_2
#define M_PI_2      1.57079632679489661923f
#endif
#ifndef M_PI_4
#define M_PI_4      0.78539816339744830962f
#endif
