"""Fix the two compile blockers in the repo's sweetdx headers.

ERRORS
======
    source/include/string.h:5:1: error: unknown type name 'size_t'
    source/include/nn/util.h:7:23: error: unknown type name 'size_t'
    source/include/nn/util.h:8:54: error: unknown type name 'va_list'
    source/include/log.h:9:5: error: unknown type name 'va_list'
    source/code/exceptionhandler.cpp:76:5: error: unknown type name 'uintptr_t'

CAUSE
=====
sweet-dx compiles with `-nostdlib` but NOT `-nostdinc`, for target
armv7l-none-eabihf. There is no C library for that target on this host, so the
standard names simply do not exist. Upstream sweet-dx's own types.h (which our
research copy replaced) defined them; ours defines only the explicit-width aliases
size_t32 / uintptr_t32, which nothing upstream uses.

FIX
===
Define the standard names in types.h, sourced from the compiler's own builtins so
the width is correct for AArch32 rather than hardcoded:
    size_t     = __SIZE_TYPE__     (unsigned int on this target)
    uintptr_t  = __UINTPTR_TYPE__  (unsigned int)
    va_list    = __builtin_va_list, plus va_start/va_end/va_arg/va_copy
and keep the size_t32/uintptr_t32 aliases so existing research code still builds.

The M_PI family in math.h also redefined types.h's values and warned; make math.h
defer to whatever is already defined.
"""
import io
import os

SRC = r"C:\Users\Saif Khan\Downloads\sweet-dx-main (1)\sweet-dx-main\build\source"
REPO = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\sweetdx"

TYPES_OLD = '''typedef unsigned long       uintptr_t32;

typedef float               f32;
typedef double              f64;

typedef unsigned int        size_t32;

#define NULL 0
'''

TYPES_NEW = '''typedef unsigned long       uintptr_t32;

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
'''

MATH_OLD = '''#define M_2PI       6.283185307f
#define M_PI        3.141592653f
#define M_PI_2      1.570796326f
#define M_PI_4      0.785398163f
#define M_SQRT2     1.414213562f
#define M_SQRT1_2   0.707106781f
'''

MATH_NEW = '''// types.h already defines the M_PI family; defer to it when it is in scope so the
// two headers cannot disagree (that mismatch was a -Wmacro-redefined warning).
#ifndef M_2PI
#define M_2PI       6.283185307f
#endif
#ifndef M_PI
#define M_PI        3.141592653f
#endif
#ifndef M_PI_2
#define M_PI_2      1.570796326f
#endif
#ifndef M_PI_4
#define M_PI_4      0.785398163f
#endif
#ifndef M_SQRT2
#define M_SQRT2     1.414213562f
#endif
#ifndef M_SQRT1_2
#define M_SQRT1_2   0.707106781f
#endif
'''


def patch(path, old, new, label):
    if not os.path.isfile(path):
        print(f"  SKIP (absent): {label}")
        return False
    with io.open(path, encoding="utf-8") as fh:
        text = fh.read()
    if new.strip().splitlines()[0] in text and old not in text:
        print(f"  already patched: {label}")
        return False
    if old not in text:
        print(f"  PATTERN NOT FOUND: {label}")
        return False
    text = text.replace(old, new, 1)
    with io.open(path, "w", encoding="utf-8", newline="\n") as fh:
        fh.write(text)
    print(f"  patched: {label}")
    return True


for root, name in ((REPO, "repo"), (SRC, "build")):
    print(f"\n=== {name} ===")
    patch(os.path.join(root, "include", "types.h"), TYPES_OLD, TYPES_NEW,
          f"{name}/include/types.h")
    patch(os.path.join(root, "include", "math.h"), MATH_OLD, MATH_NEW,
          f"{name}/include/math.h")
