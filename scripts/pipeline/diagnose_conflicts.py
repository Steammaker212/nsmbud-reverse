"""Diagnose the 'conflicting types' bucket concretely.

The bucket is 1,136 units, 907 of them with a single error. But applying the
textbook pattern `conflicting types for 'X'` matches only ~15 of them, which
means the bucket name (taken from clang's diagnostic family) is hiding a
different distribution. This prints the actual first diagnostic of the
single-error units, grouped by a normalized shape, so the real cause is visible
instead of assumed.
"""
from __future__ import annotations

import collections
import io
import json
import re

D = json.load(io.open("data/recovered/compile_failures.json", encoding="utf-8"))

singles = [f for f in D["failures"]
           if f["bucket"] == "conflicting types" and f["error_count"] == 1]

# Normalize a diagnostic to its shape: keep the message words, replace every
# quoted symbol and every type name with a placeholder, so "conflicting types for
# 'foo'" and "conflicting types for 'bar'" group together.
def shape(diag: str) -> str:
    s = diag
    # Strip the leading path:line:col: prefix.
    s = re.sub(r"^[A-Za-z]:[\\/].*?:\d+:\d+:\s*", "", s)
    s = re.sub(r"'[^']*'", "'X'", s)
    s = re.sub(r"\b(?:struct|union|enum)\s+\w+", "struct T", s)
    return s.strip()[:110]


shapes = collections.Counter()
samples = {}
for f in singles:
    sh = shape(f["first_diagnostic"])
    shapes[sh] += 1
    samples.setdefault(sh, f)

print("single-error 'conflicting types' units: %d" % len(singles))
print("distinct diagnostic shapes            : %d" % len(shapes))
print()
for sh, n in shapes.most_common(14):
    pct = 100.0 * n / max(len(singles), 1)
    print("%4d  (%4.1f%%)  %s" % (n, pct, sh))

print()
print("=" * 76)
print("largest shape in detail")
print("=" * 76)
top = shapes.most_common(1)[0][0]
i = 0
for f in singles:
    if shape(f["first_diagnostic"]) != top:
        continue
    i += 1
    if i > 6:
        break
    print("%s" % f["path"])
    print("   %s" % f["first_diagnostic"][:150])
    try:
        lines = io.open(f["path"], encoding="utf-8", errors="replace").read().splitlines()
        n = int(f["line"]) if str(f["line"]).isdigit() else 0
        if 1 <= n <= len(lines):
            print("   >> %s" % lines[n - 1].strip()[:110])
    except Exception:
        pass
