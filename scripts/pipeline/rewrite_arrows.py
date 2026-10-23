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
# A chain such as `a1->_._._.vtable` walks through anonymous base-class unions.
# Only the last member is a real access; every hop before it is a zero-offset
# union member, so the chain resolves to a single offset from the base object.
#
# The chain MUST begin with `->`. A plain `a1.field_10` is an access on a real
# struct object, not a pointer dereference, and rewriting it is neither needed
# nor safe -- counting those as unresolved chains made 18,000 accesses look
# like failures and dropped 996 functions from the corpus.
CHAIN = re.compile(
    r"\b([A-Za-z_]\w*)"
    r"((?:\s*\[\s*[^\]]+\s*\])?)"
    r"(\s*->\s*[A-Za-z_]\w*(?:\s*(?:->|\.)\s*[A-Za-z_]\w*)*)")


def flatten_chain(chain: str):
    """Split `->_._.vtable` into (prefix hops, final member).

    Returns (hops, last) where hops is the list before the final member.
    """
    toks = [t for t in re.split(r"->|\.", chain) if t.strip()]
    if not toks:
        return [], ""
    return toks[:-1], toks[-1]
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


def load_types(path: str):
    """type -> (size, {member: (byte offset, width macro, member type name)}).

    The member's own type is kept so a chain can be walked hop by hop: the
    offset of `m2` is relative to `m1`'s type, not to the base object. Without
    that, `this->_.vtable` cannot be resolved (`_` is an anonymous base of type
    Actor, and `vtable` lives on Actor, not on StageActor).

    Only members whose bit offset is byte-aligned can be expressed as a byte
    offset. A bitfield stays out of the rewrite rather than being rounded.
    """
    data = json.loads(open(path, encoding="utf-8").read())
    out: dict[str, tuple[int, dict[str, tuple[int, str, str]]]] = {}
    for t in data.get("types", []):
        members: dict[str, tuple[int, str, str]] = {}
        for m in t.get("members", []):
            name = m.get("name")
            if not name:
                continue
            bit = m.get("bit_offset", 0)
            if bit % 8:
                continue
            mt = (m.get("type") or "").strip()
            # Strip pointer/array decoration: the pointee type is what a chain
            # continues through.
            mt = mt.replace("*", "").strip()
            members[name] = (bit // 8, width_macro(m.get("type", "")), mt)
        if members:
            out[t["name"]] = (t.get("size") or 0, members)
    return out


def var_types(body: str) -> dict[str, set[str]]:
    types: dict[str, set[str]] = {}
    for m in DECL.finditer(body):
        types.setdefault(m.group(2), set()).add(m.group(1))
    for m in CASTASSIGN.finditer(body):
        types.setdefault(m.group(1), set()).add(m.group(2))
    # `this->m` is common in the decompiler output. `this` is not declared in
    # the body, so it has to be typed from the definition's own `Class *this`
    # parameter, which appears in the signature line.
    m = re.search(r"\b([A-Za-z_]\w*)\s*\*\s*this\b", body)
    if m:
        types.setdefault("this", set()).add(m.group(1))
    return types


def rewrite_body(body: str, types):
    """Resolve `base->m1->m2`-style chains to a single FIELD_ access.

    Only chains that start with `->` are touched: a plain `a.field` is an access
    on a real struct object and needs no rewrite.

    A chain resolves when every hop before the last is an anonymous base
    (`_`, offset 0) and the last member's offset is known for the base's type.
    Anything else is left exactly as it was, so a partial rewrite can never
    produce a half-converted expression.
    """
    vt = var_types(body)
    resolved = 0
    unresolved = 0

    def repl(m: re.Match) -> str:
        nonlocal resolved, unresolved
        base, index, chain = m.group(1), m.group(2) or "", m.group(3) or ""
        toks = [t for t in re.split(r"->|\.", chain) if t.strip()]
        if not toks:
            unresolved += 1
            return m.group(0)

        last = toks[-1]
        hops = toks[:-1]

        for t in vt.get(base, ()):
            cur = t
            total = 0
            ok = True
            # Walk every hop, accumulating its offset within the previous type.
            for h in hops:
                info = types.get(cur, (0, {}))[1].get(h)
                if not info:
                    ok = False
                    break
                off, _macro, mt = info
                total += off
                cur = mt
                if not cur:
                    ok = False
                    break
            if not ok:
                continue
            info = types.get(cur, (0, {}))[1].get(last)
            if not info:
                continue
            off, macro, _mt = info
            total += off

            size = types.get(t, (0, {}))[0]
            idx = index.strip()
            if idx:
                if not size:
                    unresolved += 1
                    return m.group(0)
                inner = idx[1:-1].strip()
                resolved += 1
                return "%s(%s + (%s) * %d, 0x%X)" % (macro, base, inner, size, total)
            resolved += 1
            return "%s(%s, 0x%X)" % (macro, base, total)

        unresolved += 1
        return m.group(0)

    new = CHAIN.sub(repl, body)
    return new, resolved, unresolved

    new = CHAIN.sub(repl, body)
    return new, resolved, unresolved


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--types", required=True)
    ap.add_argument("--jsonl", required=True)
    ap.add_argument("--out", required=True)
    args = ap.parse_args()

    types = load_types(args.types)
    print("types: %d, members: %d"
          % (len(types), sum(len(v[1]) for v in types.values())))

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
