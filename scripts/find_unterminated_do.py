"""Find `do { ... }` blocks whose closing brace is not followed by a `while (...)`, and report them.

The decompiler's emitter occasionally truncated a loop, leaving the opening `do` and the body but dropping the
`while ( cond );` that terminates it. A `do` without a terminator is not merely unparsable: because the following
statements are then still inside the loop's brace nesting as far as a naive brace counter is concerned, every
subsequent function in the file gets parsed as a nested definition. That is why one dropped line can produce
hundreds of "function definition is not allowed here" errors far away from the damage.

This script only reports. It does not repair, because the two repairs that work are different -- an unbounded
`for ( ;; )` when every exit is break/goto, and a reconstructed condition when the loop is an array walk -- and
choosing between them needs the loop body's own evidence. Reported sites are grouped by file with the enclosing
function name so a repair can be measured one at a time, which is the only reliable way: on this corpus some
brace/terminator edits improve the file and structurally similar ones make it much worse.
"""
import os
import re
import sys

ROOT = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled"


def strip_code(text):
    """Blank out comments and literals, preserving newlines so line numbers stay valid."""
    out = []
    i = 0
    n = len(text)
    state = None
    while i < n:
        if state is None:
            if text.startswith("/*", i):
                state = "block"
                out.append("  ")
                i += 2
                continue
            if text.startswith("//", i):
                state = "line"
                out.append("  ")
                i += 2
                continue
            if text[i] == '"':
                state = "str"
                out.append(" ")
                i += 1
                continue
            if text[i] == "'":
                state = "chr"
                out.append(" ")
                i += 1
                continue
            out.append(text[i])
            i += 1
            continue
        ch = text[i]
        if state == "block":
            if text.startswith("*/", i):
                state = None
                out.append("  ")
                i += 2
                continue
            out.append("\n" if ch == "\n" else " ")
            i += 1
            continue
        if state == "line":
            if ch == "\n":
                state = None
                out.append("\n")
                i += 1
                continue
            out.append(" ")
            i += 1
            continue
        if state in ("str", "chr"):
            if ch == "\\":
                out.append("  ")
                i += 2
                continue
            if (state == "str" and ch == '"') or (state == "chr" and ch == "'"):
                state = None
            out.append(" " if ch != "\n" else "\n")
            i += 1
            continue
    return "".join(out)


def enclosing_function(lines, idx):
    for i in range(idx, -1, -1):
        if lines[i].startswith("/* ====") and i + 1 < len(lines):
            return lines[i + 1].strip().lstrip("* ").strip()
    return "?"


def scan(path):
    text = open(path, encoding="utf-8", errors="replace").read()
    code = strip_code(text)
    lines = code.split("\n")
    raw = text.split("\n")

    # depth per line, so a `do`'s closing brace is the one returning depth to the value before the `do`
    depth = 0
    depths = []
    for ln in lines:
        depths.append(depth)
        depth += ln.count("{") - ln.count("}")

    found = []
    for i, ln in enumerate(lines):
        if ln.strip() != "do":
            continue
        d = depths[i]
        cur = d
        close = None
        for k in range(i + 1, len(lines)):
            cur += lines[k].count("{") - lines[k].count("}")
            if cur == d and lines[k].count("}") > 0:
                close = k
                break
        if close is None:
            found.append((i + 1, None, "<never closes>"))
            continue
        # The emitter writes the terminator either as `} while ( ... );` on the closing line itself, or as
        # `}` followed by `while ( ... );`. Both are well formed; checking only the following line reports the
        # first form as broken, which produced hundreds of false positives on files with zero real errors.
        close_text = lines[close].strip()
        if "while" in close_text:
            continue
        nxt = ""
        for m in range(close + 1, len(lines)):
            if lines[m].strip():
                nxt = lines[m].strip()
                break
        if not nxt.startswith("while"):
            found.append((i + 1, close + 1, nxt[:60]))
    return found, raw


def main(argv):
    target = argv[1] if len(argv) > 1 else None
    total = 0
    for dirpath, _, names in os.walk(ROOT):
        if os.path.basename(dirpath) == "include":
            continue
        for name in sorted(names):
            if not name.endswith(".c"):
                continue
            if target and target not in name:
                continue
            path = os.path.join(dirpath, name)
            found, raw = scan(path)
            if not found:
                continue
            print("  %s" % name)
            for do_line, close_line, nxt in found:
                fn = enclosing_function(raw, do_line - 1)
                total += 1
                print("     L%-7d in %-42s closes %-8s next: %s"
                      % (do_line, fn, close_line or "-", nxt))
    print("  unterminated do-blocks: %d" % total)
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
