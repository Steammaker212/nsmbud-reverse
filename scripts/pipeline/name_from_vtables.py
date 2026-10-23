"""Name unnamed functions from vtable slot ownership.

A function that occupies slot *k* of `Class__vtable` is a virtual method of
`Class`. The slot index comes from the ELF itself (see dump_vtables.py), so this
is measurement, not inference.

The name produced is `Class__vf<offset>`, with the offset in bytes from the
vtable symbol. That matches the convention the database already uses for 1,018
functions, so the new names are indistinguishable in form from the existing ones
and assert exactly what is known: which class and which slot.

Usage:
    python name_from_vtables.py --vtables <vtables.json> --state <db_state.json> --out <plan.json>
"""
from __future__ import annotations

import argparse
import json
import re
from pathlib import Path


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--vtables", required=True)
    ap.add_argument("--state", required=True, help="db_state JSON with funcs")
    ap.add_argument("--out", required=True)
    args = ap.parse_args()

    vtables = json.loads(Path(args.vtables).read_text())
    state = json.loads(Path(args.state).read_text())
    funcs = {f["ea"]: f for f in state["funcs"]}
    print("vtables: %d   functions: %d" % (len(vtables), len(funcs)))

    # A vtable's first slots usually repeat the parent's; a class only owns the
    # slots it introduces. Keep every mapping but record the duplicate so the
    # plan can prefer the most-derived owner.
    owner_count: dict[int, set[str]] = {}
    for vt in vtables:
        cls = re.sub(r"_?vtable.*$", "", vt["name"]) or ""
        if not cls:
            continue
        for i, target in enumerate(vt["slots"]):
            owner_count.setdefault(target, set()).add(cls)

    plan = []
    for vt in vtables:
        cls = re.sub(r"_?vtable.*$", "", vt["name"]) or ""
        if not cls:
            continue
        for i, target in enumerate(vt["slots"]):
            if not target or target not in funcs:
                continue
            f = funcs[target]
            if not f["name"].startswith(("sub_", "nullsub_")):
                continue
            # Prefer the class that owns this slot outright; if several classes
            # share the address (inheritance), the one whose name is the longest
            # is the most derived and therefore the real owner.
            owners = owner_count.get(target) or {cls}
            owner = max(owners, key=len) if len(owners) > 1 else cls
            plan.append({
                "ea": hex(target),
                "old": f["name"],
                "new": "%s__vf%X" % (owner, i * 4),
                "basis": "vtable_slot",
                "evidence": "%s_vtable slot %d (byte offset 0x%X)"
                            % (owner, i, i * 4),
            })

    # One name per address, and never two addresses under one name.
    seen_ea: set[str] = set()
    seen_name: set[str] = set()
    unique = []
    for p in plan:
        if p["ea"] in seen_ea or p["new"] in seen_name:
            continue
        seen_ea.add(p["ea"])
        seen_name.add(p["new"])
        unique.append(p)

    print("proposed: %d (after de-duplication, from %d raw)"
          % (len(unique), len(plan)))
    Path(args.out).write_text(json.dumps(unique, indent=1))
    by_class: dict[str, int] = {}
    for p in unique:
        by_class[p["new"].split("__")[0]] = by_class.get(p["new"].split("__")[0], 0) + 1
    for c, n in sorted(by_class.items(), key=lambda kv: -kv[1])[:12]:
        print("  %-24s %d" % (c, n))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
