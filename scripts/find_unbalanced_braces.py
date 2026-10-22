"""Find functions whose brace depth never returns to zero -- the cause of cascading "definition not allowed here".

2,099 of the 5,420 errors in the nine failing aggregates are "function definition is not allowed here". That is
not 2,099 separate bugs: it is what a compiler says for every function AFTER one unbalanced brace. A single
unclosed `{` turns the rest of the file into a nested scope.

This walks each file, tracking brace depth while skipping string and character literals and comments, and reports
the first offset where a function's depth fails to return to zero.
"""
import os, sys

ROOT = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled"

def scan(path):
    src = open(path, encoding="utf-8", errors="replace").read()
    depth = 0
    i = 0
    n = len(src)
    line = 1
    opens = []          # (depth_after, line) for diagnosis
    in_line_comment = in_block_comment = False
    in_str = in_char = False
    while i < n:
        c = src[i]
        nxt = src[i + 1] if i + 1 < n else ""
        if c == "\n":
            line += 1
            in_line_comment = False
            i += 1
            continue
        if in_line_comment:
            i += 1; continue
        if in_block_comment:
            if c == "*" and nxt == "/":
                in_block_comment = False; i += 2; continue
            i += 1; continue
        if in_str:
            if c == "\\":
                i += 2; continue
            if c == '"':
                in_str = False
            i += 1; continue
        if in_char:
            if c == "\\":
                i += 2; continue
            if c == "'":
                in_char = False
            i += 1; continue
        if c == "/" and nxt == "/":
            in_line_comment = True; i += 2; continue
        if c == "/" and nxt == "*":
            in_block_comment = True; i += 2; continue
        if c == '"':
            in_str = True; i += 1; continue
        if c == "'":
            in_char = True; i += 1; continue
        if c == "{":
            depth += 1
            opens.append((depth, line))
        elif c == "}":
            depth -= 1
            if opens:
                opens.pop()
        i += 1
    return depth, opens

def main():
    bad = 0
    for dp, _, names in os.walk(ROOT):
        if "include" in dp or "authoritative" in dp:
            continue
        for fn in sorted(names):
            if not fn.endswith(".c"):
                continue
            path = os.path.join(dp, fn)
            depth, opens = scan(path)
            if depth != 0:
                bad += 1
                first = opens[0] if opens else None
                print("  %-44s depth %+d   first unclosed brace at line %s"
                      % (os.path.relpath(path, ROOT), depth, first[1] if first else "?"))
    print("files with unbalanced braces: %d" % bad)

if __name__ == "__main__":
    main()