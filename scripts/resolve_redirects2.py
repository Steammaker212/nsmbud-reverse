#!/usr/bin/env python3
"""Rigorously resolve every redirected literal to its effective add-pc target.

For each changed literal cell:
  - locate the `ldr rX, [pc, #imm]` whose computed pool address == the cell
  - locate the following `add rD, pc, rX`
  - effective target = add_addr + 8 + value_stored_in_cell
"""
import re
import struct
import sys

try:
    from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM
except ImportError:
    print("capstone required")
    sys.exit(2)

SRC = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.rebased.elf"
OUT = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.hammer_b.elf"
HEIGHT = 0x60B493A8
BODY = 0x60B493D8
BLOCK_END = 0x60B49448


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


def rd32(data, s, va):
    o = off(s, va)
    if o is None or o + 4 > len(data):
        return None
    return struct.unpack_from("<I", data, o)[0]


a = open(SRC, "rb").read()
b = open(OUT, "rb").read()
SA, SB = segs(a), segs(b)
md = Cs(CS_ARCH_ARM, CS_MODE_ARM)

# text extent for scanning
TEXT_LO, TEXT_HI = 0x60000288, 0x609AD3BC

# Find all changed 4-byte literal cells in .text that look like RVA offsets
print("=== scanning .text for changed literal-pool cells ===")
cells = []
for va in range(TEXT_LO, TEXT_HI, 4):
    oa, ob = off(SA, va), off(SB, va)
    if oa is None or ob is None:
        continue
    wa = struct.unpack_from("<I", a, oa)[0]
    wb = struct.unpack_from("<I", b, ob)[0]
    if wa == wb:
        continue
    # candidate redirect: value looks like an RVA into .rodata/.data
    if 0x00300000 <= wb <= 0x00D00000:
        cells.append((va, wa, wb))

print(f"found {len(cells)} changed cells with RVA-like values\n")

print(f"{'cell':>12} {'ldr':>12} {'pool':>12} {'add':>12} "
      f"{'target':>12}  classification")
print("-" * 84)
results = []
for cell, wa, wb in cells:
    # find ldr [pc,#imm] whose pool == cell, within 0x200 bytes back
    found = None
    for back in range(4, 0x400, 4):
        cand = cell - back
        o = off(SB, cand)
        if o is None:
            continue
        for ins in md.disasm(b[o:o + 4], cand):
            if ins.mnemonic == "ldr":
                m = re.search(r"\[pc, #(0x[0-9a-f]+)\]", ins.op_str)
                if m:
                    pool = cand + 8 + int(m.group(1), 16)
                    if pool == cell:
                        found = (cand, ins)
                        break
        if found:
            break
    if not found:
        print(f"{cell:#12x} {'?':>12} {'?':>12} {'?':>12} {'?':>12}  "
              f"no ldr found (wa=0x{wa:08X} wb=0x{wb:08X})")
        continue
    ldr_at, ldr_ins = found
    rm = ldr_ins.op_str.split(",")[0].strip()

    # find the add rD, pc, rm shortly after
    add_at = None
    for fwd in range(4, 0x40, 4):
        cand = ldr_at + fwd
        o = off(SB, cand)
        if o is None:
            continue
        for ins in md.disasm(b[o:o + 4], cand):
            if ins.mnemonic == "add" and "pc" in ins.op_str and rm in ins.op_str:
                add_at = cand
                break
        if add_at:
            break

    target = None
    if add_at:
        val = rd32(b, SB, cell)
        target = (add_at + 8 + val) & 0xFFFFFFFF

    if target == HEIGHT:
        cls = "HEIGHT table"
    elif target == BODY:
        cls = "BODY table"
    elif HEIGHT <= target < BLOCK_END:
        cls = f"inside reloc block +0x{target - HEIGHT:X}"
    elif 0x60A00000 <= target < 0x60D00000:
        cls = f"other .rodata/data 0x{target:08X}"
    else:
        cls = "UNEXPECTED"

    print(f"{cell:#12x} {ldr_at:#12x} {cell:#12x} "
          f"{(f'{add_at:#x}' if add_at else '?'):>12} "
          f"{(f'0x{target:08X}' if target else '?'):>12}  {cls}")
    results.append((cell, add_at, target, cls))

print("\n=== summary ===")
for cell, add_at, target, cls in results:
    print(f"  {cell:#010x} -> {cls}")
