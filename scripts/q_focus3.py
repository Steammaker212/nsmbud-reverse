#!/usr/bin/env python3
"""Find the pukupuku profile IDs, the .szs path template, and the class vtable."""
import json

from rpc import call

OUT = r"pukupuku_re3.txt"


def w(f, label, obj):
    f.write(f"\n{'=' * 70}\n{label}\n{'=' * 70}\n")
    f.write(obj if isinstance(obj, str) else json.dumps(obj, indent=2))
    f.write("\n")


# candidate path-template strings near the pukupuku names in .rodata
CANDIDATE_STRINGS = [
    0x60AB8F00, 0x60AB9000, 0x60AB9100, 0x60AB9200, 0x60AB9300,
    0x60AB9F00, 0x60ABA200, 0x60ABA300,
]

with open(OUT, "w", encoding="utf-8") as f:
    # 1. read strings around the pukupuku cluster to find the path template
    for va in CANDIDATE_STRINGS:
        try:
            r = call("data_read_string", {"address": hex(va)}, 20)
            w(f, f"STRING {hex(va)}", r)
        except Exception as e:
            f.write(f"\n{hex(va)}: {str(e)[:120]}\n")

    # 2. profile registration: decompile the caller chain of the pukupuku
    #    create-function so the profile ID constant shows up
    for name, va in (("sub_60203138", "0x60203138"),
                     ("sub_60375E24", "0x60375E24")):
        try:
            w(f, f"XREFS-TO {name}", call("get_xrefs_to", {"address": va}, 90))
        except Exception as e:
            f.write(f"\nxrefs {name}: {e}\n")

print(f"wrote {OUT}")
