"""FIND WHO SPAWNS PROFILE 130 (PlayerFireball).

Decoded from the profile registration static constructors:

    sub_6013B948:  Profile::Profile(0xC87B70, 0x13A7A4 /*PlayerFireball_ctor*/, name, ...,
                   130)                          -> PlayerFireball profile id = 130
    sub_6013A5A8:  Profile::Profile(0xC87A6C, 0x139918 /*PlantFireball_ctor*/,   name, ...,
                   162)                          -> PlantFireball profile id = 162

So the question "why does nothing fire" becomes precise: does anything call
ActorMgr::create(..., 130, ...)?

This scans every call to ActorMgr::create (0x82CC region -- resolve by name) and reports the
immediate argument values at each call site, specifically flagging 130 / 162. Calls to
ActorMgr::create are where actors come into existence, so a call passing 130 IS the fireball
spawn.
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
NSO = 0x00CD1000
TEXT_LO, TEXT_HI = 0x288, 0x9AD3BC

WANT = {130: "PlayerFireball", 162: "PlantFireball"}


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


# find ActorMgr::create and friends by name
mgr = {}
for ea in idautils.Functions():
    nm = ida_name.get_name(ea) or ""
    if "ActorMgr" in nm and ("create" in nm or "Create" in nm):
        mgr[ea - BASE] = nm
print("=" * 92)
print("ActorMgr create functions")
print("=" * 92)
for rva, nm in sorted(mgr.items()):
    print(f"  {rva:#010x}  {nm}")

targets = set(mgr)

# scan every BL to those, then look backwards for an immediate 130 or 162 in the preceding insns
print()
print("=" * 92)
print("call sites and their immediate arguments")
print("=" * 92)
hits = []
for addr in range(BASE + TEXT_LO, BASE + TEXT_HI - 4, 4):
    t = arm_bl_target(addr)
    if t not in targets:
        continue
    f = ida_funcs.get_func(addr)
    fn = (f.start_ea - BASE) if f else None
    # look back up to 20 instructions for MOV/MOVW imm
    back = []
    a = addr - 4
    for _ in range(24):
        if a < BASE + TEXT_LO:
            break
        d = idc.GetDisasm(a)
        back.append((a - BASE, d))
        a -= 4
    imm_vals = []
    for ra, d in back:
        for m in ("#0x82", "#0x82 ", "#130", "#0xA2", "#162"):
            if m in d:
                imm_vals.append((ra, d))
    if imm_vals:
        hits.append((addr - BASE, t, fn, imm_vals))

print(f"  ActorMgr::create calls with a 130/162-ish immediate nearby: {len(hits)}")
for site, tgt, fn, iv in hits[:20]:
    nm = ida_name.get_name(BASE + fn) if fn is not None else "?"
    print(f"  BL at {site:#010x} -> {ida_name.get_name(BASE+tgt)}  in {nm}")
    for ra, d in iv:
        print(f"      {ra:#010x}  {d}")

# broader: any function that mentions 130 as an immediate anywhere
print()
print("=" * 92)
print("all functions containing '#0x82' immediate (candidate spawners)")
print("=" * 92)
cnt = 0
for ea in idautils.Functions():
    f = ida_funcs.get_func(ea)
    if not f:
        continue
    found = []
    for insn in idautils.Heads(f.start_ea, f.end_ea):
        d = idc.GetDisasm(insn)
        if "#0x82" in d and ("MOV" in d or "mov" in d):
            found.append((insn - BASE, d))
    if found:
        cnt += 1
        if cnt <= 15:
            nm = ida_name.get_name(ea) or f"sub_{ea-BASE:X}"
            print(f"  {ea - BASE:#010x}  {f.end_ea - f.start_ea:>6,} b  {nm}")
            for ra, d in found[:3]:
                print(f"      {ra:#010x}  {d}")
print(f"  total: {cnt}")
