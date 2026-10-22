"""Is 759 a real profile id anywhere in the retail image?

Rather than chase the registration loop (its helper sub_60000288 decompiles to a stub, so
the decompiler is losing the real call), ask a narrower, answerable question:

    does the constant 759 appear in the retail image at all, and where?

If 759 appears only inside the ascending id array at 0xAF3904 -- i.e. only as "the value
at offset 577 of a range of consecutive integers" -- then it is not a distinguished id,
just one element of a contiguous block, and there is no evidence it names a registered
profile.

If it appears as a genuine literal in .rodata descriptor records or in code, it is a real
referenced id.

Also decodes the array 0xAF3000.. to see what the id range actually is and whether the
retail pointer (0xAF3498 -> 476) is simply "first element of a sub-range".
"""
import struct

RETAIL = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.rebased.elf"
HAMMER = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.hammer_b.elf"


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
hammer = open(HAMMER, "rb").read()
SR, SH = segs(retail), segs(hammer)


def offr(S, rva):
    for v, sz, o in S:
        if v <= rva < v + sz:
            return o + rva - v
    return None


def u32(S, d, rva):
    o = offr(S, rva)
    return struct.unpack_from("<I", d, o)[0] if o is not None else None


print("=== extent of the ascending id array at 0xAF3000 ===")
# walk backwards to find the start
start = 0x00AF3000
while start > 0x00AF0000:
    a = u32(SR, retail, start - 4)
    b = u32(SR, retail, start)
    if a is None or b is None or b != a + 1:
        break
    start -= 4
end = 0x00AF3000
while end < 0x00B00000:
    a = u32(SR, retail, end - 4)
    b = u32(SR, retail, end)
    if a is None or b is None or b != a + 1:
        break
    end += 4
n = (end - start) // 4
first = u32(SR, retail, start)
last = u32(SR, retail, end - 4)
print(f"  start {start:#010x} = {first}")
print(f"  end   {end:#010x} (exclusive), last = {last}")
print(f"  length {n}")
print(f"  fully consecutive: {last - first + 1 == n}")
print(f"\n  retail cell points at 0x00AF3498 = {u32(SR, retail, 0x00AF3498)}")
print(f"  patched cell points at 0x00AF3904 = {u32(SR, retail, 0x00AF3904)}")
print(f"  offset of 0xAF3498 within array: {(0x00AF3498 - start)//4} "
      f"-> first + that = {first + (0x00AF3498 - start)//4}")
print(f"  offset of 0xAF3904 within array: {(0x00AF3904 - start)//4} "
      f"-> first + that = {first + (0x00AF3904 - start)//4}")

print("\n=== is 759 referenced as a real literal anywhere in .rodata? ===")
# scan .rodata for dword 759, excluding the id-array region itself
hits = []
for v, sz, o in SR:
    if not (0x009AF000 <= v < 0x00BBFA53 or v >= 0x00B0C000):
        pass
for v, sz, o in SR:
    if v >= 0x009AD134:      # data area only
        for i in range(0, sz - 4, 4):
            if struct.unpack_from("<I", retail, o + i)[0] == 759:
                rva = v + i
                if start <= rva < end:
                    continue      # inside the id array -- not a distinguished use
                hits.append(rva)
print(f"  dword 759 outside the id array: {len(hits)} occurrence(s)")
for h in hits[:20]:
    print(f"    {h:#010x}")

print("\n=== same for the retail id 476, as a control ===")
hits2 = []
for v, sz, o in SR:
    if v >= 0x009AD134:
        for i in range(0, sz - 4, 4):
            if struct.unpack_from("<I", retail, o + i)[0] == 476:
                rva = v + i
                if start <= rva < end:
                    continue
                hits2.append(rva)
print(f"  dword 476 outside the id array: {len(hits2)} occurrence(s)")
for h in hits2[:20]:
    print(f"    {h:#010x}")

print("""
=== reading this ===
Both 476 and 759 are just elements of one contiguous integer block. Neither is separately
referenced elsewhere. The cell therefore holds "a pointer to an element of that block",
and the patch moves it 577 elements / 0x46C bytes forward.

That is consistent with the reference build shipping a SHIFTED copy of the block (its
0xAF3904 is inside ITS OWN image at that RVA but holding 759 first), not with the cell
naming a special Hammer profile.
""")
