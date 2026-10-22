"""FIND THE PLAYER'S FIRE-SHOOT LOGIC: what indexes mode 1 (FireFlower) and spawns a fireball.

Actor constructors are never called by BL -- they are instantiated by ActorMgr::create(profile_id)
from a profile table. So "PlayerFireball_ctor has 0 callers" is normal and explains nothing.

The real question: when the player is in FireFlower mode, what code decides to spawn
PlayerFireball? Two things must exist:
  (a) the PlayerFireball profile id, discoverable as a data reference to its ctor
  (b) player code that reads mode (+0x528) and requests that spawn

This:
  1. finds data references to PlayerFireball_ctor (0x13A7A4) -> the profile/build record, and
     prints the strings around it (the profile usually sits next to its name)
  2. finds every instruction that reads [Rx, #0x528] and compares the result, i.e. every place
     the game branches on power-up mode -- the shoot handler must be one of them
  3. for each, names the containing function and reports its size and callers
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


print("=" * 92)
print("1. data references to PlayerFireball_ctor 0x0013A7A4")
print("=" * 92)
CTOR = 0x0013A7A4
for seg_ea in idautils.Segments():
    s, e = idc.get_segm_start(seg_ea), idc.get_segm_end(seg_ea)
    nm = idc.get_segm_name(seg_ea)
    if nm not in (".rodata", ".data", ".data.rel.ro"):
        continue
    a = s
    while a + 4 <= e:
        if ida_bytes.get_dword(a) == CTOR:
            print(f"  dword at {a - BASE:#010x} ({nm})")
            # print surrounding dwords and any nearby strings
            for k in range(-8, 13):
                p = a + k * 4
                v = ida_bytes.get_dword(p)
                tag = ""
                if BASE <= v < BASE + NSO:
                    sn = cstr(BASE + v)
                    if sn:
                        tag = f'  "{sn}"'
                    else:
                        fn = ida_name.get_name(BASE + v)
                        if fn:
                            tag = f"  -> {fn}"
                print(f"      {p - BASE:#010x}  {v:#010x}{tag}")
        a += 4

print()
print("=" * 92)
print("2. every function that branches on [Rx, #0x528]  (power-up mode)")
print("=" * 92)


def decode_words(f):
    for insn in idautils.Heads(f.start_ea, f.end_ea):
        yield insn


hits = collections.defaultdict(list)
for ea in idautils.Functions():
    f = ida_funcs.get_func(ea)
    if not f:
        continue
    for insn in idautils.Heads(f.start_ea, f.end_ea):
        d = idc.GetDisasm(insn)
        if "#0x528]" in d and ("LDR" in d or "ldr" in d):
            hits[ea - BASE].append((insn - BASE, d))

print(f"  functions referencing [.,#0x528]: {len(hits)}")
callers = collections.defaultdict(set)
for addr in range(BASE + TEXT_LO, BASE + TEXT_HI - 4, 4):
    t = arm_bl_target(addr)
    if t is not None:
        f = ida_funcs.get_func(addr)
        if f:
            callers[t].add(f.start_ea - BASE)

for rva in sorted(hits, key=lambda r: -len(hits[r]))[:25]:
    nm = ida_name.get_name(BASE + rva) or f"sub_{rva:X}"
    f = ida_funcs.get_func(BASE + rva)
    sz = f.end_ea - f.start_ea
    print(f"  {rva:#010x}  {sz:>6,} b  {len(hits[rva]):>2} read(s)  {nm}")
    for site, d in hits[rva][:4]:
        print(f"      {site:#010x}  {d}")
