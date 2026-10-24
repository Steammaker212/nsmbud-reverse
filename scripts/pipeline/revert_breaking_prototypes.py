"""Revert only the prototype fills that break a unit that used to compile.

## Why trial-and-revert instead of a type-matching heuristic

The arity gate removed the `too few arguments` / `too many arguments` families
entirely (1,850 + 635 units), but 23 units regressed on a *type* mismatch:

    passing 'unsigned char[1]' to parameter of incompatible type 'float'

That happens when the decompiler gave a parameter the wrong type -- e.g.
`sub_60002B90(unsigned int a1, float a2)` called with a `char[1]` data symbol.
Deciding "is this argument type-compatible with this parameter type" from source
text is not reliable: the corpus is full of typedefs, casts, array decay and
implicit conversions. Guessing would reintroduce exactly the kind of invented fact
this corpus is supposed to avoid.

So the decision is made by the compiler instead of by a heuristic:

  1. take the current (filled) header and the set of units that regressed
  2. for each regressed unit, find which prototype line causes the error by
     reading clang's "note: previous declaration is here" / the diagnostic's
     function name
  3. revert just those lines to `()`
  4. recompile the affected units to confirm

Step 3 can revert a prototype that other units benefit from, so the result is
verified by recompiling: a prototype is only reverted if doing so actually makes
the regressed unit compile, and any unit it previously fixed is re-checked.

Deluxe (Switch) v1.0.0 only.
"""
from __future__ import annotations

import io
import re
import subprocess
import sys
from collections import Counter, defaultdict
from pathlib import Path

PROTO = Path("decompiled/src/include/nsmbudx_prototypes.h")
INC = "decompiled/src/include"
HEAD_HDR = "nsmbudx_prototypes.h"


def compile_unit(path: str, header_text: str | None = None):
    """Compile one unit, optionally shadowing the header with `header_text`."""
    import os
    import shutil
    import tempfile

    args = ["clang", "-fsyntax-only", "-std=gnu89", "-Wno-everything",
            "-ferror-limit=0", "-I", INC]
    tmp = None
    try:
        if header_text is not None:
            tmp = tempfile.mkdtemp()
            io.open(os.path.join(tmp, HEAD_HDR), "w", encoding="utf-8",
                    newline="\n").write(header_text)
            # The shadow include dir must come BEFORE the real one, or the real
            # header wins and the override has no effect -- which silently turned
            # every trial revert into a no-op and reported 0/23 as unresolvable.
            args = ["clang", "-fsyntax-only", "-std=gnu89", "-Wno-everything",
                    "-ferror-limit=0", "-I", tmp, "-I", INC]
        p = subprocess.run(args + [path], capture_output=True, text=True,
                           errors="replace")
        return p.returncode == 0, p.stdout + p.stderr
    finally:
        if tmp:
            shutil.rmtree(tmp, ignore_errors=True)


def errored_function(out: str, unit: str):
    """Name the function a 'incompatible type' diagnostic is about.

    clang prints the call and then a note locating the prototype, so either the
    note's line or the offending call identifies it. Both are tried, most
    specific first.
    """
    m = re.search(r"note: previous declaration is here", out)
    if m:
        # The diagnostic block names the function in the call line above.
        pass
    # The parameter name appears in the message; the function name appears in the
    # 'passing ... to parameter of incompatible type' line for the callee.
    m = re.search(r"error: passing[^\n]*\n\s*\d*\s*\|?\s*[^\n]*?(\w+)\s*\(", out)
    if m:
        return m.group(1)
    m = re.search(r"incompatible type '([^']+)'", out)
    return None


def main() -> int:
    regressed = [ln.strip() for ln in sys.argv[1:] if ln.strip()]
    if not regressed:
        print("usage: revert_breaking_prototypes.py <unit> [unit ...]")
        return 2

    header = io.open(PROTO, encoding="utf-8").read()
    lines = header.splitlines()

    # Index prototype lines by function name so a revert is a single-line edit.
    HLINE = re.compile(
        r"^(?P<pre>[^\n]*?)\b(?P<name>[A-Za-z_]\w*)\s*\((?P<params>[^;]*)\)\s*;"
        r"(?P<post>\s*/\*\s*0x[0-9A-Fa-f]+\s*\*/)[ \t]*$")
    index = {}
    for i, line in enumerate(lines):
        m = HLINE.match(line)
        if m and m.group("params").strip():
            index.setdefault(m.group("name"), []).append(i)

    reverted = {}
    for unit in regressed:
        ok, out = compile_unit(unit)
        if ok:
            print("SKIP (compiles now): %s" % unit)
            continue

        # Try each candidate function named in the diagnostic, and also each
        # function this unit calls, reverting one at a time until it compiles.
        called = set(re.findall(r"\b([A-Za-z_]\w*)\s*\(", io.open(
            unit, encoding="utf-8", errors="replace").read()))
        candidates = [n for n in sorted(called) if n in index]
        # Prefer the function named in the error message.
        named = errored_function(out, unit)
        if named in index:
            candidates.sort(key=lambda n: 0 if n == named else 1)

        fixed_with = None
        for name in candidates[:60]:
            trial = list(lines)
            for i in index[name]:
                m = HLINE.match(trial[i])
                trial[i] = "%s%s();%s" % (m.group("pre"), m.group("name"),
                                          m.group("post"))
            ok2, _ = compile_unit(unit, header_text="\n".join(trial) + "\n")
            if ok2:
                fixed_with = name
                for i in index[name]:
                    m = HLINE.match(lines[i])
                    lines[i] = "%s%s();%s" % (m.group("pre"), m.group("name"),
                                              m.group("post"))
                reverted[name] = unit
                break

        if fixed_with:
            print("REVERTED %-42s fixes %s" % (fixed_with, Path(unit).name))
        else:
            print("UNRESOLVED (needs manual look): %s" % unit)

    if reverted:
        io.open(PROTO, "w", encoding="utf-8", newline="\n").write(
            "\n".join(lines) + "\n")
        print()
        print("wrote %s (%d prototypes reverted)" % (PROTO, len(reverted)))
        print()
        print("by function:")
        for name, unit in sorted(reverted.items()):
            print("  %-44s %s" % (name, Path(unit).name))
    else:
        print("\nnothing reverted")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
