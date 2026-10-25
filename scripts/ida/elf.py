"""Deterministic reader for the rebased main ELF (no IDA session needed).

The IDA MCP server answers most queries but intermittently fails memory reads
and cannot decode a few Thumb-coded ARM functions.  The rebased ELF that IDA
built (`main.idb/convertedmain.rebased.elf`) has every section, so reading it
directly is both reproducible and fast.

    python scripts/ida/elf.py sections
    python scripts/ida/elf.py rd 0x60AF3478            # one dword
    python scripts/ida/elf.py rd 0x60AF3470 --count 8  # eight of them
    python scripts/ida/elf.py str 0x60AB9E80
    python scripts/ida/elf.py dis 0x60337E2C --count 80
    python scripts/ida/elf.py dis 0x60337E2C --count 80 --thumb
"""
from __future__ import annotations

import argparse
import struct
import sys
from pathlib import Path

ELF_DEFAULT = Path(__file__).resolve().parents[2] / ".." / "main.idb" / "convertedmain.rebased.elf"

# (vaddr, file offset, size, flags)
SECTIONS = [
    (0x60000288, 0x0006E4, 0x9AD134, "text"),
    (0x60AB906A, 0xAB8E56, 0x1068AE, "rodata"),
    (0x60BC0000, 0xBBF83F, 0x0A11AC, "data"),
    (0x60C7B274, 0xC7AAB3, 0x055D8C, "bss"),      # NOBITS: no file bytes
    (0x60000024, 0x000480, 0x000264, "init"),
    (0x60AB2780, 0xAB256C, 0x0068EA, "dynstr"),
    (0x60AB0330, 0xAB011C, 0x002450, "dynsym"),
    (0x60C611AC, 0xC609EB, 0x0000A8, "dynamic"),
    (0x609AF048, 0x9AEE34, 0x0FF250, "rel.dyn"),
    (0x609AD3BC, 0x9AD818, 0x0015D4, "plt"),
    (0x60C619D0, 0xC6120F, 0x017AB0, "got"),
    (0x60C6127C, 0xC60ABB, 0x00074C, "got.plt"),
    (0x60AAE298, 0xAAE084, 0x000E80, "rel.plt"),
    (0x60C7A150, 0xC7998F, 0x001124, "init_array"),
    (0x60AAB9E0, 0xAAB7D8, 0x000074, "note"),
]


class Elf:
    def __init__(self, path: Path = ELF_DEFAULT):
        self.path = Path(path)
        self.data = self.path.read_bytes()

    def section_of(self, addr: int):
        for va, off, size, name in SECTIONS:
            if va <= addr < va + size:
                return va, off, size, name
        return None

    def read(self, addr: int, length: int) -> bytes:
        sec = self.section_of(addr)
        if not sec:
            raise KeyError(f"0x{addr:08X} is not in a known section")
        va, off, size, name = sec
        if name == "bss":
            raise KeyError(f"0x{addr:08X} is in .bss (no file bytes)")
        start = off + (addr - va)
        if addr - va + length > size:
            raise KeyError(f"0x{addr:08X}+{length} crosses the end of .{name}")
        return self.data[start:start + length]

    def u32(self, addr: int) -> int:
        return struct.unpack("<I", self.read(addr, 4))[0]

    def s32(self, addr: int) -> int:
        return struct.unpack("<i", self.read(addr, 4))[0]

    def u16(self, addr: int) -> int:
        return struct.unpack("<H", self.read(addr, 2))[0]

    def u8(self, addr: int) -> int:
        return self.read(addr, 1)[0]

    def f32(self, addr: int) -> float:
        return struct.unpack("<f", self.read(addr, 4))[0]

    def cstr(self, addr: int, limit: int = 256) -> str:
        raw = b""
        for i in range(limit):
            b = self.read(addr + i, 1)
            if b == b"\0":
                break
            raw += b
        return raw.decode("utf-8", "replace")

    def dump(self, addr: int, count: int = 8) -> list[int]:
        return [self.u32(addr + 4 * i) for i in range(count)]

    def disasm(self, addr: int, count: int = 40, thumb: bool = False) -> list[str]:
        try:
            import capstone
        except ImportError:
            raise SystemExit("capstone is required for --dis")
        mode = capstone.CS_MODE_THUMB if thumb else capstone.CS_MODE_ARM
        md = capstone.Cs(capstone.CS_ARCH_ARM, mode)
        out = []
        chunk = self.read(addr, min(4 * count + 16, 0x4000))
        for ins in md.disasm(chunk, addr):
            out.append(f"0x{ins.address:08X}  {ins.mnemonic:<8} {ins.op_str}")
            if len(out) >= count:
                break
        return out


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__.split("\n")[0])
    ap.add_argument("command", choices=["sections", "rd", "str", "dis", "f32"])
    ap.add_argument("addr", nargs="?", help="address, e.g. 0x60AF3478")
    ap.add_argument("--count", type=int, default=1)
    ap.add_argument("--thumb", action="store_true")
    ap.add_argument("--elf", default=str(ELF_DEFAULT))
    args = ap.parse_args()

    elf = Elf(Path(args.elf))
    if args.command == "sections":
        for va, off, size, name in SECTIONS:
            print(f".{name:<10} 0x{va:08X}  off 0x{off:07X}  size 0x{size:07X}")
        return 0

    addr = int(args.addr, 0)
    if args.command == "rd":
        for i, v in enumerate(elf.dump(addr, args.count)):
            print(f"0x{addr + 4 * i:08X}  0x{v:08X}  {v}  {v - 0x100000000 if v >> 31 else ''}")
    elif args.command == "f32":
        print(elf.f32(addr))
    elif args.command == "str":
        print(repr(elf.cstr(addr)))
    elif args.command == "dis":
        print("\n".join(elf.disasm(addr, args.count, args.thumb)))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
