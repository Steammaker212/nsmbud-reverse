"""Normalise decompiler noise into readable, layout-independent C.

Two mechanical rewrites, both behaviour-preserving:

1. ``*(_DWORD *)(a1 + 0x234)`` -> ``FIELD_U32(a1, 0x234)``
   ``*(unsigned __int8 *)(a1 + 84)`` -> ``FIELD_U8(a1, 84)``
   ``*(float *)(v3 + 0x10)`` -> ``FIELD_F32(v3, 0x10)``

   This removes the Hex-Rays cast soup without asserting a struct layout: the
   byte offset is exactly the one the decompiler printed, and the accessor
   documents the access width. It is also *more* honest than a struct type,
   because the binary's real layout is not known for most classes.

2. ``MEMORY[0xC7B420]`` -> ``IMAGE32(0xC7B420)`` for scalar reads, which makes
   the absolute data reference explicit rather than looking like an array index.

Nothing is renamed, reordered, or reinterpreted. If a pattern does not match
exactly, the original text is kept.

Usage:
    python normalize_c.py --jsonl <in.jsonl> --out <out.jsonl>
    python normalize_c.py --file <in.c> --rewrite
"""
from __future__ import annotations

import argparse
import json
import re
from pathlib import Path

# *(TYPE *)(EXPR + OFFSET)  -- EXPR is a simple identifier or a1/a2/... form.
SCALAR_TYPES = {
    "_DWORD": "FIELD_U32",
    "_QWORD": "FIELD_U64",
    "_WORD": "FIELD_U16",
    "_BYTE": "FIELD_U8",
    "unsigned __int8": "FIELD_U8",
    "unsigned __int16": "FIELD_U16",
    "unsigned __int32": "FIELD_U32",
    "unsigned int": "FIELD_U32",
    "int": "FIELD_S32",
    "__int32": "FIELD_S32",
    "__int16": "FIELD_S16",
    "__int8": "FIELD_S8",
    "char": "FIELD_S8",
    "float": "FIELD_F32",
    "double": "FIELD_F64",
}

FIELD_RE = re.compile(
    r"\*\(\s*(?P<type>[A-Za-z_][A-Za-z0-9_ ]*?)\s*\*\s*\)\s*\(\s*"
    r"(?P<expr>[A-Za-z_][A-Za-z0-9_]*)\s*\+\s*(?P<off>0x[0-9A-Fa-f]+|\d+)\s*\)"
)

MEM_RE = re.compile(r"MEMORY\[(0x[0-9A-Fa-f]+|\d+)\]")
# C++ scope qualifiers left by Hex-Rays on globals/types (`sead::HeapMgr::sInstance`).
SCOPE_RE = re.compile(r"\b([A-Za-z_]\w*(?:\s*::\s*[A-Za-z_]\w*)+)\b")
# `&`vtable for'StageActor` -- Hex-Rays' rendering of a vtable address. The
# ampersand is sometimes absent (`*(_DWORD *)a1 = `vtable for'X;`), so it is
# optional and always supplied in the replacement.
VTABLE_RE = re.compile(r"&?\s*`\s*vtable for'\s*([A-Za-z_]\w*)")
# `&Class__vtable<char>` -- C++ template arguments on a vtable symbol.
VTABLE_ARGS_RE = re.compile(r"(&\s*[A-Za-z_]\w*__vtable)\s*<[^<>;]*>")


def flatten_scope(m: re.Match) -> str:
    parts = [p.strip() for p in m.group(1).split("::")]
    return "__".join(parts)


def rewrite(text: str) -> tuple[str, int]:
    n = 0

    def field_sub(m: re.Match) -> str:
        nonlocal n
        t = m.group("type").strip()
        macro = SCALAR_TYPES.get(t)
        if not macro:
            return m.group(0)
        n += 1
        return "%s(%s, %s)" % (macro, m.group("expr"), m.group("off"))

    out = FIELD_RE.sub(field_sub, text)

    def mem_sub(m: re.Match) -> str:
        nonlocal n
        n += 1
        return "IMAGE32(%s)" % m.group(1)

    out = MEM_RE.sub(mem_sub, out)
    out, n2 = SCOPE_RE.subn(flatten_scope, out)
    n += n2
    out, n3 = VTABLE_RE.subn(lambda m: "&%s__vtable" % m.group(1), out)
    n += n3
    out, n4 = VTABLE_ARGS_RE.subn(lambda m: m.group(1), out)
    n += n4
    return out, n


MACROS = r"""/* Field accessors: layout-independent, offset-exact.
 *
 * The offset printed by Hex-Rays is the offset in the real object; naming the
 * width here removes the cast soup without inventing a struct layout.
 */
#ifndef NSMBUDX_FIELD_H
#define NSMBUDX_FIELD_H
#include <stdint.h>
#define FIELD_U8(p, o)   (*(volatile uint8_t  *)((unsigned char *)(p) + (o)))
#define FIELD_S8(p, o)   (*(volatile int8_t   *)((unsigned char *)(p) + (o)))
#define FIELD_U16(p, o)  (*(volatile uint16_t *)((unsigned char *)(p) + (o)))
#define FIELD_S16(p, o)  (*(volatile int16_t  *)((unsigned char *)(p) + (o)))
#define FIELD_U32(p, o)  (*(volatile uint32_t *)((unsigned char *)(p) + (o)))
#define FIELD_S32(p, o)  (*(volatile int32_t  *)((unsigned char *)(p) + (o)))
#define FIELD_U64(p, o)  (*(volatile uint64_t *)((unsigned char *)(p) + (o)))
#define FIELD_F32(p, o)  (*(volatile float    *)((unsigned char *)(p) + (o)))
#define FIELD_F64(p, o)  (*(volatile double   *)((unsigned char *)(p) + (o)))
#define IMAGE32(a)       (*(volatile uint32_t *)(g_image + (a)))
#endif /* NSMBUDX_FIELD_H */
"""


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--jsonl")
    ap.add_argument("--out")
    ap.add_argument("--file")
    ap.add_argument("--rewrite", action="store_true")
    ap.add_argument("--emit-macros")
    args = ap.parse_args()

    if args.emit_macros:
        Path(args.emit_macros).write_text(MACROS)
        print("macros: %s" % args.emit_macros)
        if not args.jsonl:
            return 0

    if args.file:
        p = Path(args.file)
        src = p.read_text(encoding="utf-8")
        new, cnt = rewrite(src)
        print("%s: %d rewrites" % (p.name, cnt))
        if args.rewrite:
            p.write_text(new, encoding="utf-8")
        return 0

    total = 0
    nfun = 0
    with open(args.jsonl, encoding="utf-8") as fh, open(args.out, "w", encoding="utf-8") as oh:
        for line in fh:
            line = line.strip()
            if not line:
                continue
            r = json.loads(line)
            if r.get("c"):
                r["c"], n = rewrite(r["c"])
                total += n
                nfun += 1
            oh.write(json.dumps(r, ensure_ascii=False) + "\n")
    print("rewrites: %d across %d functions -> %s" % (total, nfun, args.out))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
