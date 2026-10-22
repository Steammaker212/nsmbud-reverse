"""Find functions whose bodies were TRUNCATED, by checking every goto against its label.

A `goto` with no matching label is impossible in valid C source, so a mismatch is proof that the body was
cut short rather than merely misformatted. This matters because the parse count cannot see the damage: a
function that loses 30 of its 42 switch cases still compiles.

Confirmed instance: Player_animSetCarry_load has 12 cases in the corpus and 42 when freshly decompiled from
main.i64, and the corpus text simply ends mid-case.

Usage: find_truncated_functions.py <decompiled-root>
"""
import os
import re
import sys

FUNC_HDR = re.compile(r"/\* =+\s*\n \* (\S+)\s*\n \* RVA 0x([0-9A-Fa-f]+)")
# Labels are now qualified as <owner>__LABEL_N by scripts/qualify_labels.py, and a `\b` before LABEL_ does
# NOT match inside `sub_6078F32C__LABEL_12` (underscore is a word character), so an unanchored pattern
# reported "0 truncated functions" the moment qualification ran. Match the qualified form explicitly.
GOTO = re.compile(r"\bgoto\s+((?:\w+__)?LABEL_\d+|(?:\w+__)?loc_\w+)\s*;")
LABEL_DEF = re.compile(r"^[ \t]*((?:\w+__)?LABEL_\d+|(?:\w+__)?loc_\w+)[ \t]*:", re.M)


def functions(text):
    """Split a merged .c file into (name, rva, body) using the header comments as delimiters."""
    marks = [(m.start(), m.group(1), m.group(2)) for m in FUNC_HDR.finditer(text)]
    out = []
    for i, (pos, name, rva) in enumerate(marks):
        end = marks[i + 1][0] if i + 1 < len(marks) else len(text)
        out.append((name, int(rva, 16), text[pos:end]))
    return out


def main(argv):
    root = argv[1]
    total = 0
    truncated = []
    for dirpath, _, names in os.walk(root):
        if "include" in dirpath or "authoritative" in dirpath:
            continue
        for fn in sorted(names):
            if not fn.endswith(".c"):
                continue
            path = os.path.join(dirpath, fn)
            with open(path, encoding="utf-8", errors="replace") as fh:
                text = fh.read()
            for name, rva, body in functions(text):
                # GOTO has alternate branches and LABEL_DEF now has a single capture group, so take the
                # name from whichever branch matched instead of assuming a fixed group index.
                used = set()
                for m in GOTO.finditer(body):
                    lbl = m.group(1)
                    if lbl.startswith(("LABEL_", "loc_")) or "__LABEL_" in lbl or "__loc_" in lbl:
                        used.add(lbl)
                defined = {m.group(1) for m in LABEL_DEF.finditer(body)}
                missing = sorted(used - defined)
                if missing:
                    total += 1
                    truncated.append((fn, name, rva, missing))

    print("functions with goto targets that have no label: %d" % total)
    print()
    by_file = {}
    for fn, name, rva, missing in truncated:
        by_file.setdefault(fn, []).append((name, rva, missing))
    for fn in sorted(by_file):
        print("  %s  (%d function(s))" % (fn, len(by_file[fn])))
        for name, rva, missing in by_file[fn][:6]:
            print("     %-28s RVA 0x%X  missing: %s" % (name, rva, ", ".join(missing[:5])))
        if len(by_file[fn]) > 6:
            print("     ... and %d more" % (len(by_file[fn]) - 6))
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
