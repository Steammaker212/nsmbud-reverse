"""Rewrite the remaining C++ qualified names as the C++-mangled-style C identifiers used everywhere else.

Hex-Rays left a handful of names in their C++ spelling:

    nn::hid::GetTouchScreenState<1u>(v20);
    v7 = (nn::oe *)sub_6074EC10(...);
    ((_DWORD (__fastcall *)(...))nn::util::DecompressZlib)(...)

`::` and `<>` are not C. The rest of the corpus already spells these the way the symbol table does, with `__`
separators (`sead__Random__init`, `nn__atk__SoundActor__GetPlayingSoundCount`), so the same convention applies.
Template arguments are dropped: they are a C++ calling detail and the C call passes the same value.
"""
import os, re, sys

ROOT = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled"
QUAL = re.compile(r"\bnn::(?P<rest>[A-Za-z_]\w*(?:::[A-Za-z_]\w*)*)")

def main(argv):
    write = "--write" in argv
    total = 0
    for dp, _, names in os.walk(ROOT):
        if "include" in dp or "authoritative" in dp:
            continue
        for fn in sorted(names):
            if not fn.endswith(".c"):
                continue
            path = os.path.join(dp, fn)
            t = open(path, encoding="utf-8", errors="replace").read()
            if "nn::" not in t:
                continue
            # drop template arguments first, then flatten the scope separators
            t2 = re.sub(r"(nn::[\w:]+)<[^>]*>", r"\1", t)
            t2, n = QUAL.subn(lambda m: "nn__" + m.group("rest").replace("::", "__"), t2)
            if n:
                total += n
                print("  %-42s %d qualified name(s)" % (os.path.relpath(path, ROOT), n))
                if write:
                    open(path, "w", encoding="utf-8", newline="").write(t2)
    print("total: %d (write=%s)" % (total, write))
    return 0

if __name__ == "__main__":
    sys.exit(main(sys.argv))