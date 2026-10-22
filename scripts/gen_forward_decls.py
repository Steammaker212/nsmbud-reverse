"""Add forward declarations for functions a file calls before defining them -- single pass.

player.c carries:

    /* ---- forward declarations: these are called above where they are defined ---- */

but the block beneath it is EMPTY. Clang therefore treats earlier calls as implicit `int` declarations and
reports "conflicting types" against the real definition below. That is the cause of player.c's 12
conflicting-types errors: the header signature is byte-identical to the definition, which is why comparing the
two showed no difference at all.

Single pass: record each definition's offset, record each call site's offset, then keep the (name, call) pairs
whose call precedes the definition. The previous version searched all preceding text separately for every
function, which is quadratic -- it had to be killed on a 1.1 MB file.
"""
import os
import re
import sys

MARKER = "/* ---- forward declarations: these are called above where they are defined ---- */"
DEF = re.compile(r"^[ \t]*(?P<sig>[A-Za-z_][\w \t\*]*?__\w+\s+(?P<name>\w+)\s*\([^;{]*\))\s*\n[ \t]*\{",
                 re.M | re.S)
CALL = re.compile(r"\b(\w+)\s*\(")


def process(path, write):
    text = open(path, encoding="utf-8", errors="replace").read()
    if MARKER not in text:
        return 0

    defs = {}
    for m in DEF.finditer(text):
        name = m.group("name")
        if name not in defs:                      # first definition wins
            defs[name] = (" ".join(m.group("sig").split()), m.start())
    if not defs:
        return 0

    first_call = {}
    for i, m in enumerate(CALL.finditer(text)):
        n = m.group(1)
        if n in defs and n not in first_call:
            first_call[n] = m.start()

    needed = []
    for name, (sig, at) in defs.items():
        fc = first_call.get(name)
        if fc is not None and fc < at:
            needed.append((at, sig))
    if not needed:
        return 0

    needed.sort()
    block = "\n".join(sig + ";" for _, sig in needed)
    first = text.index(MARKER)
    head = text[:first]
    rest = text[first + len(MARKER):].lstrip("\r\n")
    new = head + MARKER + "\n\n" + block + "\n\n" + rest
    if write:
        open(path, "w", encoding="utf-8", newline="").write(new)
    print("  %-28s %d forward declaration(s)" % (os.path.basename(path), len(needed)))
    return len(needed)


def main(argv):
    write = "--write" in argv
    root = argv[1]
    total = 0
    for dirpath, _, names in os.walk(root):
        if "include" in dirpath or "authoritative" in dirpath:
            continue
        for fn in sorted(names):
            if fn.endswith(".c"):
                total += process(os.path.join(dirpath, fn), write)
    print("total forward declarations added: %d (write=%s)" % (total, write))
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))