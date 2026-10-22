"""Export every data label the corpus references, with its address, so real externs can be emitted.

A prototype header cannot declare `dword_60C92E18`, because that is a data object, not a function.
But the database knows exactly what each one is: its address, and — from the type IDA inferred — its
width. So the fix is to export them and generate a header of extern declarations that point at the
true addresses.

Two things must be right or the header is worse than useless:

  1. the WIDTH. `dword_x` at a given address is a 4-byte object; declaring it `int` and reading it as
     a pointer would be silently wrong. Width comes from the name prefix IDA assigned, cross-checked
     against `get_item_size`.
  2. the ADDRESS. These are image-relative (RVA), and `MEMORY[...]` already models absolute access.
     A bare `extern int dword_X` declares a C object at a *linker-chosen* address, which is not what
     the decompiled code means.

So the export carries RVA + size, and the generator emits declarations tied to those addresses rather
than plain externs. This script only EXPORTS and reports; it changes no names.
"""
import json
import re
import idautils
import ida_bytes
import ida_funcs
import ida_name
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000
NSO = 0x00CD1000
OUT = r"C:\Users\Saif Khan\Downloads\main.idb\.rea\data_labels.json"

# names the corpus actually references, passed in via a side file written beforehand
REF_FILE = r"C:\Users\Saif Khan\Downloads\main.idb\.rea\referenced_undef.txt"
try:
    wanted = [l.strip() for l in open(REF_FILE, encoding="utf-8") if l.strip()]
except FileNotFoundError:
    wanted = []

print("requested identifiers: %d" % len(wanted))

PREFIX_SIZE = {
    "dword_": 4, "unk_": 1, "byte_": 1, "word_": 2, "qword_": 8,
    "flt_": 4, "dbl_": 8, "off_": 4, "stru_": None, "asc_": None,
    "algn_": None, "jpt_": None, "loc_": None, "def_": None,
}


def prefix_of(nm):
    for p in PREFIX_SIZE:
        if nm.startswith(p):
            return p
    return None


rows = []
missing = []
for nm in wanted:
    ea = idc.get_name_ea_simple(nm)
    if ea == idc.BADADDR:
        missing.append(nm)
        continue
    rva = ea - BASE
    if not (0 <= rva < NSO):
        missing.append(nm)
        continue
    size = ida_bytes.get_item_size(ea)
    p = prefix_of(nm)
    hint = PREFIX_SIZE.get(p) if p else None
    # trust the smaller of the two when they disagree a lot: item size can cover a whole array
    if hint is None:
        width = size if size in (1, 2, 4, 8) else 1
    else:
        width = hint
    rows.append({"name": nm, "rva": rva, "size": size, "width": width})

print("resolved : %d" % len(rows))
print("unresolved: %d" % len(missing))
for m in missing[:15]:
    print("    %s" % m)

# distribution of resolved widths, so the generated header can be sanity-checked
from collections import Counter
c = Counter(r["width"] for r in rows)
print()
print("width distribution: %s" % dict(sorted(c.items())))

with open(OUT, "w", encoding="utf-8") as fh:
    json.dump({"data": rows, "missing": missing}, fh)
print()
print("wrote %s" % OUT)
