#!/usr/bin/env python3
"""Walk sInit_ProfileArchiveLists and identify the pukupuku profile entries.

Each entry is a resource-name pointer cell. Consecutive cells map to profile
IDs in order. We dump a window of cells around every pukupuku reference and
cross-check against the known profile-ID numbering.
"""
import json

from rpc import call

TARGETS = {
    "pukupuku": 0x60AB9285,
    "pukupuku_mecha": 0x60AB9F2C,
    "pukupuku_toge": 0x60AB9F3B,
}

# sInit_ProfileArchiveLists spans 0x600192e8..0x6002108c (0x7da4 bytes)


def rdw(a):
    try:
        r = call("data_read_dword", {"address": hex(a)}, 30)
        if isinstance(r, dict):
            v = r.get("value", r)
            return v if isinstance(v, int) else int(str(v), 16) if str(v).startswith("0x") else int(v)
        return int(str(r), 16) if str(r).startswith("0x") else int(r)
    except Exception:
        return None


if __name__ == "__main__":
    lo, hi = 0x600192E8, 0x6002108C
    print(f"scanning {hex(lo)}..{hex(hi)} for the three string pointers\n")
    found = {}
    for a in range(lo, hi, 4):
        v = rdw(a)
        if v in TARGETS.values():
            name = [k for k, t in TARGETS.items() if t == v][0]
            found.setdefault(name, []).append(a)
            print(f"{hex(a)}  -> {name}   (cell value {hex(v)})")

    print("\n=== profile index per site (assuming 4-byte cells from 0x600192e8) ===")
    for name, sites in found.items():
        for a in sites:
            idx = (a - lo) // 4
            print(f"{name:16} cell {hex(a)}  index {idx}")
