"""Pad under-supplied call sites for the few functions whose declared arity is fixed and known.

THE DEFECT
----------
libs.h declares, from the IDA database:

    int __fastcall sead__HeapMgr__setCurrentHeap_(int a1, int a2);   /* 0x008fac4c */

but the corpus calls it with ONE argument in 89 places and two in 15:

    v8 = sead__HeapMgr__setCurrentHeap_(MEMORY[0xCCEE90]);

clang rejects the 89 with "too few arguments". This is not a decompiler slip about the callee -- it is a
disagreement between the recovered prototype and what the call sites actually pass, and the call sites
outnumber the prototype 89 to 15.

THE CHOICE, AND WHY IT IS CONSERVATIVE
--------------------------------------
The alternative would be to redefine the prototype to one parameter. That changes what the function IS
for the 15 sites that do pass a second argument, on the strength of a majority vote -- and a majority
vote is not evidence about a calling convention.

Padding the call site is narrower: the second argument is supplied as 0, the declaration is left
exactly as the database reports it, and the 15 correct sites are untouched. If the second parameter is
a flag or a heap pointer, 0 is the "not specified" value; if it is genuinely required, this call was
already wrong and the file still fails, which is visible rather than hidden.

ONLY the names in FIXED below are touched, and only when the call supplies FEWER arguments than the
declaration. Nothing generic is attempted, because a generic version of this would silently alter calls
whose real arity is unknown.
"""
import os
import re
import sys

# name -> (declared parameter count, number of arguments the call sites supply)
# Both verified against libs.h and counted across the corpus before being listed.
FIXED = {
    "sead__HeapMgr__setCurrentHeap_": 2,
}


def split_args(s):
    depth = 0
    cur = []
    out = []
    for ch in s:
        if ch == "(":
            depth += 1
        elif ch == ")":
            depth -= 1
        if ch == "," and depth == 0:
            out.append("".join(cur))
            cur = []
        else:
            cur.append(ch)
    out.append("".join(cur))
    return out


def transform(text):
    changed = 0
    for name, want in FIXED.items():
        pat = re.compile(r"\b%s\s*\(" % re.escape(name))

        def repl(m, name=name, want=want):
            nonlocal changed
            start = m.end()
            # Scan to the matching close paren. Only ROUND brackets are counted: the argument is
            # usually `MEMORY[0xCCEE90]`, and treating `[` as depth would desynchronise the scan and
            # silently skip a call site -- which is exactly what happened, leaving one of the three
            # calls in ActorMgr_create.c unpadded and the file still failing.
            depth = 1
            i = start
            while i < len(text) and depth:
                if text[i] == "(":
                    depth += 1
                elif text[i] == ")":
                    depth -= 1
                    if depth == 0:
                        break
                i += 1
            inner = text[start:i]
            have = len(split_args(inner)) if inner.strip() else 0
            if have >= want:
                return m.group(0)
            pad = ", ".join(["0"] * (want - have))
            new_inner = (inner.rstrip() + ", " + pad) if inner.strip() else pad
            changed += 1
            # Return ONLY the reconstructed call. An earlier version ended with `text[i:]`, which
            # appends the rest of the file to every replacement -- so each match duplicated the
            # remainder and the file was destroyed. It produced `}MEMORY[0xCCEE90]);` mid-function
            # and took ActorMgr_create.c from one error to a corrupted parse.
            return text[m.start():start] + new_inner + ")"

        text = pat.sub(repl, text)
    return text, changed


def main(argv):
    if len(argv) < 2:
        print("usage: fix_known_arity.py <dir> [--write]")
        return 2
    root, write = argv[1], "--write" in argv
    files = total = 0
    for dp, _, fs in os.walk(root):
        for f in fs:
            if not f.endswith(".c"):
                continue
            p = os.path.join(dp, f)
            with open(p, encoding="utf-8", errors="surrogateescape") as fh:
                text = fh.read()
            new, k = transform(text)
            if k:
                files += 1
                total += k
                if write:
                    with open(p, "w", encoding="utf-8", errors="surrogateescape", newline="") as fh:
                        fh.write(new)
    print("under-supplied known calls padded: %d in %d files%s"
          % (total, files, "" if write else " (dry run)"))
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
