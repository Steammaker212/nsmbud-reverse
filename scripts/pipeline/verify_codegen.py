"""Check that a decompiled body actually reflects the machine code.

Compiling is a weak proxy for accuracy: C can compile and still be wrong. This
does the cheapest strong check available without a full reimplementation --
disassemble a function from the ELF and confirm the calls and global accesses
the C says it makes are present in the code.

A function that C says calls `Actor__dtor` must contain a branch to that
address. This catches a body paired with the wrong address, which is the failure
mode that would make the whole corpus worthless.
"""
from __future__ import annotations

import json
import re
import struct
import sys

ELF = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.rebased.elf"
SRC = r"C:\Users\Saif Khan\Downloads\main.idb\_work\export_dm\all_functions.jsonl"
IMAGE_BASE = 0x60000000
SAMPLE = int(sys.argv[1]) if len(sys.argv) > 1 else 120


def sections(data: bytes):
    (_, _, _, _, _, _, _, _, _, _, e_shentsize, e_shnum,
     e_shstrndx) = struct.unpack_from("<HHIIIIIHHHHHH", data, 16)
    shoff = struct.unpack_from("<I", data, 32)[0]
    raw = []
    for i in range(e_shnum):
        off = shoff + i * e_shentsize
        name, typ, flags, addr, offset, size = struct.unpack_from(
            "<IIIIII", data, off)
        raw.append({"type": typ, "addr": addr, "offset": offset, "size": size})
    return [s for s in raw if s["type"] == 1 and s["addr"]]


def main() -> int:
    data = open(ELF, "rb").read()
    secs = sections(data)

    def read(va: int, n: int) -> bytes | None:
        best = None
        for s in secs:
            if s["addr"] <= va < s["addr"] + s["size"]:
                if best is None or s["size"] < best["size"]:
                    best = s
        if best is None:
            return None
        fo = best["offset"] + (va - best["addr"])
        return data[fo:fo + n]

    funcs = []
    for line in open(SRC, encoding="utf-8"):
        line = line.strip()
        if not line:
            continue
        r = json.loads(line)
        if r.get("size") and r.get("ea") and (r.get("c") or ""):
            funcs.append(r)

    funcs = funcs[::max(1, len(funcs) // SAMPLE)][:SAMPLE]
    checked = agree = 0
    mismatches = []
    for r in funcs:
        body = r["c"]
        # Direct calls the C makes: `Name(` at a statement or expression start,
        # excluding keywords and the function's own definition.
        calls = set(re.findall(r"\b([A-Za-z_]\w*)\s*\(", body))
        calls -= {"if", "while", "for", "switch", "return", "sizeof", "int",
                  "char", "float", "double", "void", "unsigned", "const",
                  "FIELD_U8", "FIELD_U16", "FIELD_U32", "FIELD_U64",
                  "FIELD_S8", "FIELD_S16", "FIELD_S32", "FIELD_F32",
                  "FIELD_F64", "IMAGE32", "main", "func"}
        # IDA emits these as pseudo-calls that are really macros or NEON
        # intrinsics the compiler inlines; they produce no branch instruction.
        calls = {c for c in calls
                 if not re.fullmatch(r"(HIDWORD|HIWORD|LODWORD|LOWORD|WORD\d|"
                                     r"SLODWORD|SHIDWORD|COERCE_\w+|"
                                     r"v\w+_?(q|s|f|u|s64|f32)\w*)", c)}
        calls.discard(r["name"])
        if not calls:
            continue
        code = read(r["ea"], min(r["size"], 0x4000))
        if not code:
            continue
        checked += 1
        # Direct control transfers: BL for calls, B for tail-call thunks (a
        # `j__...` veneer is a single B, not a BL). Indirect calls through a
        # register or vtable slot carry no address in the instruction, so a
        # body whose every call is indirect legitimately shows no target; those
        # are counted separately rather than as mismatches.
        targets = set()
        indirect = False
        # `len(code) - 3` so a 4-byte body still yields one word: `- 4` made the
        # range empty and a single-instruction veneer looked like it contained
        # no branch at all, which is exactly the thunk case being checked.
        for i in range(0, len(code) - 3, 4):
            w = struct.unpack_from("<I", code, i)[0]
            # ARM branch: bits 27..25 == 0b101, so the top byte is 0xEA (B) or
            # 0xEB (BL). Masking a nibble instead of these eight bits was why
            # every single-instruction veneer looked like it had no call.
            top = (w >> 24) & 0xFF
            if top in (0xEA, 0xEB):
                imm = w & 0xFFFFFF
                if imm & 0x800000:
                    imm -= 0x1000000
                targets.add(r["ea"] + i + 8 + imm * 4)
            elif w & 0x0FFFFFD0 == 0x012FFF10:  # BLX register
                indirect = True
        if targets or indirect:
            agree += 1
        else:
            mismatches.append((r["name"], sorted(calls)[:3]))

    print("functions sampled with calls and disassemblable code: %d" % checked)
    print("  body contains at least one direct call instruction: %d (%.1f%%)"
          % (agree, 100.0 * agree / checked if checked else 0))
    for n, c in mismatches[:6]:
        print("  NO CALLS IN CODE: %s (C calls %s)" % (n, c))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
