"""Is profile 769 (what mode 10 would index) a registered profile, or a null slot?

The profile-cell hook swaps a table:
    retail  [0xC61BE4] = 0x00AF3498 -> {476, 477, 478, ...}
    patched [0xC61BE4] = 0x00AF3904 -> {759, 760, 761, ...}

Both are tight runs of consecutive ids, so the swap is like-for-like in FORM. The
question is what happens at the index the game actually uses for mode 10.

Profile::get(unsigned) lives at 0x182A0. Read it to find the profile POINTER ARRAY,
then check whether entries 759 and 769 are non-null (registered) or null (dangling).
A null builder in a spawned power-up is exactly how "touch the Hammer -> crash" happens.
"""
import struct

from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM

RETAIL = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.rebased.elf"
GET = 0x000182A0


def segs(d):
    ph = struct.unpack_from("<I", d, 0x1C)[0]
    e = struct.unpack_from("<H", d, 0x2A)[0]
    n = struct.unpack_from("<H", d, 0x2C)[0]
    out = []
    for i in range(n):
        b = ph + i * e
        if struct.unpack_from("<I", d, b)[0] != 1:
            continue
        off = struct.unpack_from("<I", d, b + 4)[0]
        va = struct.unpack_from("<I", d, b + 8)[0]
        fs = struct.unpack_from("<I", d, b + 16)[0]
        if va >= 0x60000000:
            out.append((va - 0x60000000, fs, off))
    return out


retail = open(RETAIL, "rb").read()
S = segs(retail)
md = Cs(CS_ARCH_ARM, CS_MODE_ARM)
md.detail = True


def off(rva):
    for v, sz, o in S:
        if v <= rva < v + sz:
            return o + rva - v
    return None


def rd(rva, n):
    o = off(rva)
    return retail[o:o + n] if o is not None else None


print("=== disassembly of Profile::get (0x182A0) ===")
rva = GET
for i in range(14):
    o = off(rva)
    if o is None:
        break
    w = struct.unpack_from("<I", retail, o)[0]
    ins = next(md.disasm(struct.pack("<I", w), 0x60000000 + rva), None)
    txt = f"{ins.mnemonic} {ins.op_str}" if ins else "?"
    extra = ""
    # if this is a pc-relative ldr, show the literal it loads
    if ins and ins.mnemonic in ("ldr", "add") and ins.operands:
        for op in ins.operands:
            if op.type == 2 and op.mem.base == 15:
                lt = rva + 8 + op.mem.disp
                lit = rd(lt, 4)
                if lit:
                    lv = struct.unpack("<I", lit)[0]
                    extra = f"   [literal @ {lt:#x} = {lv:#010x}]"
    print(f"  {rva:#010x}  {w:08x}  {txt}{extra}")
    rva += 4

print("""
=== searching for the profile pointer array ===
Profile::get typically does:  return sProfiles[id];
i.e. load a base, then ldr with scaled index. Look for the literal base address used.
""")

# Heuristic: scan .data for a long run of pointers that all point into .text, which is
# what an array of Profile* / Profile objects looks like.
print("=== candidate profile-record arrays in .data ===")
for base in range(0x00AF0000, 0x00B00000, 0x1000):
    b = rd(base, 0x40)
    if not b:
        continue
print("  (skipped heuristic scan)")

print("\n=== direct check: profile ids 759 and 769 in the id->profile mapping ===")
for pid in (476, 759, 769):
    found = None
    # the id table blocks are consecutive ints; find which block contains pid
    for base in (0x00AF3498, 0x00AF3904, 0x00AF0000, 0x00AF2000, 0x00AF3000):
        b = rd(base, 0x200)
        if not b:
            continue
        vals = [struct.unpack_from("<I", b, i)[0] for i in range(0, 0x200, 4)]
        if pid in vals:
            idx = vals.index(pid)
            found = (base, idx)
            break
    print(f"  profile id {pid}: first found in block {found[0]:#x} at index {found[1]}"
          if found else f"  profile id {pid}: not found in scanned blocks")
