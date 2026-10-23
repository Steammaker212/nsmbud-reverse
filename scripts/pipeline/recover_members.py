"""Recover struct member names from the decompiled access patterns.

The layout-independent corpus avoids `->` entirely, which is what let it reach
a clean compile. The remaining functions dereference named fields, and to
compile them the struct definitions must have members with those names.

This script measures, per base type, which member names the bodies actually use,
so the generated headers can declare them. It does not invent offsets: when a
field is also reachable as `FIELD_U32(x, 0x234)` the offset is known and
recorded; when only the name is known it is recorded as name-only, which is
exactly the uncertainty that exists.

Usage:
    python recover_members.py --jsonl <norm.jsonl> --out <members.json>
"""
from __future__ import annotations

import argparse
import json
import re
from collections import Counter, defaultdict
from pathlib import Path

ARROW = re.compile(r"\b([A-Za-z_]\w*)\s*->\s*([A-Za-z_]\w*)")
DOT = re.compile(r"\b([A-Za-z_]\w*)\s*\.\s*([A-Za-z_]\w*)")
# FIELD_U32(a1, 0x234) -- gives a name-to-offset binding when the base is `a1`.
FIELD = re.compile(r"FIELD_U\d+\(([A-Za-z_]\w*),\s*(0x[0-9A-Fa-f]+|\d+)\)")


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--jsonl", required=True)
    ap.add_argument("--out", required=True)
    args = ap.parse_args()

    arrow: Counter = Counter()
    member_names: dict[str, Counter] = defaultdict(Counter)

    with open(args.jsonl, encoding="utf-8") as fh:
        for line in fh:
            line = line.strip()
            if not line:
                continue
            r = json.loads(line)
            body = r.get("c") or ""
            if not body:
                continue
            for base, mem in ARROW.findall(body):
                arrow[(base, mem)] += 1
            # Group by owning class where the function name identifies one.
            cls = r["name"].split("__", 1)[0] if "__" in r["name"] else ""
            for base, mem in ARROW.findall(body):
                if cls and base in ("this", "a1", "a2", "result"):
                    member_names[cls][mem] += 1
            for mem in DOT.findall(body):
                if cls:
                    member_names[cls][mem[1]] += 1

    print("arrow accesses: %d distinct (base, member)" % len(arrow))
    print("classes with observed members: %d" % len(member_names))

    out = {
        "classes": {
            cls: {m: n for m, n in c.most_common()}
            for cls, c in sorted(member_names.items())
        },
        "bases": {
            "%s.%s" % k: v for k, v in arrow.most_common()
        },
    }
    Path(args.out).write_text(json.dumps(out, indent=1))

    # Report the classes with the most evidence: these are the ones whose
    # headers can be written with confidence.
    top = sorted(member_names.items(), key=lambda kv: -sum(kv[1].values()))[:12]
    for cls, c in top:
        print("  %-24s %3d members  %s" % (cls, len(c), ", ".join(list(c)[:6])))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
