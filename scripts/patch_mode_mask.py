"""Patch the item-grant mode mask so Ice Flower is admitted.

The gate refuses a power-up when its target mode is not a member of a bitmap. Two functions test that bitmap, and
each materialises the constant with its own MOVW:

    sub_60465D70  RVA 0x465E18   MOVW r1, #0x1FB   returns (0x1FB >> (mode-1)) & 1
    sub_60465E4C  RVA 0x465F40   MOVW r1, #0x1FB   predicate before returning an item id
    sub_60465E4C  RVA 0x46600C   MOVW r1, #0x1FB   the same mask on the other exit path

Bit n of the mask is mode n+1. 0x1FB is 0b0_1111_1011, so bit 2 -- mode 3, Ice Flower -- is clear while every other
power-up is admitted. That is the whole reason an Ice Flower is picked up and discarded.

0x1FF is the same mask with bit 2 set: it admits modes 1..9 and nothing else, matching the `v <= 8` bound the code
already applies.

Two wrong answers this gets right:

  * 0x3FB is the obvious guess and does not work. Bit 2 is still clear; it sets bit 9 instead, which the `<= 8`
    bound means is never consulted. Patching to 0x3FB looks like a fix and changes nothing about Ice Flower.
  * Patching only 0x465F40 leaves sub_60465D70 still refusing mode 3, so the item is still rejected. All three
    sites have to move.

Why the patch is applied to the already-working flat image instead of being rebuilt from the segments: an earlier
build in this repository crashed on boot because it wrote uncompressed offsets into a compressed container. The
image this patches is the one that is known to boot, so exactly three words change and every other byte, including
the header, the segment layout and the block hashes, is left as it was.

MOVW Rd, #imm16 is `cond 0011 0000 imm4 Rd imm12`. The immediate arrives in two pieces, so the new word is built
from imm4/imm12 and then decoded back to prove it holds what was intended.

Usage:
    python scripts/patch_mode_mask.py --dry-run
    python scripts/patch_mode_mask.py --out <dir>
"""
import argparse
import os
import struct
import sys

VERIFIED = (r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\sweetdx\output_verified"
            r"\atmosphere\contents\0100EA80032EA000\exefs\main")

# RVA within .text -> what the site does
SITES = (
    (0x465E18, "sub_60465D70  mode-admission predicate"),
    (0x465F40, "sub_60465E4C  grant gate, comparison path"),
    (0x46600C, "sub_60465E4C  grant gate, return path"),
)

OLD_IMM = 0x1FB
NEW_IMM = 0x1FF


def movw_imm(word):
    """Decode a MOVW's 16-bit immediate so a patch can be checked rather than trusted."""
    return (((word >> 16) & 0xF) << 12) | (word & 0xFFF)


def make_movw(template, imm16):
    """Re-encode MOVW with a new immediate, keeping the template's condition and destination register."""
    return (template & 0xFFF0F000) | (((imm16 >> 12) & 0xF) << 16) | (imm16 & 0xFFF)


def encode_check():
    """Prove the encoder round-trips before it is used on the image."""
    # MOVW r1, #0x1FB is known to appear in the image as E30011FB; the encoder must reproduce it
    if make_movw(0xE30011FB, OLD_IMM) != 0xE30011FB:
        raise SystemExit("  encoder round-trip failed for 0x%03X" % OLD_IMM)
    new = make_movw(0xE30011FB, NEW_IMM)
    if movw_imm(new) != NEW_IMM:
        raise SystemExit("  encoder produced 0x%08X whose immediate is 0x%03X, expected 0x%03X"
                         % (new, movw_imm(new), NEW_IMM))
    return new


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--dry-run", action="store_true")
    ap.add_argument("--out", help="output directory; the image is written as <out>/main")
    args = ap.parse_args()

    if not os.path.exists(VERIFIED):
        raise SystemExit("  the verified image is missing:\n    %s" % VERIFIED)

    buf = bytearray(open(VERIFIED, "rb").read())
    if buf[0:4] != b"NSO0":
        raise SystemExit("  %s is not an NSO" % VERIFIED)

    text_off = struct.unpack_from("<I", buf, 0x10)[0]
    text_size = struct.unpack_from("<I", buf, 0x18)[0]
    print("  source   : %s" % VERIFIED)
    print("  size      : 0x%X   flags 0x%X   text 0x%X..0x%X"
          % (len(buf), struct.unpack_from("<I", buf, 0x0C)[0], text_off, text_off + text_size))

    new_word = encode_check()
    print("  mask     : 0x%03X -> 0x%03X  ->  MOVW word 0x%08X" % (OLD_IMM, NEW_IMM, new_word))

    # read every site before writing any, so a moved target aborts with nothing half-done
    planned = []
    for rva, what in SITES:
        if rva + 4 > text_size:
            raise SystemExit("  site 0x%06X is outside the text segment" % rva)
        at = text_off + rva
        cur = struct.unpack_from("<I", buf, at)[0]
        if movw_imm(cur) != OLD_IMM:
            raise SystemExit("  site 0x%06X holds 0x%08X (immediate 0x%03X), expected immediate 0x%03X.\n"
                             "  The image is not what this patch was written against; refusing to write."
                             % (rva, cur, movw_imm(cur), OLD_IMM))
        planned.append((rva, at, what, cur))

    for rva, at, what, cur in planned:
        struct.pack_into("<I", buf, at, new_word)
        print("    0x%06X  %-42s %08X -> %08X" % (rva, what, cur, new_word))

    # the point of the patch: mode 3 must now pass, and nothing outside 1..9 may be admitted
    admitted = [m for m in range(1, 10) if (NEW_IMM >> (m - 1)) & 1]
    print("  admits modes: %s" % ", ".join(str(m) for m in admitted))
    if admitted != list(range(1, 10)):
        raise SystemExit("  mask admits %r, expected modes 1..9" % admitted)

    if args.dry_run:
        print("  dry run: nothing written")
        return 0

    if not args.out:
        raise SystemExit("  --out <dir> is required to write, or pass --dry-run")

    os.makedirs(args.out, exist_ok=True)
    dest = os.path.join(args.out, "main")
    open(dest, "wb").write(bytes(buf))
    print("  wrote    : %s  (%d bytes)" % (dest, len(buf)))

    # re-read the file rather than trust the buffer we just wrote
    check = open(dest, "rb").read()
    if len(check) != len(buf):
        raise SystemExit("  written file is a different length")
    for rva, _ in SITES:
        w = struct.unpack_from("<I", check, text_off + rva)[0]
        if movw_imm(w) != NEW_IMM:
            raise SystemExit("  verification failed at 0x%06X: immediate 0x%03X" % (rva, movw_imm(w)))
    print("  verified : all three sites read immediate 0x%03X in the written file" % NEW_IMM)
    return 0


if __name__ == "__main__":
    sys.exit(main())
