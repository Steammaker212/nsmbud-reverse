"""List the dynamic symbols (.dynsym) of an NSO: mangled name, address, size, type.

    python scripts/sdk/nso_dynsym.py <main> [--defined]

Addresses are module offsets (sweet-dx .sym addresses / RVAs). Works for 32-bit
(Elf32_Sym) and 64-bit (Elf64_Sym) modules; the class is read from MOD0's
dynamic section entry size.
"""
from __future__ import annotations

import argparse
import struct
import sys
from pathlib import Path


def lz4_block(src: bytes, size: int) -> bytes:
    out = bytearray()
    i = 0
    while i < len(src):
        tok = src[i]; i += 1
        lit = tok >> 4
        if lit == 15:
            while True:
                b = src[i]; i += 1; lit += b
                if b != 255:
                    break
        out += src[i:i + lit]; i += lit
        if i >= len(src) or len(out) >= size:
            break
        off = src[i] | (src[i + 1] << 8); i += 2
        ml = tok & 15
        if ml == 15:
            while True:
                b = src[i]; i += 1; ml += b
                if b != 255:
                    break
        ml += 4
        for _ in range(ml):
            out.append(out[-off])
    return bytes(out)


def load_image(path: Path) -> bytes:
    d = path.read_bytes()
    assert d[:4] == b"NSO0", "not an NSO"
    flags = struct.unpack_from("<I", d, 0xC)[0]
    image = bytearray()
    for k in range(3):
        foff, moff, size = struct.unpack_from("<III", d, 0x10 + k * 0x10)
        csize = struct.unpack_from("<I", d, 0x60 + k * 4)[0]
        raw = d[foff:foff + (csize if flags & (1 << k) else size)]
        seg = lz4_block(raw, size) if flags & (1 << k) else raw
        if len(image) < moff + size:
            image += b"\0" * (moff + size - len(image))
        image[moff:moff + len(seg)] = seg
    return bytes(image)


def dynsym(image: bytes):
    mod0 = struct.unpack_from("<I", image, 4)[0]
    assert image[mod0:mod0 + 4] == b"MOD0"
    dyn = mod0 + struct.unpack_from("<i", image, mod0 + 4)[0]
    # 64-bit dynamic entries are 16 bytes (tag u64, value u64); 32-bit are 8.
    is64 = struct.unpack_from("<Q", image, dyn)[0] < 0x100 and struct.unpack_from("<I", image, dyn + 4)[0] == 0
    ent, fmt = (16, "<qQ") if is64 else (8, "<iI")
    tags = {}
    o = dyn
    while True:
        tag, val = struct.unpack_from(fmt, image, o)
        if tag == 0:
            break
        tags.setdefault(tag, val)
        o += ent
    symtab, strtab, syment = tags[6], tags[5], tags.get(11, 24 if is64 else 16)
    # The symbol count: DT_HASH nchain, else up to the string table.
    count = struct.unpack_from("<I", image, tags[4] + 4)[0] if 4 in tags else (strtab - symtab) // syment
    for i in range(count):
        p = symtab + i * syment
        if is64:
            name, info, other, shndx, value, size = struct.unpack_from("<IBBHQQ", image, p)
        else:
            name, value, size, info, other, shndx = struct.unpack_from("<IIIBBH", image, p)
        s = image[strtab + name:image.index(b"\0", strtab + name)].decode("ascii", "replace")
        yield s, value, size, info & 0xF, shndx


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("nso", type=Path)
    ap.add_argument("--defined", action="store_true", help="only symbols defined in the module")
    a = ap.parse_args()
    for name, value, size, typ, shndx in dynsym(load_image(a.nso)):
        if not name or (a.defined and shndx == 0):
            continue
        print(f"0x{value:08X} {size:6d} {'FUNC' if typ == 2 else 'OBJECT' if typ == 1 else typ} {name}")


if __name__ == "__main__":
    sys.exit(main())
