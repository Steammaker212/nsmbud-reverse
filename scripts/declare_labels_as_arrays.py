"""Declare subscripted data labels as arrays instead of scalars.

The recovered units subscript data labels that the dependency header declares as scalars:

    extern uintptr_t aCarrypWalk_0;      then:  aCarrypWalk_0[j]
    extern int32_t   sinLutTable;        then:  sinLutTable[1]

A scalar cannot be subscripted, so each such use is an error. These are string and table labels in the binary -- the
IDA names (`aCarrypWalk...`, `asc_60AEA571`, `algn_...`, `sinLutTable`) mark them as data, not as single values -- so
declaring them as arrays is the faithful reading, not a workaround. The arrays are left as unsized externs
(`extern uint8_t name[];`) precisely because the exporter records an address but not an extent; inventing a length
would be a guess, while `[]` defers it to wherever a definition exists and keeps every subscript valid.

Only labels the compiler reports as subscripted are changed, and only where the current declaration is a scalar.
"""
import os
import re
import subprocess
import sys

ROOT = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled"
INC = os.path.join(ROOT, "include")
DEPS = os.path.join(INC, "nsmbudx_recovered_deps.h")
CLANG = r"C:\Program Files\LLVM\bin\clang.exe"
TUS = [os.path.join(ROOT, "recovered", f)
       for f in ("recovered_named.c", "recovered_missing.c", "recovered_stubs.c", "recovered_tail_thunks.c")]


def subscripted_names():
    """Names the compiler reports as 'subscripted value that is not an array'."""
    names = set()
    for tu in TUS:
        if not os.path.exists(tu):
            continue
        r = subprocess.run([CLANG, "-fsyntax-only", "-Wno-everything", "-ferror-limit=0", "-I", INC, tu],
                           capture_output=True, text=True, errors="replace")
        src = open(tu, encoding="utf-8", errors="replace").read().split("\n")
        # The path contains colons (C:\Users\...), so a `[^:]*` prefix stops early and matches nothing. Anchor on
        # the filename plus line:col instead.
        for m in re.finditer(r"recovered_\w+\.c:(\d+):\d+: error: subscripted value", r.stderr, re.M):
            ln = int(m.group(1))
            if 1 <= ln <= len(src):
                mm = re.search(r"(\w+)\s*\[", src[ln - 1])
                if mm:
                    names.add(mm.group(1))
    return names


def main(argv):
    write = "--write" in argv
    names = sorted(subscripted_names())
    print("  subscripted labels reported by the compiler: %d" % len(names))

    deps = open(DEPS, encoding="utf-8").read()
    changed = []
    for n in names:
        # match `extern <type> name;` but never an array or pointer declaration already
        m = re.search(r"(?m)^extern\s+(?!.*\[\])(?!.*\*)\s*([A-Za-z_][\w ]*?)\s+%s\s*;" % re.escape(n), deps)
        if not m:
            continue
        ty = m.group(1).strip()
        # a byte element type keeps the declaration honest for string/table data of unknown extent
        elem = "uint8_t" if ty in ("uintptr_t", "char", "int8_t", "uint8_t") else ty
        new = "extern %s %s[];   /* data label; subscripted, so declared as an array of unknown extent */" % (elem, n)
        deps = deps[:m.start()] + new + deps[m.end():]
        changed.append((n, ty, elem))

    for n, ty, elem in changed:
        print("    %-54s %s -> %s[]" % (n, ty, elem))
    print("  declarations changed: %d" % len(changed))
    if write and changed:
        open(DEPS, "w", encoding="utf-8", newline="").write(deps)
        print("  written")
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
