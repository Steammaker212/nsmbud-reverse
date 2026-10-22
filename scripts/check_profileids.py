"""Verify the profile-id claims in profileid.h against doc/profiles.csv.

Several ids in our header were written by implicit enum increment, which is only
correct if no entry is missing. This checks each named id against the CSV so the
numbers are facts rather than arithmetic.
"""
import csv
import io
import re

CSV = r"C:\Users\Saif Khan\Downloads\main.idb\.rea\codedx\src\doc\profiles.csv"
HDR = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\sweetdx\include\profileid.h"

rows = []
with io.open(CSV, encoding="utf-8-sig", errors="replace") as f:
    r = csv.reader(f)
    head = next(r, None)
    for line in r:
        if len(line) >= 2:
            rows.append(line)

print(f"CSV header: {head}")
print(f"{len(rows)} rows\n")

# Find which column holds the numeric id and which holds the name.
# The CSV has no header row: column 0 is the numeric id, 2 the Japanese name,
# 3 the English name.
id_col, name_col = 0, 3
rows = [r for r in rows if r and r[0].strip().isdigit()]
print(f"{len(rows)} data rows")
for i, h in enumerate(head or []):
    hl = str(h).lower()
    if "id" in hl and "profile" in hl:
        id_col = i
    if "name" in hl:
        name_col = i

by_id, by_name = {}, {}
for line in rows:
    try:
        n = int(line[id_col])
    except (ValueError, IndexError):
        continue
    nm = line[name_col].strip()
    by_id[n] = nm
    by_name[nm.lower()] = n

print("=== ids our header names explicitly ===")
txt = io.open(HDR, encoding="utf-8").read()
explicit = re.findall(r"^\s*([A-Za-z_][A-Za-z0-9_]*)\s*=\s*(\d+)", txt, re.M)
for name, val in explicit:
    n = int(val)
    actual = by_id.get(n, "<none>")
    print(f"  {name:24} = {n:4}   CSV[{n}] = {actual}")

print("\n=== implicit entries: walk the enum and compare each to the CSV ===")
# Parse the enum body in order, assigning implicit values.
body = txt[txt.index("enum ProfileIdType"):]
body = body[:body.index("};")]
cur = -1
bad = 0
for m in re.finditer(r"^\s*([A-Za-z_][A-Za-z0-9_]*)\s*(?:=\s*(\d+))?\s*,?\s*(?://\s*(.*))?$",
                     body, re.M):
    name, val, comment = m.group(1), m.group(2), (m.group(3) or "")
    if name in ("enum", "ProfileIdType"):
        continue
    cur = int(val) if val else cur + 1
    if cur >= 914:
        continue          # custom ids have no CSV row
    actual = by_id.get(cur, "<none>")
    if actual == "<none>":
        continue
    # Compare loosely: CSV may carry Japanese names.
    print(f"  {cur:4}  {name:22} CSV: {actual}")
