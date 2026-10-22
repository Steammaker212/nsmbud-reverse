#!/usr/bin/env python3
"""Verify the codedx-derived name corrections against our IDB."""
from rpc import call

CHECKS = [
    (0x60000BEC, "directionToPlayerH", "IDB calls it directionToPlayerX (wrong axis)"),
    (0x60000C88, "directionToPlayerV", "IDB calls it directionToPlayerY (wrong axis)"),
    (0x60002F4C, "beforeDraw",         "IDB has typo befreDraw"),
    (0x60000850, "beforeDraw",         "IDB has typo befreDraw"),
    (0x602A9358, "Enemy::freeze",      "IDB calls it _ZN5Enemy4vfD0Ev"),
]

for va, want, note in CHECKS:
    r = call("get_function_by_address", {"address": hex(va)}, 20)
    got = r.get("name")
    size = r.get("size")
    print(f"{va:#010x}  size={size:>6}")
    print(f"    codedx says : {want}")
    print(f"    our IDB has : {got}")
    print(f"    note        : {note}")
    print()
