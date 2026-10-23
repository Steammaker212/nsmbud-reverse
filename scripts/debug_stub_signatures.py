"""Check whether the stub signature-matching pass is actually running.

It reported no "signature-matched" line, which means either nothing needed fixing (but clang disagrees) or the pass
never found the declarations. This isolates which.
"""
import os
import re

ROOT = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled"
OUT = os.path.join(ROOT, "recovered", "recovered_stubs.c")

declared = {}
for hf in os.listdir(os.path.join(ROOT, "include")):
    if not hf.endswith(".h"):
        continue
    ht = open(os.path.join(ROOT, "include", hf), encoding="utf-8", errors="replace").read()
    for m in re.finditer(r"(?m)^\s*([A-Za-z_][\w \t\*]*?)\s+__\w+\s+(\w+)\s*\(", ht):
        declared.setdefault(m.group(2), m.group(1).strip())

print("  declared prototypes scanned: %d" % len(declared))
for n in ("nullsub_3", "nullsub_4", "nullsub_380"):
    print("    %-14s declared as: %s" % (n, declared.get(n, "MISSING")))

t = open(OUT, encoding="utf-8", errors="replace").read()
for n in ("nullsub_3", "nullsub_4"):
    m = re.search(r"(?m)^([A-Za-z_][\w \t\*]*?)\s+%s\s*\(" % re.escape(n), t)
    print("    %-14s defined  as: %s" % (n, m.group(1) if m else "MISSING"))
