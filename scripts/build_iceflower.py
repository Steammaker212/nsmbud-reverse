"""Rebuild the Ice Flower test image by repacking only the .text segment.

The first attempt at this crashed on boot, and the reason is worth recording because it was not the game code:

    Unhandled exception: ArgumentOutOfRangeException
      at NsoExecutable.DecompressSection(...) line 62

That is the container failing to parse, not the patched instruction being wrong. The header I wrote had the fields
in the wrong slots. The correct NSO0 header, from switchbrew, is a run of file offset / memory offset / size triples:

    0x10 TextFileOffset   0x14 TextMemoryOffset  0x18 TextSize
    0x20 RoFileOffset     0x24 RoMemoryOffset    0x28 RoSize
    0x30 DataFileOffset   0x34 DataMemoryOffset  0x38 DataSize
    0x3C BssSize

I had been writing segment *lengths* into 0x24 and 0x30, which are memory-offset fields, and putting a file offset
into 0x28, which is RoSize. RoSize came out as 0x00BBF4E4 -- far larger than the real rodata -- so the loader asked
for a range past the end of the file and threw.

The safe way to build this image: take the header from the image that is known to boot and change nothing in it. All
three segments keep their working file offsets, and only the bytes at the three patch sites change.

This keeps flags = 0 (uncompressed), which is what the working build used.

Usage:
    python scripts/build_iceflower.py
"""
import hashlib
import os
import struct
import sys

BASE = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\sweetdx"

# The container supplies the header and the segment layout; the segment *contents* come from retail.
# output_verified is the Hammer experiment and already carries CMP #9 at 0x465F34/0x466000 and the 0x3FB mask at
# 0x465F40/0x46600C, so using its .text as the base would silently inherit a mode-10 change.
CONTAINER = os.path.join(BASE, r"output_verified\atmosphere\contents\0100EA80032EA000\exefs\main")
TEXT_DEC = os.path.join(BASE, r"nso\text.dec")
RO_DEC = os.path.join(BASE, r"nso\rodata.dec")
DATA_DEC = os.path.join(BASE, r"nso\data.dec")

OUT = os.path.join(BASE, r"output_iceflower\atmosphere\contents\0100EA80032EA000\exefs\main")

# retail .bss size. The container carried 0 here; see the note in main() before changing this.
BSS_SIZE = 0x00055D8C

# RVA within .text -> (expected retail word, patched word)
PATCH = {
    0x465E18: (0xE30011FB, 0xE30011FF),   # sub_60465D70  mode-admission predicate
    0x465F40: (0xE30011FB, 0xE30011FF),   # sub_60465E4C  grant gate, comparison path
    0x46600C: (0xE30011FB, 0xE30011FF),   # sub_60465E4C  grant gate, return path
}


def movw_imm(word):
    return (((word >> 16) & 0xF) << 12) | (word & 0xFFF)


def main():
    for p in (CONTAINER, TEXT_DEC, RO_DEC, DATA_DEC):
        if not os.path.exists(p):
            raise SystemExit("  missing input: %s" % p)

    cont = open(CONTAINER, "rb").read()
    if cont[0:4] != b"NSO0":
        raise SystemExit("  container is not an NSO")

    text_off = struct.unpack_from("<I", cont, 0x10)[0]
    text_size = struct.unpack_from("<I", cont, 0x18)[0]
    ro_off = struct.unpack_from("<I", cont, 0x20)[0]
    ro_size = struct.unpack_from("<I", cont, 0x28)[0]
    data_off = struct.unpack_from("<I", cont, 0x30)[0]
    data_size = struct.unpack_from("<I", cont, 0x38)[0]

    text = bytearray(open(TEXT_DEC, "rb").read())
    ro = open(RO_DEC, "rb").read()
    data = open(DATA_DEC, "rb").read()

    print("  container: %s" % CONTAINER)
    print("  header   : flags 0x%X  bss 0x%X"
          % (struct.unpack_from("<I", cont, 0x0C)[0], struct.unpack_from("<I", cont, 0x3C)[0]))
    print("  layout   : text 0x%X+0x%X  ro 0x%X+0x%X  data 0x%X+0x%X"
          % (text_off, text_size, ro_off, ro_size, data_off, data_size))
    print("  segments : text 0x%X  ro 0x%X  data 0x%X  (from retail)" % (len(text), len(ro), len(data)))

    if len(text) != text_size:
        raise SystemExit("  retail .text is 0x%X bytes, container expects 0x%X" % (len(text), text_size))
    if len(ro) != ro_size:
        raise SystemExit("  retail .rodata is 0x%X bytes, container expects 0x%X" % (len(ro), ro_size))
    if len(data) != data_size:
        raise SystemExit("  retail .data is 0x%X bytes, container expects 0x%X" % (len(data), data_size))
    if text_off + text_size != ro_off:
        raise SystemExit("  .text does not end where .rodata begins")
    gap = data_off - (ro_off + ro_size)
    if not 0 <= gap < 4:
        raise SystemExit("  gap between .rodata and .data is %d bytes, expected < 4" % gap)
    print("  layout   : segments account for all %d bytes (alignment padding %d)"
          % (text_off + text_size + ro_size + gap + data_size, gap))

    original = {}
    for rva, (want, _new) in PATCH.items():
        cur = struct.unpack_from("<I", text, rva)[0]
        if cur != want:
            raise SystemExit("  retail .text at 0x%06X holds 0x%08X, expected 0x%08X"
                             % (rva, cur, want))
        original[rva] = cur

    for rva, (_want, new) in PATCH.items():
        struct.pack_into("<I", text, rva, new)

    img = bytes(cont[:text_off]) + bytes(text) + ro + b"\0" * gap + data
    if len(img) != len(cont):
        raise SystemExit("  rebuilt image is 0x%X bytes, container is 0x%X" % (len(img), len(cont)))

    # BssSize was 0 in the container this borrows from, and inheriting that is a defect worth stating plainly:
    # retail declares 0x55D8C bytes of zeroed memory past .data, ending at 0x60CD1000, and the power-up gate's
    # own guard variable dword_60C7B378 lives in that range. With BssSize 0 the loader never maps it. The retail
    # value is restored rather than inherited.
    img = bytearray(img)
    struct.pack_into("<I", img, 0x3C, BSS_SIZE)
    img = bytes(img)

    os.makedirs(os.path.dirname(OUT), exist_ok=True)
    open(OUT, "wb").write(img)

    print("  wrote    : %s" % OUT)
    print("  size     : 0x%X   md5 %s" % (len(img), hashlib.md5(img).hexdigest().upper()))
    for rva in sorted(PATCH):
        old, new = original[rva], PATCH[rva][1]
        print("   0x%06X  %08X -> %08X   (MOVW r1, #0x%03X -> #0x%03X)"
              % (rva, old, new, movw_imm(old), movw_imm(new)))

    check = open(OUT, "rb").read()
    # The header is the container's except for BssSize, which is set deliberately above. Anything else moving
    # would mean the container is not what this script believes it is.
    if check[:0x3C] != cont[:0x3C] or check[0x40:text_off] != cont[0x40:text_off]:
        raise SystemExit("  header changed outside BssSize")
    if struct.unpack_from("<I", check, 0x3C)[0] != BSS_SIZE:
        raise SystemExit("  BssSize was not written")
    moved = [i for i in range(text_off, text_off + text_size, 4)
             if check[i:i + 4] != cont[i:i + 4]]
    print("  header   : identical to the container except BssSize (0 -> 0x%X)" % BSS_SIZE)
    print("  vs cont. : %d word(s) differ" % len(moved))
    for i in moved:
        print("    0x%06X  %08X -> %08X"
              % (i - text_off, struct.unpack_from("<I", cont, i)[0], struct.unpack_from("<I", check, i)[0]))

    # The container is the Hammer experiment, so our image MUST differ from it at the four Hammer words reverted
    # plus our three patch sites. Comparing against the container is therefore not a correctness test; comparing
    # against retail is. The Hammer words reverting is the point, not a fault.
    retail = open(TEXT_DEC, "rb").read()
    vs_retail = [i for i in range(0, text_size, 4)
                 if check[text_off + i:text_off + i + 4] != retail[i:i + 4]]
    print("  vs retail: %d word(s) differ (expected exactly %d)" % (len(vs_retail), len(PATCH)))
    for i in vs_retail:
        print("    0x%06X  %08X -> %08X"
              % (i, struct.unpack_from("<I", retail, i)[0], struct.unpack_from("<I", check, text_off + i)[0]))
    if {i for i in vs_retail} != set(PATCH):
        raise SystemExit("  image differs from retail at %r, expected exactly %r"
                         % ([hex(x) for x in vs_retail], [hex(x) for x in sorted(PATCH)]))
    return 0


if __name__ == "__main__":
    sys.exit(main())
