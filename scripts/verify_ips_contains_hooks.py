"""Verify the built IPS actually contains our Hammer hooks, and that they match the
bytes we originally derived from the verified binary diff.

The build log only lists `hook`/`call` types ("Added patch for hook ..."), because
those need a branch to subsdk0. `instr` and `data` hooks are applied silently in a
later step, so a clean build alone does NOT prove our Hammer bytes landed.

This parses the produced .ips and checks each of our hooks' expected bytes against
what is actually in the patch record. IPS format:
    'PATCH'          5 bytes
    repeated: offset(3 bytes BE) size(2 bytes BE) data[size]
    optional: offset(3) 0x00 0x00  rle_size(2) rle_byte
    'EOF'            3 bytes
An offset record of exactly 4 bytes with value 'EOF' terminates -- distinguishable
because 0x454F46 is also a valid offset, so terminate on the literal bytes at the end.

Also verifies the .ips is a *diff* from the stock image: patch offsets are file
offsets into the original NSO, and our hooks' addresses are in-image addresses.
"""
import struct
import sys

IPS = (r"C:\Users\Saif Khan\Downloads\sweet-dx-main (1)\sweet-dx-main\build"
       r"\output\atmosphere\exefs_patches\0100EA80032EA000"
       r"\AEE6DCCC06D9C05B42061E2019123A61.ips")

data = open(IPS, "rb").read()
assert data[:5] == b"PATCH", f"not an IPS file (magic={data[:5]!r})"

records = {}
i = 5
while i < len(data):
    if data[i:i + 3] == b"EOF":
        break
    if i + 3 > len(data):
        break
    off = int.from_bytes(data[i:i + 3], "big")
    i += 3
    if i + 2 > len(data):
        break
    size = int.from_bytes(data[i:i + 2], "big")
    i += 2
    if size == 0:
        # RLE record
        rle_size = int.from_bytes(data[i:i + 2], "big")
        byte = data[i + 2:i + 3]
        i += 3
        records[off] = byte * rle_size
    else:
        records[off] = data[i:i + size]
        i += size

print(f"IPS: {len(data)} bytes, {len(records)} records")
total = sum(len(v) for v in records.values())
print(f"patched bytes total: {total}")

# Our hooks, as (name, in-image address, expected 4-byte hex or None to just report)
# Addresses are VA - 0x60000000 as used in the .hks files.
OURS = {
    "item_grant mode bitset 0x1FB->0x3FB": 0x465F40,
    "item_grant bitset (2nd site)": 0x46600C,
    "grant handler mov r2,#10": 0x45DDCC,
    "suit colour gate cmp r0,#10": 0x78E6A8,
}

print("\n=== our known Hammer sites, present in the IPS? ===")
# The IPS offsets are NSO body offsets: the .hks address + NSO_HEADER_SIZE (0x100)
# is the file offset used by compile.ts when it calls ips.addPatch.
for name, addr in OURS.items():
    file_off = addr + 0x100
    hit = None
    for off, chunk in records.items():
        if off <= file_off < off + len(chunk):
            hit = (off, chunk[file_off - off: file_off - off + 4])
            break
    if hit:
        print(f"  FOUND  {name}")
        print(f"         hks addr {addr:#08x} -> file off {file_off:#08x}, "
              f"bytes {hit[1].hex()}")
    else:
        print(f"  absent {name}  (hks addr {addr:#08x} -> file off {file_off:#08x})")

print("\n=== interpret ===")
print("  0x465F40 movw r1,#0x3FB would encode as e3 01 3f ... (expect 3fb immediate)")
print("  0x45DDCC mov r2,#10        encodes as 0a 20 a0 e3")
print("  0x78E6A8 cmp r0,#10        encodes as 0a 00 50 e3")

# Cross-check the two we are most confident about byte-wise.
expect = {0x45DDCC: bytes.fromhex("0a20a0e3"),
          0x78E6A8: bytes.fromhex("0a0050e3")}
print("\n=== byte-exact checks ===")
ok = True
for addr, want in expect.items():
    file_off = addr + 0x100
    got = None
    for off, chunk in records.items():
        if off <= file_off < off + len(chunk):
            got = chunk[file_off - off: file_off - off + len(want)]
            break
    status = "MATCH" if got == want else ("DIFFER" if got else "absent")
    if got != want:
        ok = False
    print(f"  {addr:#08x}: want {want.hex()}  got "
          f"{got.hex() if got else '(not in patch)'}  {status}")

sys.exit(0 if ok else 1)
