#!/usr/bin/env python3
"""Decode codedx doc/profiles.csv (Shift-JIS) and look up profile IDs of interest.

Columns: hex_id, dec_id, name_jp, name_en, ctor_rva, ...
"""
import csv
import io
import sys

SRC = r"C:\Users\Saif Khan\Downloads\main.idb\.rea\codedx\src\doc\profiles.csv"
BASE = 0x60000000

INTEREST = {
    476: "FireBall (player)",
    474: "IceBall",
    759: "Hammer",
    913: "last profile id",
    914: "NUM_PROFILES_ORIGINAL",
}

# Cheep Cheep family from the earlier Wii U alignment work
CHEEP = list(range(530, 548)) + [887]


def load():
    raw = open(SRC, "rb").read()
    for enc in ("shift_jis", "cp932", "utf-8"):
        try:
            txt = raw.decode(enc)
            print(f"decoded as {enc}")
            return list(csv.reader(io.StringIO(txt)))
        except UnicodeDecodeError:
            continue
    raise SystemExit("could not decode")


def main():
    rows = load()
    print(f"rows: {len(rows)}")
    print(f"header-ish first row: {rows[0][:6]}\n")

    by_id = {}
    for r in rows:
        if len(r) < 5:
            continue
        try:
            pid = int(r[1])
        except ValueError:
            continue
        by_id[pid] = r

    print("=== profile IDs of interest ===")
    for pid in sorted(INTEREST):
        r = by_id.get(pid)
        if r:
            print(f"  {pid:4d}  {r[3][:56]:56}  ctor={r[4]}")
        else:
            print(f"  {pid:4d}  <absent>")

    print("\n=== Cheep Cheep family 530-547, 887 ===")
    for pid in CHEEP:
        r = by_id.get(pid)
        if r:
            print(f"  {pid:4d}  {r[2][:30]:30} | {r[3][:48]}")
        else:
            print(f"  {pid:4d}  <absent>")

    print(f"\nmax id present: {max(by_id)}   count: {len(by_id)}")

    print("\n=== first 30 by id ===")
    for pid in sorted(by_id)[:30]:
        r = by_id[pid]
        print(f"  {pid:4d}  {r[3][:60]}")

    return 0


if __name__ == "__main__":
    sys.exit(main())
