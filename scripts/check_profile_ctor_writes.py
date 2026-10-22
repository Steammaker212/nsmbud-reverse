"""Does the Profile constructor overwrite the retail profile array?

code/pukupuku.cpp ends with two file-scope objects:
    const Profile pukupukuProfile(&Pukupuku::build, ProfileId::Pukupuku,  ...);
    const Profile pukupukuTogeProfile(&PukupukuToge::build, ProfileId::PukupukuToge, ...);

ProfileId::Pukupuku and ::PukupukuToge are RETAIL ids (530 / 539), not custom ids.
Their constructors therefore run at subsdk load time and receive retail ids.

Profile::get (0x182A0) indexes an array at runtime address 0x00C7C308, which is .bss and
gets populated by the game's own init. If the 0x60017F6C constructor WRITES
`profiles[id] = this`, then our two objects install themselves over retail profiles
530 and 539 -- replacing the game's real Pukupuku/Spiny-Cheep definitions with our
reconstruction, whose buildFunc points into our subsdk0.

That would be a severe, broad change: every Cheep Cheep in the game would run our code,
and if our stub object is missing anything the real one has (model, actorInfo, resources)
the result is misrendering AND a crash.

This disassembles 0x60017F6C and reports whether it stores to the profile array.
"""
import struct

from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM

RETAIL = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.rebased.elf"
CTOR = 0x00017F6C
GET = 0x000182A0

# From Profile::get disassembly: literal 0x00C6404C at 0x182BC, base = pc + that.
# Verified separately; the array base is 0x00C7C308 (in .bss).
ARRAY_BASE = 0x00C7C308


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


def rd(rva, n=4):
    o = off(rva)
    return retail[o:o + n] if o is not None else None


print("=== Profile constructor @ 0x60017F6C (first 40 instructions) ===")
rva = CTOR
calls = []
stores_to_array = []
for i in range(40):
    o = off(rva)
    if o is None:
        break
    w = struct.unpack_from("<I", retail, o)[0]
    ins = next(md.disasm(struct.pack("<I", w), 0x60000000 + rva), None)
    if ins is None:
        rva += 4
        continue
    note = ""
    if ins.mnemonic in ("bl", "blx"):
        calls.append((rva, ins.op_str))
        note = "   <== CALL"
    if ins.mnemonic.startswith("str") and ARRAY_BASE:
        note += "   [store]"
    print(f"  {rva:#010x}  {w:08x}  {ins.mnemonic} {ins.op_str}{note}")
    # stop at return
    if ins.mnemonic in ("bx",) and "lr" in ins.op_str:
        break
    if ins.mnemonic == "pop" and "pc" in ins.op_str:
        break
    rva += 4

print(f"\n=== calls made by the constructor ===")
for a, t in calls:
    print(f"  {a:#010x}  bl {t}")

print(f"""
=== what this means for our two file-scope Profile objects ===
Array base (from Profile::get): {ARRAY_BASE:#010x}  (in .bss, filled at runtime)

Our subsdk0 static initialisers run when the subsdk is loaded. The constructor above is
the RETAIL one (called through our symbol table), so it behaves exactly as the game's
own registration does. Given a retail id (530 / 539), it will occupy that slot.

If the constructor stores `this` into the array, then loading our subsdk REPLACES the
game's own Pukupuku (530) and PukupukuToge (539) profiles with our reconstructions.
Every Cheep Cheep / Spiny Cheep Cheep in every level would then be built by our code.
Our reconstruction sets `mpModel` from ModelWrapper::create("pukupuku","pukupuku") and
leaves `mpResource` null, and it does not reproduce the full retail behaviour -- so
misrendering and crashes are expected consequences.
""")

print("=== do our two ids land in the array? ===")
for pid in (530, 539):
    print(f"  id {pid}: index {pid} of 914 -> in range, slot {ARRAY_BASE + pid*4:#010x}")
