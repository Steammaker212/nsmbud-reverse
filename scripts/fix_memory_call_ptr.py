import re, os, sys
ROOT = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled"
PAT = re.compile(r"(\(\s*(?:int|void|unsigned\s+int|signed\s+int|_DWORD|_BYTE|char|float|double)"
                 r"\s*\(\s*__fastcall\s*\*\s*\)\s*\([^)]*\)\s*\))\s*\*\s*MEMORY\[")
def main(argv):
    write = "--write" in argv
    total = 0
    for dp, _, ns in os.walk(ROOT):
        if "include" in dp or "authoritative" in dp: continue
        for fn in sorted(ns):
            if not fn.endswith(".c"): continue
            p = os.path.join(dp, fn)
            t = open(p, encoding="utf-8", errors="replace").read()
            t2, n = PAT.subn(r"\1MEMORY[", t)
            if n:
                total += n
                print("  %-40s %d" % (os.path.relpath(p, ROOT), n))
                if write: open(p, "w", encoding="utf-8", newline="").write(t2)
    print("total: %d (write=%s)" % (total, write))
    return 0
if __name__ == "__main__": sys.exit(main(sys.argv))