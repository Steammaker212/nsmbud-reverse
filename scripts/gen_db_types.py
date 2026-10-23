"""Emit real struct layouts from the database's own type information.

An earlier note in this repository claimed `main.i64` carries no struct definitions at all, based on enumerating its
local type library by ordinal and finding nothing. That was wrong: the database holds **125 struct/union types with
full member offsets**, reachable through `til_t.get_numbered_type(i)` on the ARM idati. The recovered bodies use
Hex-Rays member names (`StateMethodExecuter.currentState`, `ModelWrapper.shuAnims`, `StageActor.aCollider`) which only
exist because those definitions are there.

This reads the dumped layouts (`C:\\nsmbudx_types\\structs.txt`) and writes C definitions for the types the recovered
units actually reference, so field offsets come from the database instead of being guessed.

Nested members whose type is itself a known struct are emitted by value; unknown ones become opaque byte arrays of
the correct size, so every offset stays exact even when a type's internals are not needed.
"""
import os
import re
import sys

DUMP = r"C:\nsmbudx_types\structs.txt"
OUT = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled\include\nsmbudx_db_types.h"

CTYPE = {
    "int": "int32_t", "unsigned int": "uint32_t", "char": "int8_t", "unsigned char": "uint8_t",
    "short": "int16_t", "unsigned short": "uint16_t", "__int64": "int64_t", "unsigned __int64": "uint64_t",
    "float": "float", "double": "double", "void *": "void *", "bool": "_Bool", "__int16": "int16_t",
    "__int32": "int32_t", "__int64": "int64_t", "unsigned __int8": "uint8_t", "signed char": "int8_t",
    "signed int": "int32_t", "signed short": "int16_t", "signed __int64": "int64_t",
    "unsigned __int16": "uint16_t", "unsigned __int32": "uint32_t", "unsigned __int64": "uint64_t",
    "__int8": "int8_t", "long": "int32_t", "unsigned long": "uint32_t", "_BYTE": "uint8_t", "_WORD": "uint16_t", "_DWORD": "uint32_t",
}
ALIGN = {"int8_t": 1, "uint8_t": 1, "_Bool": 1, "int16_t": 2, "uint16_t": 2,
         "int32_t": 4, "uint32_t": 4, "float": 4, "void *": 4, "int64_t": 8, "uint64_t": 8, "double": 8}


class Struct:
    def __init__(self, name, size):
        self.name = name
        self.size = size
        self.members = []      # list of (offset, name, basetype, arraylen)


def parse(path):
    structs = {}
    cur = None
    for ln in open(path, encoding="utf-8", errors="replace"):
        m = re.match(r"^STRUCT (\S+) size=0x([0-9A-Fa-f]+)", ln)
        if m:
            cur = Struct(m.group(1), int(m.group(2), 16))
            structs[cur.name] = cur
            continue
        m = re.match(r"^\s+\+0x([0-9A-Fa-f]+)\s+(\S+)\s+(.*)$", ln)
        if m and cur is not None:
            off = int(m.group(1), 16)
            name = m.group(2)
            typ = m.group(3).strip()
            cur.members.append((off, name, typ))
    return structs


def split_array(typ):
    m = re.match(r"^(.*?)\[(\d+)\]$", typ.strip())
    if m:
        return m.group(1).strip(), int(m.group(2))
    return typ.strip(), 1


def resolve(typ, structs):
    """Return (c_type, size, align) for a database type string."""
    base, n = split_array(typ)
    # pointer to anything
    if base.endswith("*"):
        target = base[:-1].strip()
        if target in structs:
            c = "struct %s *" % target
        else:
            c = "void *"
        return c, 4 * n, 4
    if base in structs:
        return "struct %s" % base, structs[base].size * n, 4
    if base in CTYPE:
        c = CTYPE[base]
        return c, ALIGN.get(c, 4) * n, ALIGN.get(c, 4)
    # unknown named type: opaque blob of unknown size -> caller falls back
    return None, 0, 1


def emit(structs, wanted, out):
    done = set()
    order = []

    def visit(name):
        if name in done or name not in structs:
            return
        done.add(name)
        s = structs[name]
        for off, mname, typ in s.members:
            base, _n = split_array(typ)
            inner = base[:-1].strip() if base.endswith("*") else base
            if inner in structs:
                visit(inner)
        order.append(name)

    for w in wanted:
        visit(w)

    lines = []
    lines.append("/* Struct layouts taken from the main.i64 type library.")
    lines.append(" *")
    lines.append(" * Each member's offset was read from the database, not inferred. An earlier conclusion that the")
    lines.append(" * database holds no type definitions was wrong: it has 125 struct/union types with full layouts,")
    lines.append(" * reachable through til_t.get_numbered_type() on the ARM idati.")
    lines.append(" *")
    lines.append(" * Where a member's type is itself a database struct it is embedded by value; where the database gives a")
    lines.append(" * name this generator cannot resolve, it becomes a byte blob of the correct remaining size, so the")
    lines.append(" * offsets of every following member stay exact.")
    lines.append(" */")
    lines.append("#ifndef NSMBUDX_DB_TYPES_H")
    lines.append("#define NSMBUDX_DB_TYPES_H")
    lines.append("")
    lines.append("#include <stdint.h>")
    lines.append("")

    for name in order:
        s = structs[name]
        lines.append("/* sizeof 0x%X, %d member(s) from the database */" % (s.size, len(s.members)))
        lines.append("struct %s {" % name)
        cursor = 0
        for off, mname, typ in s.members:
            c, size, _al = resolve(typ, structs)
            if c is None:
                # opaque remainder up to the next known member, or to the end
                nxt = None
                for o2, _n2, _t2 in s.members:
                    if o2 > off:
                        nxt = o2
                        break
                size = (nxt - off) if nxt is not None else (s.size - off)
                c = "uint8_t"
                pad = size
                lines.append("    /* %-28s +0x%03X  type %r not resolvable; kept as bytes */" % (mname, off, typ))
                if off > cursor:
                    lines.append("    uint8_t _pad_%03X[0x%X];" % (cursor, off - cursor))
                lines.append("    %s %s[0x%X];" % (c, mname, pad))
                cursor = off + pad
                continue
            if off > cursor:
                lines.append("    uint8_t _pad_%03X[0x%X];" % (cursor, off - cursor))
            base, n = split_array(typ)
            if n > 1:
                lines.append("    %s %s[%d];   /* +0x%03X */" % (c, mname, n, off))
            else:
                lines.append("    %s %s;   /* +0x%03X */" % (c, mname, off))
            cursor = off + size
        if cursor < s.size:
            lines.append("    uint8_t _pad_%03X[0x%X];" % (cursor, s.size - cursor))
        lines.append("};")
        lines.append("")

    lines.append("#endif")
    open(OUT, "w", encoding="utf-8", newline="").write("\n".join(lines) + "\n")
    return order


def main(argv):
    structs = parse(DUMP)
    print("  parsed %d structs from the database dump" % len(structs))
    wanted = ["StateMethodExecuter", "StateExecuter", "StateWrapper", "StateVirtual",
              "ModelWrapper", "AnimationsList", "StageActor", "Actor", "CollisionActor",
              "Enemy", "MultiStateActor", "ActorBuildInfo", "Profile", "Vec3", "Vec3i"]
    wanted = [w for w in wanted if w in structs]
    order = emit(structs, wanted, OUT)
    print("  emitted %d struct(s) to %s" % (len(order), OUT))
    for n in order:
        print("    %-24s size 0x%X" % (n, structs[n].size))
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
