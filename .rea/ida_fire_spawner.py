"""READ sub_6013B948: this is the code that constructs a PlayerFireball.

It references the PlayerFireball_ctor GOT slot (0x00C659B0) at 0x13B958 / 0x13B968, and lies
right after the FireballBase / PlantFireball / PlayerFireball cluster (0x135A90-0x13B470), so it
is almost certainly the player-fireball spawn function -- the answer to "nothing fires".

Also reads its siblings PlantFireball's spawner sub_6013A5A8 for comparison, and the two
animation-table functions sub_604F9090 / sub_6052F1C4 that hold "P_FireFlower_00/01", since those
are how the fire-flower player animates at all.
"""
import collections
import idautils
import ida_bytes
import ida_funcs
import ida_name
import ida_hexrays
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000
NSO = 0x00CD1000
TEXT_LO, TEXT_HI = 0x288, 0x9AD3BC

TARGETS = [
    (0x0013B948, "sub_6013B948 (constructs PlayerFireball)", 140),
    (0x0013A5A8, "sub_6013A5A8 (constructs PlantFireball)", 70),
]


def cstr(ea, maxlen=64):
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


callers = collections.defaultdict(set)
for addr in range(BASE + TEXT_LO, BASE + TEXT_HI - 4, 4):
    t = arm_bl_target(addr)
    if t is not None:
        f = ida_funcs.get_func(addr)
        if f:
            callers[t].add(f.start_ea - BASE)

for rva, label, limit in TARGETS:
    ea = BASE + rva
    f = ida_funcs.get_func(ea)
    print("=" * 94)
    print(f"{label}   {rva:#010x}   {(f.end_ea - f.start_ea) if f else 0:#x} bytes")
    print("=" * 94)
    cs = callers.get(rva, set())
    print(f"  callers (BL): {len(cs)}")
    for c in sorted(cs)[:10]:
        print(f"      {c:#010x}  {ida_name.get_name(BASE + c) or 'sub_'+format(c,'X')}")
    ss = strings_in(f) if f else set()
    if ss:
        print(f"  strings: {sorted(ss)[:10]}")
    try:
        cf = ida_hexrays.decompile(ea)
        if cf:
            lines = str(cf).splitlines()
            print(f"  pseudocode ({len(lines)} lines):")
            for ln in lines[:limit]:
                print("  " + ln)
            if len(lines) > limit:
                print(f"  ... {len(lines)-limit} more")
        else:
            print("  declined")
    except Exception as e:
        print(f"  error {e}")
    print()
