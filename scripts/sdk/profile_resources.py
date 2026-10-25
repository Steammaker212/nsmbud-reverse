"""Print the resource archives the game loads for given profile ids.

Reads RicBent's tables straight out of the ELF (addresses from codedx main.sym):
  Profile::resourceCountOriginal  0x00AF461A  u8[914]
  Profile::resourceListsOriginal  0x00BC05F0  SafeString*[914]
Pointer cells in the ELF hold unrebased RVAs (R_ARM_RELATIVE), so every pointer
read is an RVA; a SafeString is { vtable, cstr }.

The SafeString arrays themselves live in .bss and are filled at boot by
sInit_ProfileArchiveLists (0x60018FD0), so their cstr values are not in the
ELF. They are taken from that function's decompiled stores instead
(`dword_60C7DD7C = (int)"I_fireflower"` puts the cstr of the SafeString at
0x60C7DD78).

Usage:
    python scripts/sdk/profile_resources.py --elf ../main.idb/convertedmain.rebased.elf 592 759
"""
from __future__ import annotations

import argparse
import re
import struct
from pathlib import Path

BASE = 0x60000000
COUNTS = 0x00AF461A
LISTS = 0x00BC05F0


class Elf:
    def __init__(self, path: str):
        self.d = open(path, "rb").read()
        shoff, = struct.unpack_from("<I", self.d, 0x20)
        ent, num, _ = struct.unpack_from("<HHH", self.d, 0x2E)
        self.secs = [struct.unpack_from("<IIIIIIIIII", self.d, shoff + i * ent) for i in range(num)]

    def read(self, rva: int, n: int) -> bytes:
        va = rva + BASE if rva < BASE else rva
        for s in self.secs:
            addr, off, size = s[3], s[4], s[5]
            if addr <= va < addr + size and s[1] != 8:
                return self.d[off + va - addr: off + va - addr + n]
        raise KeyError(hex(va))

    def u32(self, rva: int) -> int:
        return struct.unpack("<I", self.read(rva, 4))[0]

    def cstr(self, rva: int) -> str:
        raw = self.read(rva, 128)
        return raw.split(b"\0")[0].decode("ascii", "replace")


INIT_UNIT = "decompiled/src/misc/60018FD0_sInit_ProfileArchiveLists.c"
STORE = re.compile(r'\b(?:dword|unk)_([0-9A-F]{8})\s*=\s*(?:\(int\)\s*)?"([^"]*)"')


def boot_strings(repo: Path) -> dict[int, str]:
    """RVA of a SafeString's cstr field -> the string stored there at boot."""
    text = (repo / INIT_UNIT).read_text(encoding="utf-8", errors="replace")
    return {int(a, 16) - BASE: s for a, s in STORE.findall(text)}


def main() -> None:
    ap = argparse.ArgumentParser(description=__doc__.split("\n")[0])
    ap.add_argument("--elf", required=True)
    ap.add_argument("--repo", default=".")
    ap.add_argument("ids", nargs="+", type=int)
    args = ap.parse_args()
    elf = Elf(args.elf)
    strings = boot_strings(Path(args.repo))
    for pid in args.ids:
        count = elf.read(COUNTS + pid, 1)[0]
        lst = elf.u32(LISTS + pid * 4) if count else 0
        names = [strings.get(lst + i * 8 + 4, f"? (cstr at 0x{lst + i * 8 + 4:08X})")
                 for i in range(count)]
        print(f"profile {pid}: {count} archive(s) {names}")


if __name__ == "__main__":
    main()
