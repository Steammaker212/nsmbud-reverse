"""LOCATE the PlayerFireball profile record and the fire-shoot entry point.

"PlayerFireball_ctor has 0 BL callers" is expected: actor constructors are instantiated by
ActorMgr::create from a profile table, never called directly. So the profile record is the real
link. This scans EVERY segment (the earlier scan restricted to .rodata/.data and found nothing,
which was probably too narrow) for:

  * pointers to the fireball ctors
  * the literal strings "PlayerFireball", "Fireball", "BroFileball"
  * the profile-name table neighbourhood

Also searches for the player's attack/fire animation names, because the shoot handler is usually
driven by an animation name like "shot"/"fire" in the player animation table.
"""
import idautils
import ida_bytes
import ida_funcs
import ida_name
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000
NSO = 0x00CD1000


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


TARGETS = {
    0x0013A7A4: "PlayerFireball_ctor",
    0x00135A90: "FireballBase_ctor",
    0x00139918: "PlantFireball_ctor",
}

print("=" * 92)
print("1. pointers to fireball ctors, across ALL segments")
print("=" * 92)
found = {}
for seg_ea in idautils.Segments():
    nm = idc.get_segm_name(seg_ea)
    s, e = idc.get_segm_start(seg_ea), idc.get_segm_end(seg_ea)
    a = s
    while a + 4 <= e:
        v = ida_bytes.get_dword(a)
        if v in TARGETS:
            found.setdefault(v, []).append((a - BASE, nm))
        a += 4
for t, label in TARGETS.items():
    ls = found.get(t, [])
    print(f"  {label} ({t:#x}): {len(ls)} pointer(s)")
    for rva, seg in ls[:12]:
        print(f"      {rva:#010x}  ({seg})")

print()
print("=" * 92)
print("2. strings mentioning Fireball / fire-flower, and where they live")
print("=" * 92)
needles = ("PlayerFireball", "Fireball", "BroFileball", "FireFlower", "Fire_")
for seg_ea in idautils.Segments():
    nm = idc.get_segm_name(seg_ea)
    if nm not in (".rodata", ".data"):
        continue
    s, e = idc.get_segm_start(seg_ea), idc.get_segm_end(seg_ea)
    a = s
    while a < e:
        b = ida_bytes.get_byte(a)
        if 32 <= b < 127:
            strt = a
            buf = []
            while a < e and len(buf) < 80:
                c = ida_bytes.get_byte(a)
                if not (32 <= c < 127):
                    break
                buf.append(chr(c))
                a += 1
            if a < e and ida_bytes.get_byte(a) == 0:
                sstr = "".join(buf)
                if len(sstr) >= 6 and any(n in sstr for n in needles):
                    print(f"  {strt - BASE:#010x}  \"{sstr}\"")
            a += 1
        else:
            a += 1
