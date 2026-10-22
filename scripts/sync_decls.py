"""Make forward declarations agree with the authoritative definition that follows them in the same file.

When a merged corpus function is replaced by fresh Hex-Rays output, its real signature can differ from the
forward declaration the corpus already emitted -- typically the fresh one is wider (void, 9 params) than the
stale declaration (int *, 3 params). clang then rejects the file with "conflicting types for X".

This rewrites the forward declarations of a named function to match the definition in the same file: same
return type, same parameter list text. It does not touch call sites, so any caller that passes the wrong
argument count will still be reported -- which is correct, because that is a real disagreement to look at
rather than something to paper over.

Usage: sync_decls.py <file> <function-name> [--write]
"""
import re
import sys


def definition_signature(text, name):
    """Find `... name(` at the start of a line followed by a param list and a newline + `{`."""
    pattern = re.compile(r"^(?P<ret>[A-Za-z_][\w \t\*]*?)\b(?P<conv>__\w+)\s+" + re.escape(name)
                         + r"\s*\((?P<params>[^;{]*?)\)\s*\n?\s*\{", re.M | re.S)
    m = pattern.search(text)
    if not m:
        return None
    ret = m.group("ret").strip()
    conv = m.group("conv")
    params = " ".join(m.group("params").split())
    return "%s %s %s(%s)" % (ret, conv, name, params)


def main(argv):
    path = argv[1]
    name = argv[2]
    write = "--write" in argv
    with open(path, encoding="utf-8", errors="replace") as fh:
        text = fh.read()

    sig = definition_signature(text, name)
    if sig is None:
        print("no definition found for %s in %s" % (name, path))
        return 1

    print("definition: %s" % sig)

    # prototypes are one-line `RET __fastcall NAME(args);`
    proto = re.compile(r"^[A-Za-z_][\w \t\*]*?\b__\w+\s+" + re.escape(name) + r"\s*\([^;]*\)\s*;",
                       re.M)
    matches = list(proto.finditer(text))
    print("forward declarations found: %d" % len(matches))
    changed = 0
    for m in matches:
        old = m.group(0)
        new = sig + ";"
        if old != new:
            text = text.replace(old, new, 1)
            changed += 1
            print("  was: %s" % old.strip())
            print("  now: %s" % new.strip())
    if write and changed:
        with open(path, "w", encoding="utf-8", newline="") as fh:
            fh.write(text)
    print("changed %d declaration(s), write=%s" % (changed, write))
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
