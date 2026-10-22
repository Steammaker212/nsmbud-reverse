"""Reorder nsmbudx_prelude.h so incomplete struct types precede the prototype headers.

If a header mentions `struct nn_oe *` before that struct is declared, C creates a NEW type scoped to that
prototype. Every later `struct nn_oe *` is then a DIFFERENT type, and identical-looking declarations are
reported as conflicting:

    libs.h:546  int __fastcall sub_6082B1CC(struct nn_oe *a1);
    libs.c:112  int __fastcall sub_6082B1CC(struct nn_oe *a1);      <- "conflicting types"

That single defect was producing thousands of errors per file, and it kept coming back because it lived only in
the working tree: `git checkout` restored the broken order and the next pipeline run looked fine.

This runs as part of refresh_headers.py so the order is always correct.
"""
import os
import re

PRELUDE = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled\include\nsmbudx_prelude.h"
ANCHOR = '#include "nsmbudx_types.h"'
COMMENT = ("/* Incomplete types for C++-qualified names. These MUST precede the prototype headers below: if a\n"
           "   header mentions `struct nn_oe *` before the struct is declared, C creates a NEW type scoped to\n"
           "   that prototype, and every later `struct nn_oe *` is a different type. */")


def main():
    with open(PRELUDE, encoding="utf-8") as fh:
        text = fh.read()
    lines = text.split("\n")
    forwards = [ln for ln in lines if re.match(r"^struct \w+;$", ln.strip())]
    if not forwards:
        print("prelude: no struct forward declarations found")
        return 1
    # drop every forward declaration and the marker comment's block
    kept = [ln for ln in lines if not re.match(r"^struct \w+;$", ln.strip())]

    if ANCHOR not in kept:
        print("prelude: anchor include not found")
        return 1
    i = kept.index(ANCHOR)
    # are they already directly after the anchor?
    if kept[i + 1:i + 2] == [""] and kept[i + 2:i + 3] and kept[i + 2].startswith("struct "):
        print("prelude: already ordered (%d forward declarations)" % len(forwards))
        return 0

    block = ["", COMMENT] + forwards
    new = kept[:i + 1] + block + kept[i + 1:]
    with open(PRELUDE, "w", encoding="utf-8", newline="\n") as fh:
        fh.write("\n".join(new))
    print("prelude: %d struct forward declarations moved before the prototype headers" % len(forwards))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())