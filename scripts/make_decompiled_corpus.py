"""BUILD THE REPO CORPUS: organised C + generated headers + index.

Takes the bulk decompilation and the applied names and lays out a repo-friendly tree:

    decompiled/
      INDEX.md                  what is here, how it was produced, how to regenerate
      README.md                 how to read the pseudo-C, caveats
      player/                   player.c, player_states.c
      powerup/                  powerup.c, projectile.c, modes.c
      actors/                   actor_construction.c, actors_a.c, actors_b.c
      systems/                  systems.c, states.c, core.c
      libs/                     libs.c
      include/                  generated headers

Headers are generated from evidence, not invented: for each subsystem this emits the
externally visible function prototypes that appear in the corpus, with the RVA in a
comment. That gives the C files something to include and makes the corpus compile-shaped
even though it is not buildable as-is.

Run this on the host (not inside IDA); it only reads the produced .c files and the symbol
file.
"""
import os
import re
import shutil

REPO = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse"
SRC = r"C:\Users\Saif Khan\Downloads\main.idb\.rea\decompiled_all"
EXTRA = r"C:\Users\Saif Khan\Downloads\main.idb\.rea\decompiled"
DEST = os.path.join(REPO, "decompiled")
SYM = os.path.join(REPO, "sweetdx", "symbols", "nsmbudx.sym")

LAYOUT = {
    "player":        ["player"],
    "powerup":       ["powerup", "projectile", "modes"],
    "actors":        ["actor_construction", "actors_a", "actors_b"],
    "systems":       ["systems", "states", "core"],
    "libs":          ["libs"],
}

os.makedirs(DEST, exist_ok=True)

# ---------------------------------------------------------------- copy sources
copied = []
for group, files in LAYOUT.items():
    gdir = os.path.join(DEST, group)
    os.makedirs(gdir, exist_ok=True)
    for base in files:
        for srcdir in (SRC, EXTRA):
            p = os.path.join(srcdir, f"{base}.c")
            if os.path.exists(p):
                dst = os.path.join(gdir, f"{base}.c")
                shutil.copy2(p, dst)
                copied.append((group, base, os.path.getsize(dst)))
                break

# ------------------------------------------------------------- parse prototypes
# Hex-Rays emits `type __fastcall NAME(args)` on one line. Capture it plus the banner RVA.
BANNER = re.compile(r"^ \* (\S+)\s*$", re.M)
BANNER_RVA = re.compile(r"^ \* RVA (0x[0-9a-f]+)", re.M)
PROTO = re.compile(r"^\s*([A-Za-z_][\w \*]*?)\s+__fastcall\s+([A-Za-z_]\w*)\s*\((.*?)\)\s*$")

protos = {}          # name -> (ret_and_name, args, rva)
for group, files in LAYOUT.items():
    for base in files:
        p = os.path.join(DEST, group, f"{base}.c")
        if not os.path.exists(p):
            continue
        txt = open(p, encoding="utf-8", errors="replace").read()
        # split into blocks by the banner
        for block in txt.split("/* ===="):
            m = BANNER_RVA.search(block)
            rva = m.group(1) if m else None
            for line in block.splitlines():
                pm = PROTO.match(line.strip())
                if pm:
                    ret, name, args = pm.group(1), pm.group(2), pm.group(3)
                    if name not in protos:
                        protos[name] = (ret, args, rva)
                    break

# ------------------------------------------------------------ write headers
# The decompiler emits IDA's scalar aliases and C++-qualified class names. A header that uses them
# without defining them cannot be included, so both are provided. The typedefs carry IDA's exact
# widths; the qualified names become opaque structs, because their real layout lives in structs.h
# (where it was recovered from evidence) and inventing a second definition would conflict.
IDA_TYPES = """\
/* ---- IDA scalar aliases, at IDA's exact widths ----
 * The decompiler output uses these; they are not standard C. Defined so this header can be
 * included. An `_UNKNOWN` parameter is genuinely unresolved, not a real type. */
#ifndef NSMBUDX_IDA_TYPES
#define NSMBUDX_IDA_TYPES
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
#endif"""

# Qualified names the decompiler emits that have no definition in these headers. Each becomes an
# opaque type so a pointer to it is well-formed; the recovered layouts, where they exist, are in
# structs.h. Kept deliberately incomplete: claiming a layout here would be inventing one.
OPAQUE_QUALIFIED = """\
/* ---- opaque forward declarations for qualified names in signatures ---- */
#ifndef NSMBUDX_OPAQUE_QUALIFIED
#define NSMBUDX_OPAQUE_QUALIFIED
struct sead_IDisposer;
struct sead_IDelegateBase;
struct sead_Heap;
struct sead_TreeNode;
struct nw4f_ut_ResFileAccessor;
struct nn_Result;
#endif"""

# NEON vector types the decompiler emits as parameter and return types. These are the ARM
# Advanced SIMD lane types; defined here as plain structs with the correct lane count and width so
# a prototype is well-formed. They are NOT callable through the standard ABI -- that is a property
# of the hardware, not of the declaration -- but the signature is now accurate about shape.
NEON_TYPES = """\
/* ---- NEON lane types appearing in signatures ---- */
#ifndef NSMBUDX_NEON_TYPES
#define NSMBUDX_NEON_TYPES
typedef struct { float    v[2]; } float32x2_t;
typedef struct { float    v[4]; } float32x4_t;
typedef struct { double   v[2]; } float64x2_t;
typedef struct { int32_t  v[2]; } int32x2_t;
typedef struct { int32_t  v[4]; } int32x4_t;
typedef struct { uint32_t v[4]; } uint32x4_t;
typedef struct { int8_t   v[16]; } int8x16_t;
typedef struct { uint8_t  v[16]; } uint8x16_t;
typedef struct { int32x4_t val[2]; } int32x4x2_t;
typedef struct { float32x2_t val[2]; } float32x2x2_t;
typedef struct { float32x4_t val[2]; } float32x4x2_t;
typedef struct { int32x2_t val[2]; } int32x2x2_t;
typedef struct { uint32x4_t val[2]; } uint32x4x2_t;
typedef struct { int8x16_t val[2]; } int8x16x2_t;
typedef struct { uint8x16_t val[2]; } uint8x16x2_t;
#endif"""

QUAL_RE = re.compile(r"\b([A-Za-z_]\w*(?:::[A-Za-z_]\w*)+)\b")


def sanitize_signature(text):
    """Make a decompiled signature usable in C without changing its meaning.

    `sead::IDisposer` is rewritten to `struct sead_IDisposer`, because `::` is C++ scope
    resolution and these headers are C. The pointer-ness, argument order and return type are
    left exactly as Hex-Rays produced them.
    """
    # `nn::atk::SoundActor` -> `struct nn_atk_SoundActor` (any nesting depth), because `::`
    # is C++ scope resolution and these headers are C.
    return QUAL_RE.sub(lambda m: "struct " + m.group(1).replace("::", "_"), text)


incdir = os.path.join(DEST, "include")
os.makedirs(incdir, exist_ok=True)
hdr_counts = {}
for group, files in LAYOUT.items():
    out = []
    out.append("/* NSMBU Deluxe (Switch) v1.0.0 -- %s subsystem prototypes" % group)
    out.append(" *")
    out.append(" * GENERATED from decompiled evidence. Each prototype is the exact")
    out.append(" * signature Hex-Rays produced for that function, tagged with its RVA.")
    out.append(" * Types are inferred, not from a symbol table: treat `int a1` as")
    out.append(" * \"first argument, type not yet established\" rather than as a real int.")
    out.append(" *")
    out.append(" * Do not edit by hand. Regenerate with scripts/make_decompiled_corpus.py.")
    out.append(" */")
    out.append("#pragma once")
    out.append("")
    out.append("#include <stdint.h>")
    out.append("#include <stddef.h>")
    out.append("#include <stdbool.h>")
    out.append("")
    out.append('#include "structs.h"')
    out.append("")
    # Headers previously did not compile: they used IDA's scalar aliases (_BYTE, _DWORD, ...)
    # and C++-qualified names (sead::IDisposer) that nothing defined. Both are supplied here so
    # the generated headers can actually be #included. The scalar aliases are defined with the
    # exact widths IDA uses, so a prototype means the same thing it did in the decompiler.
    out.append(IDA_TYPES)
    out.append("")
    out.append(OPAQUE_QUALIFIED)
    out.append("")
    out.append(NEON_TYPES)
    out.append("")
    out.append("/* RVAs are image-relative: VA = 0x60000000 + RVA */")
    out.append("")
    n = 0
    for base in files:
        p = os.path.join(DEST, group, f"{base}.c")
        if not os.path.exists(p):
            continue
        t = open(p, encoding="utf-8", errors="replace").read()
        out.append(f"/* ---- {base}.c ---- */")
        seen = set()
        for block in t.split("/* ===="):
            m = BANNER_RVA.search(block)
            rva = m.group(1) if m else "?"
            for line in block.splitlines():
                pm = PROTO.match(line.strip())
                if pm:
                    ret, name, args = pm.group(1), pm.group(2), pm.group(3)
                    if name in seen:
                        break
                    seen.add(name)
                    sig = sanitize_signature(f"{ret} __fastcall {name}({args});")
                    out.append(f"{sig}  /* {rva} */")
                    n += 1
                    break
        out.append("")
    hdr_counts[group] = n
    with open(os.path.join(incdir, f"{group}.h"), "w", encoding="utf-8") as fh:
        fh.write("\n".join(out) + "\n")

# ------------------------------------------------------------------- index
symcount = 0
if os.path.exists(SYM):
    for line in open(SYM, encoding="utf-8", errors="replace"):
        s = line.split("#", 1)[0].strip()
        if s and "=" in s and s.endswith(";"):
            symcount += 1

idx = []
idx.append("# NSMBU Deluxe (Switch) v1.0.0 - decompiled corpus")
idx.append("")
idx.append("Human-readable C recovered from the retail NSO by Hex-Rays, with our")
idx.append("symbol names applied so cross-calls read by name.")
idx.append("")
idx.append("| | |")
idx.append("|---|---|")
idx.append("| Game | New Super Mario Bros. U Deluxe |")
idx.append("| Version | v1.0.0 |")
idx.append(f"| Symbols applied | {symcount:,} |")
total_f = sum(len(v) for v in LAYOUT.values())
idx.append(f"| Files | {total_f} source files, {len(LAYOUT)} subsystems |")
idx.append("")
idx.append("## Naming")
idx.append("")
idx.append("Only 14.0% of functions are named, and that is deliberate. [NAMING.md](NAMING.md)"
    + " and [ACTOR_NAMES.md](ACTOR_NAMES.md) record what the names mean.")
idx.append("")
idx.append("Most of the remaining names end in `_ref`, which claims only that the function")
idx.append("references that string -- not that it is the thing the string names. See")
idx.append("[NAMING_RULES.md](NAMING_RULES.md) for why that distinction was worth throwing")
idx.append("away 2,450 names over.")
idx.append("records which methods work, which do not, and why a wrong name is worse than")
idx.append("none.")
idx.append("")
idx.append("## Layout")
idx.append("")
idx.append("| Directory | Contents |")
idx.append("|---|---|")
idx.append("| `player/` | player object, controller, state machine |")
idx.append("| `powerup/` | power-up modes, item grant, fireball/projectile |")
idx.append("| `actors/` | actor construction, sprite table, actor bodies |")
idx.append("| `systems/` | managers, scenes, engine core |")
idx.append("| `libs/` | sead and NintendoSDK code that is shared |")
idx.append("| `include/` | generated prototype headers per subsystem |")
idx.append("")
idx.append("## What these files are")
idx.append("")
idx.append("Machine output from IDA Pro 9.3's Hex-Rays decompiler, post-processed for")
idx.append("readability. They are **evidence, not source**.")
idx.append("")
idx.append("- `int a1` means *\"first argument, type not yet established\"*, not literally `int`.")
idx.append("- Field offsets like `*(_DWORD *)(a1 + 1320)` are exact. The *names* of those")
idx.append("  fields are not yet recovered, except where a header in `sweetdx/include/`")
idx.append("  documents them.")
idx.append("- A name starting `sub_` is unnamed. Everything else came from")
idx.append("  `sweetdx/symbols/nsmbux.sym` or from a naming pass whose evidence is")
idx.append("  recorded alongside the change.")
idx.append("")
idx.append("## How to regenerate")
idx.append("")
idx.append("```")
idx.append("# inside IDA, against the rebased .i64:")
idx.append("idat -A -Llog.txt -S.rea/ida_apply_names.py      work.i64   # apply symbols")
idx.append("idat -A -Llog.txt -S.rea/ida_bulk_decompile.py   work.i64   # emit C")
idx.append("")
idx.append("# on the host:")
idx.append("python scripts/make_decompiled_corpus.py                     # lay out repo")
idx.append("```")
idx.append("")
idx.append("## Coverage")
idx.append("")
idx.append("Only **live** functions (at least one incoming code xref) of at least")
idx.append("`0x30` bytes are included, plus **every named function regardless of xrefs** --")
idx.append("table-driven static initialisers are called indirectly and would otherwise be")
idx.append("dropped. That excludes ~15.9k unreferenced unnamed functions and ~10.1k small")
idx.append("unnamed thunks. 32,897 of the image's 49,470 functions have no incoming xref at")
idx.append("all.")
idx.append("")
idx.append("| Subsystem | Functions | Prototypes |")
idx.append("|---|---|---|")
for group in LAYOUT:
    cnt = sum(1 for g, b, _ in copied if g == group)
    nfunc = 0
    for base in LAYOUT[group]:
        p = os.path.join(DEST, group, f"{base}.c")
        if os.path.exists(p):
            nfunc += open(p, encoding="utf-8", errors="replace").read().count(" * RVA 0x")
    idx.append(f"| `{group}/` | {nfunc:,} | {hdr_counts.get(group, 0):,} |")

with open(os.path.join(DEST, "INDEX.md"), "w", encoding="utf-8") as fh:
    fh.write("\n".join(idx) + "\n")

print("COPIED:")
for group, base, size in copied:
    print(f"  {group}/{base}.c  {size/1e6:.2f} MB")
print()
print("HEADERS:")
for g, n in hdr_counts.items():
    print(f"  include/{g}.h  {n} prototypes")
print()
print("TOTAL SIZE: %.1f MB" %
      (sum(os.path.getsize(os.path.join(dp, f))
           for dp, _, fs in os.walk(DEST) for f in fs) / 1e6))
