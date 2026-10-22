"""Verify the HAMMER BUILD with IDA, not the retail image.

The Cheep/Hammer patches are meant to be used with convertedmain.hammer_b.elf. Every
claim so far about "the build grants mode 10" was inferred from a byte diff produced
by an earlier patch script -- not from IDA reading the patched binary.

This script opens the HAMMER build and checks, at instruction level:
  1. Does the Fire Flower grant handler still pass mode 2, or mode 10?
  2. Is the item-grant bitset 0x1FB (retail) or 0x3FB (allows mode 10)?
  3. Is the mode gate `cmp r0,#2` or `cmp r0,#10`?
  4. What do those functions decompile to?

Run against the hammer build database.
"""
import json
import os

import ida_bytes
import ida_funcs
import ida_hexrays
import ida_lines
import idc

OUT = os.path.join(os.path.dirname(os.path.abspath(__file__)), "ida_hammer_build.json")

GRANT_FN = 0x6045DDC0        # Fire Flower grant handler
GRANT_CALLSITE = 0x6045DDCC  # mov r2,#2 (retail) / mov r2,#10 (hammer)
HELPER = 0x60463998
ITEM_READER = 0x60465E4C     # contains the 0x1FB bitset
GATE = 0x6078E6A8
GATE_FN_START = 0x6078E6A8

report = {}


def u32(addr, n):
    raw = ida_bytes.get_bytes(addr, n * 4)
    if raw is None:
        return None
    return [int.from_bytes(raw[i:i + 4], "little") for i in range(0, n * 4, 4)]


def disasm(ea_, n):
    out = []
    for _ in range(n):
        d = idc.generate_disasm_line(ea_, 0)
        if d is None:
            break
        out.append({"ea": ea_, "text": ida_lines.tag_remove(d)})
        nxt = idc.next_head(ea_)
        if nxt == idc.BADADDR or nxt == ea_:
            break
        ea_ = nxt
    return out


def decomp(ea_, label):
    f = ida_funcs.get_func(ea_)
    if f is None:
        return {"label": label, "ea": ea_, "error": "no function"}
    out = {"label": label, "function": ida_funcs.get_func_name(f.start_ea),
           "start": f.start_ea, "end": f.end_ea}
    try:
        cf = ida_hexrays.decompile(f.start_ea)
        out["pseudocode"] = str(cf) if cf else None
    except Exception as e:
        out["pseudocode_error"] = f"{type(e).__name__}: {e}"
    return out


# 1. the mode immediate at the grant call site
report["grant_callsite_bytes"] = ida_bytes.get_bytes(GRANT_CALLSITE, 4).hex()
report["grant_callsite_disasm"] = disasm(GRANT_CALLSITE - 8, 8)
report["grant_fn"] = decomp(GRANT_FN, "fire_flower_grant")

# 2. item-grant bitset inside the item reader
hits = []
f = ida_funcs.get_func(ITEM_READER)
if f:
    ea_ = f.start_ea
    while ea_ < f.end_ea and ea_ != idc.BADADDR:
        d = idc.generate_disasm_line(ea_, 0)
        t = ida_lines.tag_remove(d) if d else ""
        for pat in ("0x1FB", "0x1fb", "0x3FB", "0x3fb", "0x5FB", "0x5fb"):
            if pat in t:
                hits.append({"ea": ea_, "text": t})
                break
        nxt = idc.next_head(ea_)
        if nxt == idc.BADADDR or nxt == ea_:
            break
        ea_ = nxt
report["grant_bitset"] = hits
report["item_reader"] = decomp(ITEM_READER, "item_reader")

# 3. the mode gate
report["gate_bytes"] = ida_bytes.get_bytes(GATE, 4).hex()
report["gate_disasm"] = disasm(GATE - 0x10, 22)
report["gate_fn"] = decomp(GATE, "mode_gate")

with open(OUT, "w", encoding="utf-8") as fh:
    json.dump(report, fh, indent=2, default=str)
print(f"[ida_hammer] wrote {OUT}")
idc.qexit(0)
