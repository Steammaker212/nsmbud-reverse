"""Qualify goto labels with their owning function, so a merged file can represent all of them.

THE BUG THIS FIXES
Hex-Rays numbers labels per function: LABEL_1, LABEL_2, ... Every function restarts the counter. When many
functions are concatenated into one .c file the names collide, and a merged file cannot tell which function's
LABEL_134 a `goto` means. Measured in player.c alone: 54 distinct label names are used by more than one
function, e.g.

    LABEL_21  used by 13 functions
    LABEL_12  used by 10 functions

The visible symptom was three `goto`s with no label at all: the definition existed, but for a DIFFERENT
function, so it did not satisfy this one.

THE FIX
Rewrite each label as <owner>__<label> within the extent of the function that owns it. `goto` statements and
label definitions inside the same function get the same qualified name, so every jump stays local and
unambiguous.

Only touches labels the file itself defines. It never invents a label: after this runs, any `goto` still
lacking a definition is a genuinely truncated body, which is exactly the signal we want to see.

Usage: qualify_labels.py <decompiled-root> [--write]
"""
import os
import re
import sys

FUNC_HDR = re.compile(r"/\* =+\s*\n \* (\S+)\s*\n \* RVA 0x([0-9A-Fa-f]+)")
LABEL_TOKEN = re.compile(r"\bLABEL_(\d+)\b")


def sanitise(name):
    return re.sub(r"[^A-Za-z0-9_]", "_", name)


def process(text):
    marks = [(m.start(), m.group(1)) for m in FUNC_HDR.finditer(text)]
    if not marks:
        return text, 0

    head = text[:marks[0][0]]
    pieces = []
    changed = 0
    for i, (start, owner) in enumerate(marks):
        end = marks[i + 1][0] if i + 1 < len(marks) else len(text)
        body = text[start:end]
        prefix = sanitise(owner)
        new_body, n = LABEL_TOKEN.subn(lambda m: "%s__LABEL_%s" % (prefix, m.group(1)), body)
        changed += n
        pieces.append(new_body)
    return head + "".join(pieces), changed


def main(argv):
    root = argv[1]
    write = "--write" in argv
    files = sites = 0
    for dirpath, _, names in os.walk(root):
        if "include" in dirpath or "authoritative" in dirpath:
            continue
        for fn in sorted(names):
            if not fn.endswith(".c"):
                continue
            path = os.path.join(dirpath, fn)
            with open(path, encoding="utf-8", errors="replace") as fh:
                text = fh.read()
            if "LABEL_" not in text:
                continue
            new_text, n = process(text)
            if new_text != text:
                files += 1
                sites += n
                if write:
                    with open(path, "w", encoding="utf-8", newline="") as fh:
                        fh.write(new_text)
                print("  %-46s %d label(s) qualified" % (fn, n))
    print("\nfiles: %d, label occurrences qualified: %d (write=%s)" % (files, sites, write))
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
