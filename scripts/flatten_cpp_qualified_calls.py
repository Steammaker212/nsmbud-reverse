"""Rewrite C++ scope-qualified call names (`Class::method(...)`) into plain C identifiers.

Hex-Rays emitted some names in their mangled-class spelling, e.g.

    sead_SafeStringBase_char::operator=((int)(a1 + 61), (int)v6);
    sead_BufferedSafeStringBase_char::assureTerminationImpl_((int)&v52);

`::` is not C, so each of these is "expected expression". The functions themselves are genuine recovered symbols --
the demangler simply kept the class qualifier. The fix is to join the qualifier to the member with `__`, the same
convention every other recovered symbol in this repository already uses (`StateMgr_changeState`, `Actor_init`), and
to spell `operator=` as `operator_assign`.

Only call sites are touched: the pattern requires the `::` to be followed by an identifier and then `(`, so type
names and declarations are left alone.
"""
import os
import re
import sys

ROOT = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled"

OPERATOR_WORDS = {
    "operator=": "operator_assign",
    "operator==": "operator_eq",
    "operator!=": "operator_ne",
    "operator<": "operator_lt",
    "operator>": "operator_gt",
    "operator[]": "operator_index",
    "operator()": "operator_call",
    "operator+": "operator_plus",
    "operator-": "operator_minus",
}


def join(qualifier, member):
    for op, word in OPERATOR_WORDS.items():
        if member == op:
            return "%s__%s" % (qualifier, word)
    return "%s__%s" % (qualifier, member)


def main(argv):
    write = "--write" in argv
    total = 0
    files = 0
    for dp, _, fs in os.walk(ROOT):
        if os.path.basename(dp) == "include":
            continue
        for fn in fs:
            if not fn.endswith(".c"):
                continue
            p = os.path.join(dp, fn)
            src = open(p, encoding="utf-8", errors="replace").read()
            orig = src
            # Class::member(   ->   Class__member(
            # The qualifier may itself be qualified (a::b::c), so allow repeated `::` groups.
            def repl(m):
                quals = m.group(1)
                member = m.group(2)
                parts = [q for q in quals.split("::") if q]
                return join("__".join(parts), member) + m.group(3)

            src = re.sub(r"\b((?:[A-Za-z_]\w*::)+)([A-Za-z_]\w*|operator\s*[=!<>+\-\[\]()]*)\s*(\()",
                         repl, src)
            if src != orig:
                n = len(re.findall(r"__[A-Za-z_]\w*\s*\(", src)) - len(re.findall(r"__[A-Za-z_]\w*\s*\(", orig))
                files += 1
                total += max(n, 0)
                print("    %-40s qualified calls rewritten" % os.path.relpath(p, ROOT))
                if write:
                    open(p, "w", encoding="utf-8", newline="").write(src)
    print("  files changed: %d" % files)
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
