"""Repair C++ leftovers in the recovered units.

Two problems, both introduced by ad-hoc rewriting rather than by the generators:

1.  Identifiers were truncated at `(void)`:
        g_guard_variable_forsead_CalculateTask_getRuntimeTypeInfoStatic(void)::typeInfo
    That is not an identifier -- the `(void)` and the trailing `::` were left because a `::` -> `_` pass ran without
    first flattening the embedded signature. These appear only in the two recovered files.

2.  `v3[0] = dword_60AFE3F8[v2];` -- subscripting a data MACRO. The macro is `(*(int32_t *)(...))`, a scalar, and
    the corpus dereferences such addresses through a pointer cast instead. Rewriting the macro form to an explicit
    `_DWORD` pointer is the same repair the corpus already uses.

This is deliberately conservative: it only rewrites the specific shapes it recognises and reports the count.
"""
import os
import re
import sys

ROOT = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled\recovered"
FILES = ["recovered_named.c", "recovered_missing.c"]

# `name(void)::something` -- flatten the whole run to one identifier
STATIC_LEFTOVER = re.compile(r"([A-Za-z_]\w*(?:\(void\))?(?:::)[A-Za-z_]\w*)")


def flatten_static(m):
    # group(0) is the whole matched run; using group(1) raised IndexError because the pattern passed to sub() has
    # no capture group.
    return re.sub(r"[^A-Za-z0-9]", "_", m.group(0)).replace("__", "_").strip("_")


def main(argv):
    write = "--write" in argv
    for fn in FILES:
        p = os.path.join(ROOT, fn)
        if not os.path.exists(p):
            continue
        t = open(p, encoding="utf-8", errors="replace").read()
        before_a = len(re.findall(r"\)::", t))
        before_b = len(re.findall(r"\b(dword|word|byte|qword|off)_([0-9A-Fa-f]{8})\s*\[", t))

        # 1. any remaining run containing `::`, including `(void)::`
        t = re.sub(r"[A-Za-z_]\w*(?:\(void\))?(?:::[A-Za-z_]\w*)+", flatten_static, t)

        # 2. `dword_XXXXXXXX[expr]` -> `((_DWORD *)(uintptr_t)(0x60000000u + 0xXXXXXXXX))[expr]`
        t = re.sub(r"\b(dword)_([0-9A-Fa-f]{8})\s*\[",
                   lambda m: "((_DWORD *)(uintptr_t)(0x60000000u + 0x%s))[" % m.group(2), t)
        t = re.sub(r"\b(byte)_([0-9A-Fa-f]{8})\s*\[",
                   lambda m: "((_BYTE *)(uintptr_t)(0x60000000u + 0x%s))[" % m.group(2), t)
        t = re.sub(r"\b(word)_([0-9A-Fa-f]{8})\s*\[",
                   lambda m: "((_WORD *)(uintptr_t)(0x60000000u + 0x%s))[" % m.group(2), t)

        after_a = len(re.findall(r"\)::", t))
        after_b = len(re.findall(r"\b(dword|word|byte|qword|off)_([0-9A-Fa-f]{8})\s*\[", t))
        print("  %-24s ::leftovers %d -> %d   subscripted data %d -> %d"
              % (fn, before_a, after_a, before_b, after_b))
        if write:
            open(p, "w", encoding="utf-8", newline="").write(t)
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
