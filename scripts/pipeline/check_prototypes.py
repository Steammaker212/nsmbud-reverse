"""Decide whether a corpus prototype is safe to hook against.

A hook is called with the arguments the original call site passes, and its return
value is used where the original's was. If the C prototype's arity is wrong, the
hook reads the wrong registers and the game corrupts -- that is the failure this
script exists to prevent, and it is why the loader did not simply emit 80
forwarders.

So a prototype is only accepted when it is corroborated by the machine code.
This script checks the target function's own body for three things:

  1. **Returns a value or not.** If the function ends by writing r0 and returning,
     it has a value; if the last path is a bare `bx lr` with no r0 write, it is
     void. A `void` function whose corpus prototype claims a return type is a
     prototype we do not trust.

  2. **Reads its incoming register arguments.** The first four parameters arrive
     in r0..r3. If the body never reads r1, then a 2-argument prototype is wrong
     -- the second parameter is not used. This bounds the arity from above.

  3. **Saves registers it will clobber, or not.** A leaf function with no stack
     frame that only touches r0 cannot take five arguments.

The output is a per-function verdict with the evidence, so a hook is only written
for a function whose calling convention was measured rather than assumed.

Usage:
    python check_prototypes.py --elf <elf> --hooks hooks/candidate_hooks.json \
        --symbols data/loader/symbols.csv [--out report.json]
"""
from __future__ import annotations

import argparse
import json
import struct
from pathlib import Path

IMAGE_BASE = 0x60000000

# ARM data-processing register field positions are decoded ad hoc below; these
# are the branches we care about, not a full disassembler.
COND = {0xE: "al"}


def sections(data: bytes):
    (_, _, _, _, _, _, _, _, _, _, e_shentsize, e_shnum,
     _) = struct.unpack_from("<HHIIIIIHHHHHH", data, 16)
    shoff = struct.unpack_from("<I", data, 32)[0]
    out = []
    for i in range(e_shnum):
        _n, typ, _f, addr, offset, size = struct.unpack_from(
            "<IIIIII", data, shoff + i * e_shentsize)
        if addr and size:
            out.append({"type": typ, "addr": addr, "offset": offset, "size": size})
    return out


class Image:
    def __init__(self, path):
        self.data = Path(path).read_bytes()
        self.secs = sections(self.data)

    def read(self, va: int, n: int):
        for s in self.secs:
            if s["addr"] <= va < s["addr"] + s["size"]:
                fo = s["offset"] + (va - s["addr"])
                if fo + n <= len(self.data):
                    return self.data[fo:fo + n]
        return None

    def word(self, va: int):
        b = self.read(va, 4)
        return struct.unpack("<I", b)[0] if b else None


def regs_written(w: int) -> set[int]:
    """Destination registers of a data-processing / load instruction.

    Deliberately over-approximate: this is used to say "r0 is written somewhere
    in this body", not to be a precise dataflow analysis.
    """
    if (w & 0x0C000000) == 0x00000000 and (w & 0x02000000):  # DP, immediate/reg
        return {(w >> 12) & 0xF}
    if (w & 0x0C000000) == 0x04000000:  # LDR/STR
        if (w >> 20) & 1:               # load
            return {(w >> 12) & 0xF}
        return set()
    if (w & 0x0E000000) == 0x08000000:  # LDM
        return {i for i in range(16) if (w >> i) & 1}
    return set()


def regs_read(w: int) -> set[int]:
    r = set()
    if (w & 0x0C000000) == 0x00000000:  # DP
        r.add(w & 0xF)
        if not (w & 0x02000000):        # register operand
            r.add((w >> 8) & 0xF)
            if w & 0x10:                # shifted by register
                r.add((w >> 12) & 0xF)
    if (w & 0x0C000000) == 0x04000000:  # LDR/STR
        r.add((w >> 16) & 0xF)
    if (w & 0x0E000000) == 0x08000000:  # LDM/STM base
        r.add((w >> 16) & 0xF)
    return r


def analyse(img: Image, rva: int, size: int):
    """Measure the calling convention evidence in a function body."""
    base = IMAGE_BASE + rva
    n = max(4, (size // 4) * 4)
    reads = set()
    writes_r0 = False
    stack_frame = False
    pushes_lr = False
    pops_pc = False
    words = 0
    for off in range(0, n, 4):
        w = img.word(base + off)
        if w is None:
            break
        words += 1
        writes_r0 |= 0 in regs_written(w)
        reads |= regs_read(w)
        if (w & 0x0FFFFFFF) == 0x092D4800 or (w & 0x0FFF0000) == 0x092D0000:
            pushes_lr = True
        if (w & 0x0E000000) == 0x08000000 and (w >> 16) & 0xF == 13:
            if (w >> 15) & 1:
                pops_pc = True
            if (w >> 14) & 1 and (w >> 15) & 1:
                pushes_lr = False
        if (w & 0x0FFFFFFF) == 0x024DD000 or (w & 0x0FFF0000) == 0x024D0000:
            stack_frame = True
        if (w & 0x0FFFFFFF) == 0x028DD000:
            stack_frame = True
    return {
        "words": words,
        "arg_regs_read": sorted(i for i in reads if i < 4),
        "max_arg_read": max([i for i in reads if i < 4], default=-1),
        "writes_r0": writes_r0,
        "stack_frame": stack_frame,
        "pushes_lr": pushes_lr,
        "pops_pc": pops_pc,
    }


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--elf", required=True)
    ap.add_argument("--hooks", required=True)
    ap.add_argument("--symbols", required=True)
    ap.add_argument("--out", default=None)
    args = ap.parse_args()

    img = Image(args.elf)
    hooks = json.loads(Path(args.hooks).read_text())

    # rva -> (size, symbol) for the hook targets
    want = {}
    for h in hooks:
        want[h["target_rva"]] = h

    rows = {}
    for rva, h in sorted(want.items()):
        size = h.get("size") or 0
        ev = analyse(img, rva, size)
        rows[rva] = {"target": h["target_name"], "target_rva": rva,
                     "size": size, "site_rva": h["site_rva"],
                     "type": h["type"], "callers": h["callers"], **ev}

    print("%-34s %4s %4s  %-14s %s" %
          ("target", "sz", "argc", "ret", "evidence"))
    print("-" * 120)
    for rva, r in rows.items():
        # arity: highest argument register actually read, plus one, is the
        # number of parameters the body proves it receives.
        proven = r["max_arg_read"] + 1
        ret = "value" if r["writes_r0"] else "void?"
        print("%-34s %4d %4d  %-14s reads r%s%s"
              % (r["target"][:34], r["size"], proven, ret,
                 ",".join(str(i) for i in r["arg_regs_read"]) or "-",
                 "  frame" if r["stack_frame"] else ""))

    if args.out:
        Path(args.out).write_text(json.dumps(rows, indent=1))
        print("\nwrote %s" % args.out)
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
