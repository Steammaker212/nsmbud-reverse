"""Make IDA's BYTE2/BYTE4/LOWORD-style byte-extract macros assignable.

THE DEFECT
----------
IDA writes `BYTE2(v8[8]) = 0;` to store into the third byte of a word. Its own macro is

    #define BYTE2(x) (*(uint8_t *)&(x) + 2)      -- wrong, and not what is used here

so the corpus simply has no definition for it, and 186 of the 553 uses are ASSIGNMENT TARGETS. A
function-like macro expanding to a value is not an lvalue, so `BYTE2(x) = 0` cannot work however the
macro is written: C forbids assigning to an rvalue.

THE FIX
-------
Rewrite the assignment to an explicit dereferencing cast, byte by byte:

    BYTE2(v8[8]) = 0    ->    *(uint8_t *)((uint8_t *)&(v8[8]) + 2) = 0

The address is formed the same way IDA means it: take the object's address, add the byte index, and
store through it. Reads are left alone -- `BYTE2(x)` as an rvalue is fine as soon as it is defined, and
changing them would be a bigger edit than the problem requires.

This is the same distinction that made the array-data macros need `arr_` pointer forms: a scalar macro
cannot be written through.
"""
import os
import re
import sys

# BYTE0..BYTE7 used as an assignment target. The RHS is left untouched by only replacing the LHS.
ASSIGN = re.compile(r"\bBYTE([0-7])\s*\(([^()]*(?:\([^()]*\)[^()]*)*)\)\s*=(?!=)")
# The same for WORD1 (the upper half of a dword): LOWORD/HIWORD already exist as macros, but WORD1 does
# not, and it appears as a store target too.
ASSIGN_WORD = re.compile(r"\bWORD([1-3])\s*\(([^()]*(?:\([^()]*\)[^()]*)*)\)\s*=(?!=)")


def sub_byte(m):
    idx, expr = m.group(1), m.group(2)
    return "*(uint8_t *)((uint8_t *)&(%s) + %s) =" % (expr, idx)


def sub_word(m):
    idx, expr = m.group(1), m.group(2)
    return "*(uint16_t *)((uint8_t *)&(%s) + 2 * %s) =" % (expr, idx)


def transform(text):
    total = 0
    text, a = ASSIGN.subn(sub_byte, text)
    total += a
    text, b = ASSIGN_WORD.subn(sub_word, text)
    total += b
    return text, total


def main(argv):
    if len(argv) < 2:
        print("usage: fix_byte_assign.py <dir> [--write]")
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
            new, k = transform(text)
            if k:
                files += 1
                total += k
                if write:
                    with open(p, "w", encoding="utf-8", errors="surrogateescape", newline="") as fh:
                        fh.write(new)
    print("byte/word extract assignments rewritten: %d in %d files%s"
          % (total, files, "" if write else " (dry run)"))
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
