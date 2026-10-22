"""IDA Pro probe: does the block-contents path actually reach power-up mode 10?

Run headless:
  idat.exe -Olicense:keyfile=<lic> -A -S"this.py" <db.i64>

Writes a JSON report next to itself.

Questions this answers with IDA/Hex-Rays rather than my hand-rolled capstone:
  Q1  What are the real entries and extents of the item grant helper?
  Q2  Does the grant handler for the Fire Flower item now return mode 10?
  Q3  Is the mode gate that permits mode 10 patched in this build, or only retail?
  Q4  What is the full contents -> action-code table, per IDA's data view?
  Q5  Do the block spawner functions read contents the way the editor assumes?
"""
import json
import os

import idaapi
import idautils
import idc
import ida_bytes
import ida_funcs
import ida_hexrays
import ida_name
import ida_lines
import ida_segment
import ida_xref

OUT = os.path.join(os.path.dirname(os.path.abspath(__file__)), "ida_report.json")
BASE = 0x60000000

report = {"base": BASE, "questions": {}}


def ea(x):
    return idc.get_name_ea_simple(x) if isinstance(x, str) else x


def func_at(x):
    ea_ = ea(x)
    if ea_ == idc.BADADDR:
        return None
    f = ida_funcs.get_func(ea_)
    if f is None:
        return None
    return {"start": f.start_ea, "end": f.end_ea,
            "name": ida_funcs.get_func_name(f.start_ea)}


def read_u32(x):
    return ida_bytes.get_dword(ea(x))


def read_bytes(x, n):
    return ida_bytes.get_bytes(ea(x), n)


# ---------------------------------------------------------------- Q4 first
# The contents -> action-code table. This is the foundation for the rest.
report["questions"]["q4_contents_table"] = {}
tbl = 0x60B04164
raw = read_bytes(tbl, 26 * 4)
if raw:
    vals = [int.from_bytes(raw[i:i + 4], "little") for i in range(0, 26 * 4, 4)]
    report["questions"]["q4_contents_table"] = {
        "address": hex(tbl),
        "entries": {str(i): v for i, v in enumerate(vals)},
        "dupes_within_0_15": [
            [i for i, v in enumerate(vals[:16]) if v == c]
            for c in set(vals[:16]) if vals[:16].count(c) > 1
        ],
    }

# item table
tbl2 = 0x60B0267C
raw2 = read_bytes(tbl2, 16 * 4)
if raw2:
    vals2 = [int.from_bytes(raw2[i:i + 4], "little") for i in range(0, 64, 4)]
    report["questions"]["q4_item_table"] = {
        "address": hex(tbl2),
        "entries": {str(i): v for i, v in enumerate(vals2)},
    }

# ---------------------------------------------------------------- Q2 / Q3
# The Fire Flower grant handler, and the documented one-byte patch site.
def disasm_around(x, n=24):
    out = []
    ea_ = ea(x)
    for i in range(n):
        d = idc.generate_disasm_line(ea_, 0)
        if d is None:
            break
        out.append({"ea": ea_, "text": ida_lines.tag_remove(d)})
        nxt = idc.next_head(ea_)
        if nxt == idc.BADADDR or nxt == ea_:
            break
        ea_ = nxt
    return out


# 0x6045DDCC is where mov r2,#2 became mov r2,#10 in the Hammer build
grant_site = 0x6045DDCC
g = func_at(grant_site)
report["questions"]["q2_grant_handler"] = {
    "probe_ea": hex(grant_site),
    "bytes": read_bytes(grant_site, 16).hex() if read_bytes(grant_site, 16) else None,
    "function": g,
    "disasm": disasm_around(grant_site - 0x10, 20),
}

# The mode gate at 0x6078E6A8: cmp r0,#2 -> cmp r0,#10
gate = 0x6078E6A8
report["questions"]["q3_mode_gate"] = {
    "probe_ea": hex(gate),
    "bytes": read_bytes(gate, 16).hex() if read_bytes(gate, 16) else None,
    "function": func_at(gate),
    "disasm": disasm_around(gate - 0x10, 18),
}

# ---------------------------------------------------------------- Q1
# The shared item grant helper from the report: sub_60463998
helper = 0x60463998
report["questions"]["q1_grant_helper"] = {
    "function": func_at(helper),
    "callers": [],
    "disasm_head": disasm_around(helper, 24),
}
try:
    for xref in idautils.XrefsTo(helper, 0):
        f = ida_funcs.get_func(xref.frm)
        report["questions"]["q1_grant_helper"]["callers"].append({
            "from": xref.frm,
            "in_function": ida_funcs.get_func_name(f.start_ea) if f else None,
            "type": xref.type,
        })
except Exception as e:
    report["questions"]["q1_grant_helper"]["callers_error"] = str(e)

# ---------------------------------------------------------------- Q5
# The block populate function from the report: sub_604663F4
for label, addr in (("block_populate_sub_604663F4", 0x604663F4),
                    ("block_init_sub_605635AC", 0x605635AC),
                    ("block_gate_wrap_sub_60466328", 0x60466328)):
    key = f"q5_{label}"
    report["questions"][key] = {
        "function": func_at(addr),
        "disasm_head": disasm_around(addr, 20),
        "xrefs_to": [],
    }
    try:
        for xref in idautils.XrefsTo(addr, 0):
            report["questions"][key]["xrefs_to"].append(
                {"from": xref.frm, "type": xref.type})
    except Exception as e:
        report["questions"][key]["xrefs_error"] = str(e)

# ---------------------------------------------------------------- segments
try:
    report["segments"] = [
        {"name": ida_segment.get_segm_name(s), "start": s.start_ea, "end": s.end_ea}
        for s in idautils.Segments()
    ]
except Exception as e:
    report["segments_error"] = str(e)

# ---------------------------------------------------------------- Q6: decompile
# Hex-Rays output for the functions that decide whether a Hammer can reach the
# player. This is the evidence a disassembly listing cannot give: the actual
# control flow of the grant and the gate.
def decompile(x, label):
    ea_ = ea(x)
    f = ida_funcs.get_func(ea_)
    if f is None:
        return {"label": label, "error": "no function"}
    try:
        cf = ida_hexrays.decompile(f.start_ea)
        if cf is None:
            return {"label": label, "error": "decompile returned None"}
        return {"label": label, "function": ida_funcs.get_func_name(f.start_ea),
                "start": f.start_ea, "pseudocode": str(cf)}
    except Exception as e:
        return {"label": label, "error": f"{type(e).__name__}: {e}"}


report["questions"]["q6_decompiled"] = [
    decompile(0x6045DDCC, "fire_flower_grant_handler"),
    decompile(0x60463998, "shared_item_grant_helper"),
    decompile(0x604663F4, "block_populate"),
    decompile(0x6078E6A8, "mode_gate"),
]

with open(OUT, "w", encoding="utf-8") as fh:
    json.dump(report, fh, indent=2, default=str)
print(f"[ida_probe] wrote {OUT} (with decompilations)")

idc.qexit(0)

