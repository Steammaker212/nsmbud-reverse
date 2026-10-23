"""Rewrite `base->member` into `FIELD_U*(base, offset)` using measured offsets.

The database's own type library gives every struct member an exact bit offset
(see export_types.py), so an arrow access can be replaced by the same
layout-independent macro the rest of the corpus already uses. Nothing is
inferred: the offset is what the binary does, and `FIELD_U32(p, off)` compiles to
`*(unsigned int *)((char *)(p) + (off))`, which is the identical access.

Types are resolved per function from the declarations and casts in its own body,
so a variable only gets rewritten when its type is unambiguous there. An access
whose type is not determinable is left as `->` and the function stays in the
layout-dependent set.

Usage:
    python rewrite_arrows.py --types <types.json> --jsonl <in.jsonl> --out <out.jsonl>
"""
from __future__ import annotations

import argparse
import json
import re

ARROW = re.compile(r"\b([A-Za-z_]\w*)\s*->\s*([A-Za-z_]\w*)")
DECL = re.compile(r"\b([A-Za-z_]\w*)\s*\*\s*([A-Za-z_]\w*)\s*(?:[;=,)])")
CASTASSIGN = re.compile(r"\b([A-Za-z_]\w*)\s*=\s*\(\s*([A-Za-z_]\w*)\s*\*\s*\)")

# Width of a member, from the type string the type library reports.
WIDTH = [
    ("float", "FIELD_F32"),
    ("double", "FIELD_F64"),
    ("__int64", "FIELD_U64"),
    ("unsigned __int64", "FIELD_U64"),
    ("__int32", "FIELD_U32"),
    ("int", "FIELD_U32"),
    ("unsigned int", "FIELD_U32"),
    ("__int16", "FIELD_U16"),
    ("short", "FIELD_U16"),
    ("char", "FIELD_U8"),
    ("bool", "FIELD_U8"),
]


def width_macro(type_str: str) -> str:
    t = (type_str or "").strip()
    if "*" in t:
        return "FIELD_U32"  # pointers are 32-bit in this ABI
    for key, macro in WIDTH:
        if key in t:
            return macro
    return "FIELD_U32"


def load_types(path: str) -> dict[str, dict[str, tuple[int, str]]]:
    """type -> {member: (byte offset, width macro)}.

    Only members whose bit offset is byte-aligned can be expressed as a byte
    offset. A bitfield stays out of the rewrite rather than being rounded.
    """
    data = json.loads(open(path, encoding="utf-8").read())
    out: dict[str, dict[str, tuple[int, str]]] = {}
    for t in data.get("types", []):
        members: dict[str, tuple[int, str]] = {}
        for m in t.get("members", []):
            name = m.get("name")
            if not name:
                continue
            bit = m.get("bit_offset", 0)
            if bit % 8:
                continue
            members[name] = (bit // 8, width_macro(m.get("type", "")))
        if members:
            out[t["name"]] = members
    return out


def var_types(body: str) -> dict[str, set[str]]:
    types: dict[str, set[str]] = {}
    for m in DECL.finditer(body):
        types.setdefault(m.group(2), set()).add(m.group(1))
    for m in CASTASSIGN.finditer(body):
        types.setdefault(m.group(1), set()).add(m.group(2))
    return types


def rewrite_body(body: str, types: dict[str, dict[str, tuple[int, str]]]):
    vt = var_types(body)
    resolved = 0
    unresolved = 0

    def repl(m: re.Match) -> str:
        nonlocal resolved, unresolved
        base, member = m.group(1), m.group(2)
        for t in vt.get(base, ()):
            info = types.get(t, {}).get(member)
            if info:
                off, macro = info
                resolved += 1
                return "%s(%s, 0x%X)" % (macro, base, off)
        unresolved += 1
        return m.group(0)

    new = ARROW.sub(repl, body)
    return new, resolved, unresolved


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--types", required=True)
    ap.add_argument("--jsonl", required=True)
    ap.add_argument("--out", required=True)
    args = ap.parse_args()

    types = load_types(args.types)
    print("types: %d, members: %d"
          % (len(types), sum(len(v) for v in types.values())))

    total = changed = fully = 0
    a_res = a_unres = 0
    with open(args.out, "w", encoding="utf-8") as oh:
        for line in open(args.jsonl, encoding="utf-8"):
            line = line.strip()
            if not line:
                continue
            r = json.loads(line)
            total += 1
            body = r.get("c") or ""
            if "->" in body:
                new, res, unres = rewrite_body(body, types)
                a_res += res
                a_unres += unres
                if res:
                    changed += 1
                    r["c"] = new
                if unres == 0:
                    fully += 1
            oh.write(json.dumps(r) + "\n")

    print("functions: %d" % total)
    print("  bodies rewritten: %d" % changed)
    print("  arrow accesses resolved: %d, left as ->: %d" % (a_res, a_unres))
    print("  functions with no remaining ->: %d (%.1f%% of those using ->)"
          % (fully, 100.0 * fully / changed if changed else 0))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
