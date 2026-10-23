"""Measure how much naming evidence the string literals carry.

An unnamed function that formats or compares against a distinctive string is
identifiable from that string (an assertion message, a format, a filename).
This counts how many unnamed functions have one, and shows a sample, before
committing to a naming rule.
"""
from __future__ import annotations

import json
import re
import sys

SRC = r"C:\Users\Saif Khan\Downloads\main.idb\_work\export_vt\all_functions.jsonl"
# Printable runs of 5+ characters, which is long enough not to be a cast artefact.
LIT = re.compile(r'"([\x20-\x7e]{5,90})"')


def main() -> int:
    total = withlit = 0
    samples = []
    by_lit: dict[str, int] = {}
    for line in open(SRC, encoding="utf-8"):
        line = line.strip()
        if not line:
            continue
        r = json.loads(line)
        name = r.get("name") or ""
        if not name.startswith(("sub_", "nullsub_")):
            continue
        total += 1
        body = r.get("c") or ""
        lits = [s for s in LIT.findall(body)
                if not re.fullmatch(r"[0-9A-Fa-fx]+", s)]
        if lits:
            withlit += 1
            for s in lits[:1]:
                by_lit[s] = by_lit.get(s, 0) + 1
            if len(samples) < 15:
                samples.append((name, lits[0]))
    print("unnamed functions: %d" % total)
    print("with a distinctive string: %d (%.1f%%)"
          % (withlit, 100.0 * withlit / total if total else 0))
    print("\nsample:")
    for n, s in samples:
        print("  %-28s %r" % (n, s))
    print("\nmost shared strings:")
    for s, c in sorted(by_lit.items(), key=lambda kv: -kv[1])[:10]:
        print("  %4d  %r" % (c, s[:70]))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
