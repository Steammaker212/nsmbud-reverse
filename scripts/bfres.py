"""Read a Switch BFRES (FRES) model: names, models, bones, materials, animations.

Answers "what does an actor's archive actually contain", which is what a
replacement model has to match -- above all the skeletal animation names the
game plays by string ("walk", "walk0", "walk1" for the Goomba family).

    python scripts/bfres.py info     <file>
    python scripts/bfres.py strings  <file> [substring]
    python scripts/bfres.py anims    <file>
    python scripts/bfres.py bones    <file>

Layout, established from the shipped files rather than from documentation:

  Switch BFRES is **little-endian** (the Wii U files this project's reference
  material describes are big-endian -- do not carry those offsets over).

   0x00  "FRES"
   0x04  version bytes, e.g. "    " then 01 01 08 00
   0x0C  u16 BOM 0xFEFF
   0x0E  u16 header size 0xC
   0x14  u32 name address (patch-relative; often 0)
   0x18  u32 string table address
   0x1C  u32 string table end (size = end - start)
   0x20  u32 relocation table address
   0x24  u32 relocation table end

  Section blocks follow at the addresses listed in the header's dictionary.
  Each block begins "<MAGIC>" then its own size, so simply scanning for the
  magic is reliable and needs no dictionary walk:

   FSKA  F S K A | u32 size | u32 size | 0 | u64 name address | u64 bone
         array | ... | u64 data offset | ...
   FMAT  material block; FMDL model; FSHP shape; FVTX vertex buffer.

  Animation names therefore live in the string table, and the FSKA block for
  each animation points at one.
"""
from __future__ import annotations

import argparse
import struct
from pathlib import Path

MAGICS = ("FMDL", "FSKA", "FMAT", "FVTX", "FSHP", "FVIS", "FTXP", "FSKL")

# Only these blocks hold a name pointer at +0x10. FVTX/FSHP/FTXP do not, so
# reading their +0x10 yields offsets and prints garbage.
NAMED_BLOCKS = ("FMDL", "FSKA", "FMAT", "FSKL")


class Bfres:
    def __init__(self, data: bytes):
        if data[:4] != b"FRES":
            raise ValueError(f"not FRES (magic {data[:4]!r})")
        self.d = data
        self.version = data[4:12]
        self.bom, = struct.unpack_from("<H", data, 0x0C)
        self.header_size, = struct.unpack_from("<H", data, 0x0E)
        self.name_addr, = struct.unpack_from("<I", data, 0x14)
        self.str_addr, = struct.unpack_from("<I", data, 0x18)
        self.str_end, = struct.unpack_from("<I", data, 0x1C)
        self.reloc_addr, = struct.unpack_from("<I", data, 0x20)
        self.reloc_end, = struct.unpack_from("<I", data, 0x24)

    @property
    def str_size(self) -> int:
        return max(0, self.str_end - self.str_addr)

    def string(self, addr: int) -> str:
        if not addr or addr >= len(self.d):
            return ""
        end = self.d.find(b"\0", addr)
        if end < 0:
            return ""
        return self.d[addr:end].decode("utf-8", "replace")

    def names(self) -> list[str]:
        """Every name reachable from a section header's name pointer.

        This is deliberately *not* a parse of the whole _STR table: the table
        interleaves entries with padding I have not pinned down, and guessing
        produced garbage. Section headers point straight at the strings that
        matter (animation, skeleton, material, model names), and those use the
        same u16-length prefix, so walking the pointers is accurate.
        """
        out, seen = [], set()
        for magic in NAMED_BLOCKS:
            for off in self.blocks(magic):
                if off + 0x18 > len(self.d):
                    continue
                addr, = struct.unpack_from("<Q", self.d, off + 0x10)
                s = self.str_len(addr)
                if not s or s in seen:
                    continue
                if not all(32 <= ord(c) < 127 for c in s):
                    continue
                seen.add(s)
                out.append(s)
        return out

    def str_len(self, addr: int) -> str:
        """A string at `addr`, which is length-prefixed inside _STR."""
        if not addr or addr + 2 > len(self.d):
            return ""
        n, = struct.unpack_from("<H", self.d, addr)
        if n == 0 or addr + 2 + n > len(self.d):
            return ""
        return self.d[addr + 2:addr + 2 + n].decode("utf-8", "replace")

    def blocks(self, magic: str) -> list[int]:
        """Every offset where <magic> appears as a section header."""
        needle = magic.encode("ascii")
        out, start = [], 0
        while True:
            i = self.d.find(needle, start)
            if i < 0:
                return out
            out.append(i)
            start = i + 4

    def anims(self) -> list[dict]:
        """FSKA blocks: the skeletal animations, with their names."""
        out = []
        for off in self.blocks("FSKA"):
            # FSKA + 0x08 is the block size, 0x10 the name address,
            # 0x18 the bone array, 0x28 the data offset.
            size, = struct.unpack_from("<I", self.d, off + 4)
            name_addr, = struct.unpack_from("<Q", self.d, off + 0x10)
            bone_array, = struct.unpack_from("<Q", self.d, off + 0x18)
            data_off, = struct.unpack_from("<Q", self.d, off + 0x28)
            out.append({
                "offset": off,
                "size": size,
                "name": self.str_len(name_addr),
                "bone_array": bone_array,
                "data": data_off,
            })
        return out


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__.split("\n")[0])
    ap.add_argument("command", choices=["info", "strings", "anims", "bones", "sections"])
    ap.add_argument("path")
    ap.add_argument("needle", nargs="?", default=None)
    args = ap.parse_args()

    bf = Bfres(Path(args.path).read_bytes())

    if args.command == "info":
        print(f"version      {bf.version.hex()}")
        print(f"bom          0x{bf.bom:04X}")
        print(f"header size  0x{bf.header_size:X}")
        print(f"name          {bf.string(bf.name_addr)!r}")
        print(f"string table 0x{bf.str_addr:X} .. 0x{bf.str_end:X} ({bf.str_size} bytes)")
        print(f"relocations  0x{bf.reloc_addr:X} .. 0x{bf.reloc_end:X}")
        print(f"strings      {len(bf.names())}")
        return 0

    if args.command == "sections":
        for magic in MAGICS:
            for off in bf.blocks(magic):
                print(f"0x{off:06X}  {magic}")
        return 0

    if args.command == "anims":
        anims = bf.anims()
        print(f"{len(anims)} skeletal animation(s)")
        for a in anims:
            print(f"  0x{a['offset']:06X}  {a['name']!r}  size {a['size']}")
        return 0

    if args.command == "bones":
        # The first FSKA names the skeleton; bones come from the model's FSKL.
        for off in bf.blocks("FSKL"):
            name_addr, = struct.unpack_from("<Q", bf.d, off + 0x10)
            print(f"0x{off:06X}  skeleton {bf.str_len(name_addr)!r}")
        return 0

    if args.command == "strings":
        todo = bf.names()
        if args.needle:
            todo = [s for s in todo if args.needle.lower() in s.lower()]
        for s in todo:
            print(s)
        return 0
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
