"""Repair leaks one at a time, measuring compiler errors after each, and keep only improving steps.

The "repair every positive banner" approach fails because after the first unclosed body every later banner is also
positive -- there are 2,770 of them in actor_construction.c. Repairing them all inserted 1,131 braces and raised
errors from 4,328 to 5,192.

The hypothesis here is that repair should be sequential and verified: fix ONE leak, recompile, and keep the change
only if the error count falls. If it rises, revert that single step and stop.
"""
import os
import re
import shutil
import subprocess
import sys

sys.path.insert(0, r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\scripts")
from balance_function_braces import blank_literals, ROOT, BANNER

CLANG = r"C:\Program Files\LLVM\clang.exe"
CLANG = r"C:\Program Files\LLVM\bin\clang.exe"
INC = os.path.join(ROOT, "include")

FILES = ["actors/actor_construction.c", "actors/actors_b.c", "powerup/powerup.c"]


def count_errors(path):
    out = subprocess.run([CLANG, "-fsyntax-only", "-Wno-everything", "-ferror-limit=0", "-I", INC, path],
                         capture_output=True, text=True, errors="replace").stderr
    return out.count("error:")


def first_leak(path):
    raw = open(path, encoding="utf-8", errors="replace").read()
    b = blank_literals(raw)
    d = 0
    pos = 0
    for m in BANNER.finditer(raw):
        x = m.start()
        d += b.count("{", pos, x) - b.count("}", pos, x)
        pos = x
        if d > 0:
            return x, d, raw[:x].count("\n") + 1, m.group("name")
    return None


def main(argv):
    files = [f for f in argv[1:] if f.endswith(".c")] or FILES
    for rel in files:
        path = os.path.join(ROOT, rel.replace("/", os.sep))
        base = count_errors(path)
        cur = base
        steps = 0
        print("=== %s  start %d error(s) ===" % (rel, base))
        for _ in range(40):
            leak = first_leak(path)
            if not leak:
                print("   no leaks left")
                break
            x, depth, line, name = leak
            backup = path + ".bak"
            shutil.copyfile(path, backup)
            raw = open(path, encoding="utf-8", errors="replace").read()
            open(path, "w", encoding="utf-8", newline="").write(
                raw[:x] + "\n" + ("  }\n" * depth) + raw[x:])
            after = count_errors(path)
            if after < cur:
                os.remove(backup)
                print("   line %6d %-18s +%d braces  %d -> %d  KEEP" % (line, name, depth, cur, after))
                cur = after
                steps += 1
            else:
                shutil.move(backup, path)
                print("   line %6d %-18s +%d braces  %d -> %d  REVERT (no gain), stopping"
                      % (line, name, depth, cur, after))
                break
        print("   final %d error(s), %d step(s) kept\n" % (cur, steps))
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
