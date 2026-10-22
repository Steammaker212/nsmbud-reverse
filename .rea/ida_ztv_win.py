"""THE REAL WIN: 122 _ZTV symbols name classes that have no other symbols at all.

134 `_ZTV` symbols exist, but only ~12 correspond to a `<Class>_vtable` I had named. So roughly 122
`_ZTV` symbols point at vtables for classes whose slot methods are still `sub_*`, and which no
constructor/destructor symbol reveals.

For those, the `_ZTV<class>` symbol gives:
  * the exact vtable start (authoritative)
  * the class name (from the binary's own mangling)

so <Class>_vf<slot> is a true statement even when nothing else about the class is known. This is
strictly better than `sub_6013xxxx`, and it is the naming the objective asks for.

This pass therefore:
  1. takes every _ZTV symbol
  2. names the vtable itself `<Class>_vtable` if unnamed (a true, useful label)
  3. names every unnamed slot `<Class>_vf<index>`
  4. reports per-class how many slots it named, so the yield is visible

It excludes slot entries that are not in-image code (the `nn::` SDK vtables are largely
zero-filled and are skipped naturally).
"""
import collections
import re
import idautils
import ida_bytes
import ida_funcs
import ida_name
import idaapi
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000


def is_code_rva(v):
    return 0x288 <= v < 0x9AD3BC


def ztv_class(sym):
    body = sym[4:]
    comps = []
    i = 0
    while i < len(body):
        j = i
        while j < len(body) and body[j].isdigit():
            j += 1
        if j == i:
            m = re.match(r"[A-Za-z_]\w*", body[i:])
            if m:
                comps.append(m.group(0))
            break
        n = int(body[i:j])
        if n <= 0 or j + n > len(body):
            break
        comps.append(body[j:j + n])
        i = j + n
    comps = [c for c in comps if c not in ("sead", "nn", "nvn")]
    return comps[-1] if comps else None


ztvs = [(ea - BASE, nm) for ea, nm in idautils.Names() if nm.startswith("_ZTV")]
print(f"_ZTV symbols: {len(ztvs)}")

existing = {}
for ea in idautils.Functions():
    n = ida_name.get_name(ea) or ""
    if n and not n.startswith("sub_"):
        existing.setdefault(n, set()).add(ea - BASE)

vt_named = 0
slot_named = 0
per_class = collections.Counter()
skipped_nonnative = []

for vt, sym in sorted(ztvs):
    cls = ztv_class(sym)
    if not cls:
        skipped_nonnative.append(sym)
        continue
    # name the vtable itself
    cur = ida_name.get_name(BASE + vt) or ""
    if not cur or cur.startswith("_ZTV") or cur.startswith("dword_") or cur.startswith("unk_"):
        if ida_name.set_name(BASE + vt, f"{cls}_vtable", ida_name.SN_NOWARN):
            vt_named += 1
    # name slots
    a = vt
    idx = 0
    while idx <= 500:
        w = ida_bytes.get_dword(BASE + a)
        if not is_code_rva(w):
            break
        nm = ida_name.get_name(BASE + w) or ""
        if not nm or nm.startswith("sub_"):
            name = f"{cls}_vf{idx}"
            if name not in existing or w in existing[name]:
                if ida_name.set_name(BASE + w, name, ida_name.SN_NOWARN):
                    slot_named += 1
                    per_class[cls] += 1
                    existing.setdefault(name, set()).add(w)
        a += 4
        idx += 1

print()
print("=" * 90)
print("RESULT")
print("=" * 90)
print(f"  vtables named  : {vt_named}")
print(f"  slots named    : {slot_named}")
print(f"  classes touched: {len(per_class)}")
print(f"  couldn't derive a class: {len(skipped_nonnative)}")
print()
print("  classes with the most new slot names:")
for cls, n in per_class.most_common(25):
    print(f"    {cls:<32} {n}")

idaapi.save_database("", 0)
print("saved")
