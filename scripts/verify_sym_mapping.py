#!/usr/bin/env python3
"""Verify VA -> RVA mapping and cross-check against codedx main.sym."""
import json
import re
import sys

IDB = 0x60000000
SYM = r"C:\Users\Saif Khan\Downloads\main.idb\.rea\codedx\src\main.sym"
FUNCS = r"C:\Users\Saif Khan\Downloads\main.idb\.rea\functions_all.json"

# parse codedx main.sym
pat = re.compile(r"^([^\s=]+)\s*=\s*(-?0x[0-9a-fA-F]+)\s*;?$", re.I)
cdx = {}
for line in open(SYM, encoding="utf-8", errors="replace"):
    s = line.split("#")[0].strip()
    if not s:
        continue
    m = pat.match(s)
    if m:
        cdx[m.group(1)] = int(m.group(2), 16)

print(f"codedx main.sym symbols: {len(cdx)}")
vals = sorted(cdx.values())
print(f"  RVA range: 0x{vals[0]:08X} .. 0x{vals[-1]:08X}")
print(f"  NSMBUDX_NSO_MEMORY_SIZE = 0x00CD1000")
print(f"  all fit under 0xCD1000: {vals[-1] < 0x00CD1000}")

# our functions
d = json.load(open(FUNCS, encoding="utf-8"))
rows = d["data"]
print(f"\nour function inventory: {len(rows)} (next_offset={d.get('next_offset')})")

ours = {}
for r in rows:
    va = int(r["address"], 16)
    ours[r["name"]] = va
print(f"  VA range: 0x{min(ours.values()):08X} .. 0x{max(ours.values()):08X}")

# prove RVA = VA - 0x60000000 by checking codedx names present in ours
match = alias = miss = 0
examples = []
for name, rva in cdx.items():
    if name in ours:
        if ours[name] - IDB == rva:
            match += 1
        else:
            examples.append((name, rva, ours[name] - IDB))
    else:
        miss += 1

print(f"\n=== direct name+address agreement ===")
print(f"  identical name AND va-0x60000000 == codedx rva : {match}")
print(f"  name present but address DISAGREES             : {len(examples)}")
print(f"  name absent from our inventory                 : {miss}")
for n, a, b in examples[:10]:
    print(f"    {n}: codedx 0x{a:08X} vs ours 0x{b:08X}")

# check that our sub_ names cover codedx
covered = sum(1 for n in cdx if n in ours)
print(f"\ncodedx names found by exact string in our inventory: {covered}/{len(cdx)}")
