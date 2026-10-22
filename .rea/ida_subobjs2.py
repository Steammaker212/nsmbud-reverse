"""REJECT false sub-object matches by tracking `this` aliases, then re-derive sizes.

The sub-object pass accepted
    MOVW R0,#off ; ADD R0,Rthis,R0 ; BL X::X
with ANY register as base. That produced overlapping members in PlayerBase (a member at +0x2720
starting before the previous member ended at +0x27EC), which is impossible in a real struct, and it
inflated sizeof(PlayerBase) from a validated 0x52C to 0x2854.

The bug: after a call, `this` lives in a callee-saved register (PlayerBase_ctor does `MOV R4,R0` at
entry), and later code constructs OTHER objects whose address is `some_base + const`. Without alias
tracking those look identical to in-place member construction.

Fix: require the ADD's base register to be a PROVEN live alias of `this` (R0 at entry, propagated by
MOV, killed by BL for R0-R3 and by any other write). Same discipline the store extractor already
uses.

Then the decisive test is structural, not statistical: a merged layout must be
monotonically non-overlapping. Any container that still overlaps is rejected wholesale, because an
overlap proves at least one member is wrong and there is no way to tell which.

VALIDATION afterwards: FireballBase must still yield 0x17D4/0x18DC/0x1924 (its ALD/LightMask/
LightSource/ActiveCollider sub-objects are genuinely this-relative), and PlayerBase must stay at
0x52C-ish rather than growing to 0x2854.
"""
import collections
import json
import re
import idautils
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


subobjs = collections.defaultdict(dict)
rejected = collections.Counter()

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
    insns = list(idautils.Heads(f.start_ea, f.end_ea))
    texts = [idc.GetDisasm(i) for i in insns]

    this_regs = {"R0"}
    for k, d in enumerate(texts):
        toks = d.split()
        if not toks:
            continue
        mnem = toks[0].split(".")[0]

        # MOV Rx, R0 propagates the alias
        m = re.match(r"^MOV\s+(R\d+),\s*(R\d+)$", d)
        if m:
            dst, src = m.group(1), m.group(2)
            if src in this_regs:
                this_regs.add(dst)
            else:
                this_regs.discard(dst)
            continue

        # MOVW / const loads clear a register
        if re.match(r"^MOVW?\s+R\d+,\s*#", d):
            this_regs.discard(toks[1].rstrip(","))
            continue

        m = re.match(r"^MOVW\s*R(\d+),\s*#(0x[0-9A-Fa-f]+)$", d)
        if m:
            continue

        if mnem in ("BL", "BLX"):
            # record any construction that happened right before this call
            if k >= 1:
                add = texts[k - 1]
                mm = re.match(r"^ADD\s+(R\d+),\s*(R\d+),\s*(R\d+)$", add)
                if mm and k >= 2:
                    movw = texts[k - 2]
                    mw = re.match(r"^MOVW\s+R\d+,\s*#(0x[0-9A-Fa-f]+)$", movw)
                    if mw:
                        off = int(mw.group(1), 16)
                        base_r = mm.group(2)
                        t = idc.get_operand_value(insns[k], 0)
                        tnm = ida_name.get_name(t) or ""
                        tcls = class_of(tnm)
                        if tcls and tcls != cls and base_r in this_regs and off <= 0x20000:
                            subobjs[cls][off] = tcls
                        elif not (base_r in this_regs) and tcls and tcls != cls:
                            rejected[cls] += 1
            for r in list(this_regs):
                if r in CALLER_SAVED:
                    this_regs.discard(r)
            continue

        # any other write clears the register
        m = re.match(r"^\w+\s+(R\d+),", d)
        if m and not d.startswith(("STR", "CMP", "TST", "LDR")):
            this_regs.discard(m.group(1))

print(f"containers with sub-objects: {len(subobjs)}")
print(f"rejected (base not a this-alias): {sum(rejected.values())}")
print(f"  PlayerBase rejected: {rejected.get('PlayerBase', 0)}")

print()
print("=" * 92)
print("structural validation: monotonic merge (no overlaps) ")
print("=" * 92)
fields = json.load(open(r"C:\Users\Saif Khan\Downloads\main.idb\.rea\structs_v2.json",
                        encoding="utf-8"))
SUB = {"ActiveCollider": 0x130, "EffectWrapper": 0x68, "EffectData": 0x40,
       "LightSource": 0x48, "LightMask": 0x28, "StateMgr": 0x198,
       "CircularCollider": 0x190, "PlayerLookTarget": 0x2c, "RectCollider": 0x318}

clean = {}
for cls, subs in subobjs.items():
    rows = {r["off"]: r["width"] for r in fields.get(cls, [])}
    for o, t in subs.items():
        if o not in rows:
            rows[o] = -(SUB.get(t, 4))     # negative width = sub-object of that size
    prev_end = 0
    ok = True
    for o in sorted(rows):
        if o < prev_end:
            ok = False
            break
        w = rows[o]
        prev_end = o + (abs(w) if w < 0 else w)
    if ok:
        clean[cls] = {str(o): t for o, t in subs.items() if o not in
                      {r["off"] for r in fields.get(cls, [])}}
    else:
        print(f"  REJECTED {cls}: overlapping members")

print(f"  clean containers kept: {len(clean)} / {len(subobjs)}")

print()
print("=" * 92)
print("VALIDATION")
print("=" * 92)
fb = clean.get("FireballBase", {})
for off, nm in ((0x17D4, "LightMask"), (0x18DC, "LightSource"), (0x1924, "ActiveCollider")):
    got = fb.get(str(off))
    print(f"  FireballBase +0x{off:04x}: {got or 'MISSING'}"
          f"   {'OK' if got == nm else 'expected ' + nm}")
print(f"  PlayerBase sub-objects kept: {len(clean.get('PlayerBase', {}))}"
      f" (was 19 before the alias guard)")

with open(r"C:\Users\Saif Khan\Downloads\main.idb\.rea\subobjects_clean.json", "w",
          encoding="utf-8") as fh:
    json.dump(clean, fh, indent=1)
print()
print("wrote subobjects_clean.json")
