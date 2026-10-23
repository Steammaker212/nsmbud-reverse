"""Close the corpus symbol set using real compiler diagnostics.

A pure static scan cannot tell a type name from a global, and guessing wrong
produces thousands of bogus declarations. This asks clang instead: it compiles
each unit, collects the identifiers clang reports as undeclared, and declares
exactly those. Iterating to a fixed point converges quickly because each pass
only adds names the compiler named.

Usage:
    python close_undeclared.py --dir <per_fn> [--rounds 4] [--jobs 12]
"""
from __future__ import annotations

import argparse
import re
import subprocess
from concurrent.futures import ThreadPoolExecutor
from pathlib import Path

UNDECL = re.compile(r"use of undeclared identifier '([A-Za-z_]\w*)'")
IMPLICIT = re.compile(r"call to undeclared function '([A-Za-z_]\w*)'")
# Widths that indicate the identifier was used as a storage location.
ASSIGN = re.compile(r"(?<![\w.>])([A-Za-z_]\w*)\s*=(?!=)")
INC = re.compile(r"(?:\+\+|--)\s*([A-Za-z_]\w*)|([A-Za-z_]\w*)\s*(?:\+\+|--)")
# `&sym` means a scalar: an array name would already be an address. `&sym[...]`
# is excluded because that is how an array element is taken.
ADDR = re.compile(r"&([A-Za-z_]\w*)\b(?!\s*\[)")

HEADER = "nsmbudx_undeclared.h"
# `too few arguments to function call, expected N, have M` and the inverse.
ARITY = re.compile(
    r"error: (?:too few|too many) arguments to function call, expected .*?'"
    r"([A-Za-z_]\w*)'")
ARITY2 = re.compile(r"error: (?:too few|too many) arguments to function call")
CALLED = re.compile(r"error:.*?(?:call to undeclared function|arguments to function call).*?")


def compile_unit(u: Path, inc: Path) -> tuple[set[str], set[str], int, str]:
    p = subprocess.run(
        ["clang", "-fsyntax-only", "-std=gnu89", "-Wno-everything",
         "-ferror-limit=0", "-I", str(inc), str(u)],
        capture_output=True, text=True)
    n = p.stderr.count("error:")
    return set(UNDECL.findall(p.stderr)), set(IMPLICIT.findall(p.stderr)), n, p.stderr


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--dir", required=True)
    ap.add_argument("--rounds", type=int, default=4)
    ap.add_argument("--jobs", type=int, default=12)
    args = ap.parse_args()

    d = Path(args.dir)
    inc = d / "include"
    hdr = inc / HEADER
    units = sorted(p for p in d.glob("*/*.c") if p.name != "g_image.c")
    print("units: %d" % len(units))

    data: set[str] = set()
    funcs: set[str] = set()
    if hdr.exists():
        prev = hdr.read_text(encoding="utf-8", errors="replace")
        data |= set(re.findall(r"extern unsigned char (\w+)\[", prev))
        data |= set(re.findall(r"extern uintptr_t (\w+)", prev))
        funcs |= set(re.findall(r"int (\w+)\(\)", prev))
        print("carried over: %d data, %d funcs" % (len(data), len(funcs)))

    for rnd in range(args.rounds):
        with ThreadPoolExecutor(max_workers=args.jobs) as pool:
            results = list(pool.map(lambda u: compile_unit(u, inc), units))

        new_data: set[str] = set()
        new_funcs: set[str] = set()
        clean = 0
        for ud, uf, n, raw in results:
            if n == 0:
                clean += 1
            new_funcs |= uf
            new_data |= ud
        new_funcs |= {n for n in new_data if n.startswith(("sub_", "nullsub_", "j_"))}
        new_data -= new_funcs
        # A name that already has a real prototype is a function; declaring it
        # as data too would make the two declarations conflict.
        declared_funcs: set[str] = set()
        proto = inc / "nsmbudx_prototypes.h"
        if proto.exists():
            declared_funcs = set(
                re.findall(r"\b([A-Za-z_]\w*)\s*\(", proto.read_text(
                    encoding="utf-8", errors="replace")))
        new_data -= declared_funcs
        new_funcs -= declared_funcs
        added_d = new_data - data
        added_f = new_funcs - funcs
        data |= new_data
        funcs |= new_funcs
        print("round %d: clean %d/%d  +%d data  +%d funcs"
              % (rnd + 1, clean, len(units), len(added_d), len(added_f)))

        # Globals the corpus assigns to are scalars, not arrays.
        assigned: set[str] = set()
        declared_funcs: set[str] = set()
        proto = inc / "nsmbudx_prototypes.h"
        if proto.exists():
            declared_funcs = set(
                re.findall(r"\b([A-Za-z_]\w*)\s*\(", proto.read_text(
                    encoding="utf-8", errors="replace")))
        data -= declared_funcs
        funcs -= declared_funcs
        # A global can be assigned with a cast that hides it from a naive scan
        # (`StageActor_RTTI = (int)&off_...;`), and taking its address makes it
        # a scalar too. Treat both as scalar evidence.
        for u in units:
            t = u.read_text(encoding="utf-8", errors="replace")
            assigned |= set(ASSIGN.findall(t))
            assigned |= {a or b for a, b in INC.findall(t)}
            assigned |= set(ADDR.findall(t))

        lines = [
            "/* nsmbudx_undeclared.h -- symbols the decompiled bodies reference.",
            " *",
            " * Generated by scripts/pipeline/close_undeclared.py from clang's own",
            " * diagnostics: every name here is one the compiler reported undeclared,",
            " * so the list is measured, not guessed. Assigned globals are scalars,",
            " * the rest arrays; no width or type is asserted.",
            " */",
            "#ifndef NSMBUDX_UNDECLARED_H",
            "#define NSMBUDX_UNDECLARED_H",
            "",
            '#include "nsmbudx_prelude.h"',
            "",
        ]
        for n in sorted(data - assigned):
            # `[1]` rather than `[]`: the decompiler takes `&sym + k`, and
            # pointer arithmetic on a pointer to an incomplete array type is an
            # error. One element makes the type complete without asserting the
            # object's real size.
            lines.append("extern unsigned char %s[1];" % n)
        for n in sorted(data & assigned):
            lines.append("extern uintptr_t %s;" % n)
        for n in sorted(funcs):
            lines.append("int %s();" % n)
        lines += ["", "#endif"]
        hdr.write_text("\n".join(lines), encoding="utf-8")

        if not added_d and not added_f:
            print("fixed point at round %d" % (rnd + 1))
            break

    print("total: %d data, %d funcs" % (len(data), len(funcs)))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
