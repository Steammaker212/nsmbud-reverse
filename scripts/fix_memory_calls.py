"""Convert `MEMORY[addr](args)` indirect calls into a proper function-pointer call.

MEMORY is declared as a uint32_t* over the image base:

    #define MEMORY ((uint32_t *)(uintptr_t)0x60000000u)

so MEMORY[0xCC77F8] is a uint32_t LVALUE -- the first four bytes of the function pointer, not the pointer. The
decompiler means "call the function whose pointer is stored at this absolute address":

    MEMORY[0xCC77F8](v5, v6)        written
    MEMORY_FN(0xCC77F8, v5, v6)     meant

1,280 sites do this, and 492 of them use the return value, so they cannot simply be dropped. A separate macro is
used rather than redefining MEMORY, because MEMORY[...] is also read and written as plain data throughout the
corpus and redefining it would break those.
"""
import os
import re
import sys

ROOT = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled"
INC = os.path.join(ROOT, "include")

CALL = re.compile(r"\bMEMORY\[(0x[0-9A-Fa-f]+)\]\s*\(")

DECL = """
Note on why MEMORY itself is not redefined: MEMORY[...] is also read and written as plain data throughout the
corpus, so changing its type would break those uses. The call sites are rewritten individually instead.
"""


def rewrite(text):
    """MEMORY[0xADDR](args) -> ((int (*)(...))MEMORY[0xADDR])(args), arity inferred from the call."""
    out = []
    i = 0
    count = 0
    for m in CALL.finditer(text):
        out.append(text[i:m.start()])
        addr = m.group(1)
        # find the matching close paren of the argument list
        depth = 1
        j = m.end()
        while j < len(text) and depth:
            c = text[j]
            if c == "(":
                depth += 1
            elif c == ")":
                depth -= 1
            elif c == '"':
                j += 1
                while j < len(text) and text[j] != '"':
                    if text[j] == "\\":
                        j += 1
                    j += 1
            j += 1
        args = text[m.end():j - 1]
        nargs = len([a for a in args.split(",") if a.strip()]) if args.strip() else 0
        params = ", ".join(["int"] * nargs) if nargs else "void"
        out.append("((int (*)(%s))MEMORY[%s])(%s)" % (params, addr, args))
        i = j
        count += 1
    out.append(text[i:])
    return "".join(out), count


def main(argv):
    write = "--write" in argv
    total = 0
    files = 0
    for dirpath, _, names in os.walk(ROOT):
        if "include" in dirpath or "authoritative" in dirpath:
            continue
        for fn in sorted(names):
            if not fn.endswith(".c"):
                continue
            path = os.path.join(dirpath, fn)
            text = open(path, encoding="utf-8", errors="replace").read()
            if "MEMORY[" not in text:
                continue
            new, n = rewrite(text)
            if not n:
                continue
            total += n
            files += 1
            print("  %-46s %4d indirect call(s)" % (os.path.relpath(path, ROOT), n))
            if write:
                open(path, "w", encoding="utf-8", newline="").write(new)
    print("total rewritten: %d in %d file(s) (write=%s)" % (total, files, write))
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
