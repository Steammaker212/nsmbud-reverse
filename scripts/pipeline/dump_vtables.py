"""Read vtable slots straight out of the ELF.

The database names 88 vtable symbols, but the slots themselves are just words in
.rodata. This reads them from the image, so the mapping "slot k of
Class__vtable -> function F" is measured from the file rather than inferred.

Slot 0 and slot 1 of an Itanium-style vtable are the vcall/typeinfo header; the
address point (where the "vtable" symbol points) is what the object stores, and
entry 0 there is the first virtual function (typically the destructor).

Usage:
    python dump_vtables.py --elf <convertedmain.rebased.elf> --symbols <data_symbols.json> --out <vtables.json>
"""
from __future__ import annotations

import argparse
import json
import struct
from pathlib import Path

IMAGE_BASE = 0x60000000


def sections(data: bytes) -> list[dict]:
    (_, _, _, _, _, _, _, _, _, _, e_shentsize, e_shnum,
     e_shstrndx) = struct.unpack_from("<HHIIIIIHHHHHH", data, 16)
    shoff = struct.unpack_from("<I", data, 32)[0]
    raw = []
    for i in range(e_shnum):
        off = shoff + i * e_shentsize
        name, typ, flags, addr, offset, size, link, info, align, ent = \
            struct.unpack_from("<IIIIIIIIII", data, off)
        raw.append({"name_off": name, "type": typ, "addr": addr,
                    "offset": offset, "size": size})
    strtab = raw[e_shstrndx]
    base = strtab["offset"]
    for s in raw:
        end = data.index(b"\0", base + s["name_off"])
        s["name"] = data[base + s["name_off"]:end].decode("latin1")
    return raw


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--elf", required=True)
    ap.add_argument("--symbols", required=True)
    ap.add_argument("--out", required=True)
    args = ap.parse_args()

    data = Path(args.elf).read_bytes()
    secs = sections(data)
    textish = [s for s in secs if s["type"] == 1 and s["addr"]]  # PROGBITS w/ addr
    print("sections with an address: %d" % len(textish))
    for s in textish:
        print("  %-18s 0x%08X size 0x%X" % (s["name"], s["addr"], s["size"]))

    rows = json.loads(Path(args.symbols).read_text())
    vts = [r for r in rows if "vtable" in r["name"].lower()]

    def read_word(va: int):
        """Read a relocated word.

        The ELF stores pointer cells as unrebased RVAs and relies on
        R_ARM_RELATIVE, so a value below the image base is an offset, not a
        small number.
        """
        best = None
        for s in textish:
            if s["addr"] <= va < s["addr"] + s["size"]:
                if best is None or s["size"] < best["size"]:
                    best = s
        if best is None:
            return None
        fo = best["offset"] + (va - best["addr"])
        if fo + 4 > len(data):
            return None
        return struct.unpack_from("<I", data, fo)[0]

    def rebase(w: int) -> int:
        return w + IMAGE_BASE if 0 < w < IMAGE_BASE else w

    out = []
    for vt in vts:
        slots = []
        for i in range(64):
            w = read_word(vt["ea"] + i * 4)
            if not w:
                break
            target = rebase(w)
            if not (IMAGE_BASE <= target < IMAGE_BASE + 0x1000000):
                break
            slots.append(target)
        out.append({"ea": vt["ea"], "name": vt["name"], "slots": slots})
        print("%-40s %3d slots" % (vt["name"], len(slots)))

    Path(args.out).write_text(json.dumps(out, indent=1))
    print("wrote %d vtables -> %s" % (len(out), args.out))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
