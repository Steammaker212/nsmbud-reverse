"""Run clang over the corpus and report full diagnostics.

Exists because every PowerShell route truncated or mangled the message: the passing pipeline cuts the text
at the first space ("use of undeclared " with the identifier missing), `cmd /c` was shadowed by a devkitPro
msys2 cmd.exe on PATH, and Start-Process split the include path on its space ("C:\\Users\\Saif" /
"Khan\\Downloads\\..."). Driving clang from Python with an argument list avoids all three.

Usage:
    check_corpus.py <include-dir> <root> [--one NAME] [--errors N]
"""
import os
import subprocess
import sys

CLANG = r"C:\Program Files\LLVM\bin\clang.exe"


def sources(root):
    for dirpath, _, names in os.walk(root):
        # authoritative/ holds standalone re-decompilations of single functions; they are reference
        # material, not translation units, so they are excluded from the parse count.
        if "include" in dirpath or "authoritative" in dirpath:
            continue
        for fn in sorted(names):
            if fn.endswith(".c"):
                yield os.path.join(dirpath, fn)


def compile_one(path, inc):
    # -m32 because this is a 32-bit ARM binary: on the host default target every pointer is 8 bytes and the
    #   recovered struct offsets stop meaning anything.
    # -D__fastcall= because Hex-Rays writes `int __fastcall f();` and clang does not implement __fastcall, so an
    #   undefined keyword makes every unprototyped function an error unrelated to the C being checked.
    proc = subprocess.run([CLANG, "-m32", "-D__fastcall=", "-fsyntax-only", "-Wno-everything", "-I", inc,
                           "-ferror-limit=1", path],
                          capture_output=True, text=True, errors="replace")
    diags = [l for l in (proc.stderr + proc.stdout).splitlines()
             if " error: " in l or l.strip().startswith("error:")]
    return proc.returncode == 0, diags


def main(argv):
    inc = argv[1]
    root = argv[2]
    only = None
    if "--one" in argv:
        only = argv[argv.index("--one") + 1]
    maxerr = 2
    if "--errors" in argv:
        maxerr = int(argv[argv.index("--errors") + 1])

    ok = bad = 0
    failures = []
    for path in sources(root):
        if only and os.path.basename(path) != only:
            continue
        good, diags = compile_one(path, inc)
        if good:
            ok += 1
        else:
            bad += 1
            failures.append((os.path.basename(path), diags[:maxerr]))

    print("parse: %d / %d" % (ok, ok + bad))
    if failures:
        print()
        for name, diags in failures:
            print("  %s" % name)
            for d in diags:
                d = d.replace(root, "").replace(inc, "<inc>")
                print("     %s" % d.strip())
    return 0 if not failures else 1


if __name__ == "__main__":
    sys.exit(main(sys.argv))
