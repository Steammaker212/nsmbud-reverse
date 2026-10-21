#!/usr/bin/env python3
"""Walk the Cheep Cheep class cluster: ctors, vtables, virtuals.

Seeds: sub_60202F84 (plain pukupuku ctor), sub_60375CB8 (pukupuku_toge ctor),
sub_60370B74 cluster (pukupuku_mecha).
"""
import json

from rpc import call

OUT = r"cheep_cluster.txt"

CTORS = {
    "pukupuku_ctor": "0x60202F84",
    "pukupuku_toge_ctor": "0x60375CB8",
}


def j(r):
    return r if isinstance(r, str) else json.dumps(r, indent=2)


with open(OUT, "w", encoding="utf-8") as f:
    for name, va in CTORS.items():
        try:
            d = call("decompile_function", {"address": va}, 240)
            f.write(f"\n{'=' * 70}\nDECOMP {name} ({va})\n{'=' * 70}\n")
            f.write(j(d) + "\n")
        except Exception as e:
            f.write(f"\n{name}: decomp failed {e}\n")

        try:
            x = call("get_xrefs_to", {"address": va}, 90)
            f.write(f"\n-- XREFS TO {name}\n{j(x)}\n")
        except Exception as e:
            f.write(f"\n{name}: xrefs failed {e}\n")

print(f"wrote {OUT}")
