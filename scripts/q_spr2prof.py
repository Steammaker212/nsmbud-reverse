#!/usr/bin/env python3
"""Resolve the Deluxe sprite->profile table and test Wii U ID alignment.

sInit_SpriteToProfileTable(@0x60014724) writes:
    MEMORY[0xC7B7B4 + 4*k] = MEMORY[0xAF3474 + 4*k]

so the k-th sprite maps to the profile object at RVA 0xAF3474+4k (plus base).
Each profile object starts with its ID (a small int). We read the first dword
of each profile and print sprite index -> profile ID. Then we can see whether
the Cheep Cheep block sits at 530..547.
"""
import json

from rpc import call

BASE = 0x60000000
TABLE = 0xAF3474          # profile-object pointer array (RVAs)
N = 1300                  # enough rows to cover 530..547 and beyond

OUT = r"deluxe_sprite_profile.txt"


def rdw(a):
    try:
        v = call("data_read_dword", {"address": hex(a)}, 20)
        return v if isinstance(v, int) else int(str(v), 0)
    except Exception:
        return None


rows = []
for k in range(N):
    cell = TABLE + 4 * k
    rva = rdw(BASE + cell)
    if rva is None or rva == 0:
        rows.append((k, None, None))
        continue
    # first dword of the profile object is its ID
    pid = rdw(BASE + rva)
    rows.append((k, rva, pid))

with open(OUT, "w", encoding="utf-8") as f:
    f.write("sprite_idx  profile_rva  profile_id\n")
    for k, rva, pid in rows:
        if rva is None:
            f.write(f"{k:5d}  <null>\n")
        else:
            f.write(f"{k:5d}  0x{rva:08X}  {pid}\n")

print(f"wrote {OUT} ({len(rows)} rows)")
# quick console view of the interesting band
for k, rva, pid in rows:
    if 520 <= k <= 560 or (pid is not None and 520 <= pid <= 560):
        print(f"sprite {k:5d}  rva 0x{rva:08X}  id {pid}")
