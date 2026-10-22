"""REVERT all _vf names and rebuild vtable naming from a RELIABLE anchor.

The run-detection approach was unsound: it scanned .rodata for runs of code pointers, which are not
necessarily aligned to vtable starts, so "slot 0" was frequently mid-table and the derived class
name was really a method name ("beforeCreate" x605, "vf84"). Producing names like
`vfB0_vf3` from that is worthless, so everything matching `_vf<digits>$` is reverted.

The reliable anchor is the one already proved on FireballBase: a constructor stores its vtable
address into the object,

    *(_DWORD *)a1 = 12395168;        // = 0xBD22A0, FireballBase_vtable

So: scan every function for `STR Rx, [Ry]`-with-immediate stores of a constant that points into
.data.rel.ro/.rodata AND whose first word is an in-image code pointer. That yields (class from the
STORING function's name, exact vtable start). Then slot indices are exact and the class name comes
from the constructor -- not guessed.

Naming form: <Class>_vf<slotIndex>, true by construction.
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
NSO = 0x00CD1000


def is_code_rva(v):
    return 0x288 <= v < 0x9AD3BC


def class_from_fn(nm):
    """derive a class name from a function name (ctor, dtor, or method)"""
    if not nm or nm.startswith("sub_"):
        return None
    if nm.startswith("_ZN"):
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
        if comps:
            c = comps[-1]
            return c if (len(c) >= 3 and c[0].isalpha()) else None
        return None
    if nm.startswith("_Z"):
        return None
    # our convention <Class>_suffix
    if "_" in nm:
        head = nm.split("_")[0]
        if head and head[0].isupper() and len(head) >= 3 and head.isalnum():
            return head
    return None


# ---------- 1. revert every _vf<n> name
print("=" * 88)
print("1. revert _vf<N> names")
print("=" * 88)
reverted = 0
for ea in idautils.Functions():
    nm = ida_name.get_name(ea) or ""
    if re.search(r"_vf\d+$", nm):
        if ida_name.set_name(ea, f"sub_{ea - BASE:X}", ida_name.SN_NOWARN):
            reverted += 1
print(f"  reverted: {reverted}")

# ---------- 2. find real vtables via constructor stores
print()
print("=" * 88)
print("2. find vtables from `*(this) = <const>` stores in constructors")
print("=" * 88)


def seg_of(rva):
    for seg_ea in idautils.Segments():
        nm = idc.get_segm_name(seg_ea)
        s, e = idc.get_segm_start(seg_ea) - BASE, idc.get_segm_end(seg_ea) - BASE
        if s <= rva < e:
            return nm
    return None


VTS = {}       # vtable_rva -> set(class names)
for ea in idautils.Functions():
    fn_rva = ea - BASE
    f = ida_funcs.get_func(ea)
    if not f:
        continue
    for insn in idautils.Heads(f.start_ea, f.end_ea):
        d = idc.GetDisasm(insn)
        # STR Rt, [Rn]  with a preceding literal load giving the constant
        if not d.startswith("STR "):
            continue
        if "]" not in d:
            continue
        # the stored value must already be in a register from a literal; look back 1-3 insns
        for back in (4, 8, 12):
            p = insn - back
            dp = idc.GetDisasm(p)
            if dp.startswith("LDR ") and "=" in dp:
                try:
                    v = int(dp.split("=")[1].split(";")[0].strip().lstrip("#"), 16)
                except Exception:
                    continue
                v &= 0xFFFFFFFF
                if not is_code_rva(v):
                    continue
                sg = seg_of(v)
                if sg not in (".data.rel.ro", ".rodata", ".data"):
                    continue
                w0 = ida_bytes.get_dword(BASE + v)
                if not is_code_rva(w0):
                    continue
                cls = class_from_fn(ida_name.get_name(ea) or "")
                VTS.setdefault(v, set())
                if cls:
                    VTS[v].add(cls)
                break

print(f"  vtable candidates: {len(VTS)}")
named = {v: c for v, c in VTS.items() if len(c) == 1}
print(f"  with a single identifiable class: {len(named)}")

# ---------- 3. walk each vtable to its end and name unnamed slots
print()
print("=" * 88)
print("3. apply <Class>_vf<slot> to unnamed slots")
print("=" * 88)
applied = 0
examples = []
seen_names = {}
for ea in idautils.Functions():
    n = ida_name.get_name(ea) or ""
    if n and not n.startswith("sub_"):
        seen_names.setdefault(n, set()).add(ea - BASE)

for vt, classes in sorted(named.items()):
    cls = next(iter(classes))
    a = vt
    idx = 0
    while True:
        w = ida_bytes.get_dword(BASE + a)
        if not is_code_rva(w):
            break
        nm = ida_name.get_name(BASE + w) or ""
        if not nm or nm.startswith("sub_"):
            name = f"{cls}_vf{idx}"
            if name not in seen_names or w in seen_names[name]:
                if ida_name.set_name(BASE + w, name, ida_name.SN_NOWARN):
                    applied += 1
                    seen_names.setdefault(name, set()).add(w)
                    if len(examples) < 20:
                        examples.append((w, name, vt))
        a += 4
        idx += 1
        if idx > 400:
            break

print(f"  applied: {applied}")
for w, name, vt in examples:
    print(f"    {w:#010x}  {name:<34} (vtable {vt:#010x})")

idaapi.save_database("", 0)
print("saved")
