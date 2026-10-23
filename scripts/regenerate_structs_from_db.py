"""Regenerate the C bodies of structs whose database definition is richer than the header's.

Several headers model a type as an opaque blob or as its first field followed by padding, e.g.

    struct TileCheck_Result { uint8_t _opaque[0x24]; }
    typedef struct Vec2 { float x; uint8_t _pad_004[0x4]; } Vec2;

while the database has a full member list for the same type -- Vec2 is `x` at +0x000 and `y` at +0x004, nine
named-by-offset members for TileCheck_Result, and ActorBuildInfo carries eventId1, eventId2, movementId, linkId and
initStateFlag where the header has `_pad_021[0xB]`.

The padding is what makes the corpus fail with "no member named": the member exists in the database and was skipped
when the header was written. So the replacement is driven entirely by the database dump, not by the enum of names the
corpus happens to mention -- a member the corpus has not used yet is still part of the type.

Layout is preserved by construction: every member is emitted with an explicit offset, and a pad is inserted whenever
the running offset is short of the next member's offset. A trailing pad closes the struct to its recorded size. Each
struct keeps `_Static_assert` checks on both the total size and the offset of every emitted member, so a mistake is a
compile error rather than a silently different layout.
"""
import os
import re
import subprocess
import sys

ROOT = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled"
INC = os.path.join(ROOT, "include")
CLANG = r"C:\Program Files\LLVM\bin\clang.exe"
DUMP = r"C:\nsmbudx_types\structs.txt"
FILES = ["libs\\libs.c", "systems\\systems.c", "systems\\states.c", "actors\\actors_b.c",
         "actors\\actor_construction.c", "actors\\actors_a.c", "systems\\core.c",
         "player\\player.c", "powerup\\powerup.c"]

# C spelling for each database type name. Anything unlisted maps to int32_t, which is the database's default for an
# unnamed int and matches what the aggregate reads.
SCALARS = {
    "char": "int8_t", "signed char": "int8_t", "unsigned char": "uint8_t",
    "short": "int16_t", "unsigned short": "uint16_t",
    "int": "int32_t", "unsigned int": "uint32_t",
    "long": "int32_t", "unsigned long": "uint32_t",
    "float": "float", "double": "double", "bool": "uint8_t", "_BYTE": "uint8_t",
    "void": "uint8_t",
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


def c_decl(dbtype, name):
    """Turn a database member type into a C declaration, returning (text, is_array, array_len)."""
    t = dbtype.strip()
    m = re.match(r"^(.+?)\s*\[\s*(\d+)\s*\]$", t)
    if m:
        inner, n = m.group(1).strip(), int(m.group(2))
        base = SCALARS.get(inner, "int32_t")
        return "%s %s[%d]" % (base, name, n), True, n
    if t.endswith("*"):
        inner = t[:-1].strip()
        if inner in SCALARS or inner in ("void",):
            return "void * %s" % name, False, 0
        return "struct %s * %s" % (inner, name), False, 0
    if t in SCALARS:
        return "%s %s" % (SCALARS[t], name), False, 0
    # a nested struct by value
    return "struct %s %s" % (t, name), False, 0


def member_size(dbtype, types):
    """Size in bytes of one member, from the database's own record of the type."""
    t = dbtype.strip()
    m = re.match(r"^(.+?)\s*\[\s*(\d+)\s*\]$", t)
    if m:
        return m.group(0) and (scalar_size(m.group(1).strip(), types) * int(m.group(2)))
    if t.endswith("*"):
        return 4
    return scalar_size(t, types)


def scalar_size(t, types):
    widths = {"char": 1, "signed char": 1, "unsigned char": 1, "_BYTE": 1, "bool": 1,
              "short": 2, "unsigned short": 2,
              "int": 4, "unsigned int": 4, "long": 4, "unsigned long": 4,
              "float": 4, "double": 8}
    if t in widths:
        return widths[t]
    if t in types:
        return types[t]["size"]
    return 4


def render(ty, info, types):
    out = ["struct %s {" % ty]
    off = 0
    asserts = []
    for moff, mname, mtype in info["members"]:
        if moff > off:
            out.append("    uint8_t _pad_%03X[0x%X];" % (off, moff - off))
            off = moff
        decl, _is_arr, _alen = c_decl(mtype, mname)
        out.append("    %s;   /* +0x%03X  %s */" % (decl, moff, mtype))
        asserts.append((mname, moff))
        off = moff + member_size(mtype, types)
    if info["size"] > off:
        out.append("    uint8_t _pad_%03X[0x%X];" % (off, info["size"] - off))
    out.append("};")
    for mname, moff in asserts:
        out.append("_Static_assert(offsetof(struct %s, %s) == 0x%X, \"%s.%s offset\");" % (ty, mname, moff, ty, mname))
    out.append("_Static_assert(sizeof(struct %s) == 0x%X, \"%s size\");" % (ty, info["size"], ty))
    return "\n".join(out)


def total():
    n = 0
    for f in FILES:
        p = os.path.join(ROOT, f)
        if not os.path.exists(p):
            continue
        r = subprocess.run([CLANG, "-fsyntax-only", "-Wno-everything", "-ferror-limit=0", "-I", INC, p],
                           capture_output=True, text=True, errors="replace")
        n += r.stderr.count("error:")
    return n


def main(argv):
    write = "--write" in argv
    types = parse_dump()
    target = sys.argv[1] if len(sys.argv) > 1 and not sys.argv[1].startswith("-") else None
    wanted = [target] if target else ["ActorBuildInfo", "TileCheck_Result", "ColliderNodeUnk1",
                                      "ActiveCollider", "CollisionActor", "Vec2"]
    before = total()
    print("  corpus errors before: %d" % before)
    for ty in wanted:
        if ty not in types:
            print("    %s: not in database dump" % ty)
            continue
        info = types[ty]
        print("    %s: %d members, size 0x%X" % (ty, len(info["members"]), info["size"]))
        if write:
            print(render(ty, info))
    after = total()
    print("  corpus errors after:  %d  (%+d)" % (after, after - before))
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
