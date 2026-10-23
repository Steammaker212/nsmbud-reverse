"""Build the whole corpus from a Hex-Rays export, in one command.

The pipeline has an order that matters, and getting it wrong is silent: a
missing `structs_recovered.h` or `nsmbudx_field.h` makes every unit fail to
find a header, which reads like a corpus-wide regression. This script runs the
stages in the required order so that cannot happen.

Stages:
  1. normalize_c.py        field access -> macros, scope flattening, vtables
  2. build_structs.py      measured struct layouts
  3. normalize_c.py        --emit-macros for nsmbudx_field.h
  4. generate_corpus.py    grouped C + prototype/data/forward headers
  5. emit_per_function.py  one translation unit per function
  6. close_undeclared.py   close the symbol set against the compiler

Usage:
    python build_all.py --jsonl <export/norm-src.jsonl> --data-symbols <data_symbols.json> --work <dir>
"""
from __future__ import annotations

import argparse
import shutil
import subprocess
import sys
from pathlib import Path

HERE = Path(__file__).resolve().parent


def run(args: list[str]) -> None:
    print("$ " + " ".join(Path(a).name if i else a for i, a in enumerate(args)))
    r = subprocess.run([sys.executable] + args, cwd=str(HERE))
    if r.returncode != 0:
        raise SystemExit("stage failed: %s" % args[1])


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--jsonl", required=True, help="raw Hex-Rays export")
    ap.add_argument("--data-symbols", required=True)
    ap.add_argument("--work", required=True, help="output root")
    ap.add_argument("--rounds", type=int, default=2)
    args = ap.parse_args()

    work = Path(args.work)
    work.mkdir(parents=True, exist_ok=True)
    norm = work / "norm.jsonl"
    corpus = work / "corpus"
    per_fn = work / "src"

    run(["normalize_c.py", "--jsonl", args.jsonl, "--out", str(norm)])
    (corpus / "include").mkdir(parents=True, exist_ok=True)
    run(["build_structs.py", "--jsonl", str(norm),
         "--out", str(corpus / "include" / "structs_recovered.h")])
    run(["normalize_c.py", "--emit-macros",
         str(corpus / "include" / "nsmbudx_field.h")])
    run(["generate_corpus.py", "--jsonl", str(norm), "--out-dir", str(corpus),
         "--layout-free-only", "--data-symbols", args.data_symbols])
    run(["emit_per_function.py", "--jsonl", str(norm), "--base", str(corpus),
         "--out", str(per_fn), "--layout-free-only"])

    # emit_per_function copies the headers it knows about; make sure the whole
    # set is present, since a missing one looks like a regression.
    for h in (corpus / "include").glob("*.h"):
        shutil.copy2(h, per_fn / "include" / h.name)

    run(["close_undeclared.py", "--dir", str(per_fn), "--rounds", str(args.rounds)])
    print("\nbuilt: %s" % per_fn)
    return 0

if __name__ == "__main__":
    raise SystemExit(main())
