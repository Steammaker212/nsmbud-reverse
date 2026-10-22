"""ADD sub-object detection, and settle the ActiveCollider size from a real boundary.

Confirmed by direct inspection of FireballBase_ctor:

    MOVW R0,#0x17D4 ; ADD R0,R4,R0 ; BL LightMask::LightMask
    MOVW R0,#0x18DC ; ADD R0,R4,R0 ; BL LightSource::LightSource
    MOVW R0,#0x1924 ; ADD R0,R4,R0 ; BL ActiveCollider_ctor

These are in-place sub-object constructions, not stores. The store extractor is right to omit them
but they ARE members, so they get recorded separately with the constructed type and, crucially, a
SIZE when the containing class has a later member.

SIZE EVIDENCE, which finally settles a dispute carried for several rounds:

    ActiveCollider constructed at FireballBase+0x1924
    next sub-object  constructed at FireballBase+0x1A54
    => ActiveCollider occupies 0x1A54 - 0x1924 = 0x130 bytes

An earlier round could not decide between 0xB8 and 0x130. The boundary says 0x130.

The independent struct extraction agrees in the right direction: ColliderBase = 0x124, so
ActiveCollider deriving from it and adding 0xC lands at 0x130.

This script collects, for every ctor, each in-place sub-object construction:
    (containing class, offset, constructed class)
and derives sizes where two constructions are adjacent.
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


subobjs = collections.defaultdict(dict)   # container -> {off: constructed class}

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

    for k, d in enumerate(texts):
        m = re.match(r"^MOVW\s+R\d+,\s*#(0x[0-9A-Fa-f]+)$", d)
        if not m:
            continue
        off = int(m.group(1), 16)
        if off > 0x20000:
            continue
        # need ADD Rd, Rthis, Rd then BL within the next 3 instructions
        if k + 1 >= len(texts) or not texts[k + 1].startswith("ADD "):
            continue
        if not re.match(r"^ADD\s+R\d+,\s*R\d+,\s*R\d+$", texts[k + 1]):
            continue
        if k + 2 >= len(texts):
            continue
        dl = texts[k + 2]
        if not dl.startswith(("BL ", "BLX")):
            continue
        t = idc.get_operand_value(insns[k + 2], 0)
        tnm = ida_name.get_name(t) or ""
        tcls = class_of(tnm)
        if not tcls or tcls == cls:
            continue
        subobjs[cls][off] = tcls

print(f"containers with in-place sub-objects: {len(subobjs)}")

# derive sizes from adjacent constructions
sizes = {}
print()
print("=" * 92)
print("SUB-OBJECT SIZES derived from adjacent constructions")
print("=" * 92)
for cls, d in sorted(subobjs.items()):
    offs = sorted(d)
    for a, b in zip(offs, offs[1:]):
        size = b - a
        name = d[a]
        if 4 <= size <= 0x2000:
            sizes.setdefault(name, collections.Counter())[size] += 1

for name, cnt in sorted(sizes.items(), key=lambda kv: -sum(kv[1].values()))[:30]:
    size, n = cnt.most_common(1)[0]
    print(f"  {name:<34} {size:#06x} ({size:>5})   from {n} boundary(ies)")

with open(r"C:\Users\Saif Khan\Downloads\main.idb\.rea\subobjects.json", "w",
          encoding="utf-8") as fh:
    json.dump({c: {str(k): v for k, v in d.items()} for c, d in subobjs.items()}, fh, indent=1)
print()
print("wrote subobjects.json")

print()
print("=" * 92)
print("ActiveCollider in FireballBase: size check")
print("=" * 92)
fb = subobjs.get("FireballBase", {})
if 0x1924 in fb and 0x1A54 in fb:
    print(f"  constructed at +0x1924 ({fb[0x1924]}), next sub-object at +0x1A54 ({fb[0x1A54]})")
    print(f"  => size 0x{0x1A54 - 0x1924:x} = {0x1A54 - 0x1924}")
else:
    print(f"  offsets present: {[hex(o) for o in sorted(fb)]}")
