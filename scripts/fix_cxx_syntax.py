"""Turn remaining C++ syntax in the recovered units into valid C.

Three shapes survive the decompiler and are not legal C:

1.  Destructor calls
        sead_IDisposer_~IDisposer(a1)
    `~` is not an identifier character. The corpus convention is `..._dtor`.

2.  Template specialisations in identifiers
        &g_vtable_forsead_SafeStringBase<char>
    `<` and `>` cannot appear in a C identifier. Flattened to `_char`.

3.  Local static / RTTI symbols with a truncated tail
        g_guard_variable_forsead_TaskBase_getRuntimeTypeInfoStatic_void__typeInfo
    The `(void)` of a function signature was flattened into the identifier, producing `_void__`. That is valid C
    but it is noise; it is kept rather than renamed, because renaming it would break the pairing with the
    corresponding `typeInfo` object, and both are declared by the dependency header.

Only (1) and (2) produce compile errors, so only those are rewritten. The change is idempotent.
"""
import os
import re
import sys

ROOT = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled"


def rewrite(text):
    n_dtor = n_tpl = 0

    # 1. `Foo_~Foo(` and `Foo::~Foo(` -> `Foo_dtor(`
    def dtor(m):
        return m.group(1) + "_dtor("

    text, k = re.subn(r"\b([A-Za-z_]\w*)(?:_~|::~)[A-Za-z_]\w*\s*\(", dtor, text)
    n_dtor += k

    # 2. identifier<...> where <...> holds a simple type argument -> identifier_<arg>
    # RESTRICTED to identifiers that actually start uppercase-or-lowercase TYPE names. A permissive pattern also
    # matched comparison expressions such as `v28 < v59 > 4`, which would have silently rewritten real arithmetic
    # (one such false positive was found in libs.c). Only a known template base may be rewritten.
    tpl = re.compile(r"\b((?:SafeStringBase|BufferedSafeStringBase|FixedSafeString|FormatString|"
                     r"SafeString|sead_\w*String\w*|nn_\w*))\s*<\s*([A-Za-z_]\w*)\s*>")
    def tplsub(m):
        return "%s_%s" % (m.group(1), re.sub(r"[^A-Za-z0-9]", "_", m.group(2)))
    text, k = tpl.subn(tplsub, text)
    n_tpl += k

    return text, n_dtor, n_tpl


def main(argv):
    write = "--write" in argv
    grand = [0, 0]
    for dp, _, fs in os.walk(ROOT):
        if os.path.basename(dp) == "include":
            continue
        for fn in fs:
            if not fn.endswith(".c"):
                continue
            p = os.path.join(dp, fn)
            t = open(p, encoding="utf-8", errors="replace").read()
            if "~" not in t and "<" not in t:
                continue
            new, nd, nt = rewrite(t)
            if nd or nt:
                grand[0] += nd
                grand[1] += nt
                print("  %-46s dtor %d  template %d" % (os.path.relpath(p, ROOT), nd, nt))
                if write:
                    open(p, "w", encoding="utf-8", newline="").write(new)
    print("  totals: destructor %d, template %d" % tuple(grand))
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
