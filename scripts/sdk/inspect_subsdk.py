"""Check a built subsdk0 for the faults that boot but break the game.

A module can link, patch and load, and still wreck the game at init: if its
DT_INIT or MOD0 points outside the module, rtld calls into the game instead.
The documented case is DT_INIT = 0xFF32F024, which is the game's own `_init`
(RVA 0x24) seen from a module loaded at 0xCD1000. rtld runs the game's static
constructors a second time, every global resets, and models render black.

This reads the NSO, finds MOD0, walks the dynamic section, and fails unless
DT_INIT, DT_FINI, DT_INIT_ARRAY and DT_FINI_ARRAY, and MOD0's dynamic/bss
fields, all land inside the module's own image.

Usage:
    python scripts/sdk/inspect_subsdk.py <path to subsdk0>
"""
from __future__ import annotations

import struct
import sys

DT = {12: "DT_INIT", 13: "DT_FINI", 25: "DT_INIT_ARRAY", 26: "DT_FINI_ARRAY",
      27: "DT_INIT_ARRAYSZ", 28: "DT_FINI_ARRAYSZ"}
CHECK = {"DT_INIT", "DT_FINI", "DT_INIT_ARRAY", "DT_FINI_ARRAY"}


def load_image(path: str) -> bytes:
    nso = open(path, "rb").read()
    if nso[:4] != b"NSO0":
        raise SystemExit("not an NSO")
    flags, = struct.unpack_from("<I", nso, 0xC)
    if flags & 7:
        raise SystemExit("compressed segments: rebuild uncompressed or add LZ4 support")
    segs = [struct.unpack_from("<III", nso, 0x10 + i * 0x10) for i in range(3)]
    bss, = struct.unpack_from("<I", nso, 0x3C)
    end = max(mem + size for _, mem, size in segs) + bss
    image = bytearray(end)
    for off, mem, size in segs:
        image[mem:mem + size] = nso[off:off + size]
    return bytes(image)


def main() -> int:
    image = load_image(sys.argv[1])
    size = len(image)
    mod0 = struct.unpack_from("<I", image, 4)[0]
    if image[mod0:mod0 + 4] != b"MOD0":
        print("FAIL: no MOD0")
        return 1
    dyn_rel, bss_s, bss_e = struct.unpack_from("<iii", image, mod0 + 4)
    dyn = mod0 + dyn_rel
    print(f"image size 0x{size:X}, MOD0 at 0x{mod0:X}, dynamic at 0x{dyn:X}, "
          f"bss 0x{mod0 + bss_s:X}..0x{mod0 + bss_e:X}")
    bad = 0
    for label, v in (("MOD0.dynamic", dyn), ("MOD0.bss_start", mod0 + bss_s),
                     ("MOD0.bss_end", mod0 + bss_e)):
        if not 0 <= v <= size:
            print(f"FAIL: {label} = 0x{v & 0xFFFFFFFF:08X} is outside the module")
            bad += 1
    if not 0 <= dyn < size:
        return 1
    off = dyn
    while off + 8 <= size:
        tag, val = struct.unpack_from("<iI", image, off)
        off += 8
        if tag == 0:
            break
        name = DT.get(tag)
        if not name:
            continue
        inside = val < size
        print(f"  {name:16s} 0x{val:08X}  {'ok' if inside or name not in CHECK else 'OUTSIDE MODULE'}")
        if name in CHECK and not inside:
            bad += 1
    print("PASS" if not bad else f"FAIL: {bad} pointer(s) leave the module")
    return 1 if bad else 0


if __name__ == "__main__":
    sys.exit(main())
