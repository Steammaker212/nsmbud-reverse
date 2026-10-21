#!/usr/bin/env python3
"""Page IDA's string list and pull out pukupuku-family resource names."""
import json

from rpc import call

HITS = []


def scan(offset, count=2000, max_pages=400):
    for page in range(max_pages):
        try:
            r = call("list_strings", {"offset": offset, "count": count}, 90)
        except Exception as e:
            print(f"page {page}: ERROR {str(e)[:200]}")
            return
        items = r.get("data", []) if isinstance(r, dict) else r
        if not items:
            print(f"stopped at offset {offset} (empty page)")
            return
        for s in items:
            val = s.get("string", "")
            if any(k in val.lower() for k in
                   ("pukupuku", "cheep", "ika", "gesso", "kurage", "fugu",
                    "hachi", "bee")):
                HITS.append((s.get("address"), val))
        if page % 25 == 0:
            print(f"  offset {offset}: total {len(HITS)} hits")
        nxt = r.get("next_offset") if isinstance(r, dict) else None
        if nxt is None or len(items) < count:
            print(f"final page at offset {offset}")
            return
        offset = nxt


if __name__ == "__main__":
    scan(0)
    print("\n=== HITS ===")
    for a, v in HITS:
        print(f"{a}  {v!r}")
