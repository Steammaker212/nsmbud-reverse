"""Remove the extra dereference in casts of form (T*)*MEMORY[addr].

MEMORY is `uint32_t*`, so MEMORY[addr] is a uint32_t LVALUE at that image offset. `*MEMORY[addr]` dereferences
it AGAIN and yields whatever the first four bytes point at, interpreted as a uint32_t -- never a pointer. The
decompiler means "the function pointer stored at this offset":

    ((int (*)(int,int))*MEMORY[0xC8C230])(a, b)      written
    ((int (*)(int,int))MEMORY[0xC8C230])(a, b)       meant

523 sites use this shape. Only the cast forms are touched: where the surrounding code genuinely wants the value
pointed AT (``*(_DWORD *)MEMORY[x]``), the extra star is correct and must stay.
"""
import os, re, sys

ROOT = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled"

# (cast-to-pointer)*MEMORY[addr]   ->   (cast-to-pointer)MEMORY[addr]
CAST_DEREF = re.compile(r"(\(\s*(?:int|void|unsigned\s+int|signed\s+int|char|_BYTE|float|double)"
                        r"(?:\s*\(\s*\*\s*\)|\s*\(\s*__fastcall\s*\*\s*\)|[\w \t\*]*?\*\s*\([^)]*\))\s*\))\s*\*\s*MEMORY\[")

def main(argv):
    write = "--write" in argv
    total = 0
    for dp, _, names in os.walk(ROOT):
        if "include" in dp or "authoritative" in dp: continue
        for fn in sorted(names):
            if not fn.endswith(".c"): continue
            path = os.path.join(dp, fn)
            t = open(path, encoding="utf-8", errors="replace").read()
            if "*MEMORY[" not in t: continue
            # only the "cast to function/pointer type, then *MEMORY[" shape
            new, n = re.subn(r"(\)\s*)\*\s*MEMORY\[", r"\1MEMORY[", t)
            if n:
                total += n
                print("  %-42s %d" % (os.path.relpath(path, ROOT), n))
                if write:
                    open(path, "w", encoding="utf-8", newline="").write(new)
    print("total: %d (write=%s)" % (total, write))
    return 0

if __name__ == "__main__":
    sys.exit(main(sys.argv))