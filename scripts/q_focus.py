#!/usr/bin/env python3
"""Focused RE: how pukupuku binds its model, and what a bee reskin touches.

Writes decompilation + xref tables to files instead of stdout, so the operator
can grep them.
"""
import json

from rpc import call

OUT = r"pukupuku_re.txt"


def w(f, label, obj):
    f.write(f"\n{'=' * 70}\n{label}\n{'=' * 70}\n")
    f.write(obj if isinstance(obj, str) else json.dumps(obj, indent=2))
    f.write("\n")


STRINGS = {
    "pukupuku": "0x60ab9285",
    "pukupuku_mecha": "0x60ab9f2c",
    "pukupuku_toge": "0x60ab9f3b",
}

# enclosing functions seen in the xref dump
FUNCS = {
    "sInit_ProfileArchiveLists": "0x60018fd0",
    "sub_60203138": "0x60203138",
    "sub_60370B74": "0x60370B74",
}

with open(OUT, "w", encoding="utf-8") as f:
    for name, va in STRINGS.items():
        try:
            w(f, f"XREFS to {name} ({va})", call("get_xrefs_to", {"address": va}, 90))
        except Exception as e:
            f.write(f"\nxref {name} failed: {e}\n")

    for name, va in FUNCS.items():
        try:
            w(f, f"DECOMP {name} ({va})",
              call("decompile_function", {"address": va}, 240))
        except Exception as e:
            f.write(f"\ndecomp {name} failed: {e}\n")

print(f"wrote {OUT}")
