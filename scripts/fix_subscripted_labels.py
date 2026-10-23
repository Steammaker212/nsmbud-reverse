"""Point subscripted data labels at an `arr_` pointer view, creating the view when it is absent.

The data headers expose each label twice, deliberately:

    dword_X      (*(int32_t *)(uintptr_t)(0xADDR))    a VALUE
    arr_dword_X  ((int32_t *)(uintptr_t)(0xADDR))     a POINTER

Code that writes `dword_X[i]` is subscripting a value, which C rejects. Two fixes were needed:

  * for labels that already have an `arr_` twin (all the hex-named ones), rewrite the use;
  * for NAMED labels (`aCarrypWalk_0`, `sinLutTable`, `algn_60CC54F8`) there is no `arr_` form at all, because the
    exporter only emits the value macro for them. This script appends the pointer form, deriving address and element
    type from the existing value macro rather than assuming them.

A label is only rewritten when the pointer macro exists or was just created from a value macro whose address could be
read, so a use can never end up pointing at a macro that does not exist.
"""
import os
import re
import sys

ROOT = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled"
INC = os.path.join(ROOT, "include")
HDRS = ("nsmbudx_data.h", "nsmbudx_recovered_deps.h", "nsmbudx_undeclared.h")

# `#define NAME (*(TYPE *)(uintptr_t)(0xADDR))`
VALUE_MACRO = re.compile(r"(?m)^#define (\w+)\s+\(\*\((\w+)\s*\*\)\(uintptr_t\)\((0x[0-9A-Fa-f]+)\)\)\s*$")
# any subscript use in a .c file
SUBSCRIPT = re.compile(r"\b(\w+)\s*\[")


def header_text():
    out = ""
    for h in HDRS:
        p = os.path.join(INC, h)
        if os.path.exists(p):
            out += open(p, encoding="utf-8", errors="replace").read()
    return out


def main(argv):
    write = "--write" in argv
    hdr = header_text()
    have_arr = set(re.findall(r"#define (arr_\w+)", hdr))
    values = dict((m.group(1), (m.group(2), m.group(3))) for m in VALUE_MACRO.finditer(hdr))
    print("  value macros: %d   arr_ macros: %d" % (len(values), len(have_arr)))

    # collect subscripted names across every .c file
    wanted = {}
    for dp, _, fs in os.walk(ROOT):
        if os.path.basename(dp) == "include":
            continue
        for fn in fs:
            if not fn.endswith(".c"):
                continue
            p = os.path.join(dp, fn)
            t = open(p, encoding="utf-8", errors="replace").read()
            for m in SUBSCRIPT.finditer(t):
                n = m.group(1)
                if n in values:
                    wanted.setdefault(n, 0)
                    wanted[n] += 1

    need_new = sorted(n for n in wanted if ("arr_" + n) not in have_arr)
    print("  subscripted value labels: %d   lacking an arr_ form: %d" % (len(wanted), len(need_new)))

    if need_new and write:
        lines = ["\n/* Pointer views for named labels the recovered units subscript. Each address and element type is",
                 " * taken from the existing value macro for the same label, not assumed. */"]
        for n in need_new:
            ty, addr = values[n]
            lines.append("#define arr_%s ((%s *)(uintptr_t)(%s))" % (n, ty, addr))
        target = os.path.join(INC, "nsmbudx_data.h")
        with open(target, "a", encoding="utf-8", newline="") as f:
            f.write("\n".join(lines) + "\n")
        print("  appended %d arr_ definitions to nsmbudx_data.h" % len(need_new))
        have_arr |= set("arr_" + n for n in need_new)

    # rewrite uses where the pointer form is now available
    total = 0
    for dp, _, fs in os.walk(ROOT):
        if os.path.basename(dp) == "include":
            continue
        for fn in fs:
            if not fn.endswith(".c"):
                continue
            p = os.path.join(dp, fn)
            t = open(p, encoding="utf-8", errors="replace").read()
            orig = t
            for n in wanted:
                if ("arr_" + n) not in have_arr:
                    continue
                t = re.sub(r"(?<![\w.>])arr_%s\s*\[" % re.escape(n), "arr_%s[" % n, t)  # collapse doubles
                t = re.sub(r"(?<![\w.>])\b%s\s*\[" % re.escape(n), "arr_%s[" % n, t)
            if t != orig:
                cnt = len(re.findall(r"arr_\w+\[", t)) - len(re.findall(r"arr_\w+\[", orig))
                total += cnt
                print("    %-40s %+d" % (os.path.relpath(p, ROOT), cnt))
                if write:
                    open(p, "w", encoding="utf-8", newline="").write(t)
    print("  rewrites: %d" % total)
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
