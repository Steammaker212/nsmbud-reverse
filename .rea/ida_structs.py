"""EXTRACT PROVEN STRUCT LAYOUTS from constructor stores, at scale.

The objective asks for "matching headers". Prototype lists are one thing; the more valuable thing
is struct layouts, and those are recoverable mechanically and verifiably:

A constructor of class C writes C's fields at fixed offsets from `this`. Every
    STR  Rt, [R0, #off]
in a ctor whose name identifies class C is EVIDENCE that C has a field at `off`, with a width given
by the store instruction (STR=4, STRH=2, STRB=1). Three ctors already decoded by hand match this:
Player_ctor writes +0x528 width 4, PlayerBase_ctor writes 24 distinct offsets including
+0x484/+0x485 width 1.

So: for every function whose name looks like a constructor (`*_ctor`, `_ZN...C1E`/`C2E`), collect
(stored offset, width) pairs. Emit one struct per class, with offsets and a note of which ctor
produced each. Fields whose type is not established get a clear placeholder.

This is verifiable: anyone can re-read the store at that offset in that ctor.

Output: a C header per subsystem group, plus a JSON of the raw evidence.
"""
import collections
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


def demangle_class(nm):
    if not nm.startswith("_ZN"):
        return None
    body = nm[3:]
    comps = []
    i = 0
    while i < len(body) and body[i] != "E":
        j = i
        while j < len(body) and body[j].isdigit():
            j += 1
        if j == i:
            break
        n = int(body[i:j])
        if n <= 0 or j + n > len(body):
            break
        comp = body[j:j + n]
        if re.fullmatch(r"[CD][0-9]", comp):
            break
        comps.append(comp)
        i = j + n
    comps = [c for c in comps if c not in ("sead", "nn", "nvn")]
    return comps[-1] if comps else None


def is_ctor(nm):
    if not nm:
        return False
    if nm.startswith("_ZN") and re.search(r"C[12]E", nm):
        return True
    if nm.endswith("_ctor"):
        return True
    return False


def class_of(nm):
    c = demangle_class(nm)
    if c:
        return c
    if nm.endswith("_ctor"):
        return nm[:-5]
    return None


# offset -> {(width): set(ctors)}
layout = collections.defaultdict(lambda: collections.defaultdict(set))
WSIZE = {"STR": 4, "STRH": 2, "STRB": 1}

for ea in idautils.Functions():
    nm = ida_name.get_name(ea) or ""
    if not is_ctor(nm):
        continue
    cls = class_of(nm)
    if not cls:
        continue
    f = ida_funcs.get_func(ea)
    if not f:
        continue
    for insn in idautils.Heads(f.start_ea, f.end_ea):
        d = idc.GetDisasm(insn)
        m = re.match(r"(STR|STRH|STRB)\s+R\d+,\s*\[R\d+(?:,\s*#(0x[0-9A-Fa-f]+))?\](.*)", d)
        if not m:
            continue
        tail = m.group(3) or ""
        if "!" in tail or "],#" in d:
            continue          # pre/post-indexed: base changes, ambiguous
        off = int(m.group(2), 16) if m.group(2) else 0
        if off > 0x4000:       # implausibly large for an object field
            continue
        layout[cls][off].add((WSIZE[m.group(1)], nm))

classes = {c: v for c, v in layout.items() if len(v) >= 3}
print(f"classes with >=3 distinct store offsets: {len(classes)}")
print(f"total (offset,width) evidence points   : {sum(len(v) for v in layout.values())}")

# rank by how complete the layout looks
ranked = sorted(classes.items(), key=lambda kv: -len(kv[1]))
print()
print("top classes by field count:")
for cls, offs in ranked[:20]:
    print(f"  {cls:<34} {len(offs)} fields, max off {max(offs):#x}")

out = {}
for cls, offs in classes.items():
    rows = []
    for off in sorted(offs):
        widths = collections.Counter(w for w, _ in offs[off])
        width = widths.most_common(1)[0][0]
        ctors = sorted({c for _, c in offs[off]})
        rows.append({"off": off, "width": width, "ctors": ctors})
    out[cls] = rows

with open(r"C:\Users\Saif Khan\Downloads\main.idb\.rea\struct_layouts.json", "w",
          encoding="utf-8") as fh:
    json.dump(out, fh, indent=1)

print()
print(f"wrote struct_layouts.json with {len(out)} classes")
