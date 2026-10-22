"""Give one-line thunk definitions the argument list their declaration requires.

THE DEFECT
----------
Four files are pure thunks:

    /* line: 1 */ int __operator_delete()
    /* line: 2 */ {
    /* line: 3 */   return _ZdlPv();
    /* line: 4 */ }

`libs.h` declares the real function from the database as

    int __fastcall __operator_delete(int a1);   /* 0x008de3a0 */

In C, `()` means "unspecified arguments", and a definition with unspecified arguments CONFLICTS with
any prototype for the same name. clang reports "conflicting types for '__operator_delete'" and the
whole file is lost -- even though the body is one forwarding call.

THE FIX. Rewrite exactly this shape so the definition carries the declared argument list and forwards
it:

    /* line: 1 */ int __operator_delete(int a1)
    /* line: 2 */ {
    /* line: 3 */   return _ZdlPv(a1);
    /* line: 4 */ }

SCOPE. A `()` definition with no prior declaration is perfectly legal C, so most such thunks parse
fine and must be left alone -- rewriting them would risk turning working files into "too many
arguments" at every call site. Only names the headers already declare with exactly one parameter are
touched, and only the precise four-line shape above.

Every line in the corpus carries a `/* line: N */` prefix, so each pattern line skips an optional one.
That prefix is why an earlier version of this script matched nothing while the files plainly had the
shape.
"""
import os
import re
import sys

PRE = r"(?:/\*\s*line:\s*\d+\s*\*/\s*)?"

THUNK = re.compile(
    r"^(?P<pre>[ \t]*" + PRE + r")"
    r"(?P<ret>[A-Za-z_][\w \t\*]*?)\b(?P<name>\w+)\(\)[ \t]*\n"
    r"[ \t]*" + PRE + r"\{[ \t]*\n"
    r"(?P<mid>[ \t]*" + PRE + r")return[ \t]+(?P<callee>\w+)\(\);[ \t]*\n"
    r"[ \t]*" + PRE + r"\}",
    re.M,
)

# A prototype with exactly one parameter: `ret __fastcall NAME(int a1);`
ONEPARAM = re.compile(
    r"^\s*[A-Za-z_][\w \t\*]*?__fastcall\s+(\w+)\s*\(\s*[A-Za-z_][\w \t\*]*\s+\w+\s*\)\s*;",
    re.M,
)


def declared_one_param(headers_dir):
    """Names the headers declare with exactly one parameter."""
    names = set()
    if not headers_dir or not os.path.isdir(headers_dir):
        return names
    for f in os.listdir(headers_dir):
        if not f.endswith(".h"):
            continue
        with open(os.path.join(headers_dir, f), encoding="utf-8", errors="replace") as fh:
            names.update(ONEPARAM.findall(fh.read()))
    return names


def main(argv):
    if len(argv) < 2:
        print("usage: fix_thunk_signatures.py <dir> [--headers DIR] [--write]")
        return 2
    root = argv[1]
    write = "--write" in argv
    headers = None
    if "--headers" in argv:
        headers = argv[argv.index("--headers") + 1]
    allowed = declared_one_param(headers)
    if headers:
        print("names declared with one parameter: %d" % len(allowed))

    files = total = 0
    for dp, _, fs in os.walk(root):
        for f in fs:
            if not f.endswith(".c"):
                continue
            p = os.path.join(dp, f)
            with open(p, encoding="utf-8", errors="surrogateescape") as fh:
                text = fh.read()

            hits = []

            def repl(m):
                name, callee = m.group("name"), m.group("callee")
                if allowed and name not in allowed:
                    return m.group(0)
                hits.append((name, callee))
                return (
                    "%s%s%s(int a1)\n" % (m.group("pre"), m.group("ret"), name)
                    + "/* line: 2 */ {\n"
                    + "%s%s(a1); return 0;\n" % (m.group("mid"), callee)
                    + "/* line: 4 */ }"
                )

            new = THUNK.sub(repl, text)
            if hits:
                files += 1
                total += len(hits)
                for name, callee in hits:
                    print("  %s: %s() -> %s(int a1)" % (f, name, name))
                if write:
                    with open(p, "w", encoding="utf-8", errors="surrogateescape", newline="") as fh:
                        fh.write(new)
    print("thunk signatures rewritten: %d in %d files%s"
          % (total, files, "" if write else " (dry run)"))
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
