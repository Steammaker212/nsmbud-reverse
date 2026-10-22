"""REDO vtable slot naming with a correct demangler for the class prefix.

The first pass applied 1,210 names but they came out as
    CollisionActor4vf84Ev_vf150
because the regex matched `_ZN(\d+)(\w+?)D[012]Ev` against `_ZN21CollisionActor4vf84Ev`, i.e. it
captured "CollisionActor4vf84Ev" -- the mangled leftover after the length prefix, not a class name.

Itanium mangling encodes a name as <length><identifier>, possibly repeated for nested names:
    _ZN21CollisionActor4vf84Ev   ->  length 21 -> "CollisionActor4vf84Ev"
    _ZN11FireballBaseD1Ev        ->  length 11 -> "FireballBase", then D1 (complete dtor)
So the correct path is to parse the length-prefixed components, then stop at the first component
that is a special suffix (D0/D1/D2/C1/C2).

The 1,210 bad names are reverted to sub_ first, then correct names are applied.
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


def parse_mangled_class(nm):
    """_ZN<len><name>... -> list of components, stopping before special codes"""
    if not nm.startswith("_ZN"):
        return []
    body = nm[3:]
    comps = []
    i = 0
    while i < len(body):
        if body[i] == "E":
            break
        j = i
        while j < len(body) and body[j].isdigit():
            j += 1
        if j == i:
            break
        n = int(body[i:j])
        if n <= 0 or j + n > len(body):
            break
        comp = body[j:j + n]
        # a component that is a special code (D0/D1/D2/C1/C2 and operand codes) ends the name
        if re.fullmatch(r"[CD][0-9]", comp) or re.fullmatch(r"[CD][0-9]E", comp):
            break
        comps.append(comp)
        i = j + n
    return comps


def class_from_vtable(slots):
    """derive the class from the most specific named slot in the run"""
    for v in slots:
        nm = ida_name.get_name(BASE + v) or ""
        if not nm:
            continue
        if nm.startswith("_ZN"):
            comps = parse_mangled_class(nm)
            if comps:
                # drop leading namespaces like sead
                comps = [c for c in comps if c not in ("sead", "nn", "nvn")]
                if comps:
                    cls = comps[-1]
                    if len(cls) >= 3 and cls[0].isalpha():
                        return cls
        elif nm.startswith("_Z"):
            continue
        else:
            head = nm.split("_")[0]
            if head and head[0].isupper() and len(head) >= 3 and head.isalnum():
                return head
    return None


print("=" * 88)
print("1. revert the 1,210 bad <garbage>_vf<n> names")
print("=" * 88)
reverted = 0
for ea in idautils.Functions():
    nm = ida_name.get_name(ea) or ""
    m = re.fullmatch(r"(.+)_vf(\d+)", nm)
    if not m:
        continue
    head = m.group(1)
    # bad if the head contains a mangled fragment like "4vf84Ev" or "Ev"
    if re.search(r"[0-9][a-zA-Z]*Ev$", head) or head.endswith("Ev"):
        if ida_name.set_name(ea, f"sub_{ea - BASE:X}", ida_name.SN_NOWARN):
            reverted += 1
print(f"  reverted: {reverted}")

print()
print("=" * 88)
print("2. collect vtable runs and build (class, slot) -> target")
print("=" * 88)


def is_code_ptr(v):
    return 0x288 <= v < 0x9AD3BC


runs = []
for seg_ea in idautils.Segments():
    nm = idc.get_segm_name(seg_ea)
    if nm not in (".rodata", ".data", ".data.rel.ro"):
        continue
    s, e = idc.get_segm_start(seg_ea), idc.get_segm_end(seg_ea)
    a = s
    cur = []
    while a + 4 <= e:
        v = ida_bytes.get_dword(a)
        if is_code_ptr(v):
            cur.append(v)
        else:
            if len(cur) >= 8:
                runs.append(cur)
            cur = []
        a += 4
    if len(cur) >= 8:
        runs.append(cur)

print(f"  runs: {len(runs)}")

by_pair = collections.defaultdict(set)
classes_seen = collections.Counter()
for slots in runs:
    cls = class_from_vtable(slots)
    if not cls:
        continue
    classes_seen[cls] += 1
    for idx, v in enumerate(slots):
        by_pair[(cls, idx)].add(v)

print(f"  distinct (class, slot) pairs: {len(by_pair)}")
print(f"  classes identified: {len(classes_seen)}")
print(f"  most common classes: {classes_seen.most_common(12)}")

cand = []
for (cls, idx), targets in by_pair.items():
    if len(targets) != 1:
        continue
    v = next(iter(targets))
    nm = ida_name.get_name(BASE + v) or ""
    if nm and not nm.startswith("sub_"):
        continue
    cand.append((v, cls, idx))
print(f"  candidate unnamed slot methods: {len(cand)}")

existing = {}
for ea in idautils.Functions():
    n = ida_name.get_name(ea) or ""
    if n and not n.startswith("sub_"):
        existing.setdefault(n, set()).add(ea - BASE)

applied = 0
collided = 0
examples = []
for v, cls, idx in cand:
    name = f"{cls}_vf{idx}"
    if name in existing and v not in existing[name]:
        collided += 1
        continue
    if ida_name.set_name(BASE + v, name, ida_name.SN_NOWARN):
        applied += 1
        existing.setdefault(name, set()).add(v)
        if len(examples) < 20:
            examples.append((v, name))

print()
print("=" * 88)
print("3. result")
print("=" * 88)
print(f"  applied  : {applied}")
print(f"  collided : {collided}")
for v, name in examples:
    print(f"    {v:#010x}  {name}")

idaapi.save_database("", 0)
print("saved")
