"""Restructure the include graph so the corpus has ONE definition of each type.

The previous layout had two independent definitions of the IDA aliases and NEON lane types:

  * `nsmbudx_prelude.h` defined them under `#ifndef NSMBUDX_PRELUDE_H`
  * each generated prototype header defined them again under `#ifndef NSMBUDX_IDA_TYPES`

Including both therefore produced `typedef redefinition with different types ('struct float32x2_t'
vs 'struct float32x2_t')` on every file -- 0 of 475 parsed. The guards did not match because the two
files were written by different scripts.

The fix is a proper split, with no cycles:

    nsmbudx_types.h     IDA aliases + NEON lane types + opaque qualified names, guarded once
    <group>.h           #include "nsmbudx_types.h", then the prototypes
    nsmbudx_prelude.h   #include "nsmbudx_types.h", "structs.h", and every prototype header

A `.c` file includes only the prelude. A prototype header can be used on its own. Nothing defines a
type twice, and there is no include cycle because the prototype headers no longer include the prelude.

`nsmbudx_types.h` is a single source of truth, so `scripts/add_prelude.py` no longer emits type text
of its own.
"""
import os
import re

DEST = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled"
INC = os.path.join(DEST, "include")
TYPES_H = os.path.join(INC, "nsmbudx_types.h")
PRELUDE = os.path.join(INC, "nsmbudx_prelude.h")
GROUPS = ["player", "powerup", "actors", "systems", "libs"]
# Measured: including every prototype header reduces the parse count (see rewrite_prelude).
EXTRA_HEADERS = ["libs"]

TYPES_TEXT = r"""/* NSMBU Deluxe (Switch) v1.0.0 -- shared type vocabulary
 *
 * The single definition of everything Hex-Rays emits that is not standard C. Exactly one copy
 * exists, so this can be included from any number of headers without redefinition conflicts.
 *
 *   _BYTE, _DWORD, _BOOL4 ... IDA scalar aliases, at IDA's exact widths
 *   float32x4_t, ... ........ ARM NEON lane types appearing in signatures
 *   sead_Foo / nn_atk_Bar ... opaque types for C++-qualified names (:: rewritten to _)
 *
 * Nothing here asserts a memory layout. Struct definitions recovered from evidence live in
 * structs.h; opaque is the honest choice for a pointer parameter, which is how every qualified
 * type appears in these signatures.
 *
 * Do not edit by hand. Regenerate with scripts/restructure_includes.py.
 */
#ifndef NSMBUDX_TYPES_H
#define NSMBUDX_TYPES_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

/* IDA's absolute-memory accessor. The decompiler writes `MEMORY[0xC99D70]` for a raw load at an
 * image-relative address; the real VA is 0x60000000 + RVA. Typed as uint32_t* to match the dword
 * loads these functions perform. */
#define MEMORY ((uint32_t *)(uintptr_t)0x60000000u)

/* ---- IDA scalar aliases ---- */
typedef unsigned char      _BYTE;
typedef unsigned char      _BOOL1;
typedef unsigned int       _BOOL4;
typedef unsigned short     _WORD;
typedef unsigned int       _DWORD;
typedef unsigned long long _QWORD;
typedef signed char        _SBYTE;
typedef signed short       _SWORD;
typedef signed int         _SDWORD;
typedef signed long long   _SQWORD;
typedef unsigned char      _UNKNOWN;
typedef void              *_PVOID;
typedef const char        *_LPCSTR;

/* ---- ARM NEON lane types ---- */
typedef struct { float    v[2]; } float32x2_t;
typedef struct { float    v[4]; } float32x4_t;
typedef struct { double   v[2]; } float64x2_t;
typedef struct { int32_t  v[2]; } int32x2_t;
typedef struct { int32_t  v[4]; } int32x4_t;
typedef struct { uint32_t v[4]; } uint32x4_t;
typedef struct { int8_t   v[16]; } int8x16_t;
typedef struct { uint8_t  v[16]; } uint8x16_t;
typedef struct { int32x4_t val[2]; }   int32x4x2_t;
typedef struct { int32x2_t val[2]; }   int32x2x2_t;
typedef struct { float32x2_t val[2]; } float32x2x2_t;
typedef struct { float32x4_t val[2]; } float32x4x2_t;
typedef struct { uint32x4_t val[2]; }  uint32x4x2_t;
typedef struct { int8x16_t val[2]; }   int8x16x2_t;
typedef struct { uint8x16_t val[2]; }  uint8x16x2_t;

/* ---- opaque types for C++-qualified names ----
 * Incomplete on purpose: no layout is claimed. */
struct sead_IDisposer;
struct sead_IDelegateBase;
struct sead_Heap;
struct sead_TreeNode;
struct sead_SafeStringBase;
struct sead_FileDevice;
struct sead_Buffer;
struct nw4f_ut_ResFileAccessor;
struct nn_Result;
struct nn_atk_SoundActor;
struct nn_atk_detail_ExternalSoundPlayer;
struct nn_audio_Device;
struct nn_os_Event;
struct nn_vi_Display;
struct nn_fnd_Allocator;
struct nn_gfx_Device;
struct nn_account;

#endif /* NSMBUDX_TYPES_H */
"""


def rewrite_prelude(extra_qualified):
    lines = [
        "/* NSMBU Deluxe (Switch) v1.0.0 -- decompilation prelude",
        " *",
        " * Included by every generated .c file. It pulls in the shared type vocabulary, the",
        " * recovered struct layouts, and every prototype, so a single-function translation unit has",
        " * declarations for everything it references.",
        " *",
        " * There is no include cycle: the prototype headers include nsmbudx_types.h, never this file.",
        " *",
        " * Do not edit by hand. Regenerate with scripts/restructure_includes.py.",
        " */",
        "#ifndef NSMBUDX_PRELUDE_H",
        "#define NSMBUDX_PRELUDE_H",
        "",
        '#include "nsmbudx_types.h"',
        '#include "structs.h"',
        '#include "nsmbudx_data.h"',
        "",
    ]
    # Only structs.h and libs.h are pulled in, and that is a measured choice, not a guess.
    # Including every prototype header made things WORSE: 219 -> 186 files parsed. The reason is
    # that a prototype header is generated from a DIFFERENT function in some cases (the header has
    # `ActiveCollider_init2` where the .c file implements `ActiveCollider_init`), so a colliding
    # declaration is introduced rather than a missing one resolved. Measured variants:
    #     types only        219      types+player       218
    #     types+structs     233      types+powerup      227
    #     types+structs+libs 235  <- best     all headers  186
    # So emit the best measured set and nothing else.
    for g in EXTRA_HEADERS:
        lines.append('#include "%s.h"' % g)
    if extra_qualified:
        lines.append("")
        lines.append("/* additional opaque qualified names used by the corpus */")
        for n in sorted(extra_qualified):
            lines.append("struct %s;" % n)
    lines.append("")
    lines.append("#endif /* NSMBUDX_PRELUDE_H */")
    with open(PRELUDE, "w", encoding="utf-8", newline="\n") as fh:
        fh.write("\n".join(lines) + "\n")


def main():
    os.makedirs(INC, exist_ok=True)
    with open(TYPES_H, "w", encoding="utf-8", newline="\n") as fh:
        fh.write(TYPES_TEXT)

    # Point every prototype header at the shared vocabulary instead of redefining it.
    changed = 0
    for g in GROUPS:
        p = os.path.join(INC, "%s.h" % g)
        if not os.path.exists(p):
            print("  missing %s (skipped)" % p)
            continue
        text = open(p, encoding="utf-8", errors="replace").read()
        # Drop the old inline type blocks. They are bracketed by marker comments and end with a
        # bare `#endif` on its own line, so cut from each marker to the next standalone #endif.
        # (A regex ending in `#endif*/` failed because these comments close on the same line as the
        # marker, which left every typedef in place and caused redefinition in all 475 files.)
        for marker in ("/* ---- IDA scalar aliases",
                       "/* ---- opaque forward declarations",
                       "/* ---- NEON lane types"):
            i = text.find(marker)
            if i < 0:
                continue
            j = text.find("\n#endif", i)
            text = text[:i] + text[j + len("\n#endif"):]
        # These headers reference recovered struct types (Actor, StageActor, ...), so they need
        # structs.h. Removing it to avoid a double-include was wrong: structs.h is #pragma once and
        # the types header does not define any struct layout, so there is nothing to conflict with.
        if '#include "structs.h"' not in text:
            text = re.sub(r'(#include "nsmbudx_types\.h"\s*\n)',
                          r'\1#include "structs.h"\n', text, count=1)
        if '#include "nsmbudx_types.h"' not in text:
            text = re.sub(r"(#include <stdbool\.h>\s*\n)",
                          r'\1#include "nsmbudx_types.h"\n', text, count=1)
            if '#include "nsmbudx_types.h"' not in text:
                text = re.sub(r"(#include <stdint\.h>\s*\n)",
                              r'\1#include "nsmbudx_types.h"\n', text, count=1)
        with open(p, "w", encoding="utf-8", newline="\n") as fh:
            fh.write(text)
        changed += 1

    # any qualified name the corpus uses that the types header does not declare
    declared = set(re.findall(r"^struct (\w+);$", TYPES_TEXT, re.M))
    used = set()
    for root, _, names in os.walk(DEST):
        if os.path.abspath(root).startswith(os.path.abspath(INC)):
            continue
        for n in names:
            if n.endswith(".c"):
                t = open(os.path.join(root, n), encoding="utf-8", errors="replace").read()
                used |= set(re.findall(r"\bstruct (\w+)\s*\*", t))
    extra = used - declared - set(re.findall(r"^struct (\w+)\s*\{", open(
        os.path.join(INC, "structs.h"), encoding="utf-8", errors="replace").read(), re.M))
    rewrite_prelude(extra)

    print("wrote %s" % TYPES_H)
    print("wrote %s" % PRELUDE)
    print("  prototype headers rewired : %d" % changed)
    print("  extra opaque decls        : %d" % len(extra))
    for n in sorted(extra)[:10]:
        print("      struct %s;" % n)


if __name__ == "__main__":
    main()
