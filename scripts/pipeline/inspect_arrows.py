"""Show what the single-arrow functions actually dereference.

The 3,099 functions held back from the C corpus all use `->`. 1,397 of them use
it exactly once, which is the easiest group to recover: one member reference
whose owning type might be definable from evidence.

This prints the distinct member names and the casts that produce the pointer, so
a decision to generate a struct can be based on what is really there.
"""
from __future__ import annotations

import collections
import json
import re
import sys

SRC = sys.argv[1] if len(sys.argv) > 1 else \
    r"C:\Users\Saif Khan\Downloads\main.idb\_work\export_vt\all_functions.jsonl"

ARROW = re.compile(r"([A-Za-z_]\w*)\s*->\s*([A-Za-z_]\w*)")


def main() -> int:
    members: collections.Counter = collections.Counter()
    casts: collections.Counter = collections.Counter()
    shown = 0
    total = 0
    for line in open(SRC, encoding="utf-8"):
        line = line.strip()
        if not line:
            continue
        r = json.loads(line)
        body = r.get("c") or ""
        hits = ARROW.findall(body)
        if len(hits) != 1:
            continue
        total += 1
        base, member = hits[0]
        members[member] += 1
        # The declaration of the base variable usually carries the type cast.
        for m in re.finditer(r"\b%s\s*=\s*\(([^)]+)\)" % re.escape(base), body):
            casts[m.group(1).strip()] += 1
        if shown < 8:
            print("=" * 60)
            print(r.get("name"), "->", member)
            head = body.split("{", 1)[-1].strip().splitlines()
            print("\n".join(head[:14]))
            shown += 1

    print("\n=== single-arrow functions: %d ===" % total)
    print("distinct members: %d" % len(members))
    for m, c in members.most_common(20):
        print("  %4d  %s" % (c, m))
    print("\ncast types seen:")
    for t, c in casts.most_common(12):
        print("  %4d  %s" % (c, t))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
