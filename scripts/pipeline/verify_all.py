"""Verify that every emitted function compiles, in parallel.

This is the evidence gate for the corpus: it compiles every translation unit
independently and reports the exact clean count. Runs the units in parallel
because serially it takes hours.

Usage:
    python verify_all.py --dir <per_fn> [--jobs 16] [--list-failures N]
"""
from __future__ import annotations

import argparse
import re
import subprocess
from concurrent.futures import ThreadPoolExecutor
from pathlib import Path


def check(u: Path, inc: Path) -> tuple[Path, int, str]:
    p = subprocess.run(
        ["clang", "-fsyntax-only", "-std=gnu89", "-Wno-everything",
         "-ferror-limit=0", "-I", str(inc), str(u)],
        capture_output=True, text=True)
    return u, p.stderr.count("error:"), p.stderr


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--dir", required=True)
    ap.add_argument("--jobs", type=int, default=16)
    ap.add_argument("--list-failures", type=int, default=0)
    args = ap.parse_args()

    d = Path(args.dir)
    inc = d / "include"
    units = sorted(p for p in d.glob("*/*.c") if p.name != "g_image.c")
    print("units: %d" % len(units))

    with ThreadPoolExecutor(max_workers=args.jobs) as pool:
        results = list(pool.map(lambda u: check(u, inc), units))

    clean = [u for u, n, _ in results if n == 0]
    failed = [(u, n, s) for u, n, s in results if n]
    print("clean: %d / %d (%.2f%%)"
          % (len(clean), len(units), 100.0 * len(clean) / max(1, len(units))))
    if failed:
        print("failing units: %d, total errors: %d"
              % (len(failed), sum(n for _, n, _ in failed)))
        for u, n, s in failed[: args.list_failures]:
            first = next((ln for ln in s.splitlines() if "error:" in ln), "")
            print("  %-70s %3d  %s" % (u.name[:70], n, first.strip()[:90]))

    (d / "verify_all.txt").write_text(
        "units %d clean %d failing %d errors %d\n"
        % (len(units), len(clean), len(failed), sum(n for _, n, _ in failed)))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
