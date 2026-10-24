"""Measure whether the member-not-found bucket is one systematic gap.

The examples show `a1[8].id`, `a1[1]._._._`, `result[508].currentState` -- an
indexed access followed by a DOT. The arrow rewriter's CHAIN pattern requires an
arrow in the chain, so `ptr[i].member` is never rewritten at all; it survives into
the published C and then fails to compile because the struct definition does not
carry that member.

If that is the cause, the fix is in the rewriter, not in 469 files. This script
measures the share rather than assuming it.
"""
from __future__ import annotations

import collections
import io
import json
import re

D = json.load(io.open("data/recovered/compile_failures.json", encoding="utf-8"))

MEMBER = re.compile(r"no member named '([^']+)' in '([^']+)'")
# `name[index].member` or `name[index].a.b`
INDEXED = re.compile(r"(\w+)\s*\[[^\]]*\]\s*\.")

singles = [f for f in D["failures"]
           if f["bucket"] == "member not found" and f["error_count"] == 1]

indexed = 0
arrow = 0
other = 0
examples = collections.Counter()

for f in singles:
    try:
        lines = io.open(f["path"], encoding="utf-8", errors="replace").read().splitlines()
    except Exception:
        other += 1
        continue
    n = int(f["line"]) if str(f["line"]).isdigit() else 0
    if not (1 <= n <= len(lines)):
        other += 1
        continue
    src = lines[n - 1]
    if INDEXED.search(src):
        indexed += 1
        examples["indexed"] += 1
    elif "->" in src:
        arrow += 1
        examples["arrow"] += 1
    else:
        other += 1
        examples["other"] += 1

print("single-error 'member not found' units : %d" % len(singles))
print("  source uses name[i].member          : %d (%.0f%%)"
      % (indexed, 100.0 * indexed / max(len(singles), 1)))
print("  source uses an arrow chain          : %d" % arrow)
print("  neither / unreadable                : %d" % other)
print()

# Which struct is involved when the access is indexed?
types = collections.Counter()
for f in singles:
    m = MEMBER.search(f["first_diagnostic"])
    if m:
        types[m.group(2)] += 1
print("owning struct across all single-error units:")
for name, n in types.most_common(8):
    print("  %-4d %s" % (n, name))

print()
print("sample indexed accesses that fail:")
shown = 0
for f in singles:
    try:
        lines = io.open(f["path"], encoding="utf-8", errors="replace").read().splitlines()
    except Exception:
        continue
    n = int(f["line"]) if str(f["line"]).isdigit() else 0
    if not (1 <= n <= len(lines)):
        continue
    if INDEXED.search(lines[n - 1]) and shown < 8:
        print("  %-52s %s" % (f["path"].split("\\")[-1][:52], lines[n - 1].strip()[:70]))
        shown += 1
