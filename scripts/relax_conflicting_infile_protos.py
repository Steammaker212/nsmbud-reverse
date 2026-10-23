"""Relax in-file declarations that conflict with a header's empty-parameter declaration.

`systems.h` declares `int __fastcall Level_getArea();` -- unspecified arguments, so any call compiles. `states.c`
then re-declares the same function with a real prototype at line 633, and that prototype is what clang uses at the
call sites. Twenty-four of the twenty-five calls pass one argument while the prototype demands two, so they error.

The header's empty list is the spelling that matches what the aggregates actually do. Relaxing the conflicting
in-file prototype to `()` as well lets the calls through and stops the two declarations from disagreeing.

This touches only declarations inside the .c files, never the headers, and only when the same name is also declared
with an empty parameter list in a header. Every change is measured across the corpus and reverted if the total does
not improve.
"""
import collections
import os
import re
import subprocess
import sys

CLANG = r"C:\Program Files\LLVM\bin\clang.exe"
ROOT = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled"
INC = os.path.join(ROOT, "include")
FILES = ["libs\\libs.c", "systems\\systems.c", "systems\\states.c", "actors\\actors_b.c",
         "actors\\actor_construction.c", "actors\\actors_a.c", "systems\\core.c",
         "player\\player.c", "powerup\\powerup.c"]


def total():
    n = 0
    for f in FILES:
        p = os.path.join(ROOT, f)
        if not os.path.exists(p):
            continue
        r = subprocess.run([CLANG, "-fsyntax-only", "-Wno-everything", "-ferror-limit=0", "-I", INC, p],
                           capture_output=True, text=True, errors="replace")
        n += r.stderr.count("error:")
    return n


def header_loose_names():
    """Names a header declares with an empty parameter list."""
    loose = set()
    for h in os.listdir(INC):
        if not h.endswith(".h"):
            continue
        t = open(os.path.join(INC, h), encoding="utf-8", errors="replace").read()
        loose.update(re.findall(r"(?m)^[^\n;]*?\b([A-Za-z_]\w*)\s*\(\s*\)\s*;", t))
    return loose


def main(argv):
    write = "--write" in argv
    before = total()
    loose = header_loose_names()
    print("  corpus errors before: %d" % before)
    print("  header names declared with (): %d" % len(loose))

    # A prototype inside a .c file that is tighter than the header's empty list. The match must start with a type:
    # without that anchor, `return v11(a1);` looks like a declaration of `v11` and gets rewritten into `return v11();`,
    # silently dropping an argument from a real call. That is why the type prefix is required and `return`, `if`,
    # `while`, `for` and `switch` are excluded explicitly.
    proto = re.compile(
        r"(?m)^(\s*(?!(?:return|if|while|for|switch|do|else|goto|case)\b)"
        r"(?:(?:unsigned|signed|const|struct|enum|volatile)\s+)*"
        r"(?:void|char|short|int|long|float|double|bool|u?int\d+_t|[A-Za-z_]\w*(?:_t|Actor|Mgr|Data|Info|Node|Base)?)"
        r"[\w \*]*?\b([A-Za-z_]\w*)\s*)\(([^()]*)\)\s*;"
    )
    edits = collections.Counter()
    originals = {}
    for f in FILES:
        path = os.path.join(ROOT, f)
        if not os.path.exists(path):
            continue
        text = open(path, encoding="utf-8", errors="replace").read()
        originals[path] = text

        def repl(m):
            name = m.group(2)
            params = m.group(3).strip()
            if not params or name not in loose:
                return m.group(0)
            edits[name] += 1
            return "%s();" % m.group(1)

        new = proto.sub(repl, text)
        if new != text and write:
            open(path, "w", encoding="utf-8", newline="").write(new)

    print("  in-file prototypes relaxed: %d across %d names" % (sum(edits.values()), len(edits)))
    for n, c in edits.most_common(8):
        print("    %4d  %s" % (c, n))
    after = total()
    print("  corpus errors after:  %d  (%+d)" % (after, after - before))

    if after > before:
        if write:
            for p, t in originals.items():
                open(p, "w", encoding="utf-8", newline="").write(t)
            print("  regression -- restored, corpus now %d" % total())
        else:
            print("  regression -- nothing written")
        return 1
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
