"""Rewrite C++-qualified names in the decompiled corpus into valid C identifiers.

WHY THIS EXISTS
---------------
IDA recovered many callees under their Itanium-demangled C++ names, so the pseudo-code contains
calls like `StateMgr::changeState(...)` and `sead::IDisposer::~IDisposer(...)`. That is not C. The
parser reads `StateMgr::changeState(a1, x)` as a declaration of something named after a type, fails
with "expected identifier or '('", and the whole translation unit is unparseable -- 137 of 475 files
and 18,598 call sites, which is the single largest cause of the corpus not being readable C.

The fix must not lose information: these ARE distinct functions from their unqualified namesakes,
and the class prefix is the best evidence we have about what they do. So the transformation is
mechanical and information-preserving rather than a deletion:

    StateMgr::changeState          -> StateMgr__changeState
    sead::IDisposer::~IDisposer    -> sead__IDisposer__dtor

`::` becomes `__` (a legal identifier character pair that cannot appear in a demangled name) and a
destructor `A::~A` collapses to `A__dtor` rather than repeating the class name. The mapping is
many-to-one in no case and stays greppable, so a later pass can recover the original spelling.

Scope: only identifier runs immediately followed by `::` are touched, and only inside code -- string
literals and comments are left alone, because mangled names legitimately appear there and changing a
string constant would change program meaning.
"""
import re
import sys
from pathlib import Path

# A qualified run: at least one identifier, then ::, then an optional ~ and a final identifier.
# The trailing group is anchored so `a ? b::c : d` style expressions cannot swallow the `?`.
QUALIFIED = re.compile(r"\b([A-Za-z_]\w*(?:::[A-Za-z_~]\w*)+)\b")

# Call sites only: a qualified run immediately followed by `(`. A qualified run in any other
# position is a TYPE, which restructure_includes.py already declares; rewriting those broke all
# 475 files with "unknown type name", because no header declares the rewritten spelling.
CALL = re.compile(r"\b([A-Za-z_]\w*(?:::[A-Za-z_~]\w*)+)\b(?=\s*\()")

# Destructor spelling, applied to the captured run before the :: replacement.
DTOR = re.compile(r"^(.*?)::~(\w+)$")


def rewrite_qualified(match):
    run = match.group(1)
    d = DTOR.match(run)
    if d:
        # sead::IDisposer::~IDisposer  ->  sead__IDisposer__dtor
        return d.group(1).replace("::", "__") + "__dtor"
    return run.replace("::", "__")


def split_code_mask(text):
    """Yield (is_code, chunk) so rewrites never touch strings or comments."""
    i = 0
    n = len(text)
    start = 0
    while i < n:
        c = text[i]
        if c == '"' or c == "'":
            if start < i:
                yield True, text[start:i]
            quote = c
            j = i + 1
            while j < n:
                if text[j] == "\\":
                    j += 2
                    continue
                if text[j] == quote:
                    j += 1
                    break
                j += 1
            yield False, text[i:j]
            i = start = j
        elif c == "/" and i + 1 < n and text[i + 1] == "*":
            if start < i:
                yield True, text[start:i]
            j = text.find("*/", i + 2)
            j = n if j < 0 else j + 2
            yield False, text[i:j]
            i = start = j
        elif c == "/" and i + 1 < n and text[i + 1] == "/":
            if start < i:
                yield True, text[start:i]
            j = text.find("\n", i)
            j = n if j < 0 else j
            yield False, text[i:j]
            i = start = j
        else:
            i += 1
    if start < n:
        yield True, text[start:n]


def transform(text):
    out = []
    changed = 0
    for is_code, chunk in split_code_mask(text):
        if is_code:
            new, k = CALL.subn(rewrite_qualified, chunk)
            changed += k
            out.append(new)
        else:
            out.append(chunk)
    return "".join(out), changed


def main(argv):
    if len(argv) < 2:
        print("usage: fix_qualified_names.py <dir> [--write]")
        return 2
    root = Path(argv[1])
    write = "--write" in argv
    touched = 0
    total = 0
    # Only .c files, and only CALL sites -- a qualified run immediately followed by `(`.
    #
    # Both restrictions are the result of getting it wrong first. Rewriting headers broke the type
    # declarations they carry. Rewriting every qualified run in the .c files turned type uses like
    # `sead::IDisposer *a1` into `sead__IDisposer *a1`, which no header declares, and all 475 files
    # failed with "unknown type name". The declaration machinery in restructure_includes.py already
    # knows how to present these types; what it cannot do is make `StateMgr::changeState(x)` legal C.
    # So the narrow job is exactly the call sites.
    files = sorted(root.rglob("*.c"))
    for p in files:
        text = p.read_text(encoding="utf-8", errors="surrogateescape")
        new, changed = transform(text)
        if changed:
            touched += 1
            total += changed
            if write:
                p.write_text(new, encoding="utf-8", errors="surrogateescape")
    print("qualified names rewritten: %d in %d files%s"
          % (total, touched, "" if write else " (dry run)"))
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
