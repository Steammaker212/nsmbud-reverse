#!/usr/bin/env python3
"""Determine whether Deluxe keeps the Wii U profile-ID numbering.

Wii U: cRes_212..221 -> profile IDs 530..549, with cRes_212="pukupuku",
cRes_21A="pukupuku_mecha", cRes_21B="pukupuku_toge".

If Deluxe registers the same IDs, the constant 530 should appear as an
immediate near the pukupuku registration site.
"""
import json
import re

from rpc import call

OUT = r"deluxe_profiles.txt"


def w(f, label, obj):
    f.write(f"\n{'=' * 70}\n{label}\n{'=' * 70}\n")
    f.write(obj if isinstance(obj, str) else json.dumps(obj, indent=2))
    f.write("\n")


SITES = {
    "pukupuku_A": 0x600192E8,
    "pukupuku_B": 0x600192F4,
    "pukupuku_C": 0x6001A064,
    "toge_A": 0x6001DD10,
    "toge_B": 0x6001DD1C,
    "toge_C": 0x6001EBA4,
}

with open(OUT, "w", encoding="utf-8") as f:
    for label, site in SITES.items():
        try:
            r = call("disassemble_function", {"start_address": hex(site)}, 90)
            lines = r.get("lines", []) if isinstance(r, dict) else []
            buf = [f"{l['address']}  {l['instruction']}" for l in lines[:40]]
            w(f, f"DISASM around {label} @ {hex(site)}", "\n".join(buf))
        except Exception as e:
            f.write(f"\n{label}: {e}\n")

print(f"wrote {OUT}")
