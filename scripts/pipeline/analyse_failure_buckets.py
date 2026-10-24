"""Find the actual, mechanical cause inside the two cheapest failure buckets.

docs/COMPILE_FAILURES.md says 469 units fail on a single "member not found" error
and 907 on a single "conflicting types" error, and calls those the cheap wins.
"Cheap" has to be earned: this script groups the diagnostics by the specific
symbol involved and prints the groups that repeat, so a fix can be aimed at a
generator rather than at 469 individual files.

It distinguishes three things a bucket can be:

  systematic  -- one repeated missing member / conflicting signature, fixable in
                 one place (a struct table, a prototype table)
  local       -- each unit names a different symbol, so there is no single fix
  artefact    -- the "conflict" is our own two names for one function, i.e. a
                 demangler or alias problem rather than a code problem

Usage:
    python scripts/pipeline/analyse_failure_buckets.py [--bucket member]
"""
from __future__ import annotations

import argparse
import collections
import io
import json
import re

PATH = "data/recovered/compile_failures.json"

# "no member named 'X' in 'struct Y'"
MEMBER = re.compile(r"no member named '([^']+)' in '([^']+)'")
# "conflicting types for 'X'"
CONFLICT = re.compile(r"conflicting types for '([^']+)'")


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--bucket", default="all",
                    choices=["all", "member", "conflict"])
    ap.add_argument("--top", type=int, default=25)
    opt = ap.parse_args()

    data = json.load(io.open(PATH, encoding="utf-8"))
    fails = data["failures"]

    member_units, conflict_units = [], []
    for f in fails:
        if f["bucket"] == "member not found":
            member_units.append(f)
        elif f["bucket"] == "conflicting types":
            conflict_units.append(f)

    if opt.bucket in ("all", "member"):
        print("=" * 74)
        print("MEMBER NOT FOUND -- %d units" % len(member_units))
        singles = [f for f in member_units if f["error_count"] == 1]
        print("  of which single-error units: %d" % len(singles))
        # Group by the missing member name and the owning type.
        by_member = collections.Counter()
        by_type = collections.Counter()
        for f in singles:
            m = MEMBER.search(f["first_diagnostic"])
            if m:
                by_member[m.group(1)] += 1
                by_type[m.group(2)] += 1
        print()
        print("  missing member, most repeated (single-error units):")
        for name, n in by_member.most_common(opt.top):
            print("    %-4d  %s" % (n, name))
        print()
        print("  owning type, most repeated:")
        for name, n in by_type.most_common(opt.top):
            print("    %-4d  %s" % (n, name))
        distinct = len(by_member)
        print()
        print("  distinct missing members: %d across %d units"
              % (distinct, len(singles)))
        if distinct:
            covered = sum(n for _k, n in by_member.most_common(10))
            print("  top 10 members account for %d/%d units (%.0f%%)"
                  % (covered, len(singles), 100.0 * covered / max(len(singles), 1)))

    if opt.bucket in ("all", "conflict"):
        print()
        print("=" * 74)
        print("CONFLICTING TYPES -- %d units" % len(conflict_units))
        singles = [f for f in conflict_units if f["error_count"] == 1]
        print("  of which single-error units: %d" % len(singles))
        by_sym = collections.Counter()
        for f in singles:
            m = CONFLICT.search(f["first_diagnostic"])
            if m:
                by_sym[m.group(1)] += 1
        print()
        print("  conflicting symbol, most repeated:")
        for name, n in by_sym.most_common(opt.top):
            print("    %-4d  %s" % (n, name))
        print()
        print("  distinct conflicting symbols: %d" % len(by_sym))
        # A conflict is an "alias" artefact when the same symbol appears as its
        # own suffix/prefix variant.
        alias = 0
        for name, n in by_sym.items():
            base = re.sub(r"_(0|[0-9]+|thunk|const|impl)$", "", name)
            if base != name:
                alias += n
        print("  of which look like our own name variants (suffix _0/_N/thunk): %d"
              % alias)
        print()
        print("  sample failing units:")
        for f in singles[:8]:
            print("    %s" % f["path"])
            print("       %s" % f["first_diagnostic"][:120])

    return 0


if __name__ == "__main__":
    raise SystemExit(main())
