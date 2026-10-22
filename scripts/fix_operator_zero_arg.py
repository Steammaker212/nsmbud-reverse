"""Normalise allocation-operator call sites whose argument list does not match the real symbol.

THE DEFECT
----------
IDA prints a bare C++ `operator delete` as `operator delete()` with no argument -- that is what the
source text says, and it is what a C++ reader would expect, because the operand is implied by the
language. After the rename to `__operator_delete` it becomes a plain C call with ZERO arguments, while
the symbol's real declaration has one:

    libs.h:3115    int __fastcall __operator_delete(int a1);   /* 0x008de3a0 */

clang then rejects it with "too few arguments", which is correct: a C function declared with one
parameter cannot be called with none. 26 sites hit this, and they were the first error in 3 files.

WHAT THIS DOES
--------------
Puts back the operand the C++ spelling left out: `__operator_delete()` -> `__operator_delete(0)`.

Only the ZERO-argument form is touched. A null argument is the honest reading -- no object is being
freed by name at that point, and the decompiler had no value to print. The alternative, inventing an
operand, would be a fabrication.

This is deliberately separate from fix_operator_arity.py, which handles the opposite problem (calls with
MORE arguments than the declaration accepts, i.e. the aligned/placement overload).
"""
import os
import re
import sys

# Zero-argument allocation-operator calls only. Both spellings are covered because this runs after
# fix_qualified_names, which has already produced the C names.
ZERO = re.compile(r"\b(__operator_(?:new|delete)(?:_array)?)\s*\(\s*\)")


def transform(text):
    return ZERO.subn(r"\1(0)", text)


def main(argv):
    if len(argv) < 2:
        print("usage: fix_operator_zero_arg.py <dir> [--write]")
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
    print("zero-argument allocation calls given an operand: %d in %d files%s"
          % (total, files, "" if write else " (dry run)"))
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
