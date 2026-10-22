"""Measure the TRUE sizeof() of every corpus struct with clang, and compare to main.i64.

The first size comparison was WRONG and would have caused damage if acted on: it summed only the
`uint8_t _pad_*/_opaque[]` arrays in each struct body and ignored the `uint32_t field_XXXX;` members.
That is why it reported Actor as 0x1 (it has one 1-byte pad) against a real 0x50, and it invented a
-240 delta on ActiveCollider. Only the compiler knows the real layout, so ask the compiler.

Approach: emit one translation unit that includes the prelude and defines a symbol whose size encodes
sizeof(T) for each type, then let clang -fsyntax-only report the numbers by static_assert probing. That
is slow per type, so instead use _Static_assert with the expected value and bisect on failure -- or more
simply, compile a tiny program per type with a char array sized by sizeof and let clang print the array
size in a deliberate error. Simplest reliable trick: `int probe[sizeof(T)];` then provoke a diagnostic
that names the array size.
"""
import json
import os
import re
import subprocess
import sys

CLANG = r"C:\Program Files\LLVM\bin\clang.exe"


def struct_names(headers_dir):
    names = set()
    for fn in os.listdir(headers_dir):
        if not fn.endswith(".h"):
            continue
        with open(os.path.join(headers_dir, fn), encoding="utf-8", errors="replace") as fh:
            text = fh.read()
        names.update(re.findall(r"typedef struct (\w+)\s*\{", text))
        names.update(re.findall(r"^struct (\w+) \{", text, re.M))
    return sorted(names)


def measure(headers_dir, names):
    """One translation unit, one deliberate error listing every size.

    `char probe_N[sizeof(T)] = 1;` does NOT work -- clang reports "array initializer must be an
    initializer list" and never prints the extent. The technique that does work is a REDEFINITION
    CLASH: declaring the same array twice with different extents makes clang print both types, e.g.
        redefinition of 'probe_3' with a different type: 'char[80]' vs 'char[1]'
    so the real sizeof arrives in the message.
    """
    lines = ['#include "nsmbudx_prelude.h"']
    for i, nm in enumerate(names):
        lines.append("char probe_%d[sizeof(%s)];" % (i, nm))
        lines.append("char probe_%d[1];" % i)
    src = "\n".join(lines) + "\n"
    path = os.path.join(os.environ.get("TEMP", "."), "size_probe.c")
    with open(path, "w", encoding="utf-8") as fh:
        fh.write(src)

    proc = subprocess.run([CLANG, "-fsyntax-only", "-Wno-everything", "-I", headers_dir,
                           "-ferror-limit=0", path],
                          capture_output=True, text=True)
    out = proc.stderr + proc.stdout
    sizes = {}
    # clang's message names the NEW type and the OLD one in that order:
    #   "redefinition of 'probe_3' with a different type: 'char[1]' vs 'char[80]'"
    # where the FIRST type is the redefinition (char[1]) and the SECOND is our sizeof() array. Parsing
    # group(1) alone returned 1 for all 27 types -- a total fabrication that looked like a finding.
    for m in re.finditer(r"redefinition of 'probe_(\d+)' with a different type: "
                         r"'(?:signed |unsigned )?char\[(\d+)\]' vs '(?:signed |unsigned )?char\[(\d+)\]'",
                         out):
        idx = int(m.group(1))
        if 0 <= idx < len(names):
            sizes[names[idx]] = int(m.group(3))
    return sizes, out


def main(argv):
    headers = argv[1]
    types_json = r"C:\Users\Saif Khan\Downloads\main.idb\.rea\main_i64_types.json"
    with open(types_json, encoding="utf-8") as fh:
        theirs = {r["name"]: r["size"] for r in json.load(fh) if r["size"]}

    names = [n for n in struct_names(headers) if n in theirs]
    print("structs in both headers and main.i64: %d" % len(names))
    if not names:
        return 1

    sizes, raw = measure(headers, names)
    if not sizes:
        print("clang produced no sizes; first 800 chars of output:")
        print(raw[:800])
        return 1

    agree, differ = [], []
    for nm, t in sorted((n, theirs[n]) for n in sizes):
        o = sizes[nm]
        (agree if o == t else differ).append((nm, t, o))

    print("measured: %d" % len(sizes))
    print("  AGREE   : %d" % len(agree))
    print("  DIFFERS : %d" % len(differ))
    print()
    for nm, t, o in differ:
        print("  %-32s main.i64=0x%-6X here=0x%-6X delta %+d" % (nm, t, o, o - t))
    print()
    for nm, t, o in agree[:40]:
        print("  ok %-30s 0x%X" % (nm, t))
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
