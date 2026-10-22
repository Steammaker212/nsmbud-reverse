#!/usr/bin/env python3
"""Resolve the two symbol disagreements by disassembling both candidates."""
import struct

try:
    from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM
except ImportError:
    raise SystemExit("capstone required")

ELF = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.rebased.elf"
IDB = 0x60000000


def segs(data):
    ph = struct.unpack_from("<I", data, 0x1C)[0]
    ents = struct.unpack_from("<H", data, 0x2A)[0]
    n = struct.unpack_from("<H", data, 0x2C)[0]
    out = []
    for i in range(n):
        b = ph + i * ents
        if struct.unpack_from("<I", data, b)[0] == 1:
            out.append((struct.unpack_from("<I", data, b + 8)[0],
                        struct.unpack_from("<I", data, b + 16)[0],
                        struct.unpack_from("<I", data, b + 4)[0]))
    return out


def off(s, va):
    for v, sz, o in s:
        if v <= va < v + sz:
            return o + va - v
    return None


d = open(ELF, "rb").read()
S = segs(d)
md = Cs(CS_ARCH_ARM, CS_MODE_ARM)

CASES = [
    ("__cxa_guard_release", 0x009AD3F4, 0x00CD1014),
    ("CollisionActor::afterCreate", 0x00002F08, 0x00003140),
]

for name, rva_cdx, rva_ours in CASES:
    print("=" * 70)
    print(f"{name}   codedx RVA 0x{rva_cdx:08X}   ours RVA 0x{rva_ours:08X}")
    for tag, rva in (("codedx", rva_cdx), ("ours", rva_ours)):
        va = IDB + rva
        o = off(S, va)
        print(f"\n  --- {tag}: VA 0x{va:08X} file_off "
              f"{'0x%08X' % o if o is not None else 'OUT OF IMAGE'}")
        if o is None:
            print("      (address is not inside any PT_LOAD segment)")
            continue
        code = d[o:o + 0x30]
        n = 0
        for ins in md.disasm(code, va):
            print(f"      {ins.address:#010x}  {ins.bytes.hex():8}  "
                  f"{ins.mnemonic:8} {ins.op_str}")
            n += 1
            if n >= 10:
                break

print("\n" + "=" * 70)
print("Image extent check:")
print(f"  NSMBUDX_NSO_MEMORY_SIZE = 0x00CD1000 (sweet-dx)")
for tag, rva in (("ours __cxa_guard_release", 0x00CD1014),):
    print(f"  {tag} RVA 0x{rva:08X} is "
          f"{'OUTSIDE' if rva >= 0x00CD1000 else 'inside'} the NSO image")
