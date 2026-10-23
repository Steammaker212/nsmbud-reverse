"""Emit one C file per function and verify each independently.

Concatenating 47k decompiled bodies into subsystem files turns one malformed
body into tens of thousands of cascade diagnostics ("function definition is not
allowed here"), which hides the real state. Emitting one file per function and
compiling each independently measures exactly what is recoverable.

Layout:
    out/
      include/            shared headers (as produced by generate_corpus.py)
      player/*.c          one file per function, named after the function
      ...

Usage:
    python emit_per_function.py --jsonl <norm.jsonl> --base <corpus_lf> --out <per_fn>
"""
from __future__ import annotations

import argparse
import json
import re
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from generate_corpus import route_class, owner_of  # noqa: E402

SAFE = re.compile(r"[^A-Za-z0-9_]")


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--jsonl", required=True)
    ap.add_argument("--base", required=True, help="dir with the generated include/")
    ap.add_argument("--out", required=True)
    ap.add_argument("--layout-free-only", action="store_true")
    args = ap.parse_args()

    base = Path(args.base)
    out = Path(args.out)
    out.mkdir(parents=True, exist_ok=True)

    inc_src = base / "include"
    inc_dst = out / "include"
    if inc_src.exists():
        inc_dst.mkdir(parents=True, exist_ok=True)
        for f in inc_src.glob("*.h"):
            (inc_dst / f.name).write_text(f.read_text(encoding="utf-8"))

    (out / "g_image.c").write_text("unsigned char g_image[0x10000000];\n")

    n = 0
    skipped = 0
    with open(args.jsonl, encoding="utf-8") as fh:
        for line in fh:
            line = line.strip()
            if not line:
                continue
            r = json.loads(line)
            body = r.get("c")
            if not body:
                skipped += 1
                continue
            if args.layout_free_only and "->" in body:
                skipped += 1
                continue
            name = r["name"]
            group = route_class(name)
            gdir = out / group
            gdir.mkdir(parents=True, exist_ok=True)
            fname = "%08X_%s.c" % (r["ea"], SAFE.sub("_", name))[:120]
            head = (
                "/* %s\n"
                " * address: 0x%08X   size: %d   group: %s\n"
                " * Decompiled from the retail Deluxe (Switch) main module v1.0.0.\n"
                " */\n"
                '#include "nsmbudx_field.h"\n'
                '#include "nsmbudx_data_symbols.h"\n'
                '#include "nsmbudx_prototypes.h"\n'
                '#include "nsmbudx_undeclared.h"\n'
                '#include "nsmbudx_prelude.h"\n'
                "\n" % (name, r["ea"], r["size"], group)
            )
            text = body
            if "*/" in text.splitlines()[0]:
                text = "\n".join(text.splitlines()[1:])
            (gdir / fname).write_text(head + text.rstrip() + "\n", encoding="utf-8")
            n += 1

    print("per-function files: %d (skipped %d) -> %s" % (n, skipped, out))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
