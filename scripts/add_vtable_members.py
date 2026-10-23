"""Give opaque struct blobs a `vtable` pointer at offset 0.

The recovered bodies reach class vtables directly -- `CurrentState->vtable`, then `(cast)vtable + N` to select a
slot. The type headers model these classes as opaque byte blobs (`uint8_t _opaque[0x8]`), so there is no such member
and every such access fails with "no member named 'vtable'".

Offset 0 is correct, not a guess: the corpus already establishes that a Deluxe class object begins with its vtable
pointer (Player's vtable is at offset 0, and the mode/vtable readers index it with a plain dword load). So the first
four bytes of the blob ARE the vtable pointer.

The rewrite keeps `sizeof` EXACTLY unchanged -- the opaque array shrinks by four and a `void *vtable` takes its
place -- so nothing that depends on a class size or on a later field offset can shift. Classes smaller than four
bytes are left alone, since a pointer cannot fit.

Only structs that the compiler reports as needing `vtable` are touched.
"""
import os
import re
import subprocess
import sys

ROOT = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled"
INC = os.path.join(ROOT, "include")
TYPES = os.path.join(INC, "nsmbudx_recovered_types.h")
CLANG = r"C:\Program Files\LLVM\bin\clang.exe"
TUS = [os.path.join(ROOT, "recovered", f)
       for f in ("recovered_named.c", "recovered_missing.c", "recovered_stubs.c")]

OPAQUE = re.compile(r"typedef struct (\w+) \{ uint8_t _opaque\[0x([0-9A-Fa-f]+)\]; \} (\w+);(\s*/\* sizeof 0x[0-9A-Fa-f]+ \*/)?")


def main(argv):
    write = "--write" in argv
    errs = ""
    for tu in TUS:
        if not os.path.exists(tu):
            continue
        r = subprocess.run([CLANG, "-fsyntax-only", "-Wno-everything", "-ferror-limit=0", "-I", INC, tu],
                           capture_output=True, text=True, errors="replace")
        errs += r.stderr

    need = sorted(set(re.findall(r"no member named '(\w+)' in '(?:struct )?(\w+)'", errs)))
    wanted = {}
    for member, struct in need:
        if member == "vtable":
            wanted.setdefault(struct, 0)

    print("  structs needing a vtable member: %d" % len(wanted))
    if not wanted:
        return 0

    t = open(TYPES, encoding="utf-8", errors="replace").read()
    changed = []

    def sub(m):
        name, size_hex, tname, note = m.group(1), m.group(2), m.group(3), m.group(4) or ""
        if name not in wanted:
            return m.group(0)
        size = int(size_hex, 16)
        if size < 4:
            return m.group(0)
        changed.append((name, size))
        rest = size - 4
        if rest:
            return ("typedef struct %s { void *vtable; uint8_t _opaque[0x%X]; } %s;%s"
                    % (name, rest, tname, note))
        return "typedef struct %s { void *vtable; } %s;%s" % (name, tname, note)

    new = OPAQUE.sub(sub, t)
    for n, s in changed:
        print("    %-28s size 0x%X -> vtable + _opaque[0x%X]" % (n, s, max(s - 4, 0)))
    if write:
        open(TYPES, "w", encoding="utf-8", newline="").write(new)
        print("  written")
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
