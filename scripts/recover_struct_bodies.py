"""Recover struct bodies that a header had collapsed to padding or an opaque blob.

`decompiled/include` models several types far more weakly than the database does:

    struct TileCheck_Result { uint8_t _opaque[0x24]; }        nine members, all lost
    typedef struct Vec2 { float x; uint8_t _pad_004[0x4]; }   `y` lost to padding
    struct ActorBuildInfo { ... uint8_t _pad_021[0xB]; }      eventId1/2, movementId, linkId, initStateFlag lost

The corpus then fails with "no member named 'x'" -- the member exists in the database and was skipped when the
header was generated.

Every replacement is driven by `main.i64`'s own member dump (C:\\nsmbudx_types\\structs.txt), not by the names the
corpus happens to mention, so a member no code has touched yet is still recovered. Layout is held to the database by
an explicit pad wherever the running offset is short and a trailing pad to the recorded size, plus
`_Static_assert` on the total size and on every member's offset. A mistake is then a compile error rather than a
layout that quietly disagrees with the binary.

Two details this file gets right and an earlier attempt did not:

  * `Vec2` is a typedef, so the replacement keeps `typedef struct Vec2 { ... } Vec2;`. Dropping the wrapper made
    `Vec2` unusable and produced a burst of unrelated errors.
  * `nsmbudx_recovered_types.h` had no include guard. Any unit that reached it twice redefined every struct, and
    the second definition disagreed with the first. The guard is added here before anything else.

Check results with scripts/corpus_check.py, which pins the 32-bit target these offsets only make sense on.
"""
import os
import re
import sys

ROOT = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled"
INC = os.path.join(ROOT, "include")
DUMP = r"C:\nsmbudx_types\structs.txt"

SCALARS = {
    "char": "int8_t", "signed char": "int8_t", "unsigned char": "uint8_t", "_BYTE": "uint8_t", "bool": "uint8_t",
    "short": "int16_t", "unsigned short": "uint16_t",
    "int": "int32_t", "unsigned int": "uint32_t", "long": "int32_t", "unsigned long": "uint32_t",
    "float": "float", "double": "double", "void": "uint8_t",
}

# where each type's definition lives, and whether it is spelled with a typedef
TARGETS = {
    "Vec2": (r"nsmbudx_value_types.h", True),
    "ActorBuildInfo": (r"nsmbudx_recovered_types.h", True),
    "TileCheck_Result": (r"nsmbudx_recovered_types.h", True),
}


def parse_dump():
    types, cur = {}, None
    for line in open(DUMP, encoding="utf-8", errors="replace"):
        m = re.match(r"^(?:STRUCT|UNION)\s+(\w+)\s+size=0x([0-9A-Fa-f]+)", line)
        if m:
            cur = m.group(1)
            types[cur] = {"size": int(m.group(2), 16), "members": []}
            continue
        m = re.match(r"^\s+\+0x([0-9A-Fa-f]+)\s+(\w+)\s+(.+?)\s*$", line)
        if m and cur:
            types[cur]["members"].append((int(m.group(1), 16), m.group(2), m.group(3)))
    return types


def scalar_size(t, types):
    widths = {"char": 1, "signed char": 1, "unsigned char": 1, "_BYTE": 1, "bool": 1,
              "short": 2, "unsigned short": 2, "int": 4, "unsigned int": 4, "long": 4,
              "unsigned long": 4, "float": 4, "double": 8}
    if t in widths:
        return widths[t]
    if t in types:
        return types[t]["size"]
    return 4


def member_size(dbtype, types):
    t = dbtype.strip()
    m = re.match(r"^(.+?)\s*\[\s*(\d+)\s*\]$", t)
    if m:
        return scalar_size(m.group(1).strip(), types) * int(m.group(2))
    if t.endswith("*"):
        return 4
    return scalar_size(t, types)


def c_decl(dbtype, name):
    t = dbtype.strip()
    m = re.match(r"^(.+?)\s*\[\s*(\d+)\s*\]$", t)
    if m:
        return "%s %s[%d]" % (SCALARS.get(m.group(1).strip(), "int32_t"), name, int(m.group(2)))
    if t.endswith("*"):
        inner = t[:-1].strip()
        if inner in SCALARS:
            return "void * %s" % name
        return "struct %s * %s" % (inner, name)
    if t in SCALARS:
        return "%s %s" % (SCALARS[t], name)
    return "struct %s %s" % (t, name)


def render(ty, info, types, typedef):
    body = []
    off = 0
    asserts = []
    for moff, mname, mtype in info["members"]:
        if moff > off:
            body.append("    uint8_t _pad_%03X[0x%X];" % (off, moff - off))
            off = moff
        body.append("    %s;   /* +0x%03X  %s */" % (c_decl(mtype, mname), moff, mtype))
        asserts.append((mname, moff))
        off = moff + member_size(mtype, types)
    if info["size"] > off:
        body.append("    uint8_t _pad_%03X[0x%X];" % (off, info["size"] - off))

    head = "typedef struct %s {" % ty if typedef else "struct %s {" % ty
    tail = "} %s;   /* sizeof 0x%X */" % (ty, info["size"]) if typedef else "};"
    out = [head] + body + [tail]
    ref = ty if typedef else "struct %s" % ty
    for mname, moff in asserts:
        out.append('_Static_assert(offsetof(%s, %s) == 0x%X, "%s.%s offset");' % (ref, mname, moff, ty, mname))
    out.append('_Static_assert(sizeof(%s) == 0x%X, "%s size");' % (ref, info["size"], ty))
    return "\n".join(out)


def replace_struct(path, ty, newtext):
    t = open(path, encoding="utf-8").read()
    mm = re.search(r"(?:typedef\s+)?struct\s+%s\s*\{" % ty, t)
    if not mm:
        return False
    i = mm.end() - 1
    depth, end = 0, None
    for j in range(i, len(t)):
        if t[j] == "{":
            depth += 1
        elif t[j] == "}":
            depth -= 1
            if depth == 0:
                end = j
                break
    if end is None:
        return False
    k = end + 1
    while k < len(t) and t[k] in " \t":
        k += 1
    if k < len(t) and t[k] == ";":
        k += 1
    else:
        semi = t.find(";", k)
        if semi != -1 and semi - k < 40:
            k = semi + 1
    open(path, "w", encoding="utf-8", newline="").write(t[:mm.start()] + newtext + t[k:])
    return True


def ensure_guard(path, macro):
    t = open(path, encoding="utf-8").read()
    if "#ifndef %s" % macro in t:
        return False
    t = "#ifndef %s\n#define %s\n\n" % (macro, macro) + t.rstrip("\n") + "\n\n#endif /* %s */\n" % macro
    open(path, "w", encoding="utf-8", newline="").write(t)
    return True


def main():
    types = parse_dump()
    guarded = ensure_guard(os.path.join(INC, "nsmbudx_recovered_types.h"), "NSMBUDX_RECOVERED_TYPES_H")
    print("  include guard added: %s" % guarded)
    for ty, (fname, typedef) in TARGETS.items():
        if ty not in types:
            print("  %s: not in database dump" % ty)
            continue
        ok = replace_struct(os.path.join(INC, fname), ty,
                            render(ty, types[ty], types, typedef))
        print("  %-18s %-30s %s (%d members)"
              % (ty, fname, "replaced" if ok else "NOT FOUND", len(types[ty]["members"])))
    return 0


if __name__ == "__main__":
    sys.exit(main())
