#!/usr/bin/env python3
"""Map the pukupuku (Cheep Cheep) actor class in NSMBU Deluxe.

The three known model-setup functions are called from the actor ctor.
Walk up: callers -> ctor -> vtable -> virtual overrides.
Then walk down: the whole reachable cluster.
"""
import json

from rpc import call

OUT = r"cheep_map.txt"

SEEDS = {
    "pukupuku_model": "0x60203138",
    "pukupuku_toge_model": "0x60375E24",
    "pukupuku_mecha_model": "0x60370B74",
}


def j(r):
    return r if isinstance(r, str) else json.dumps(r, indent=2)


def xrefs(va):
    try:
        return call("get_xrefs_to", {"address": va}, 90)
    except Exception as e:
        return {"error": str(e)[:200]}


with open(OUT, "w", encoding="utf-8") as f:
    for name, va in SEEDS.items():
        x = xrefs(va)
        f.write(f"\n{'=' * 70}\nCALLERS of {name} ({va})\n{'=' * 70}\n")
        f.write(j(x) + "\n")

        # unique enclosing functions
        fns = set()
        if isinstance(x, list):
            for e in x:
                fn = e.get("function")
                if fn:
                    fns.add((fn.get("address"), fn.get("name")))
        f.write(f"\n-- unique callers: {len(fns)}\n")
        for a, n in sorted(fns):
            f.write(f"   {a}  {n}\n")

print(f"wrote {OUT}")
