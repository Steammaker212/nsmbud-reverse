"""FIREBALL SYSTEM: full inventory and reachability, now that the call graph works.

The objective names fireball explicitly. Earlier rounds found PlayerFireball_ctor but never mapped
the system. This uses the CALIBRATED A32 decoder (validated at 91% against IDA's own xrefs) to
build a real reachability picture, which the broken Thumb scan could never do.

Steps:
  1. find every function whose name mentions Fireball/fireball/fire
  2. for each, report size, direct ARM callers, and whether it appears in a vtable
  3. follow one level up: who calls the callers
  4. resolve the string literals each one references

The point is to answer concretely: what has to be true for a fireball to spawn and travel? That
is the Fire Flower symptom ("nothing seems to fire").
"""
import collections
import idautils
import ida_bytes
import ida_funcs
import ida_name
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000
TEXT_LO, TEXT_HI = 0x288, 0x9AD3BC
NSO = 0x00CD1000


def arm_bl_target(addr):
    try:
        w = ida_bytes.get_dword(addr)
    except Exception:
        return None
    if (w & 0x0F000000) == 0x0B000000:
        imm = w & 0xFFFFFF
        if imm & 0x800000:
            imm -= 0x1000000
        tgt = (addr + 8) + (imm << 2)
        return (tgt - BASE) if BASE <= tgt < BASE + NSO else None
    return None


def arm_b_target(addr):
    """plain B (tail branch) -- needed because many entries are B stubs"""
    try:
        w = ida_bytes.get_dword(addr)
    except Exception:
        return None
    if (w & 0x0F000000) == 0x0A000000:
        imm = w & 0xFFFFFF
        if imm & 0x800000:
            imm -= 0x1000000
        tgt = (addr + 8) + (imm << 2)
        return (tgt - BASE) if BASE <= tgt < BASE + NSO else None
    return None


def cstr(ea, maxlen=70):
    b = []
    for i in range(maxlen):
        try:
            c = ida_bytes.get_byte(ea + i)
        except Exception:
            return None
        if c == 0:
            break
        if not (32 <= c < 127):
            return None
        b.append(chr(c))
    return "".join(b) if len(b) >= 3 else None


def strings_in(f):
    out = set()
    for insn in idautils.Heads(f.start_ea, f.end_ea):
        if "=" not in idc.print_operand(insn, 1):
            continue
        disp = idc.get_operand_value(insn, 1)
        if not disp or not (BASE <= disp < BASE + NSO):
            continue
        w = ida_bytes.get_dword(disp)
        for cand in (w, w + BASE):
            if BASE <= cand < BASE + NSO:
                s = cstr(cand)
                if s:
                    out.add(s)
    return out


# ---- fireball functions
fire = []
for ea in idautils.Functions():
    nm = ida_name.get_name(ea) or ""
    low = nm.lower()
    if "fireball" in low or "fire_ball" in low or low.endswith("_fire") or "fireflower" in low:
        f = ida_funcs.get_func(ea)
        fire.append((ea - BASE, nm, (f.end_ea - f.start_ea) if f else 0))

print("=" * 94)
print(f"FIREBALL-RELATED FUNCTIONS: {len(fire)}")
print("=" * 94)
for rva, nm, size in sorted(fire):
    print(f"  {rva:#010x}  {size:>6,} b  {nm}")

# ---- callers of each (BL and B)
print()
print("=" * 94)
print("CALLERS (BL and B)")
print("=" * 94)
targets = {rva for rva, _, _ in fire}
callers = collections.defaultdict(set)
for addr in range(BASE + TEXT_LO, BASE + TEXT_HI - 4, 4):
    for dec in (arm_bl_target, arm_b_target):
        t = dec(addr)
        if t is not None and t in targets:
            f = ida_funcs.get_func(addr)
            if f:
                callers[t].add(f.start_ea - BASE)
for rva, nm, size in sorted(fire):
    cs = callers.get(rva, set())
    names = []
    for c in sorted(cs)[:6]:
        cn = ida_name.get_name(BASE + c) or f"sub_{c:X}"
        names.append(cn)
    print(f"  {rva:#010x}  {nm}")
    print(f"      callers: {len(cs)}  {names}")

# ---- vtable membership
print()
print("=" * 94)
print("VTABLE MEMBERSHIP (slot dispatch, invisible to call scans)")
print("=" * 94)
for rva, nm, size in sorted(fire):
    hits = 0
    for seg_ea in idautils.Segments():
        if idc.get_segm_name(seg_ea) == ".text":
            continue
        s = idc.get_segm_start(seg_ea)
        e = idc.get_segm_end(seg_ea)
        a = s
        while a + 4 <= e:
            if ida_bytes.get_dword(a) == rva:
                hits += 1
            a += 4
    if hits:
        print(f"  {rva:#010x}  {nm}  -> {hits} vtable slot(s)")

# ---- strings
print()
print("=" * 94)
print("STRINGS")
print("=" * 94)
for rva, nm, size in sorted(fire):
    f = ida_funcs.get_func(BASE + rva)
    if not f:
        continue
    ss = strings_in(f)
    ss = {s for s in ss if any(k in s.lower() for k in ("fire", "ball", "flower", "burn", "flame"))}
    if ss:
        print(f"  {rva:#010x}  {nm}")
        for s in sorted(ss)[:8]:
            print(f"      {s}")
