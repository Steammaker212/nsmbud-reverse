"""Measure how many `base->member` accesses can be resolved to a known offset.

The 3,099 held-back functions fail because their bodies use `->`, which needs a
struct layout. But a layout is not always needed: if the variable's type is
known from a cast and that type's member offset was measured, the access is
exactly `FIELD_U*(base, offset)` and can be rewritten without inventing
anything.

This measures the ceiling before writing the rewrite: for every arrow access,
does the enclosing function declare or cast the base to a type whose member
offset is known?
"""
from __future__ import annotations

import collections
import json
import re
import sys

STRUCTS = sys.argv[1] if len(sys.argv) > 1 else \
    r"C:\Users\Saif Khan\Downloads\main.idb\_work\types.json"
SRC = sys.argv[2] if len(sys.argv) > 2 else \
    r"C:\Users\Saif Khan\Downloads\main.idb\_work\export_vt\all_functions.jsonl"

ARROW = re.compile(r"([A-Za-z_]\w*)\s*->\s*([A-Za-z_]\w*)")
# `Type *var;` or `Type *var = (Type *)x;`
DECL = re.compile(r"([A-Za-z_]\w*)\s*\*\s*([A-Za-z_]\w*)\s*(?:[;=,)])")
CAST = re.compile(r"\(\s*([A-Za-z_]\w*)\s*\*\s*\)")


def load_structs() -> dict[str, dict[str, int]]:
    """type -> {member: bit offset}, from the database's own type library.

    These offsets come from IDA, so they are what the binary actually does. The
    unit is bits because that is how the type library stores it; bitfields need
    that precision.
    """
    data = json.loads(open(STRUCTS, encoding="utf-8").read())
    out: dict[str, dict[str, int]] = {}
    for t in data.get("types", []):
        members = {}
        for m in t.get("members", []):
            if m.get("name"):
                members[m["name"]] = m.get("bit_offset", 0)
        if members:
            out[t["name"]] = members
    return out


def main() -> int:
    structs = load_structs()
    print("structs with measured members: %d" % len(structs))
    known_members = sum(len(v) for v in structs.values())
    print("total member offsets: %d" % known_members)

    total_arrows = resolved = unresolved = 0
    by_member = collections.Counter()
    unres_member = collections.Counter()
    funcs_total = funcs_fully = 0

    for line in open(SRC, encoding="utf-8"):
        line = line.strip()
        if not line:
            continue
        r = json.loads(line)
        body = r.get("c") or ""
        if "->" not in body:
            continue
        funcs_total += 1

        # Map each variable to every type it is declared or cast to.
        vartypes: dict[str, set[str]] = collections.defaultdict(set)
        for m in DECL.finditer(body):
            vartypes[m.group(2)].add(m.group(1))
        # `(Type *)expr` assigned to a variable on the same line.
        for m in re.finditer(r"([A-Za-z_]\w*)\s*=\s*\(\s*([A-Za-z_]\w*)\s*\*\s*\)", body):
            vartypes[m.group(1)].add(m.group(2))

        f_ok = True
        for base, member in ARROW.findall(body):
            total_arrows += 1
            hit = None
            for t in vartypes.get(base, ()):
                if member in structs.get(t, {}):
                    hit = (t, structs[t][member])
                    break
            if hit:
                resolved += 1
                by_member[member] += 1
            else:
                unresolved += 1
                unres_member[member] += 1
                f_ok = False
        if f_ok:
            funcs_fully += 1

    print("\nfunctions using -> : %d" % funcs_total)
    print("  every arrow resolvable: %d (%.1f%%)"
          % (funcs_fully, 100.0 * funcs_fully / funcs_total if funcs_total else 0))
    print("arrow accesses: %d  resolved: %d (%.1f%%)  unresolved: %d"
          % (total_arrows, resolved,
             100.0 * resolved / total_arrows if total_arrows else 0, unresolved))
    print("\nresolved members:")
    for m, c in by_member.most_common(12):
        print("  %5d  %s" % (c, m))
    print("\nunresolved members:")
    for m, c in unres_member.most_common(12):
        print("  %5d  %s" % (c, m))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
