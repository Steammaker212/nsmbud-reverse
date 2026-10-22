"""Find the first point where a corpus .c file's brace structure breaks.

Needed because clang reports the SYMPTOM ("function definition is not allowed here") at a line far from
the CAUSE. A hand-rolled character scan is also unreliable: multi-line /* */ comments and string literals
containing braces both corrupt the count, which is why the first two attempts reported a final depth of 16
for both the working and broken copies of player.c and looked like nonsense.

Approach: tokenise properly, then report every depth dip below the enclosing function's baseline with the
line that caused it.
"""
import re
import sys


def strip_noise(text):
    """Remove comments and string/char literals, preserving line structure.

    Character-level deletion with a single pass so `/*` inside a string does not open a comment and a
    brace inside a comment does not count.
    """
    out = []
    i, n = 0, len(text)
    state = "code"
    while i < n:
        c = text[i]
        nxt = text[i + 1] if i + 1 < n else ""
        if state == "code":
            if c == "/" and nxt == "*":
                state = "block"
                out.append(" ")
                i += 2
                continue
            if c == "/" and nxt == "/":
                state = "line"
                out.append(" ")
                i += 2
                continue
            if c == '"':
                state = "str"
                out.append(" ")
                i += 1
                continue
            if c == "'":
                state = "chr"
                out.append(" ")
                i += 1
                continue
            out.append(c)
            i += 1
        elif state == "block":
            if c == "*" and nxt == "/":
                state = "code"
                i += 2
                continue
            out.append("\n" if c == "\n" else " ")
            i += 1
        elif state == "line":
            if c == "\n":
                state = "code"
                out.append("\n")
            else:
                out.append(" ")
            i += 1
        elif state == "str":
            if c == "\\":
                i += 2
                continue
            if c == '"':
                state = "code"
            out.append(" ")
            i += 1
        elif state == "chr":
            if c == "\\":
                i += 2
                continue
            if c == "'":
                state = "code"
            out.append(" ")
            i += 1
    return "".join(out)


def main(argv):
    path = argv[1]
    with open(path, encoding="utf-8", errors="replace") as fh:
        raw = fh.read()
    clean = strip_noise(raw)
    raw_lines = raw.split("\n")
    clean_lines = clean.split("\n")

    depth = 0
    stack = []
    problems = []
    for idx, line in enumerate(clean_lines):
        for ch in line:
            if ch == "{":
                depth += 1
                stack.append(idx + 1)
            elif ch == "}":
                depth -= 1
                if depth < 0:
                    problems.append((idx + 1, "depth went NEGATIVE here", depth))
                    depth = 0
                elif stack:
                    stack.pop()

    print("file            : %s" % path)
    print("lines           : %d" % len(raw_lines))
    print("final depth     : %d" % depth)
    if depth > 0:
        print("UNCLOSED blocks, innermost last (line the '{' is on):")
        for ln in stack[-min(len(stack), 8):]:
            print("   opens at line %-7d %s" % (ln, raw_lines[ln - 1].strip()[:88]))
    for ln, why, d in problems[:8]:
        print("   line %-7d %s" % (ln, raw_lines[ln - 1].strip()[:88]))
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
