"""Point subscripted data labels at their `arr_` form.

The data header provides two views of each label, and they are deliberately different:

    dword_X   (*(int32_t *)(uintptr_t)(0xADDR))   a VALUE
    arr_dword_X  ((int32_t *)(uintptr_t)(0xADDR)) a POINTER

The corpus writes `dword_X[3]` to mean "the 3rd element starting at that address", which is a subscript of a
pointer. A name cannot be both a scalar and an array, so those uses must be spelled `arr_dword_X[3]`.

The generator already emits both forms and even documents this (see gen_data_header.py); the rewrite simply was
never applied to the recovered units. Only names that actually have an `arr_` twin are rewritten, so nothing can be
pointed at a macro that does not exist.
"""
import os
import re
import sys

ROOT = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled"
INC = os.path.join(ROOT, "include")
HDRS = ("nsmbudx_data.h", "nsmbudx_recovered_deps.h", "nsmbudx_undeclared.h")


def arr_names():
    have = set()
    for hf in HDRS:
        p = os.path.join(INC, hf)
        if os.path.exists(p):
            t = open(p, encoding="utf-8", errors="replace").read()
            have.update(re.findall(r"#define (arr_\w+)", t))
    return have


def main(argv):
    write = "--write" in argv
    have = arr_names()
    print("  arr_ forms available: %d" % len(have))
    if not have:
        return 1

    # `name[` where `arr_name` exists
    pat = re.compile(r"\b((?:dword|word|byte|qword|off|flt|dbl|unk)_[0-9A-Fa-f]{8})\s*\[")
    grand = 0
    for dp, _, fs in os.walk(ROOT):
        if os.path.basename(dp) == "include":
            continue
        for fn in fs:
            if not fn.endswith(".c"):
                continue
            p = os.path.join(dp, fn)
            t = open(p, encoding="utf-8", errors="replace").read()
            if "[" not in t:
                continue

            def sub(m):
                if ("arr_" + m.group(1)) in have:
                    return "arr_" + m.group(1) + "["
                return m.group(0)

            new, k = pat.subn(sub, t)
            # count only real rewrites
            k = len(re.findall(r"\barr_(?:dword|word|byte|qword|off|flt|dbl|unk)_[0-9A-Fa-f]{8}\s*\[", new)) - \
                len(re.findall(r"\barr_(?:dword|word|byte|qword|off|flt|dbl|unk)_[0-9A-Fa-f]{8}\s*\[", t))
            if k > 0:
                grand += k
                print("  %-46s %d" % (os.path.relpath(p, ROOT), k))
                if write:
                    open(p, "w", encoding="utf-8", newline="").write(new)
    print("  total subscript rewrites: %d" % grand)
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
