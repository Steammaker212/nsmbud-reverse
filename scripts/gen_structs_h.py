"""Generate decompiled/include/structs.h from the VALIDATED layout extraction.

Only classes whose extraction was checked against ground truth are emitted with confidence; the
rest are emitted but clearly marked as unvalidated, because a struct layout that is silently wrong
is the most damaging kind of error this project can publish.

Ground truth used for validation (all six checks passed):
    PlayerBase  +0x484 width 1, +0x485 width 1, +0x4DC, +0x522 width 1, +0x524, +0x528 width 4

Known limitation, stated in the file itself: the extractor only records stores whose address is a
literal `[Rn, #imm]` against a proven `this` alias. Constructors that compute an offset into a
register (MOVW R0,#0x17D4; ADD R0,R4,R0; BL ...) are NOT captured, which is why FireballBase shows
no fields even though its ctor demonstrably writes +0x17D4, +0x17FC and many more. Missing fields
are acceptable; invented ones are not, so this under-reports by design.
"""
import json
import os

SRC = r"C:\Users\Saif Khan\Downloads\main.idb\.rea\structs_guarded.json"
OUT = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled\include\structs.h"

data = json.load(open(SRC, encoding="utf-8"))

VALIDATED = {"PlayerBase"}

LINES = []
A = LINES.append
A("/* NSMBU Deluxe (Switch) v1.0.0 -- recovered struct layouts")
A(" *")
A(" * GENERATED from constructor stores. Each field below is backed by a specific")
A(" * `STR/STRH/STRB  Rt, [this, #offset]` in that class's constructor, where `this`")
A(" * was tracked as a live register alias (R0 on entry, propagated through MOV).")
A(" *")
A(" * Two honesty notes that matter:")
A(" *")
A(" *  1. Field WIDTH is known exactly (4 / 2 / 1 from the store instruction). The")
A(" *     TYPE is not. `uint32_t` here means \"4-byte field\", not \"an int32\".")
A(" *     Treat every entry as an offset, not a type.")
A(" *")
A(" *  2. Coverage is deliberately INCOMPLETE. Constructors that compute an offset")
A(" *     into a register (e.g. `MOVW R0,#0x17D4; ADD R0,R4,R0; BL ctor`) are not")
A(" *     captured, so classes such as FireballBase appear empty even though their")
A(" *     constructors demonstrably write many fields. Missing fields are acceptable;")
A(" *     invented ones are not, so this under-reports by design.")
A(" *")
A(" * Classes marked VALIDATED were checked against offsets established by hand")
A(" * independently. All unmarked classes are mechanically derived only.")
A(" *")
A(" * Do not edit by hand. Regenerate with .rea/ida_structs2.py + this script.")
A(" */")
A("#pragma once")
A("")
A("#include <stdint.h>")
A("")
A("/* RVAs are image-relative: VA = 0x60000000 + RVA */")
A("")

ranked = sorted(data.items(), key=lambda kv: -len(kv[1]))
emitted = 0
for cls, rows in ranked:
    if not cls or not cls[0].isalpha():
        continue
    safe = "".join(ch if (ch.isalnum() or ch == "_") else "_" for ch in cls)
    if not safe or safe[0].isdigit():
        continue
    validated = cls in VALIDATED
    tag = "   VALIDATED against hand-established offsets" if validated else ""
    A(f"/* {cls} -- {len(rows)} proven field(s), sizeof >= 0x{rows[-1]['off'] + rows[-1]['width']:x}{tag}")
    A(" *")
    A(" * Derived from: " + ", ".join(
        sorted({c for r in rows for c in r["ctors"]})[:4]))
    A(" */")
    A(f"typedef struct {safe} {{")
    prev_end = 0
    for r in rows:
        off, w = r["off"], r["width"]
        if off > prev_end:
            A(f"    uint8_t  _pad_{off:04X}[0x{off - prev_end:X}];")
        utype = {1: "uint8_t", 2: "uint16_t", 4: "uint32_t"}[w]
        A(f"    {utype} field_{off:04X};   /* +0x{off:04X} */")
        prev_end = off + w
    A(f"    /* struct size >= 0x{prev_end:x} ({prev_end}) */")
    A(f"}} {safe};")
    A("")
    emitted += 1

os.makedirs(os.path.dirname(OUT), exist_ok=True)
with open(OUT, "w", encoding="utf-8", newline="\n") as fh:
    fh.write("\n".join(LINES) + "\n")

print(f"wrote {OUT}")
print(f"  classes emitted : {emitted}")
print(f"  validated       : {len(VALIDATED & set(data))}")
print(f"  total fields    : {sum(len(v) for c, v in data.items())}")
print(f"  size            : {os.path.getsize(OUT):,} bytes")
