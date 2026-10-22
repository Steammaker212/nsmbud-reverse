"""VALIDATE the Thumb BL decoder on a positive control before trusting the negative result.

The probe found 0 BL instructions reaching 40 sampled "zero-xref" functions. A negative result is
only meaningful if the decoder works, so this tests it on functions we KNOW are called:

    Player_ctor          0x794EC0  has 2 real xrefs, one of them a BL from 0x00794EBC
    PlayerBase_ctor      0x75DEFC  called by Player_ctor and Yoshi_ctor
    ItemNameTable_build  0x4F2044  static constructor, registered in .init_array

If the decoder finds a BL to Player_ctor at site 0x00794EBC, the decoder is correct and the
earlier 0 result is meaningful. If it finds nothing, the decoder is broken and that 0 tells us
nothing at all -- which would be the third time this project has drawn a conclusion from a
scan that had not been validated.

Also counts total BL instructions decoded across .text, which a working decoder should report in
the tens of thousands for a 10 MB image.
"""
import ida_bytes
import ida_funcs
import ida_name
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000
TEXT_LO, TEXT_HI = 0x288, 0x9AD3BC


def thumb_bl_target(addr):
    h1 = ida_bytes.get_word(addr)
    h2 = ida_bytes.get_word(addr + 2)
    if (h1 & 0xF800) != 0xF000:
        return None
    if (h2 & 0xD000) != 0xD000:
        return None
    s = (h1 >> 10) & 1
    imm10 = h1 & 0x3FF
    j1 = (h2 >> 13) & 1
    j2 = (h2 >> 11) & 1
    imm11 = h2 & 0x7FF
    i1 = 1 - (j1 ^ s)
    i2 = 1 - (j2 ^ s)
    imm = (s << 24) | (i1 << 23) | (i2 << 22) | (imm10 << 12) | (imm11 << 1)
    if imm & (1 << 24):
        imm -= 1 << 25
    return (addr + 4) + imm


CONTROLS = {
    0x00794EC0: "Player_ctor",
    0x0075DEFC: "PlayerBase_ctor",
    0x00795CDC: "Player_setPowerupMode",
    0x004F2044: "ItemNameTable_build",
    0x00563294: "BlockBase::getContents",
}

hits = {k: [] for k in CONTROLS}
total_bl = 0
for addr in range(BASE + TEXT_LO, BASE + TEXT_HI - 4, 2):
    t = thumb_bl_target(addr)
    if t is None:
        continue
    total_bl += 1
    for k in CONTROLS:
        if t == BASE + k or t == BASE + k + 1:
            hits[k].append(addr - BASE)

print("=" * 86)
print("BL DECODER VALIDATION")
print("=" * 86)
print(f"  total Thumb BL instructions decoded in .text : {total_bl:,}")
print()
for k, label in CONTROLS.items():
    h = hits[k]
    print(f"  {k:#010x}  {label:<30} {len(h)} BL site(s)")
    for s in h[:6]:
        f = ida_funcs.get_func(BASE + s)
        print(f"        BL at {s:#010x}  in {ida_name.get_name(f.start_ea) if f else '?'}")

print()
known = [k for k in CONTROLS if k in (0x00794EC0, 0x0075DEFC)]
ok = any(hits[k] for k in known)
print(f"  decoder works: {ok}")
if not ok:
    print("  -> the earlier 0 result is UNRELIABLE; do not conclude from it")
else:
    print("  -> decoder validated; zero-xref samples really have no direct BL caller")
