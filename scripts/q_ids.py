#!/usr/bin/env python3
"""Dump the Deluxe profile-ID array and locate the pukupuku block.

0x60AF3474 is a dword array of profile IDs. Index k -> ID. Known anchor:
index 9 = 0x1DC = 476 (FireBall). We dump forward and look for a contiguous
run around 530..547 and beyond.
"""
import json

from rpc import call

BASE = 0x60000000
ARR = 0xAF3474
N = 4000

OUT = r"deluxe_profile_ids.txt"


def rdw(a):
    try:
        v = call("data_read_dword", {"address": hex(a)}, 20)
        return v if isinstance(v, int) else int(str(v), 0)
    except Exception:
        return None


vals = []
for k in range(N):
    v = rdw(BASE + ARR + 4 * k)
    vals.append(v)

with open(OUT, "w", encoding="utf-8") as f:
    f.write("idx  id   (id-467)\n")
    for k, v in enumerate(vals):
        if v is None:
            f.write(f"{k}\n")
        else:
            f.write(f"{k}  {v}  {v - 467}\n")

# find where contiguity breaks / where 530 lives
print("idx  id")
for k, v in enumerate(vals[:80]):
    print(f"{k:4d}  {v}")

print("\n=== entries with id in 525..560 ===")
for k, v in enumerate(vals):
    if v is not None and 525 <= v <= 560:
        print(f"idx {k:5d}  id {v}")
