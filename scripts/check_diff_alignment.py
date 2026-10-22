"""Is the byte diff word-aligned? This decides whether our hooks corrupt neighbours.

HOW THE HOOKS WERE MADE
=======================
They were generated from the byte diff between the retail image and
convertedmain.hammer_b.elf, grouped into 4-byte words and emitted as
`instr`/`data` hooks. That is only safe if every differing byte is word-aligned and
each differing word changes as a whole.

If the underlying change is, say, 3 bytes starting at an offset that is NOT a multiple
of 4, then the containing word spans two unrelated entities, and writing that whole
word clobbers the neighbour. In .text that means corrupting an adjacent instruction or
data word -- exactly the kind of damage that shows up as rendering corruption.

This reports, for every contiguous run of differing bytes:
  * start offset and whether it is 4-aligned
  * length and whether the length is a multiple of 4
  * the bytes in both images
and totals how many runs are misaligned.
"""
import struct

RETAIL = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.rebased.elf"
HAMMER = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.hammer_b.elf"

BASE = 0x60000000


def segs(d):
    ph = struct.unpack_from("<I", d, 0x1C)[0]
    e = struct.unpack_from("<H", d, 0x2A)[0]
    n = struct.unpack_from("<H", d, 0x2C)[0]
    out = []
    for i in range(n):
        b = ph + i * e
        ptype = struct.unpack_from("<I", d, b)[0]
        off = struct.unpack_from("<I", d, b + 4)[0]
        va = struct.unpack_from("<I", d, b + 8)[0]
        fs = struct.unpack_from("<I", d, b + 16)[0]
        out.append((va, fs, off, ptype))
    return out


retail = open(RETAIL, "rb").read()
hammer = open(HAMMER, "rb").read()

# Build an RVA -> byte map for both, using file offsets consistently. Both images are
# the same size per our earlier MD5/size checks, so compare byte-for-byte on file
# offsets, then convert to RVA with the segment table.
assert len(retail) == len(hammer), (len(retail), len(hammer))

SR = segs(retail)


def off2rva(off):
    for va, fs, o, ptype in SR:
        if ptype == 1 and o <= off < o + fs and va >= BASE:
            return va - BASE + (off - o)
    return None


runs = []
i = 0
n = len(retail)
while i < n:
    if retail[i] != hammer[i]:
        start = i
        while i < n and retail[i] != hammer[i]:
            i += 1
        runs.append((start, i - start))
    else:
        i += 1

print(f"total differing bytes: {sum(l for _, l in runs)}")
print(f"contiguous runs:       {len(runs)}")

aligned_start = sum(1 for o, l in runs if o % 4 == 0)
aligned_len = sum(1 for o, l in runs if l % 4 == 0)
both = sum(1 for o, l in runs if o % 4 == 0 and l % 4 == 0)

print(f"runs starting 4-aligned: {aligned_start}/{len(runs)}")
print(f"runs with length multiple of 4: {aligned_len}/{len(runs)}")
print(f"runs both aligned (safe as whole words): {both}/{len(runs)}")

print("\n=== every run ===")
print(f"{'#':>3} {'file off':<10} {'rva':<10} {'len':>3} {'aligned':<8} {'retail':<14} {'hammer'}")
print("-" * 82)
bad = []
for idx, (off, ln) in enumerate(runs):
    rva = off2rva(off)
    ok = (off % 4 == 0) and (ln % 4 == 0)
    if not ok:
        bad.append((off, ln, rva))
    rbytes = retail[off:off + ln].hex()
    hbytes = hammer[off:off + ln].hex()
    print(f"{idx:>3} {off:#010x} "
          f"{(rva if rva is not None else 0):#010x} {ln:>3} "
          f"{'ok' if ok else 'MISALIGNED':<8} {rbytes:<14} {hbytes}")

print(f"\n=== misaligned runs: {len(bad)} ===")
for off, ln, rva in bad:
    print(f"  file {off:#010x}  rva {rva if rva is None else hex(rva)}  "
          f"len {ln}  (start%4={off % 4}, len%4={ln % 4})")
