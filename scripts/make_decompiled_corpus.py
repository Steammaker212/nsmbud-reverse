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
SRC = r"C:\Users\Saif Khan\Downloads\main.idb\.rea\decompiled_full"
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
                    out.append(f"{ret} __fastcall {name}({args});  /* {rva} */")
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
idx.append("Only 9.7% of functions are named, and that is deliberate. [NAMING.md](NAMING.md)")
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
