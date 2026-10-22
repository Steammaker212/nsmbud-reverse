"""Make the decompiled .c files parseable C by giving each one a prelude.

The per-function .c files are raw Hex-Rays output: one function, no includes. So they reference
`bool`, IDA's scalar aliases (`_BOOL4`, `_DWORD`, ...), NEON lane types and C++-qualified names
(`nn::atk::SoundActor`) that nothing declares. 458 of 475 therefore failed `clang -fsyntax-only`.

Rather than duplicate a 200-line prologue into 475 files, this writes ONE self-contained header --
`decompiled/include/nsmbudx_prelude.h` -- and prepends a single `#include` line to each .c.

The prelude deliberately does NOT pull in structs.h. These files declare their locals with inferred
scalar types, and a 122 KB struct definition set in every translation unit would create far more
name collisions than it resolves. Types that must be structs are forward-declared opaque, which is
enough for a pointer parameter -- and a pointer parameter is the only way these signatures use them.

Order matters: the aliases and NEON types are emitted BEFORE any use, and every block is guarded so
the prelude can be included twice.
"""
import os
import re

DEST = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled"
INC = os.path.join(DEST, "include")
PRELUDE = os.path.join(INC, "nsmbudx_prelude.h")

PRELUDE_TEXT = r"""/* NSMBU Deluxe (Switch) v1.0.0 -- decompilation prelude
 *
 * Included by every generated .c file. It supplies exactly the vocabulary Hex-Rays emits that is
 * not standard C, and nothing else:
 *
 *   bool / true / false .... <stdbool.h>
 *   _BYTE, _DWORD, _BOOL4 .. IDA scalar aliases, at IDA's exact widths
 *   float32x4_t, ... ....... ARM NEON lane types appearing in signatures
 *   sead_Foo / nn_atk_Bar .. opaque types for C++-qualified names (:: rewritten to _)
 *
 * Nothing here asserts a memory layout. Struct definitions recovered from evidence live in
 * structs.h; including that here would redefine those types in every translation unit and collide
 * with the scalar locals these functions declare. Opaque is the honest choice for a pointer
 * parameter, which is how every qualified type appears in these signatures.
 *
 * Do not edit by hand. Regenerate with scripts/add_prelude.py.
 */
#ifndef NSMBUDX_PRELUDE_H
#define NSMBUDX_PRELUDE_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

/* IDA's absolute-memory accessor. The decompiler writes `MEMORY[0xC99D70]` for a raw load at an
 * image-relative address; the real VA is 0x60000000 + RVA, which is what this expands to. Typed as
 * uint32_t* to match the dword loads these functions perform. */
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
 * Declared with a tag so `struct sead_Foo *` is well-formed. Incomplete on purpose: no layout
 * is claimed. */
struct sead_IDisposer;
struct sead_IDelegateBase;
struct sead_Heap;
struct sead_TreeNode;
struct sead_SafeStringBase;
struct nw4f_ut_ResFileAccessor;
struct nn_Result;
struct nn_atk_SoundActor;
struct nn_audio_Device;
struct nn_os_Event;
struct nn_vi_Display;
struct nn_fnd_Allocator;
struct nn_gfx_Device;

#endif /* NSMBUDX_PRELUDE_H */
"""

# `sead::Foo` / `nn::atk::SoundActor` -> `sead_Foo` / `nn_atk_SoundActor`. Namespaces are not valid
# in C, and the prelude declares the flat spelling.
#
# Only a qualified name used as a TYPE is rewritten. `int __fastcall ActiveCollider::init(...)` is a
# FUNCTION NAME, not a type, so a blanket rewrite turned it into `struct ActiveCollider_init(` and
# broke the declaration. These signatures only ever use a qualified type as a pointer, so require a
# following `*`.
QUAL_RE = re.compile(r"\b([A-Za-z_]\w*(?:::[A-Za-z_]\w*)+)\b(?=\s*\*)")

# A qualified FUNCTION NAME in a declaration (`int __fastcall ActiveCollider::init(...)`) is not a
# type: it is C++ scope resolution inside a name. C has no such thing, so the separator becomes an
# underscore, which preserves the class and method in the identifier.
QUAL_FUNC_RE = re.compile(r"(__fastcall|__cdecl|__stdcall)\s+([A-Za-z_]\w*(?:::[A-Za-z_]\w*)+)\s*\(")

# collect every qualified name actually used, so the prelude's opaque list stays honest
used_qualified = set()


def flatten(text):
    def repl(m):
        flat = m.group(1).replace("::", "_")
        used_qualified.add(flat)
        return "struct " + flat
    text = QUAL_RE.sub(repl, text)
    # order matters: do this AFTER the type rewrite, so `struct Foo` is never matched here
    text = QUAL_FUNC_RE.sub(lambda m: "%s %s(" % (m.group(1), m.group(2).replace("::", "_")), text)
    # Hex-Rays emits C++ `nullptr` for a null pointer constant; C spells it 0.
    text = re.sub(r"\bnullptr\b", "0", text)
    return text


def main():
    os.makedirs(INC, exist_ok=True)

    # Pass 1: rewrite at every use site and collect the qualified names.
    uid = 0
    patched = 0
    files = []
    for root, _, names in os.walk(DEST):
        if os.path.abspath(root).startswith(os.path.abspath(INC)):
            continue
        for n in names:
            if n.endswith(".c"):
                files.append(os.path.join(root, n))

    for path in sorted(files):
        with open(path, encoding="utf-8", errors="replace") as fh:
            text = fh.read()
        new = flatten(text)
        inc = '#include "nsmbudx_prelude.h"\n'
        if not new.startswith(inc):
            new = inc + new
            uid += 1
        if new != text:
            with open(path, "w", encoding="utf-8", newline="\n") as fh:
                fh.write(new)
            patched += 1

    # Pass 2: write the prelude, including any qualified type that was used but not pre-declared.
    declared = set(re.findall(r"^struct (\w+);$", PRELUDE_TEXT, re.M))
    extra = sorted(used_qualified - declared)
    text = PRELUDE_TEXT
    if extra:
        block = "".join("struct %s;\n" % n for n in extra)
        text = text.replace("#endif /* NSMBUDX_PRELUDE_H */",
                            block + "\n#endif /* NSMBUDX_PRELUDE_H */")
    with open(PRELUDE, "w", encoding="utf-8", newline="\n") as fh:
        fh.write(text)

    print("wrote %s" % PRELUDE)
    print("  .c files patched            : %d" % patched)
    print("  qualified names flattened   : %d" % len(used_qualified))
    print("  extra opaque decls appended : %d" % len(extra))
    for n in extra[:12]:
        print("      struct %s;" % n)


if __name__ == "__main__":
    main()
