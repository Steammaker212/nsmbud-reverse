"""Remove every duplicate copy of the inline helper block, keeping one.

fix_asm_escapes.py appends its helpers after the LAST `#include` line, but the helpers were originally inserted
after the FIRST one. So a run that converts nothing still relocates nothing, while a run that converts something
adds a SECOND full block at the other end of the include list:

    libs.c:13   /* ---- helpers replacing Hex-Rays `__asm` escapes ---- */     <- original
    libs.c:2130 /* ---- helpers replacing Hex-Rays `__asm` escapes ---- */     <- duplicate

The duplicate is not itself a syntax error for the `static inline` definitions of the same name -- that IS the
error, since a redefinition is a hard error and it takes libs.c down.

This keeps the FIRST block and deletes any later identical copy, including the marker comment that precedes it.
"""
import os
import re
import sys

ROOT = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled"

MARKER = "/* ---- helpers replacing Hex-Rays `__asm` escapes"
# A helper is one `static inline` definition; its body is a single line in this corpus, so no regex needs to
# span braces and none can be left unterminated.
HELPER_LINE = re.compile(r"^\s*static inline [\w \t\*]+ (\w+)\s*\(")


def main(argv):
    write = "--write" in argv
    total = 0
    for dp, _, names in os.walk(ROOT):
        if "include" in dp or "authoritative" in dp:
            continue
        for fn in sorted(names):
            if not fn.endswith(".c"):
                continue
            path = os.path.join(dp, fn)
            t = open(path, encoding="utf-8", errors="replace").read()
            if MARKER not in t:
                continue
            n_markers = t.count(MARKER)
            if n_markers <= 1:
                continue
            # delete every occurrence of a duplicated static inline definition after the first
            seen = set()
            removed = 0
            out = []
            for line in t.split("\n"):
                m = HELPER_LINE.match(line)
                if m:
                    name = m.group(1)
                    if name in seen:
                        removed += 1
                        out.append("/* duplicate helper removed */")
                        continue
                    seen.add(name)
                out.append(line)
            new = "\n".join(out)
            if removed:
                total += removed
                print("  %-42s %d duplicate helper definition(s) removed"
                      % (os.path.relpath(path, ROOT), removed))
                if write:
                    open(path, "w", encoding="utf-8", newline="").write(new)
    print("total removed: %d (write=%s)" % (total, write))
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
