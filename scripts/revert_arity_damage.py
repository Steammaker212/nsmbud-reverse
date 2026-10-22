"""Undo the damage fix_known_arity.py did to the source files.

WHAT WENT WRONG
---------------
That script padded under-supplied calls to the declared arity. Its reconstruction returned

    text[m.start():start] + new_inner + ")"

where `start` and the closing-paren index `i` were measured in the ORIGINAL string, but the value was
returned as a replacement inside re.sub. The result was spliced in at the wrong extent and the tail was
duplicated:

    sead__HeapMgr__setCurrentHeap_(MEMORY[0xCCEE90]);
 -> sead__HeapMgr__setCurrentHeap_(MEMORY[0xCCEE90], 0)MEMORY[0xCCEE90]);

1,542 sites across five source files. The parse count never improved, so the change bought nothing and
broke real text.

THE REPAIR
----------
The damage is a unique, unambiguous literal, so it is reversible exactly:

    (MEMORY[0xCCEE90], 0)MEMORY[0xCCEE90]);   ->   (MEMORY[0xCCEE90]);

This restores the ORIGINAL call, with the original single argument -- not the padded form. The padding
itself was wrong, so undoing it is the correct end state. The script that made it is disabled in
build_corpus.py with the reason recorded.
"""
import os
import re
import sys

DAMAGED = re.compile(r"\(MEMORY\[0xCCEE90\], 0\)(MEMORY\[0xCCEE90\]\))")


def main(argv):
    if len(argv) < 2:
        print("usage: revert_arity_damage.py <dir> [--write]")
        return 2
    root, write = argv[1], "--write" in argv
    files = total = 0
    for dp, _, fs in os.walk(root):
        for f in fs:
            if not f.endswith(".c"):
                continue
            p = os.path.join(dp, f)
            with open(p, encoding="utf-8", errors="surrogateescape") as fh:
                text = fh.read()
            new, k = DAMAGED.subn(r"\1", text)
            if k:
                files += 1
                total += k
                if write:
                    with open(p, "w", encoding="utf-8", errors="surrogateescape", newline="") as fh:
                        fh.write(new)
    print("padded-call damage reverted: %d in %d files%s"
          % (total, files, "" if write else " (dry run)"))
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
