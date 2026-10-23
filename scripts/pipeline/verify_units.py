"""Compile every corpus unit and report the true error profile.

Compiling the corpus as one 1.6M-line translation unit is both slow and
misleading: it turns a local mistake in one function into a cascade. This
driver compiles each subsystem unit on its own, exactly as a consumer of the
repository would, and aggregates the diagnostics.

Usage:
    python verify_units.py --dir <corpus> [--jobs N] [--show N]
"""
from __future__ import annotations

import argparse
import re
import subprocess
import sys
from concurrent.futures import ThreadPoolExecutor
from pathlib import Path

ERR_RE = re.compile(r"error: (.*)")
UNDECL_RE = re.compile(r"error: use of undeclared identifier '([A-Za-z_]\w*)'")
IMPLICIT_RE = re.compile(r"error: call to undeclared function '([A-Za-z_]\w*)'")


def compile_unit(unit: Path, inc: Path, clang: str) -> tuple[str, int, str]:
    proc = subprocess.run(
        [clang, "-fsyntax-only", "-std=gnu89", "-Wno-everything",
         "-ferror-limit=0", "-I", str(inc), str(unit)],
        capture_output=True, text=True,
    )
    errs = ERR_RE.findall(proc.stderr)
    return unit.name, len(errs), proc.stderr


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--dir", required=True)
    ap.add_argument("--clang", default="clang")
    ap.add_argument("--jobs", type=int, default=8)
    ap.add_argument("--show", type=int, default=6)
    args = ap.parse_args()

    d = Path(args.dir)
    inc = d / "include"
    units = sorted(p for p in d.glob("*/*.c") if p.name != "g_image.c")
    if not units:
        print("no units under %s" % d, file=sys.stderr)
        return 1

    with ThreadPoolExecutor(max_workers=args.jobs) as pool:
        results = list(pool.map(lambda u: compile_unit(u, inc, args.clang), units))

    total_err = 0
    total_units = 0
    cl = 0
    undeclared: set[str] = set()
    funcs: set[str] = set()
    kinds: dict[str, int] = {}

    for name, n, stderr in results:
        total_units += 1
        total_err += n
        if n == 0:
            cl += 1
        undeclared |= set(UNDECL_RE.findall(stderr))
        funcs |= set(IMPLICIT_RE.findall(stderr))
        for m in ERR_RE.findall(stderr):
            k = re.sub(r"'[^']*'", "'X'", m)
            kinds[k] = kinds.get(k, 0) + 1

    print("units: %d   clean: %d   errors: %d" % (total_units, cl, total_err))
    print("\ntop diagnostics:")
    for k, v in sorted(kinds.items(), key=lambda kv: -kv[1])[: args.show]:
        print("  %6d  %s" % (v, k[:110]))

    if undeclared:
        print("\nundeclared identifiers: %d" % len(undeclared))
        for n in sorted(undeclared)[:10]:
            print("  %s" % n)
    if funcs:
        print("\nundeclared functions: %d" % len(funcs))
        for n in sorted(funcs)[:10]:
            print("  %s" % n)

    (d / "verify_report.txt").write_text(
        "units %d clean %d errors %d\n" % (total_units, cl, total_err)
    )
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
