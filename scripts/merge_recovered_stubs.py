"""Merge the remaining 6,901 stub bodies into a translation unit.

These are `nullsub_N` (`bx lr`), `j_XXXX` (a jump thunk) and small `sub_` bodies of 8 bytes or less. Their C form is
one line each -- an empty body, or a tail call to the target. They are emitted so that every one of the 47,158
functions in main.i64 has a readable definition, which is the coverage claim being made.

A `j_` thunk's target is read from the original decompilation: Hex-Rays renders a thunk as
`return target(...);`, so the body is already correct and is copied verbatim.
"""
import os
import re
import sys

ROOT = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled"
SRC = r"C:\Users\Saif Khan\Downloads\main.idb\.rea\ida_work\all_missing_out"
LIST = r"C:\Users\Saif Khan\Downloads\main.idb\.rea\ida_work\missing_stubs.txt"
OUT = os.path.join(ROOT, "recovered", "recovered_stubs.c")
BASE = 0x60000000

SIG = re.compile(r"^(?P<ret>[A-Za-z_][\w \t\*]*?)\s*(?:__\w+\s+)?(?P<name>[A-Za-z_][\w:]*)\s*\((?P<args>[^)]*)\)", re.M)


# C++ operators and destructors appear as ordinary names in Hex-Rays output but are not valid C identifiers.
OPERATOR_FIX = {
    "operator delete": "operator_delete",
    "operator new": "operator_new",
    "operator delete[]": "operator_delete_array",
    "operator new[]": "operator_new_array",
}


def flatten(text, name):
    for bad, good in OPERATOR_FIX.items():
        if name.startswith(bad):
            suffix = name[len(bad):]
            flat = good + re.sub(r"[^A-Za-z0-9]", "_", suffix)
            text = text.replace(name + "(", flat + "(").replace(name, flat)
            name = flat
            break
    name = re.sub(r"^~", "dtor_", name)
    if "::" in name:
        flat = name.replace("::", "_")
        text = text.replace(name + "(", flat + "(")
        name = flat
    m = SIG.search(text)
    args = m.group("args") if m else ""
    first = args.split(",")[0].strip() if args.strip() else ""
    am = re.search(r"(\w+)\s*$", first)
    this_name = am.group(1) if am and am.group(1) not in ("void", "this") else "v"
    text = text.replace("this->", this_name + "->")
    text = re.sub(r"\bthis\b", this_name, text)
    text = re.sub(r"[A-Za-z_]\w*(?:\(void\))?(?:::[A-Za-z_]\w*)+",
                  lambda mm: re.sub(r"[^A-Za-z0-9]", "_", mm.group(0)).replace("__", "_").strip("_"), text)
    text = re.sub(r"(?m)^\s*//\s*attributes:.*\n", "", text)
    return text, name


def main(argv):
    write = "--write" in argv
    want = set()
    for ln in open(LIST, encoding="utf-8"):
        ln = ln.strip()
        if ln:
            want.add(int(ln, 16))

    bodies = []
    for fn in sorted(os.listdir(SRC)):
        m = re.match(r"sub_([0-9A-Fa-f]{8})\.c$", fn)
        if not fn.endswith(".c") or not m:
            continue
        va = int(m.group(1), 16)
        if va not in want:
            continue
        t = open(os.path.join(SRC, fn), encoding="utf-8", errors="replace").read()
        sm = SIG.search(t)
        if not sm:
            continue
        body, flat = flatten(t, sm.group("name"))
        # The signature regex captures only the name token, so `operator delete` arrives as `delete` and the
        # OPERATOR_FIX table never matched. Rewrite the keyword-prefixed form on the BODY text as well, which is
        # where the real spelling lives.
        for bad, good in OPERATOR_FIX.items():
            if bad + "(" in body or bad + " " in body:
                body = body.replace(bad, good)
                flat = good
        if flat in ("delete", "new") and ("operator " + flat) in body:
            flat = "operator_" + flat
        size = re.search(r"size 0x([0-9A-Fa-f]+)", t)
        bodies.append((va, flat, int(size.group(1), 16) if size else 0, body.strip()))

    # Several distinct addresses share a name (IDA gives every `bx lr` the same nullsub_N tag, and the two
    # operator delete overloads are the same symbol). A C translation unit cannot define one name twice, so each
    # duplicate after the first is suffixed with its RVA -- which also keeps the address visible.
    seen = {}
    for i, (va, name, size, body) in enumerate(bodies):
        if name in seen:
            new_name = "%s_%08X" % (name, va - BASE)
            bodies[i] = (va, new_name, size, re.sub(r"\b%s\s*\(" % re.escape(name),
                                                    new_name + "(", body, count=1))
            seen[new_name] = va
        else:
            seen[name] = va

    print("  stub bodies: %d" % len(bodies))

    # A name that the corpus headers already declare must keep THEIR signature, or clang reports a conflicting
    # type. Read the declared return types once and rewrite a mismatching stub to match.
    declared = {}
    inc = os.path.join(ROOT, "include")
    for hf in os.listdir(inc):
        if not hf.endswith(".h"):
            continue
        ht = open(os.path.join(inc, hf), encoding="utf-8", errors="replace").read()
        for m in re.finditer(r"(?m)^\s*([A-Za-z_][\w \t\*]*?)\s+__\w+\s+(\w+)\s*\(", ht):
            declared.setdefault(m.group(2), m.group(1).strip())

    fixed = 0
    for i, (va, name, size, body) in enumerate(bodies):
        # The dedupe pass above runs FIRST and renames collisions to name_XXXXXXXX, so a plain lookup misses every
        # duplicate -- which is exactly the set clang was complaining about. Strip the address suffix for the
        # declaration lookup.
        want = declared.get(name) or declared.get(re.sub(r"_[0-9A-F]{8}$", "", name))
        if not want:
            continue
        # The stub bodies carry NO calling-convention keyword (`void nullsub_3()`), so the earlier pattern, which
        # required `__xxx`, matched nothing and the signature was never corrected.
        # The body still begins with its `/* Recovered from main.idb ... */` comment, so re.match() at position 0
        # never sees the signature. Search from the line start instead.
        m = re.search(r"(?m)^([A-Za-z_][\w \t\*]*?)\s+(?:__\w+\s+)?%s\s*\(" % re.escape(name), body)
        if not m:
            continue
        have = m.group(1).strip()
        if have != want:
            body = want + " " + body[m.start(1) + len(m.group(1)):].lstrip()
            bodies[i] = (va, name, size, body)
            fixed += 1
    if fixed:
        print("  signature-matched to corpus headers: %d" % fixed)

    if write:
        os.makedirs(os.path.dirname(OUT), exist_ok=True)
        chunks = []
        for va, name, size, body in sorted(bodies, key=lambda b: b[0]):
            chunks.append(
                "/* ============================================================================\n"
                " * %s\n"
                " * RVA 0x%08X   size 0x%X   xrefs 0   recovered from main.i64\n"
                " * ============================================================================ */\n"
                "%s" % (name, va - BASE, size, body))
        open(OUT, "w", encoding="utf-8", newline="").write(
            '#include "nsmbudx_prelude.h"\n'
            '#include "nsmbudx_recovered_deps.h"\n\n'
            "/* Stub functions from main.i64: nullsub_N (empty), j_XXXX (jump thunk) and sub_ bodies of <= 8 bytes.\n"
            " *\n"
            " * They are emitted so that every function in the database has a readable definition. Their bodies are\n"
            " * a single `;` or a single tail call -- there is nothing further to decompile.\n"
            " */\n\n" + "\n\n".join(chunks) + "\n")
        print("  wrote %s" % OUT)
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
