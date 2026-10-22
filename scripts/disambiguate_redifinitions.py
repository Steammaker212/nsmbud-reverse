"""Give same-named functions that come from DIFFERENT mangled names distinct C identifiers.

A C++ class exposes several adaptors under one source-level name. Three of them all demangle to something the
earlier name pass called `__operator_new_array_al`:

    RVA 0x008de09c   _Znaj                     (unsigned int)                  32 xrefs
    RVA 0x008de14c   _ZnajRKSt9nothrow_t       (unsigned int)                   0 xrefs
    RVA 0x008de2c8   _ZnamPN4sead4HeapEi       (unsigned int, int, int)       238 xrefs

Defining all three in libs.c with one identifier is a redefinition, and it is why libs.c reported
"conflicting types for __operator_new_array_al" at a line whose text matched the header exactly.

The rule is: keep the most-used definition under the plain name, and suffix the others with their RVA. Call
sites keep the plain name, so nothing that resolved before changes meaning. 55 names are affected, most of them
destructor pairs (D0/D1/D2), which is the same situation.
"""
import collections
import os
import re
import sys

ROOT = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled"

# A function comment block giving the RVA and the mangled name, followed by the definition.
ENTRY = re.compile(
    r"(?P<block>/\* =+\s*\n\s*\*\s*(?P<mangled>\S*)\s*\n\s*\*\s*RVA 0x(?P<rva>[0-9a-fA-F]+)"
    r"[^\n]*\n(?:\s*\*[^\n]*\n)*?\s*\* =+ \*/\s*\n)"
    r"(?P<indent>[ \t]*)(?P<ret>[A-Za-z_][\w \t\*]*?)\b(?P<conv>__\w+)\s+(?P<name>\w+)\s*\(",
    re.M)


def main(argv):
    write = "--write" in argv
    renames = 0
    files = 0

    for dirpath, _, names in os.walk(ROOT):
        if "include" in dirpath or "authoritative" in dirpath:
            continue
        for fn in sorted(names):
            if not fn.endswith(".c"):
                continue
            path = os.path.join(dirpath, fn)
            text = open(path, encoding="utf-8", errors="replace").read()
            entries = list(ENTRY.finditer(text))
            if not entries:
                continue

            # group definitions by identifier, in file order
            groups = collections.OrderedDict()
            for e in entries:
                groups.setdefault(e.group("name"), []).append(e)

            edits = []
            for name, es in groups.items():
                if len(es) < 2:
                    continue
                # keep the definition with the most parameters; that is the one call sites mean
                def nparams(e):
                    tail = text[e.end():e.end() + 400]
                    close = tail.find(")")
                    return len([p for p in tail[:close].split(",") if p.strip()])

                ranked = sorted(es, key=lambda e: (-nparams(e), e.start()))
                for e in ranked[1:]:
                    edits.append((e, "%s_%s" % (name, e.group("rva").lower())))

            if not edits:
                continue
            # apply from the end so earlier offsets stay valid
            for e, newname in sorted(edits, key=lambda x: -x[0].start()):
                old = text[e.start("name"):e.end("name")]
                if old == newname:
                    continue
                text = text[:e.start("name")] + newname + text[e.end("name"):]
                renames += 1
            files += 1
            print("  %-46s %d definition(s) disambiguated" % (os.path.relpath(path, ROOT), len(edits)))
            if write:
                open(path, "w", encoding="utf-8", newline="").write(text)

    print("total disambiguated: %d in %d file(s) (write=%s)" % (renames, files, write))
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
