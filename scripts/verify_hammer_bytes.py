#!/usr/bin/env python3
"""Byte-verify the Approach B patch table against the source ELF.

Reads convertedmain.rebased.elf directly (no IDA) and checks every original
byte claimed in the plan. Reports MATCH / MISMATCH per site.

Section mapping (from the ELF program headers):
  .text   VA 0x60000288  file 0x0006E4
  .rodata VA 0x60AB906A  file 0x00AB8E56
  .data   VA 0x60BC0000  file 0x00BBF83F
"""
import hashlib
import struct
import sys

ELF = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.rebased.elf"

SECTIONS = [
    # (name, va, file_off, size)
    (".text",   0x60000288, 0x0006E4, 0x9AD134),
    (".rodata", 0x60AB906A, 0xAB8E56, 0x1068AE),
    (".data",   0x60BC0000, 0xBBF83F, 0xA11AC),
]

# (label, VA, expected original bytes as little-endian hex, new bytes)
PATCHES = [
    ("fire grant: mov r2,#2 -> #10",          0x6045DDCC, "0220A0E3", "0A20A0E3"),
    ("setFireBallAction: cmp r0,#2 -> #10",   0x607AAA88, "020050E3", "0A0050E3"),
    ("checkSetFireBall: cmp r1,#2 -> #10",    0x607AA9BC, "020051E3", "0A0051E3"),
    ("createFireBall: cmp r0,#2 (a)",         0x607AABB8, "020050E3", "0A0050E3"),
    ("createFireBall: cmp r0,#2 (b)",         0x607AAC94, "020050E3", "0A0050E3"),
    ("fire exec: cmp r1,#6 -> #10",           0x607AAFF4, "060051E3", "0A0051E3"),
    ("fire exec: mov r3,#0x64 -> movw #0x464", 0x607AB000, "6430A0E3", "643400E3"),
    ("fire exec: cmp r0,#2 -> #10",           0x607AB0E4, "020050E3", "0A0050E3"),
    ("canChangeTo: bxhi lr -> movhi r3,#1",   0x607A2708, "1EFF2F81", "0130A083"),
]

LITERALS = [
    ("height lit A", 0x60795FF0, 0x003B3664),
    ("height lit B", 0x607960F8, 0x003B3390),
    ("body lit A",   0x6078C58C, 0x003BCE98),
    ("body lit B",   0x6078E604, 0x003BAE18),
    ("body lit C",   0x6078E7E8, 0x003BADA8),
]

PROFILE_CELL = 0x60C61BE4
EXPECT_PROFILE = 0x00AF3498     # FireBall 476
NEW_PROFILE = 0x00AF3904        # Hammer 759


def load_segments(data):
    """Parse PT_LOAD program headers: (vaddr, filesz, offset, flags)."""
    e_phoff = struct.unpack_from("<I", data, 0x1C)[0]
    e_phentsize = struct.unpack_from("<H", data, 0x2A)[0]
    e_phnum = struct.unpack_from("<H", data, 0x2C)[0]
    segs = []
    for i in range(e_phnum):
        base = e_phoff + i * e_phentsize
        p_type = struct.unpack_from("<I", data, base)[0]
        if p_type != 1:          # PT_LOAD
            continue
        p_offset = struct.unpack_from("<I", data, base + 4)[0]
        p_vaddr = struct.unpack_from("<I", data, base + 8)[0]
        p_filesz = struct.unpack_from("<I", data, base + 16)[0]
        segs.append((p_vaddr, p_filesz, p_offset))
    return segs


_SEGS = []


def va2off(va):
    if not _SEGS:
        raise RuntimeError("segments not initialised")
    for vaddr, filesz, off in _SEGS:
        if vaddr <= va < vaddr + filesz:
            return off + (va - vaddr)
    raise ValueError(f"VA {va:#x} not in any PT_LOAD file-backed range")


def main():
    global _SEGS
    data = open(ELF, "rb").read()
    print(f"ELF size {len(data)}  md5 {hashlib.md5(data).hexdigest()}")
    _SEGS = load_segments(data)
    for vaddr, filesz, off in _SEGS:
        print(f"  PT_LOAD vaddr=0x{vaddr:08X} filesz=0x{filesz:X} off=0x{off:X}")
    print()

    fails = 0
    print("=== INSTRUCTION PATCHES (little-endian byte order) ===")
    for label, va, old, new in PATCHES:
        off = va2off(va)
        got = data[off:off + 4].hex().upper()
        ok = got == old
        if not ok:
            fails += 1
        print(f"  {va:#010x}  {label:40} {'MATCH' if ok else f'MISMATCH got {got} want {old}'}")

    print("\n=== LITERAL CELLS (current -> planned) ===")
    for label, va, newv in LITERALS:
        off = va2off(va)
        cur = struct.unpack_from("<I", data, off)[0]
        print(f"  {va:#010x}  {label:14} cur=0x{cur:08X} -> new=0x{newv:08X}")

    print("\n=== PROFILE POINTER CELL ===")
    off = va2off(PROFILE_CELL)
    cur = struct.unpack_from("<I", data, off)[0]
    ok = cur == EXPECT_PROFILE
    if not ok:
        fails += 1
    print(f"  {PROFILE_CELL:#010x}  cur=0x{cur:08X}  expect=0x{EXPECT_PROFILE:08X}"
          f"  {'MATCH' if ok else 'MISMATCH'}  -> new 0x{NEW_PROFILE:08X}")

    print(f"\nFAILS: {fails}")
    return fails


if __name__ == "__main__":
    sys.exit(0 if main() == 0 else 1)
