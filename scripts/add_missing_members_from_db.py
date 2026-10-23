"""Add the exact struct members the compiler reports missing, at offsets taken from the database.

The corpus reaches members through expressions like `result[7].currentState`, where the struct name is nowhere near
the member name, so members cannot be attributed by text proximity. The compiler already knows the type of every
failing expression and says so: "no member named 'currentState' in 'struct StateMethodExecuter'". That message is the
oracle, and it is exact.

For each (struct, member) pair the compiler reports, this looks the pair up in the database's own type library and
inserts the member at the recorded offset. The struct's total size is preserved: every unmodelled region, before and
after the inserted members, becomes explicit byte padding. If a member does not fit inside the recorded size, or the
database does not list it, the struct is skipped and reported -- never guessed at.

This is deliberately narrower than replacing the structs with fully generated layouts. That was measured making
things worse (475 -> 610 errors) because `structs.h` already defines several of these tags with field ranges the rest
of the corpus depends on.
"""
import os
import re
import subprocess
import sys

DUMP = r"C:\nsmbudx_types\structs.txt"
ROOT = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled"
INC = os.path.join(ROOT, "include")
TYPES = os.path.join(INC, "nsmbudx_recovered_types.h")
CLANG = r"C:\Program Files\LLVM\bin\clang.exe"
TUS = [os.path.join(ROOT, "recovered", f)
       for f in ("recovered_named.c", "recovered_missing.c", "recovered_stubs.c")]

CTYPE = {
    "int": ("int32_t", 4), "unsigned int": ("uint32_t", 4), "signed int": ("int32_t", 4),
    "char": ("int8_t", 1), "signed char": ("int8_t", 1), "unsigned char": ("uint8_t", 1),
    "short": ("int16_t", 2), "__int16": ("int16_t", 2), "unsigned short": ("uint16_t", 2),
    "float": ("float", 4), "double": ("double", 8),
    "__int64": ("int64_t", 8), "unsigned __int64": ("uint64_t", 8),
    "void *": ("void *", 4), "_BYTE": ("uint8_t", 1), "_WORD": ("uint16_t", 2), "_DWORD": ("uint32_t", 4),
    "bool": ("_Bool", 1),
}


def split_array(typ):
    m = re.match(r"^(.*?)\[(\d+)\]$", typ.strip())
    if m:
        return m.group(1).strip(), int(m.group(2))
    return typ.strip(), 1


def resolve(typ, db):
    """Database type string -> (c_declaration, size). Handles pointers, arrays and embedded database structs."""
    base, n = split_array(typ)
    if base.endswith("*"):
        inner = base[:-1].strip()
        c = ("struct %s *" % inner) if inner in db else "void *"
        return (c if n == 1 else c + " " + "x"), 4 * n
    if base in CTYPE:
        c, sz = CTYPE[base]
        return ((c, sz * n) if n == 1 else (c, sz * n))
    if base in db:
        # embedded struct: emitted by value; only sound because the generated db types header defines it
        return "struct %s" % base, db[base]["size"] * n
    return None



def struct_def(text, tag):
    """Return (body, size_bytes) for `typedef struct TAG { ... } TAG;`, or None.

    Two spellings exist in these headers: a one-line `typedef struct T { ... } T;` and a multi-line block whose
    closing brace may be indented. The size comes either from the trailing `sizeof 0xN` comment or from a
    `_pad_to_sizeof`/`total 0xN` marker the corpus uses for partially-modelled structs.
    """
    m = re.search(r"(?ms)^typedef struct %s \{(.*?)^[ \t]*\} %s;[^\n]*" % (re.escape(tag), re.escape(tag)), text)
    if not m:
        m = re.search(r"^typedef struct %s \{([^\n]*)\} %s;[^\n]*" % (re.escape(tag), re.escape(tag)), text, re.M)
    if not m:
        return None
    whole, body = m.group(0), m.group(1)
    for pat in (r"sizeof (?:0x)?([0-9A-Fa-f]+)", r"total 0x([0-9A-Fa-f]+)"):
        sm = re.search(pat, whole)
        if sm:
            return body, int(sm.group(1), 16)
    # No size comment: sum the members we can measure, trusting the database for the total.
    return body, None

def parse_db():
    structs = {}
    cur = None
    for ln in open(DUMP, encoding="utf-8", errors="replace"):
        m = re.match(r"^STRUCT (\S+) size=0x([0-9A-Fa-f]+)", ln)
        if m:
            cur = {"name": m.group(1), "size": int(m.group(2), 16), "members": {}}
            structs[cur["name"]] = cur
            continue
        m = re.match(r"^\s+\+0x([0-9A-Fa-f]+)\s+(\S+)\s+(.*)$", ln)
        if m and cur is not None:
            cur["members"][m.group(2)] = (int(m.group(1), 16), m.group(3).strip())
    return structs


def compile_errors():
    out = ""
    for tu in TUS:
        if not os.path.exists(tu):
            continue
        r = subprocess.run([CLANG, "-fsyntax-only", "-Wno-everything", "-ferror-limit=0", "-I", INC, tu],
                           capture_output=True, text=True, errors="replace")
        out += r.stderr
    return out


def main(argv):
    write = "--write" in argv
    db = parse_db()
    errs = compile_errors()
    need = {}
    for m in re.finditer(r"no member named '(\w+)' in '(?:struct |union )?(\w+)'", errs):
        need.setdefault(m.group(2), set()).add(m.group(1))
    print("  structs with missing members: %d" % len(need))
    if not need:
        return 0

    src = open(TYPES, encoding="utf-8").read()
    # structs.h is deliberately NOT edited. Replacing its definitions dropped the corpus parse from 467/479 to
    # 0/479: those structs carry member ordering and pad regions that every unit depends on, and replacing one (even
    # with a layout whose total size is right) invalidates everything that relied on its members.
    structs_h = os.path.join(INC, "structs.h")
    sh = ""
    opaque = dict((m.group(1), int(m.group(2), 16))
                  for m in re.finditer(r"typedef struct (\w+) \{ uint8_t _opaque\[0x([0-9A-Fa-f]+)\]; \}", src))

    applied = 0
    edits = {"types": [], "structs": []}
    for tag, members in sorted(need.items()):
        # Accept three shapes: a pure opaque blob in the recovered-types header, a partially-modelled struct there,
        # or a definition in structs.h. The database supplies the size when the header omits it.
        size = None
        found = struct_def(src, tag)
        if found and found[1] is not None:
            size = found[1]
        elif tag in opaque:
            size = opaque[tag]
        if struct_def(src, tag) is None:
            print("  %-24s SKIP: not declared in the recovered-types header" % tag)
            continue
        if size is None:
            if tag in db:
                size = db[tag]["size"]
            else:
                print("  %-24s SKIP: no definition and no database size" % tag)
                continue
        if tag not in db:
            print("  %-24s SKIP: no database layout" % tag)
            continue
        d = db[tag]
        if d["size"] > size:
            print("  %-24s SKIP: database size 0x%X exceeds header size 0x%X" % (tag, d["size"], size))
            continue
        keep = []
        for nm in sorted(members):
            if nm not in d["members"]:
                print("  %-24s member %-16s SKIP: not in database layout" % (tag, nm))
                continue
            off, ty = d["members"][nm]
            r = resolve(ty, db)
            if r is None:
                print("  %-24s member %-16s SKIP: type %r cannot be resolved" % (tag, nm, ty))
                continue
            keep.append((off, nm, ty))
        if not keep:
            continue
        keep.sort()
        lines = []
        cursor = 0
        bad = False
        for off, nm, ty in keep:
            c, sz = resolve(ty, db)
            if off < cursor or off + sz > size:
                bad = True
                break
            if off > cursor:
                lines.append("    uint8_t _pad_%03X[0x%X];" % (cursor, off - cursor))
            lines.append("    %s %s;   /* +0x%03X  from main.i64 */" % (c, nm, off))
            cursor = off + sz
        if bad:
            print("  %-24s SKIP: members do not fit inside 0x%X" % (tag, size))
            continue
        if cursor < size:
            lines.append("    uint8_t _pad_%03X[0x%X];" % (cursor, size - cursor))
        body = "typedef struct %s {\n%s\n} %s;   /* sizeof 0x%X */" % (tag, "\n".join(lines), tag, size)
        done = False
        for target, key in ((src, "types"), (sh, "structs")):
            m = re.search(r"(?ms)^typedef struct %s \{.*?^[ \t]*\} %s;[^\n]*" % (re.escape(tag), re.escape(tag)), target)
            if not m:
                m = re.search(r"^typedef struct %s \{[^\n]*\} %s;[^\n]*" % (re.escape(tag), re.escape(tag)), target, re.M)
            if m:
                if key == "types":
                    src = src[:m.start()] + body + src[m.end():]
                else:
                    sh = sh[:m.start()] + body + sh[m.end():]
                done = True
                break
        if done:
            applied += 1
            print("  %-24s %d member(s): %s" % (tag, len(keep), ", ".join(n for _o, n, _t in keep)))

    print("  structs rewritten: %d" % applied)
    if write and applied:
        # Splicing members can make a struct embed Vec3/Vec2/Vec3i by value. An embedded struct needs a complete
        # type, so if a value struct now precedes its definition the whole header fails ("field has incomplete
        # type") and every unit that includes it stops parsing. Move the three dependency-free value structs to the
        # top so ordering cannot matter. This is what turned 467/479 into 0/479 before it was handled here.
        def cut(tag):
            m = re.search(r"(?ms)^typedef struct %s \{(.*?)^[ \t]*\} %s;[^\n]*\n"
                          % (re.escape(tag), re.escape(tag)), src)
            return (m.group(0), m.start(), m.end()) if m else (None, -1, -1)
        moved = []
        for tag in ("Vec2", "Vec3", "Vec3i"):
            blk, s, e = cut(tag)
            if blk:
                src = src[:s] + src[e:]
                moved.append(blk)
        if moved:
            anchor = re.search(r"(?m)^typedef struct", src)
            if anchor:
                src = src[:anchor.start()] + "".join(moved) + "\n" + src[anchor.start():]
        open(TYPES, "w", encoding="utf-8", newline="").write(src)
        if sh:
            open(structs_h, "w", encoding="utf-8", newline="").write(sh)
        print("  written")
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
