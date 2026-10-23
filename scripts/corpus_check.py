"""The canonical way to syntax-check this corpus.

The decompiled code describes a 32-bit ARM binary. Checking it on the host default target lays every struct out with
64-bit pointers, which moves `struct ActorBuildInfo.profile` from +0x0C to +0x10 and turns every offset-derived
number in the headers into a lie. That cost real time: a set of `_Static_assert` checks added to the header appeared
to fail in every translation unit, and the struct looked wrong, when the only problem was the target.

Two flags therefore belong in every check:

    -m32            pointers are 4 bytes, so recovered offsets are meaningful
    -D__fastcall=   Hex-Rays writes `int __fastcall f();`. `__fastcall` is a Microsoft extension clang does not
                    implement; left undefined, every unprototyped function becomes an error ("function with no
                    prototype cannot use the fastcall calling convention"). Defining it empty isolates the calling
                    convention from the signature, which is what a syntax check cares about.

Use this module rather than re-deriving the flags; several scripts in this directory had drifted to the wrong ones.
"""
import collections
import os
import re
import subprocess

CLANG = r"C:\Program Files\LLVM\bin\clang.exe"
ROOT = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled"
INC = os.path.join(ROOT, "include")

FLAGS = ["-m32", "-D__fastcall=", "-fsyntax-only", "-Wno-everything", "-ferror-limit=0", "-I", INC]

AGGREGATES = ["libs\\libs.c", "systems\\systems.c", "systems\\states.c", "actors\\actors_b.c",
              "actors\\actor_construction.c", "actors\\actors_a.c", "systems\\core.c",
              "player\\player.c", "powerup\\powerup.c"]

RECOVERED = ["recovered\\recovered_named.c", "recovered\\recovered_missing.c",
             "recovered\\recovered_stubs.c", "recovered\\recovered_tail_thunks.c"]


def check_one(rel):
    p = os.path.join(ROOT, rel)
    if not os.path.exists(p):
        return None
    r = subprocess.run([CLANG] + FLAGS + [p], capture_output=True, text=True, errors="replace")
    return r.stderr


def count(rels=None):
    """Total compiler errors across the given units."""
    n = 0
    for rel in (rels or AGGREGATES):
        err = check_one(rel)
        if err:
            n += err.count("error:")
    return n


def by_file(rels=None):
    out = {}
    for rel in (rels or AGGREGATES):
        err = check_one(rel)
        out[rel] = 0 if err is None else err.count("error:")
    return out


def categories(rels=None):
    c = collections.Counter()
    for rel in (rels or AGGREGATES):
        err = check_one(rel)
        if not err:
            continue
        for m in re.finditer(r"error: ([^\n]{0,80})", err):
            c[re.sub(r"'[^']*'", "'X'", m.group(1)[:56])] += 1
    return c


def sites(rels=None):
    """(file, line, message) for every error, so a fix can be applied where it is reported."""
    out = []
    for rel in (rels or AGGREGATES):
        err = check_one(rel)
        if not err:
            continue
        for m in re.finditer(r"\.c:(\d+):\d+: error: ([^\n]+)", err):
            out.append((rel, int(m.group(1)), m.group(2)))
    return out


if __name__ == "__main__":
    print("  per-file:")
    total = 0
    for f, n in by_file().items():
        print("    %-30s %4d" % (f, n))
        total += n
    print("  total: %d" % total)
    print("  top categories:")
    for k, v in categories().most_common(8):
        print("    %4d  %s" % (v, k))
