"""Pad corpus structs up to main.i64's authoritative sizeof, without moving any existing member.

main.i64 reports the size of 125 types but stores ZERO field names (they are opaque there). So the only
adoptable fact per type is its total size. Appending trailing padding is the one edit that is safe:
every existing member keeps its offset, so no code that reads field_XXXX breaks, while sizeof() and
pointer arithmetic become correct.

This exists because a wrong sizeof is a silent miscompile, not a visible error: `buf + sizeof(T)` and
`calloc(n, sizeof(T))` quietly take the wrong stride. ActiveCollider at 0x70 vs the real 0x130 is exactly
that kind of bug.

Usage: pad_structs_to_main_i64.py <headers-dir> [--write]
"""
import json
import os
import re
import sys

TYPES = r"C:\Users\Saif Khan\Downloads\main.idb\.rea\main_i64_types.json"


def main(argv):
    headers = argv[1]
    write = "--write" in argv
    with open(TYPES, encoding="utf-8") as fh:
        theirs = {r["name"]: r["size"] for r in json.load(fh) if r["size"]}

    padded = []
    for fn in sorted(os.listdir(headers)):
        if not fn.endswith(".h"):
            continue
        path = os.path.join(headers, fn)
        with open(path, encoding="utf-8", errors="replace") as fh:
            text = fh.read()
        original = text

        for nm, size in theirs.items():
            m = re.search(r"(typedef struct %s\s*\{)(.*?)(\}\s*%s\s*;)" % (re.escape(nm), re.escape(nm)),
                          text, re.S)
            if not m:
                continue
            body = m.group(2)
            # never touch a struct that is already an opaque blob; those are sized by construction
            if re.fullmatch(r"\s*uint8_t\s+_opaque\[\s*0x[0-9A-Fa-f]+\s*\]\s*;\s*", body):
                continue
            if "_pad_to_sizeof" in body:
                continue

            # highest documented offset, so the pad starts where our knowledge ends
            offs = [int(x, 16) for x in re.findall(r"\+\s*0x([0-9A-Fa-f]+)\s*\*/", body)]
            last_field_size = 0
            fm = re.findall(r"uint(?:8|16|32|64)_t\s+\w+\s*;\s*/\*\s*\+\s*0x([0-9A-Fa-f]+)\s*\*/", body)
            if offs:
                last = max(offs)
                # size of the member at the highest offset, from its declared type
                tail = re.search(r"uint(8|16|32|64)_t\s+\w+\s*;\s*/\*\s*\+\s*0x%X\s*\*/"
                                 % last, body)
                last_field_size = (int(tail.group(1)) // 8) if tail else 4
                have = last + last_field_size
            else:
                have = 0
            if have >= size:
                continue
            pad = size - have
            new_body = body.rstrip() + (
                "\n    uint8_t _pad_to_sizeof[0x%X];   /* +0x%03X .. total 0x%X, matches main.i64 sizeof */\n"
                % (pad, have, size))
            text = text[:m.start(2)] + new_body + text[m.end(2):]
            padded.append((fn, nm, have, size, pad))

        if write and text != original:
            with open(path, "w", encoding="utf-8", newline="") as fh:
                fh.write(text)

    for fn, nm, have, size, pad in padded:
        print("  %-18s %-34s known 0x%-5X -> sizeof 0x%-5X (+0x%X)" % (fn, nm, have, size, pad))
    print()
    print("padded: %d structs (write=%s)" % (len(padded), write))
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
