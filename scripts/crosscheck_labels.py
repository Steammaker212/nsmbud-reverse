"""Independent cross-check that every goto has its label, tolerant of this corpus's line shapes.

Deliberately shares no code with find_truncated_functions.py so the two can disagree.

Line shapes that occur here:
    /* line: 128 */ LABEL_13:
    LABEL_13:
    sub_6078F32C__LABEL_484:
    LABEL_484:   v18 = 0;

A label is recognised by taking the text after the last */ on a line (or the whole line when there is no
comment), stripping it, and checking it looks like `identifier:` at the START of that remainder.

Avoids the two mistakes made while writing this check:
  * requiring a character after the colon -- labels are often alone on a line, which made 209 working files
    look broken;
  * anchoring on ^\s* -- labels are often preceded by a /* line: N */ comment, so that anchor found nothing.
"""
import os
import re
import sys

GOTO = re.compile(r"\bgoto\s+([A-Za-z_]\w*)\s*;")
TRAILING_LABEL = re.compile(r"^([A-Za-z_]\w*)\s*:")
IDENT_ONLY = re.compile(r"^[A-Za-z_]\w*$")


def labels_in(text):
    found = set()
    for line in text.split("\n"):
        rest = line.rsplit("*/", 1)[-1] if "*/" in line else line
        rest = rest.strip()
        if not rest:
            continue
        m = TRAILING_LABEL.match(rest)
        if not m:
            continue
        name = m.group(1)
        if IDENT_ONLY.match(name) and name not in ("default", "case"):
            found.add(name)
    return found


def main(argv):
    root = argv[1]
    files = gotos = 0
    bad = []
    for dirpath, _, names in os.walk(root):
        if "include" in dirpath or "authoritative" in dirpath:
            continue
        for fn in sorted(names):
            if not fn.endswith(".c"):
                continue
            files += 1
            with open(os.path.join(dirpath, fn), encoding="utf-8", errors="replace") as fh:
                text = fh.read()
            labels = labels_in(text)
            for m in GOTO.finditer(text):
                gotos += 1
                if m.group(1) not in labels:
                    bad.append((fn, text[:m.start()].count("\n") + 1, m.group(1)))
    print("files scanned : %d" % files)
    print("goto statements: %d" % gotos)
    print("targets with no label anywhere in the file: %d" % len(bad))
    seen = set()
    for fn, line, tgt in bad:
        if fn in seen:
            continue
        seen.add(fn)
        print("  %s:%d  goto %s" % (fn, line, tgt))
        if len(seen) >= 15:
            break
    return 0 if not bad else 1


if __name__ == "__main__":
    sys.exit(main(sys.argv))
