"""Normalise IDA-specific spellings in the corpus .c files.

These are the edits that make decompiler output compile as C. Each is purely syntactic -- no arithmetic
changes -- and each fixes a class of error that was blocking whole translation units.

Order matters: the bracket rewrite must run before anything that inspects call shapes.

1. `__operator_new[](n)`  -> `__operator_new_array_al(n)`
   IDA prints the C++ array form `operator new[]` with a literal `[]` in the name, which is not a legal C
   identifier: "expected expression". Mapped to the project's existing `_array_al` overloads, which
   nsmbudx_types.h already declares. 457 sites.
"""
import os
import re
import sys

BRACKET = {
    "__operator_new[]": "__operator_new_array_al",
    "__operator_delete[]": "__operator_delete_array_al",
}


def main(argv):
    root = argv[1]
    write = "--write" in argv
    files = 0
    sites = 0
    for dirpath, _, names in os.walk(root):
        if "include" in dirpath:
            continue
        for fn in sorted(names):
            if not fn.endswith(".c"):
                continue
            path = os.path.join(dirpath, fn)
            with open(path, encoding="utf-8", errors="replace") as fh:
                text = fh.read()
            original = text
            for old, new in BRACKET.items():
                if old in text:
                    sites += text.count(old)
                    text = text.replace(old, new)
            if text != original:
                files += 1
                if write:
                    with open(path, "w", encoding="utf-8", newline="") as fh:
                        fh.write(text)
                print("  %-44s bracket form normalised" % fn)
    print("\nfiles: %d, sites: %d (write=%s)" % (files, sites, write))
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
