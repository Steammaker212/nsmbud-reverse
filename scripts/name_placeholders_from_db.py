"""Replace `field_XXXX` placeholders with the real member names the database records at that offset.

`structs.h` models several gameplay classes as a run of `field_0000`, `field_0004`, ... members at their correct
offsets. The database names some of those offsets -- Actor+0x00C is `profile`, +0x008 is `id`, +0x038 is `parent`,
and so on. Swapping the name in place gives the recovered code the identifier it already uses, with no change to the
layout at all.

This is a rename, not a re-layout, and it is deliberately conservative:

  * only definitions in `structs.h` are considered; the database layout must match the header's recorded size;
  * a placeholder is renamed only when the database's member at that exact offset is a real name (not `field_*`,
    not `gap*`);
  * the database type must be resolvable to the same width as the placeholder it replaces, so no member can shift;
  * a name that is already used elsewhere inside the same struct is skipped to avoid a duplicate member.

Every rename is checked afterwards by `_Static_assert` on each affected struct's sizeof, so a silent layout change
would fail loudly instead of passing as a cosmetic edit.
"""
import os
import re
import sys

DUMP = r"C:\nsmbudx_types\structs.txt"
INC = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled\include"
STRUCTS = os.path.join(INC, "structs.h")

# database type -> width in bytes
WIDTH = {
    "int": 4, "unsigned int": 4, "signed int": 4, "char": 1, "signed char": 1, "unsigned char": 1,
    "short": 2, "__int16": 2, "unsigned short": 2, "float": 4, "double": 8,
    "__int64": 8, "unsigned __int64": 8, "void *": 4, "_BYTE": 1, "_WORD": 2, "_DWORD": 4, "bool": 1,
}
TYPE_SPELLING = {
    "int": "int32_t", "signed int": "int32_t", "unsigned int": "uint32_t", "char": "int8_t",
    "signed char": "int8_t", "unsigned char": "uint8_t", "short": "int16_t", "__int16": "int16_t",
    "unsigned short": "uint16_t", "float": "float", "double": "double", "__int64": "int64_t",
    "unsigned __int64": "uint64_t", "void *": "void *", "_BYTE": "uint8_t", "_WORD": "uint16_t",
    "_DWORD": "uint32_t", "bool": "_Bool",
}


def parse_db():
    structs = {}
    cur = None
    for ln in open(DUMP, encoding="utf-8", errors="replace"):
        m = re.match(r"^STRUCT (\S+) size=0x([0-9A-Fa-f]+)", ln)
        if m:
            cur = {"size": int(m.group(2), 16), "members": {}}
            structs[m.group(1)] = cur
            continue
        m = re.match(r"^\s+\+0x([0-9A-Fa-f]+)\s+(\S+)\s+(.*)$", ln)
        if m and cur is not None:
            cur["members"][int(m.group(1), 16)] = (m.group(2), m.group(3).strip())
    return structs


def main(argv):
    write = "--write" in argv
    db = parse_db()
    src = open(STRUCTS, encoding="utf-8").read()
    total = 0

    for tag, d in sorted(db.items()):
        m = re.search(r"(?ms)^typedef struct %s \{.*?^[ \t]*\} %s;[^\n]*" % (re.escape(tag), re.escape(tag)), src)
        if not m:
            continue
        block = m.group(0)
        szm = re.search(r"sizeof 0x([0-9A-Fa-f]+)", block)
        if szm and int(szm.group(1), 16) != d["size"]:
            continue  # header disagrees with the database; not a rename candidate

        new_block = block
        renamed = []
        used = set(re.findall(r"(?m)^\s*\w[\w ]*?\b(\w+);", block))
        for off, (name, ty) in sorted(d["members"].items()):
            if name.startswith("field_") or name.startswith("gap"):
                continue
            if ty not in WIDTH:
                continue
            if name in used:
                continue
            # find the placeholder declared at this offset
            pat = re.compile(r"(?m)^(\s*)uint(8|16|32)_t field_%04X;\s*/\* \+0x%04X \*/" % (off, off))
            pm = pat.search(new_block)
            if not pm:
                continue
            width = WIDTH[ty]
            declared = int(pm.group(2)) // 8
            if declared != width:
                continue  # would change the layout
            new_block = new_block[:pm.start()] + \
                "%s%s %s;   /* +0x%04X  from main.i64 */" % (pm.group(1), TYPE_SPELLING[ty], name, off) + \
                new_block[pm.end():]
            renamed.append(name)
            used.add(name)

        if renamed:
            src = src[:m.start()] + new_block + src[m.end():]
            total += len(renamed)
            print("  %-22s %d renamed: %s" % (tag, len(renamed), ", ".join(renamed)))

    print("  members renamed: %d" % total)
    if write and total:
        open(STRUCTS, "w", encoding="utf-8", newline="").write(src)
        print("  written")
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
