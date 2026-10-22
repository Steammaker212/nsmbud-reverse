#!/usr/bin/env python3
"""Confirm RVA convention: .hks address == VA - 0x60000000.

Cross-checks codedx .hks addresses (which are known-good for this exact game
build) against our own function inventory.
"""
import json
import re

IDB = 0x60000000
FUNCS = r"C:\Users\Saif Khan\Downloads\main.idb\.rea\functions_all.json"
CODEX = r"C:\Users\Saif Khan\Downloads\main.idb\.rea\codedx\src"

d = json.load(open(FUNCS, encoding="utf-8"))
by_va = {}
for r in d["data"]:
    by_va[int(r["address"], 16)] = r["name"]

# codedx hook addresses + the func they branch to, whose mangled name we know
CASES = [
    ("hooks/bobomb.hks", 0x0025CF50, "BobOmb instr site"),
    ("hooks/profiles.hks", 0x000182A0, "Profile::get"),
    ("hooks/profiles.hks", 0x00017F6C, "Profile::Profile"),
    ("hooks/profiles.hks", 0x0000919C, "loadNumProfilesR4"),
]

print("=== does VA = 0x60000000 + hks_address land on a real function? ===")
for src, rva, label in CASES:
    va = IDB + rva
    name = by_va.get(va)
    print(f"  {label:22} hks 0x{rva:08X} -> VA 0x{va:08X}  "
          f"{('FOUND ' + name) if name else 'no function starts here (mid-func OK)'}")

print("\n=== confirm Profile::get lives at VA 0x600182A0 ===")
hits = [(va, n) for va, n in by_va.items() if n == "_ZN7Profile3getEj"]
for va, n in hits:
    print(f"  {n} -> VA 0x{va:08X}  RVA 0x{va-IDB:08X}  "
          f"{'MATCHES codedx 0x182A0' if va-IDB == 0x182A0 else 'MISMATCH'}")

print("\n=== our Hammer/item patch RVAs for the .hks files ===")
PATCH_VAS = [
    (0x60C61BE4, "Profile cell 476->759"),
    (0x60BD3208, "Hammer Info#1 subtype"),
    (0x60BD3210, "Hammer Info#1 mask"),
    (0x60AF6620, "Hammer Info#2 mask"),
    (0x6013FB38, "direction"),
    (0x6013FB68, "scale denom"),
    (0x60140744, "ctor LDR"),
    (0x60140748, "ctor AND"),
    (0x6014074C, "ctor ORR"),
    (0x60140770, "ctor ORR"),
    (0x60140778, "ctor STR"),
    (0x6045DDCC, "grant mov r2,#10"),
    (0x607A2708, "canChangeTo"),
    (0x607AAA88, "setFireBallAction"),
    (0x607AA9BC, "checkSetFireBall"),
    (0x607AAbb8, "createFireBall a"),
    (0x607AAC94, "createFireBall b"),
    (0x607AAFF4, "execute cmp"),
    (0x607AB000, "execute movw"),
    (0x607AB0E4, "execute cmp"),
    (0x60B0C328, "tall type[10]"),
    (0x60465F34, "item gate cmp"),
    (0x60465F40, "item gate mask"),
    (0x60466000, "item gate cmp2"),
    (0x6046600C, "item gate mask2"),
    (0x6078E6A8, "extra gate"),
    (0x60795FF0, "redirect height A"),
    (0x607960F8, "redirect height B"),
    (0x6078C58C, "redirect body A"),
    (0x6078E604, "redirect body B"),
    (0x6078E7E8, "redirect body C"),
    (0x607982D8, "redirect balloon"),
    (0x60B493A8, "height table"),
    (0x60B493D8, "body table"),
    (0x60B49404, "balloon table"),
]
NSO_MEM = 0x00CD1000
for va, label in PATCH_VAS:
    rva = va - IDB
    flag = "" if rva < NSO_MEM else "  <<< OUTSIDE IMAGE"
    alg = "" if rva % 4 == 0 else "  <<< NOT 4-ALIGNED (instr impossible)"
    print(f"  {va:#010x}  RVA 0x{rva:08X}  {label}{flag}{alg}")
