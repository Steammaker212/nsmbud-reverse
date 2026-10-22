"""Export the rich symbol/type state of main.i64 (the credited prior RE work).

The first export only needed names; that is now exhausted (4,428 identical, 556 our-duplicate-suffix,
33 vf-convention, 17 adopted). What is left to adopt is TYPE information, which is what the remaining
parse failures actually need:

    functions : name, va, rva, prototype (idc.get_type), frame size, flags
    names     : every named location, including DATA (d_/off_/byte_/stru_/... and user names)
    types     : the local type library's struct/union/enum definitions, if present
    comments  : repeatable + non-repeatable, as provenance for the above

Writes JSON to $NSMBUDX_OUT. idc.ARGV does not carry arguments after `--` in this IDA build, so the
destination comes from the environment.
"""
import json
import os

import ida_funcs
import ida_typeinf
import idautils
import idaapi
import idc

idaapi.auto_wait()

out = os.environ.get("NSMBUDX_OUT", r"C:\Users\Saif Khan\Downloads\main.idb\.rea\main_i64_rich.json")

# ---------------------------------------------------------------- functions
funcs = []
for ea in idautils.Functions():
    fn = ida_funcs.get_func(ea)
    if fn is None:
        continue
    name = idc.get_func_name(ea) or ("sub_%08X" % ea)
    funcs.append({
        "name": name,
        "va": ea,
        "rva": ea - 0x60000000 if ea >= 0x60000000 else ea,
        "proto": idc.get_type(ea) or "",
        "size": fn.size(),
        "flags": fn.flags,
        "comment": idc.get_func_cmt(ea, 0) or "",
        "rcomment": idc.get_func_cmt(ea, 1) or "",
    })

# ---------------------------------------------------------------- all names
names = []
for ea, name in idautils.Names():
    if not ida_funcs.get_func(ea):
        names.append({
            "va": ea,
            "rva": ea - 0x60000000 if ea >= 0x60000000 else ea,
            "name": name,
            "kind": "data",
        })

# ---------------------------------------------------------------- local types
types = []
try:
    til = ida_typeinf.get_idati()
    limit = ida_typeinf.get_ordinal_limit(til)
    for ordinal in range(1, limit):
        tif = ida_typeinf.tinfo_t()
        if not tif.get_numbered_type(til, ordinal):
            continue
        name = tif.get_type_name() or ""
        if not name:
            continue
        decl = None
        try:
            decl = tif._print()
        except Exception:
            decl = None
        types.append({"ordinal": ordinal, "name": name, "decl": decl or ""})
except Exception as exc:                      # noqa: BLE001 - report, do not fail the export
    types.append({"error": "local type export failed: %s" % exc})

payload = {
    "functions": funcs,
    "data_names": names,
    "types": types,
}
with open(out, "w", encoding="utf-8") as fh:
    json.dump(payload, fh)

with_proto = sum(1 for f in funcs if f["proto"])
print("EXPORTED functions=%d (with prototype=%d) data_names=%d types=%d"
      % (len(funcs), with_proto, len(names), len(types)))
print("path: %s" % out)
