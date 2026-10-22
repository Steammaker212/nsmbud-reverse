#!/usr/bin/env python3
"""Prove clang assembles our patch instructions to the EXACT patched bytes.

Mirrors sweet-dx's brazo.assembleInstruction: write one instruction to a .s with
`.section ".instruction"`, compile with the same flags, then read that section's
bytes straight out of the ELF (the section is not ALLOC, so objcopy -O binary
silently drops it -- parse the section header instead).
"""
import os
import struct
import subprocess
import tempfile

try:
    from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM
except ImportError:
    raise SystemExit("capstone required")

ELF_SRC = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.rebased.elf"
ELF_OUT = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.hammer_b.elf"

FLAGS = [
    "--no-default-config",
    "--target=armv7l-none-eabihf",
    "-mcpu=cortex-a57",
    "-mfpu=crypto-neon-fp-armv8",
    "-mfloat-abi=hard",
    "-mabi=aapcs-linux",
    "-fPIC",
    "-nostdlib",
    "-fno-rtti",
    "-fno-exceptions",
    "-fpermissive",
    "-c",
]


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


def read_section(data, name):
    """Return the raw bytes of a named ELF32 section."""
    shoff = struct.unpack_from("<I", data, 0x20)[0]
    shentsize = struct.unpack_from("<H", data, 0x2E)[0]
    shnum = struct.unpack_from("<H", data, 0x30)[0]
    shstrndx = struct.unpack_from("<H", data, 0x32)[0]
    stro = struct.unpack_from("<I", data, shoff + shstrndx * shentsize + 16)[0]
    for i in range(shnum):
        b = shoff + i * shentsize
        nmoff = struct.unpack_from("<I", data, b)[0]
        end = data.index(b"\0", stro + nmoff)
        if data[stro + nmoff:end].decode() == name:
            soff = struct.unpack_from("<I", data, b + 16)[0]
            size = struct.unpack_from("<I", data, b + 20)[0]
            return data[soff:soff + size]
    return None


def assemble(text):
    """Assemble one instruction the way brazo.assembleInstruction does."""
    with tempfile.TemporaryDirectory() as td:
        s = os.path.join(td, "t.s")
        o = os.path.join(td, "t.o")
        with open(s, "w", encoding="utf-8") as f:
            f.write('.section ".instruction"\n.arm\n'
                    f'.fpu crypto-neon-fp-armv8\n    {text.strip()}\n')
        r = subprocess.run(["clang++", *FLAGS, s, "-o", o],
                           capture_output=True, text=True)
        if r.returncode:
            return None, r.stderr.strip().splitlines()[-1][:180]
        with open(o, "rb") as f:
            data = f.read()
        sec = read_section(data, ".instruction")
        if sec is None:
            return None, "no .instruction section"
        if len(sec) != 4:
            return None, f"expected 4 bytes, got {len(sec)}"
        return struct.unpack("<I", sec)[0], None


md = Cs(CS_ARCH_ARM, CS_MODE_ARM)

if __name__ == "__main__":
    a = open(ELF_SRC, "rb").read()
    b = open(ELF_OUT, "rb").read()
    SA, SB = segs(a), segs(b)

    SAMPLES = [
        0x60465F34,  # cmp r0, #9
        0x60465F40,  # movw r1, #0x3fb
        0x6078E6A8,  # cmp r0, #0xa
        0x6078E6B4,  # moveq r1, #2
        0x607A2708,  # canChangeTo movhi
        0x6013FB38,  # direction UBFX
        0x60B0C328,  # nop-ish data word (expect mismatch, not an instruction)
    ]

    print("=== clang round-trip: instruction -> bytes -> must equal patched ===")
    ok = bad = 0
    for va in SAMPLES:
        o = off(SB, va)
        if o is None:
            continue
        word = struct.unpack_from("<I", b, o)[0]
        ins = next(iter(md.disasm(struct.pack("<I", word), va)), None)
        if not ins:
            print(f"  {va:#010x}  {word:08X}  <not decodable as ARM>")
            continue
        text = f"{ins.mnemonic} {ins.op_str}"
        got, err = assemble(text)
        good = got == word
        if good:
            ok += 1
        else:
            bad += 1
        print(f"  {va:#010x}  {word:08X}  {text:30} -> "
              f"{(f'{got:08X}' if got is not None else 'FAIL')}"
              f"{'  OK' if good else '  <<< MISMATCH'}")
        if err:
            print(f"      {err}")

    print(f"\n  {ok} matched, {bad} mismatched")
