"""Rewrite SUBSCRIPTED uses of dword_X to arr_dword_X where both forms exist.

nsmbudx_data.h emits two forms for the same address:
    #define dword_60B0C20C      (*(int32_t *)(...))    scalar read
    #define arr_dword_60B0C20C  ((int32_t *)(...))      array base

Hex-Rays is inconsistent about which name it prints, so `dword_60B0C20C[v17]` fails to compile while the
`arr_` form in modes.c is fine. Only subscripted uses need rewriting; a bare `v55 = dword_60B0C20C;` is a
correct scalar dereference.

Performance: two earlier versions were unusably slow. Looping per symbol per file is quadratic, and a single
alternation of thousands of alternatives backtracks pathologically. This matches the generic NAME-SHAPE once
per file, then consults a set -- linear, with no large regex.
"""
import os
import re

ROOT = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled"
DATA = os.path.join(ROOT, "include", "nsmbudx_data.h")
SYM = re.compile(r"(?<!arr_)\b((dword|word|byte|flt|off|unk)_[0-9A-Fa-f]{6,8})(\s*\[)")


def main():
    data = open(DATA, encoding="utf-8", errors="replace").read()
    scalar = set(re.findall(r"#define\s+((?:dword|word|byte|flt|off|unk)_[0-9A-Fa-f]{6,8})\s", data))
    arrays = set(re.findall(r"#define\s+arr_((?:dword|word|byte|flt|off|unk)_[0-9A-Fa-f]{6,8})\s", data))
    both = scalar & arrays
    print("symbols with both scalar and array forms: %d" % len(both))
    if not both:
        return

    files = sites = 0
    for dirpath, _, names in os.walk(ROOT):
        if "include" in dirpath or "authoritative" in dirpath:
            continue
        for fn in sorted(names):
            if not fn.endswith(".c"):
                continue
            p = os.path.join(dirpath, fn)
            t = open(p, encoding="utf-8", errors="replace").read()
            if "[" not in t:
                continue
            out = []
            last = 0
            n = 0
            for m in SYM.finditer(t):
                if m.group(1) not in both:
                    continue
                out.append(t[last:m.start()])
                out.append("arr_" + m.group(1) + m.group(3))
                last = m.end()
                n += 1
            if n:
                out.append(t[last:])
                open(p, "w", encoding="utf-8", newline="").write("".join(out))
                files += 1
                sites += n
                print("  %-42s %d site(s)" % (fn, n))
    print("files: %d, subscripted uses fixed: %d" % (files, sites))


if __name__ == "__main__":
    main()