"""EXTRACT STRUCT LAYOUTS -- with a `this`-register guard, before generating any header.

The first pass collected every `STR Rt,[Rn,#off]` in a constructor, which over-counts badly:
a ctor stores to OTHER objects too (sub-objects, globals, parameters). CollisionMgr came out with
389 fields, which is not credible, and a wrong field layout in a header is exactly the class of
error this project keeps having to revert.

The fix is to track which registers provably hold `this`:

  * on entry `this` is R0
  * a ctor typically does `MOV R4, R0` (or R5/R6/R7) immediately, then uses that as the base
  * so: registers written by `MOV Rx, R0` while R0 still holds `this` are `this` aliases
  * `this` is invalidated in a register if that register is overwritten by anything else
    (e.g. `LDR R0, =...`, `BL` clobbers R0-R3, `MOV R0, R1`)

Only stores whose base register is a live `this` alias are counted. Stores after a BL that uses
R0-R3 as base are discarded, since a call clobbers them.

This is conservative: it will MISS real fields (e.g. a field written via a pointer copied before a
call), but it will not INVENT fields. Missing is acceptable; invented layout is not.
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

CALLER_SAVED = {"R0", "R1", "R2", "R3"}


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
    return nm.endswith("_ctor")


def class_of(nm):
    c = demangle_class(nm)
    if c:
        return c
    if nm.endswith("_ctor"):
        return nm[:-5]
    return None


WSIZE = {"STR": 4, "STRH": 2, "STRB": 1}
STR_RE = re.compile(r"^(STR|STRH|STRB)\s+(R\d+),\s*\[(R\d+)(?:,\s*#(0x[0-9A-Fa-f]+))?\](.*)")

layout = collections.defaultdict(lambda: collections.defaultdict(lambda: collections.defaultdict(set)))
ctors_seen = collections.Counter()
rejected = 0

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
    ctors_seen[cls] += 1

    this_regs = {"R0"}
    for insn in idautils.Heads(f.start_ea, f.end_ea):
        d = idc.GetDisasm(insn)
        mnem = d.split()[0] if d else ""

        # a call clobbers R0-R3
        if mnem in ("BL", "BLX"):
            for r in list(this_regs):
                if r in CALLER_SAVED:
                    this_regs.discard(r)
            # BLX Rk may also clobber nothing else deterministic; keep non-caller-saved
            continue

        # MOV Rx, R0  while R0 holds this  -> Rx becomes a this alias
        m = re.match(r"^MOV\s+(R\d+),\s*(R\d+)$", d)
        if m:
            dst, src = m.group(1), m.group(2)
            if src in this_regs and dst != src:
                this_regs.add(dst)
            else:
                # dst overwritten with something that may not be this
                if dst != src:
                    this_regs.discard(dst)
            continue

        # any other write to a register invalidates it as a this alias
        m2 = re.match(r"^\w+\s+(R\d+),", d)
        if m2 and not d.startswith(("STR", "CMP", "TST")):
            dst = m2.group(1)
            if dst in this_regs:
                this_regs.discard(dst)

        m = STR_RE.match(d)
        if not m:
            continue
        kind, rt, base, offs, tail = m.group(1), m.group(2), m.group(3), m.group(4), m.group(5) or ""
        if "!" in tail or "],#" in d:
            continue
        if base not in this_regs:
            rejected += 1
            continue
        off = int(offs, 16) if offs else 0
        if off > 0x4000:
            rejected += 1
            continue
        width = WSIZE[kind]
        layout[cls][off][width].add(nm)

print(f"ctors parsed: {sum(ctors_seen.values())} across {len(ctors_seen)} classes")
print(f"stores rejected (base is not a proven this-alias): {rejected}")

classes = {}
for cls, offs in layout.items():
    if len(offs) < 3:
        continue
    rows = []
    for off in sorted(offs):
        widths = offs[off]
        width = max(widths.items(), key=lambda kv: len(kv[1]))[0]
        rows.append({"off": off, "width": width,
                     "ctors": sorted({c for s in widths.values() for c in s})})
    classes[cls] = rows

print(f"classes with >=3 proven this-relative fields: {len(classes)}")
print(f"total proven fields                         : {sum(len(v) for v in classes.values())}")

ranked = sorted(classes.items(), key=lambda kv: -len(kv[1]))
print()
print("top classes:")
for cls, rows in ranked[:22]:
    print(f"  {cls:<32} {len(rows):>3} fields  max off {rows[-1]['off']:#06x}")

with open(r"C:\Users\Saif Khan\Downloads\main.idb\.rea\structs_guarded.json", "w",
          encoding="utf-8") as fh:
    json.dump(classes, fh, indent=1)
print()
print("wrote structs_guarded.json")
