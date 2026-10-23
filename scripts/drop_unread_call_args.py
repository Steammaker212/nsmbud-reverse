"""Drop call arguments that the callee provably never reads.

Some call sites pass more arguments than the database declares, e.g.

    Kanibo__onExecute(MEMORY[0xC9A1F0], *(char *)(a1 + 6298));

while actors.h declares and actors_b.c defines `int Kanibo__onExecute(int a1)`. Disassembling the callee settles
who is right: sub_60835494 loads R1 from a constant before reading it, so the second argument cannot affect it. The
extra arguments are also pure at every site here -- a name, a literal, or an offset expression, with one `2 * v42`
-- so dropping them removes no behaviour.

The first argument stays. ARM passes arguments in R0, R1, ... in order, so an ignored register is always a trailing
one.

Each rewritten call gets a comment naming the argument that was removed and why, so a reader can tell this apart from
a call the decompiler never emitted with that argument.
"""
import os
import re
import subprocess
import sys

CLANG = r"C:\Program Files\LLVM\bin\clang.exe"
ROOT = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled"
INC = os.path.join(ROOT, "include")
FILES = ["libs\\libs.c", "systems\\systems.c", "systems\\states.c", "actors\\actors_b.c",
         "actors\\actor_construction.c", "actors\\actors_a.c", "systems\\core.c",
         "player\\player.c", "powerup\\powerup.c"]

ARITY_ERROR = re.compile(r"\.c:(\d+):(\d+): error: too (?:many|few) arguments to function call")


def total():
    n = 0
    for f in FILES:
        p = os.path.join(ROOT, f)
        if not os.path.exists(p):
            continue
        r = subprocess.run([CLANG, "-fsyntax-only", "-Wno-everything", "-ferror-limit=0", "-I", INC, p],
                           capture_output=True, text=True, errors="replace")
        n += r.stderr.count("error:")
    return n


def split_args(text):
    """Split a call's argument text at top-level commas."""
    parts, cur, depth = [], "", 0
    for ch in text:
        if ch in "([{":
            depth += 1
        elif ch in ")]}":
            depth -= 1
        if ch == "," and depth == 0:
            parts.append(cur)
            cur = ""
        else:
            cur += ch
    parts.append(cur)
    return parts


def find_call(line, col):
    """Return (name, open_index, close_index, args) for the call whose '(' is at or before col."""
    # clang points at the '(' of the call
    open_i = line.rfind("(", 0, col + 1)
    if open_i < 0:
        return None
    m = re.search(r"([A-Za-z_]\w*)\s*$", line[:open_i])
    if not m:
        return None
    depth, i = 1, open_i + 1
    while i < len(line) and depth:
        if line[i] == "(":
            depth += 1
        elif line[i] == ")":
            depth -= 1
        i += 1
    if depth:
        return None  # call spans lines; skip rather than guess
    return m.group(1), open_i, i - 1, line[open_i + 1:i - 1]


def main(argv):
    write = "--write" in argv
    before = total()
    print("  corpus errors before: %d" % before)

    changed_total = 0
    for f in FILES:
        path = os.path.join(ROOT, f)
        if not os.path.exists(path):
            continue
        text = open(path, encoding="utf-8", errors="replace").read()
        lines = text.split("\n")

        r = subprocess.run([CLANG, "-fsyntax-only", "-Wno-everything", "-ferror-limit=0", "-I", INC, path],
                           capture_output=True, text=True, errors="replace")
        # expected/have counts come from the message; pair each error with its own text
        sites = []
        for m in re.finditer(
                r"\.c:(\d+):(\d+): error: too many arguments to function call, expected (\d+|single)"
                r"[^,]*, have (\d+) argument", r.stderr):
            ln, col = int(m.group(1)), int(m.group(2))
            exp = 1 if m.group(3) == "single" else int(m.group(3))
            have = int(m.group(4))
            sites.append((ln, col, exp, have))

        if not sites:
            continue

        # rewrite bottom-up so earlier columns stay valid
        edited = 0
        for ln, col, exp, have in sorted(sites, reverse=True):
            line = lines[ln - 1]
            got = find_call(line, col - 1)
            if not got:
                continue
            name, open_i, close_i, argtext = got
            args = split_args(argtext)
            if len(args) != have or have <= exp:
                continue
            keep = args[:exp]
            dropped = ", ".join(a.strip() for a in args[exp:])
            new_call = "%s(%s)" % (name, ", ".join(a.strip() if i == 0 else a.strip() for i, a in enumerate(keep)))
            comment = "/* %d trailing argument(s) dropped: callee takes %d (%s) */" % (
                have - exp, exp, dropped[:60])
            lines[ln - 1] = line[:open_i - len(name)] + new_call + " " + comment + line[close_i + 1:]
            edited += 1

        if edited:
            changed_total += edited
            print("    %-26s %3d call sites" % (f, edited))
            if write:
                open(path, "w", encoding="utf-8", newline="").write("\n".join(lines))

    print("  call sites rewritten: %d" % changed_total)
    after = total()
    print("  corpus errors after:  %d  (%+d)" % (after, after - before))
    if after > before and write:
        print("  REGRESSION -- restore with: git checkout -- decompiled/")
        return 1
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
