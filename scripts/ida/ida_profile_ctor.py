"""Resolve the Profile::Profile constructor signature question with IDA.

THE DISAGREEMENT
================
sweet-dx fails at symbol resolution:

    Could not find symbol
      _ZN7ProfileC1EPFP5ActorPK14ActorBuildInfoEjRKN4sead14SafeStringBaseIcEEPK9ActorInfoj
      Profile::Profile(Actor* (*)(ActorBuildInfo const*), unsigned int,
                       sead::SafeStringBase<char> const&, ActorInfo const*, unsigned int)
      inside ELF!

Our symbols/nsmbudx.sym instead has, at the same address 0x17F6C:

    _ZN7ProfileC2EPFP5ActorPK14ActorBuildInfoEjPvPK9ActorInfoj

Two differences:
  C1 vs C2 -- complete-object vs base-object constructor. In practice the same
              function; the symbol table just records one entry per emitted copy.
  RKN4sead14SafeStringBaseIcEE (const SafeStringBase<char>&)  vs  Pv (void*)

The 4th-parameter type is the substantive disagreement, and it changes the mangled
name, so I need to know what the binary actually does at that address.

This asks IDA for the constructor's disassembly and decompilation at 0x6017F6C
(RVA 0x17F6C) and reports what the 4th argument is used as.
"""
import json
import os

import ida_bytes
import ida_funcs
import ida_hexrays
import ida_lines
import idautils
import idc

OUT = os.path.join(os.path.dirname(os.path.abspath(__file__)), "ida_profile_ctor.json")
CTOR = 0x60000000 + 0x17F6C   # VA = image base + RVA 0x17F6C

report = {"ctor_va": hex(CTOR), "rva": hex(CTOR - 0x60000000)}


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


f = ida_funcs.get_func(CTOR)
if f is None:
    try:
        ida_funcs.add_func(CTOR)
    except Exception:
        pass
    f = ida_funcs.get_func(CTOR)

if f:
    report["function"] = {"name": ida_funcs.get_func_name(f.start_ea),
                          "start": f.start_ea, "end": f.end_ea}
    report["disasm"] = disasm(f.start_ea, 60)
    try:
        cf = ida_hexrays.decompile(f.start_ea)
        report["pseudocode"] = str(cf) if cf else None
    except Exception as e:
        report["pseudocode_error"] = f"{type(e).__name__}: {e}"
    # any existing name at the address (IDA may have demangled it)
    report["current_name"] = idc.get_name(CTOR)
else:
    report["error"] = "no function at ctor address"

# Are there references to the SafeStringBase<char> methods from this function?
# If the 4th arg were SafeStringBase<char> const&, the ctor would call its
# methods (e.g. c_str / size) or at least store a pointer into the object.
if f:
    calls = []
    ea_ = f.start_ea
    while ea_ < f.end_ea and ea_ != idc.BADADDR:
        mnem = idc.print_insn_mnem(ea_)
        if mnem in ("BL", "BLX", "B"):
            tgt = idc.get_operand_value(ea_, 0)
            nm = idc.get_name(tgt) or ""
            calls.append({"ea": hex(ea_), "mnem": mnem, "target": hex(tgt),
                          "name": nm, "demangled": idc.demangle_name(nm, 0) if nm else ""})
        nxt = idc.next_head(ea_)
        if nxt == idc.BADADDR or nxt == ea_:
            break
        ea_ = nxt
    report["branch_targets"] = calls

with open(OUT, "w", encoding="utf-8") as fh:
    json.dump(report, fh, indent=2, default=str)
print(f"[ida_profile_ctor] wrote {OUT}")
idc.qexit(0)
