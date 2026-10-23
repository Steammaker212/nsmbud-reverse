"""Flatten C++ scope-qualified names (`ns::Class::member`) into C identifiers.

Hex-Rays leaves a number of names in C++ spelling -- `sead::HeapMgr::sInstance`, `ActorMgr::instance`,
`sead::SafeString` -- which are not valid C. The repository's existing convention already flattens `Class::method`
to `Class__method`, and the naming-coverage measurement showed that most of these were in fact adopted that way.
This applies the same rule to the stragglers so the corpus is internally consistent.

Three of the flattened names are types rather than objects (`sead::SafeString`, `sead::SafeStringBase<char>`), so
they cannot be declared as plain objects; those are listed separately and handled by a typedef, not by an extern.
"""
import collections
import os
import re
import sys

ROOT = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled"
INC = os.path.join(ROOT, "include")


def flatten(name):
    out = name.replace("::", "__")
    # `sead::SafeStringBase<char>` -> sead__SafeStringBase_char
    out = re.sub(r"[<>]", "_", out)
    out = re.sub(r"[^A-Za-z0-9_]", "_", out)
    out = re.sub(r"_{2,}", "__", out)
    return out.strip("_")


def main(argv):
    write = "--write" in argv
    pat = re.compile(r"\b([A-Za-z_]\w*)::(\w+)((?:::\w+)*)")
    # a type used in a declaration looks like `ns::Name varname;` with nothing that makes it a member access
    type_use = re.compile(r"\b([A-Za-z_]\w*(?:::\w+)+)\s+([\*]?\w+)\s*[;\[]")

    uses = collections.Counter()
    types = collections.Counter()
    for dirpath, _, names in os.walk(ROOT):
        if os.path.basename(dirpath) == "include":
            continue
        for name in names:
            if not name.endswith(".c"):
                continue
            text = open(os.path.join(dirpath, name), encoding="utf-8", errors="replace").read()
            for m in pat.finditer(text):
                uses[m.group(0)] += 1
            for m in type_use.finditer(text):
                types[m.group(1)] += 1

    print("  scope-qualified spellings: %d total, %d distinct" % (sum(uses.values()), len(uses)))
    print("  used as a type: %s" % ", ".join(sorted(types)))

    if write:
        changed = 0
        edits = 0
        for dirpath, _, names in os.walk(ROOT):
            if os.path.basename(dirpath) == "include":
                continue
            for name in names:
                if not name.endswith(".c"):
                    continue
                path = os.path.join(dirpath, name)
                text = open(path, encoding="utf-8", errors="replace").read()
                orig = text
                text = pat.sub(lambda m: flatten(m.group(0)), text)
                if text != orig:
                    open(path, "w", encoding="utf-8", newline="").write(text)
                    changed += 1
                    edits += len(pat.findall(orig))
        print("  rewrote %d occurrences in %d files" % (edits, changed))
    else:
        for k, v in sorted(uses.items(), key=lambda kv: (-kv[1], kv[0]))[:8]:
            print("    %-44s -> %-44s %d" % (k, flatten(k), v))
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
