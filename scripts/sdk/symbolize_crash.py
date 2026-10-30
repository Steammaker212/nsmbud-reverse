"""Turn a crash report (Atmosphere or Ryujinx) into game function names.

Atmosphere writes sd:/atmosphere/crash_reports/<time>_<title id>.log and
annotates addresses as `(main + 0x7aaba0)`. Ryujinx/Ryubing write no crash
report; the guest stack trace goes into the emulator log
(%AppData%/Ryujinx/Logs/*.log), where a frame names its module either as an
offset (`main+0x7aaba0`) or as a base next to the absolute address
(`0x...  main:0x...`). All three forms are read.

Each main offset resolves to the function containing it (repo symbol
inventory); each subsdk0 offset resolves to the mod symbol it lands in (hook
destinations sweet-dx logged for the build).

Usage:
    python scripts/sdk/symbolize_crash.py <report or Ryujinx .log> [--build-log .projectignore/debug.log]
"""
from __future__ import annotations

import argparse
import bisect
import csv
import re
from pathlib import Path

ANNOT = re.compile(r"\((\w+) \+ 0x([0-9a-fA-F]+)\)")                       # Atmosphere
OFFSET = re.compile(r"\b(main|subsdk\d|sdk|rtld)(?:\.nso)?\s*\+\s*0x([0-9a-fA-F]+)")  # name+0xOFF
BASED = re.compile(r"0x([0-9a-fA-F]{8,16})\b.*?\b(main|subsdk\d|sdk|rtld)(?:\.nso)?:0x([0-9a-fA-F]+)")


def frames(line: str):
    """Yield (module, offset) for every address the line pins to a module."""
    found = [(m, int(o, 16)) for m, o in ANNOT.findall(line)]
    if not found:
        found = [(m, int(o, 16)) for m, o in OFFSET.findall(line)]
    if not found:
        for addr, m, base in BASED.findall(line):
            addr, base = int(addr, 16), int(base, 16)
            if base <= addr:   # `main:0x<base>` next to an absolute address
                found.append((m, addr - base))
    return found
DEST = re.compile(r'hook "(\w+)".*?Destiny: 0x([0-9A-Fa-f]+)')
TRAMP = re.compile(r'Trampoline "(\w+)".*?returning from 0x([0-9A-Fa-f]+)')
MODULE_BASE = 0xCD1000  # where sweet-dx places subsdk0, relative to main


def load_main(repo: Path):
    rows = []
    for r in csv.DictReader(open(repo / "reverse-engineering/FindingsC/symbols.csv", encoding="utf-8")):
        if r["kind"] == "function":
            rows.append((int(r["rva"], 16), int(r["size"] or 0), r["symbol"]))
    rows.sort()
    return rows


def find(rows, off):
    i = bisect.bisect_right([r[0] for r in rows], off) - 1
    if i < 0:
        return None
    start, size, name = rows[i]
    if size and off >= start + size:
        return f"{name}+0x{off - start:X} (past its end; likely an unnamed sub_ after it)"
    return f"{name}+0x{off - start:X}"


def main() -> None:
    ap = argparse.ArgumentParser(description=__doc__.split("\n")[0])
    ap.add_argument("report")
    ap.add_argument("--repo", default=".")
    ap.add_argument("--build-log", default=None)
    args = ap.parse_args()
    repo = Path(args.repo).resolve()
    rows = load_main(repo)

    mod_rows = []
    if args.build_log:
        log = open(args.build_log, encoding="utf-8", errors="replace").read()
        for name, dest in DEST.findall(log):
            mod_rows.append((int(dest, 16) - MODULE_BASE, 0, name))
        for name, src in TRAMP.findall(log):
            mod_rows.append((int(src, 16) - MODULE_BASE - 4, 8, name))
        mod_rows.sort()

    for line in open(args.report, encoding="utf-8", errors="replace"):
        line = line.rstrip("\n")
        notes = []
        for module, off in frames(line):
            if module == "main":
                notes.append(find(rows, off) or "?")
            elif module.startswith("subsdk") and mod_rows:
                hit = find(mod_rows, off)
                notes.append(f"mod: {hit}" if hit else "mod: before the first hook symbol")
        print(line + ("   <= " + "; ".join(notes) if notes else ""))


if __name__ == "__main__":
    main()
