#!/usr/bin/env python3
"""Full readable-C recovery pass for the Cheep Cheep family.

Collects, for each function in the cluster:
  - decompiled body
  - xrefs (callers) and callees seen in the body
Then dumps everything to a file for the annotation pass.
"""
import json
import re

from rpc import call

OUT = r"cheep_raw.txt"

# ctor + model setup + the virtuals we already know hang off the actor
SEEDS = {
    "pukupuku_ctor": "0x60202F84",
    "pukupuku_model_setup": "0x60203138",
    "pukupuku_toge_ctor": "0x60375CB8",
    "pukupuku_toge_model_setup": "0x60375E24",
    "pukupuku_mecha_model_setup": "0x60370B74",
    "profile_registry_init": "0x60018FD0",
    "sprite_to_profile": "0x60014724",
}

CALL_RE = re.compile(r"\b(sub|func)_([0-9A-Fa-f]{6,8})\s*\(")


def j(r):
    return r if isinstance(r, str) else json.dumps(r, indent=2)


def decomp(va):
    try:
        r = call("decompile_function", {"address": va}, 240)
        return r if isinstance(r, str) else json.dumps(r, indent=2)
    except Exception as e:
        return f"/* decomp failed: {e} */"


seen_calls = {}

with open(OUT, "w", encoding="utf-8") as f:
    for name, va in SEEDS.items():
        body = decomp(va)
        f.write(f"\n{'#' * 72}\n# {name}  @ {va}\n{'#' * 72}\n{body}\n")
        for m in CALL_RE.finditer(body):
            seen_calls[m.group(2).upper()] = m.group(0)

    f.write(f"\n{'#' * 72}\n# CALLEES TO RESOLVE ({len(seen_calls)})\n{'#' * 72}\n")
    for a in sorted(seen_calls):
        f.write(f"0x{a}\n")

print(f"wrote {OUT}, {len(seen_calls)} callees discovered")
