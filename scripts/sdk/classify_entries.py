"""Decide, for every named function, whether a sweet-dx trampoline can hook it.

A sweet-dx `hook` overwrites the first instruction of a function with a `B` to
the mod, and the generated trampoline replays that instruction from inside the
module before branching back to entry+4. Replaying is only correct when the
instruction means the same thing at a different address. Anything that reads
PC -- an immediate branch, `ldr rX, [pc, #n]`, `add rX, pc, ...`, `adr` -- would
compute its target relative to the trampoline instead of the game, and the hook
would jump into garbage the first time it calls the original.

This reads the instruction out of the image rather than trusting a name: the
whole `.text` is disassembled once with llvm-objdump (the same LLVM that
sweet-dx assembles with) and each entry is classified.

A function is also refused when it is too small to return to: the trampoline
jumps back to entry+4, so a 4-byte veneer would resume in the *next* function.
The exception is an entry of `bx lr`, which returns before it could fall through.

Output: sdk/data/hookable.csv
    rva,name,size,entry_word,entry_asm,trampoline_safe,reason

Usage:
    python scripts/sdk/classify_entries.py --repo . --elf ../main.idb/convertedmain.rebased.elf
"""
from __future__ import annotations

import argparse
import csv
import re
import shutil
import subprocess
from pathlib import Path

IMAGE_BASE = 0x60000000
TEXT_SECTIONS = {".text", ".init"}

# "607a1f5c: e92d4070     	push	{r4, r5, r6, lr}"
LINE = re.compile(r"^\s*([0-9a-f]{8}):\s+([0-9a-f]{8})\s+(\S+)\s*(.*?)\s*$")

# Immediate branches are PC-relative by encoding, whatever their condition.
BRANCH = re.compile(r"^(b|bl|blx)(eq|ne|cs|hs|cc|lo|mi|pl|vs|vc|hi|ls|ge|lt|gt|le|al)?(\.w)?$")
# Any operand naming pc reads (or writes) it.
USES_PC = re.compile(r"\bpc\b")


def objdump() -> str:
    found = shutil.which("llvm-objdump")
    if found:
        return found
    default = Path(r"C:\Program Files\LLVM\bin\llvm-objdump.exe")
    if default.exists():
        return str(default)
    raise SystemExit("llvm-objdump not found; install LLVM or put it on PATH")


def load_functions(repo: Path):
    rows = csv.DictReader(open(repo / "data/loader/symbols.csv", encoding="utf-8"))
    out = {}
    for r in rows:
        if r["kind"] != "function" or r["section"] not in TEXT_SECTIONS:
            continue
        out[int(r["va"], 16)] = (r["symbol"], int(r["size"]))
    return out


def classify(word: str, mnem: str, ops: str, size: int):
    if mnem == "bx" and ops == "lr":
        # An unconditional return never falls through, so the trampoline's
        # branch back to entry+4 is unreachable and size does not matter.
        # These are the empty virtuals: the natural place to add behaviour.
        return True, ""
    if size < 8:
        return False, "too small: trampoline would resume in the next function"
    if mnem in (".word", "<unknown>") or mnem.startswith("."):
        return False, "entry is not a decodable instruction"
    if BRANCH.match(mnem):
        return False, "entry is a PC-relative branch"
    if mnem.startswith("adr"):
        return False, "entry computes a PC-relative address"
    if USES_PC.search(ops):
        return False, "entry reads or writes pc"
    if word.startswith("f"):
        # 0xF... is the unconditional space (blx imm, pld, ...): never replay.
        return False, "entry is in the unconditional encoding space"
    return True, ""


def main() -> None:
    ap = argparse.ArgumentParser(description=__doc__.split("\n")[0])
    ap.add_argument("--repo", default=".")
    ap.add_argument("--elf", required=True, help="convertedmain.rebased.elf")
    args = ap.parse_args()
    repo = Path(args.repo).resolve()

    funcs = load_functions(repo)
    wanted = set(funcs)
    found = {}

    proc = subprocess.Popen(
        [objdump(), "-d", "--triple=armv8a", args.elf],
        stdout=subprocess.PIPE, text=True, errors="replace",
    )
    for line in proc.stdout:
        m = LINE.match(line)
        if not m:
            continue
        va = int(m.group(1), 16)
        if va in wanted:
            ops = m.group(4).split("@", 1)[0].strip()
            found[va] = (m.group(2), m.group(3), ops)
    proc.wait()

    out_path = repo / "sdk/data/hookable.csv"
    out_path.parent.mkdir(parents=True, exist_ok=True)
    safe = 0
    reasons: dict[str, int] = {}
    with open(out_path, "w", newline="", encoding="utf-8") as fh:
        w = csv.writer(fh)
        w.writerow(["rva", "name", "size", "entry_word", "entry_asm",
                    "trampoline_safe", "reason"])
        for va in sorted(funcs):
            name, size = funcs[va]
            if va not in found:
                ok, why, word, asm = False, "entry not reached by disassembly", "", ""
            else:
                word, mnem, ops = found[va]
                ok, why = classify(word, mnem, ops, size)
                asm = f"{mnem} {ops}".strip()
            safe += ok
            if not ok:
                reasons[why] = reasons.get(why, 0) + 1
            w.writerow([f"0x{va - IMAGE_BASE:08X}", name, size, word, asm,
                        "yes" if ok else "no", why])

    print(f"functions classified : {len(funcs)}")
    print(f"trampoline-safe      : {safe}")
    for why, n in sorted(reasons.items(), key=lambda kv: -kv[1]):
        print(f"  refused {n:5d}  {why}")
    print(f"wrote {out_path.relative_to(repo)}")


if __name__ == "__main__":
    main()
