"""Make known callee prototypes tolerate the extra arguments their call sites actually pass.

Several decompiled callees ignore registers that callers still set up. The definition takes one argument,
five of six call sites pass two, and C rejects the extra one:

    error: too many arguments to function call, expected single argument 'a1', have 2 arguments

The callee genuinely ignores the second value (its body only reads a1[76] and a vtable slot), so the honest
fix is a variadic declaration: it matches the real calling convention, keeps every call site compiling, and
does not fabricate a parameter the function never uses.

Each entry is verified against the callee body before it is applied -- a name is only added here after
reading the function and confirming the extra argument is unused.
"""
import os
import re
import sys

# name -> (original declaration, note on why the extra argument is safe to accept)
VARIADIC = {
    "sub_608E6154": "body only reads a1[76] then calls vtable+40; the 2nd argument is never touched",
}

DECL_RE = r"^(?P<pre>[^\n]*?\b%s\s*\()(?P<args>[^)]*)(?P<post>\)\s*;)" % "|".join(map(re.escape, VARIADIC))


def main(argv):
    headers = argv[1]
    write = "--write" in argv
    changed = 0
    for fn in sorted(os.listdir(headers)):
        if not fn.endswith(".h"):
            continue
        path = os.path.join(headers, fn)
        with open(path, encoding="utf-8", errors="replace") as fh:
            text = fh.read()
        original = text
        for name, why in VARIADIC.items():
            pat = re.compile(r"([^\n;]*?\b%s\s*\([^)]*?)(\)\s*;)" % re.escape(name))
            def repl(m):
                args = m.group(1)
                if args.rstrip().endswith("..."):
                    return m.group(0)
                return args + ", ..." + m.group(2) + "   /* %s */" % why
            text = pat.sub(repl, text)
        if text != original:
            changed += 1
            if write:
                with open(path, "w", encoding="utf-8", newline="") as fh:
                    fh.write(text)
            print("  %-46s variadic-ised" % fn)
    print("\nheaders changed: %d (write=%s)" % (changed, write))
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
