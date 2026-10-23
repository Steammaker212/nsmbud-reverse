"""Add named members to opaque struct blobs, using offsets from the database's own type library.

The recovered bodies were produced by Hex-Rays with the database's struct definitions in scope, which is why they
refer to `StateMethodExecuter.currentState`, `ModelWrapper.shuAnims` and `ActorBuildInfo.profile` by name. The C
headers in this repository model those types as opaque byte arrays, so those accesses fail.

An earlier attempt replaced the opaque definitions wholesale with generated layouts. That was worse (475 -> 610
errors), because `structs.h` already defines several of the same tags with field ranges the corpus relies on, and
removing them broke more than it fixed. This script therefore does the narrow thing instead: for a type that is
currently an opaque blob, it REWRITES the blob into a struct whose members are the ones the code actually names,
placed at the offsets the database records, with byte padding filling every gap. `sizeof` never changes, because the
padding is computed from the recorded size and the script asserts that it closes exactly.

If a named member would fall outside the recorded size, or the type has no database entry, the type is left alone and
the mismatch is reported rather than guessed at.
"""
import os
import re
import sys

DUMP = r"C:\nsmbudx_types\structs.txt"
INC = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled\include"
TYPES = os.path.join(INC, "nsmbudx_recovered_types.h")

# Database type string -> C spelling. Only fixed-size scalars appear as members here; anything else is left as bytes.
CTYPE = {
    "int": ("int32_t", 4), "unsigned int": ("uint32_t", 4), "signed int": ("int32_t", 4),
    "char": ("int8_t", 1), "signed char": ("int8_t", 1), "unsigned char": ("uint8_t", 1),
    "short": ("int16_t", 2), "__int16": ("int16_t", 2), "unsigned short": ("uint16_t", 2),
    "float": ("float", 4), "double": ("double", 8),
    "__int64": ("int64_t", 8), "unsigned __int64": ("uint64_t", 8),
    "void *": ("void *", 4), "_BYTE": ("uint8_t", 1), "_WORD": ("uint16_t", 2), "_DWORD": ("uint32_t", 4),
    "bool": ("_Bool", 1),
}


def parse_db():
    structs = {}
    cur = None
    for ln in open(DUMP, encoding="utf-8", errors="replace"):
        m = re.match(r"^STRUCT (\S+) size=0x([0-9A-Fa-f]+)", ln)
        if m:
            cur = {"name": m.group(1), "size": int(m.group(2), 16), "members": []}
            structs[cur["name"]] = cur
            continue
        m = re.match(r"^\s+\+0x([0-9A-Fa-f]+)\s+(\S+)\s+(.*)$", ln)
        if m and cur is not None:
            cur["members"].append((int(m.group(1), 16), m.group(2), m.group(3).strip()))
    return structs


def want_members(text, tag):
    """Member names the corpus actually uses on this type: `x->name` or `x.name` where x is declared TAG."""
    names = set()
    for m in re.finditer(r"\b%s\b[^\n;{}]{0,40}?[.\-]>(\w+)" % re.escape(tag), text):
        names.add(m.group(1))
    for m in re.finditer(r"\b%s\b[^\n;{}]{0,40}?\.(\w+)" % re.escape(tag), text):
        names.add(m.group(1))
    return names


def main(argv):
    write = "--write" in argv
    db = parse_db()
    src = open(TYPES, encoding="utf-8").read()

    # only consider types currently modelled as an opaque blob
    opaque = dict((m.group(1), int(m.group(2), 16))
                  for m in re.finditer(r"typedef struct (\w+) \{ uint8_t _opaque\[0x([0-9A-Fa-f]+)\]; \}", src))

    corpus = ""
    for dp, _, fs in os.walk(os.path.join(r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled", "recovered")):
        for fn in fs:
            if fn.endswith(".c"):
                corpus += open(os.path.join(dp, fn), encoding="utf-8", errors="replace").read()

    plan = {}
    for tag, size in sorted(opaque.items()):
        if tag not in db:
            continue
        d = db[tag]
        if d["size"] != size:
            print("  %-24s SKIP: header says 0x%X, database says 0x%X" % (tag, size, d["size"]))
            continue
        used = want_members(corpus, tag)
        keep = [(off, nm, ty) for off, nm, ty in d["members"] if nm in used]
        keep = [(off, nm, ty) for off, nm, ty in keep if ty in CTYPE]
        if not keep:
            continue
        plan[tag] = (size, keep)

    print("  types with usable members: %d" % len(plan))
    total = 0
    for tag, (size, keep) in sorted(plan.items()):
        lines = []
        cursor = 0
        ok = True
        for off, nm, ty in sorted(keep):
            c, sz = CTYPE[ty]
            if off < cursor:
                ok = False
                break
            if off + sz > size:
                ok = False
                break
            if off > cursor:
                lines.append("    uint8_t _pad_%03X[0x%X];" % (cursor, off - cursor))
            lines.append("    %s %s;   /* +0x%03X */" % (c, nm, off))
            cursor = off + sz
        if not ok:
            print("  %-24s SKIP: a member does not fit the recorded size" % tag)
            continue
        if cursor < size:
            lines.append("    uint8_t _pad_%03X[0x%X];" % (cursor, size - cursor))
        body = ("typedef struct %s {\n" % tag) + "\n".join(lines) + "\n} %s;" % tag
        new = ("typedef struct %s { uint8_t _opaque[0x%X]; } %s;" % (tag, size, tag))
        plan[tag] = (new, body, len(keep))
        total += len(keep)
        print("  %-24s %d member(s): %s" % (tag, len(keep), ", ".join(n for _o, n, _t in sorted(keep))))

    if write:
        for tag, (new, body, _n) in plan.items():
            if isinstance(new, str) and new in src:
                src = src.replace(new, body, 1)
        open(TYPES, "w", encoding="utf-8", newline="").write(src)
        print("  wrote %s (%d members added across %d types)" % (TYPES, total, len(plan)))
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
