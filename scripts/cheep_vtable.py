#!/usr/bin/env python3
"""Resolve the Cheep Cheep vtables and the actor-base field anchors."""
import json

from rpc import call

OUT = r"cheep_vtable.txt"


def rdw(a):
    try:
        v = call("data_read_dword", {"address": hex(a)}, 20)
        return v if isinstance(v, int) else int(str(v), 0)
    except Exception:
        return None


def j(r):
    return r if isinstance(r, str) else json.dumps(r, indent=2)


# pukupuku_toge ctor sets *(a1) style vtable? Look at what the ctor writes near
# a1[0]. Also probe the known model-setup vtable write pattern.
with open(OUT, "w", encoding="utf-8") as f:
    for name, va in (("pukupuku_toge_ctor", "0x60375CB8"),
                     ("pukupuku_ctor", "0x60202F84")):
        f.write(f"\n{'=' * 70}\nDISASM {name} ({va})\n{'=' * 70}\n")
        try:
            r = call("disassemble_function", {"start_address": va}, 120)
            lines = r.get("lines", []) if isinstance(r, dict) else []
            for l in lines[:70]:
                f.write(f"{l.get('address')}  {l.get('instruction')}\n")
        except Exception as e:
            f.write(f"failed: {e}\n")

    # look for vtable-pointer stores: read words at the ctor entry region
    f.write(f"\n{'=' * 70}\nLITERALS scanned in toge ctor\n{'=' * 70}\n")
    for off in range(0, 0x100, 4):
        a = 0x60375CB8 + off
        w = rdw(a)
        if w is None:
            continue
        # LDR Rd,=... form is encoded via literal pool; just record plausible
        # data addresses in the .data/.rodata range
        if 0x60A00000 <= w <= 0x60CE0000:
            f.write(f"{hex(a)}  -> 0x{w:08X}  (data ptr candidate)\n")

print(f"wrote {OUT}")
