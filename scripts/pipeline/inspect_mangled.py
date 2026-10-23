"""Show the shapes of the mangled names demangle_names.py could not read."""
from __future__ import annotations

import collections
import json
import re
import sys

STATE = r"C:\Users\Saif Khan\Downloads\main.idb\_work\db_state_vt.json"

state = json.loads(open(STATE, encoding="utf-8").read())
shapes: collections.Counter = collections.Counter()
examples: dict[str, list[str]] = {}
for f in state["funcs"]:
    n = f["name"]
    if "_Z" not in n:
        continue
    body = n[n.index("_Z") + 2:]
    # bucket by the first few characters after _Z
    key = body[:6]
    shapes[key] += 1
    examples.setdefault(key, []).append(n)

for k, v in shapes.most_common(15):
    print("%5d  _Z%-8s  e.g. %s" % (v, k, examples[k][0][:70]))
print("\ndistinct shapes: %d" % len(shapes))
