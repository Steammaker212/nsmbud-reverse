#!/usr/bin/env python3
"""Decode ARM immediates near the Deluxe pukupuku registration sites.

Looking for the profile-ID constant (Wii U: 530 = 0x212). In ARM, small
constants appear via MOV R,#imm or via a literal pool. We scan a window of
instruction words and report any MOV/MOVW/VORR that can produce 0x212.
"""
import json

from rpc import call

OUT = r"deluxe_profiles2.txt"

SITES = {
    "pukupuku_C_0x6001A064": 0x6001A064,
    "toge_C_0x6001EBA4": 0x6001EBA4,
    "mecha_0x60370EFC": 0x60370EFC,
    "pukupuku_A_0x600192E8": 0x600192E8,
    "toge_A_0x6001DD10": 0x6001DD10,
}


def rdw(a):
    try:
        v = call("data_read_dword", {"address": hex(a)}, 20)
        return v if isinstance(v, int) else int(str(v), 0)
    except Exception:
        return None


def describe(addr, w):
    """Crude but adequate ARM32 decode for constants of interest."""
    if w is None:
        return None
    # MOV Rd, #imm  (0xE3A0xxxx, rotate form)
    if (w & 0x0FE00000) == 0x03A00000:
        rd = (w >> 12) & 0xF
        imm8 = w & 0xFF
        rot = ((w >> 8) & 0xF) * 2
        val = ((imm8 >> rot) | (imm8 << (32 - rot))) & 0xFFFFFFFF if rot else imm8
        return f"MOV R{rd}, #0x{val:X} ({val})"
    # MOVW Rd, #imm16 == 0xE3000000 | ...
    if (w & 0x0FF00000) == 0x03000000:
        rd = (w >> 12) & 0xF
        imm = ((w >> 4) & 0xF000) | (w & 0xFFF)
        return f"MOVW R{rd}, #0x{imm:X} ({imm})"
    if (w & 0x0FF00000) == 0x03400000:
        rd = (w >> 12) & 0xF
        imm = ((w >> 4) & 0xF000) | (w & 0xFFF)
        return f"MOVT R{rd}, #0x{imm:X}"
    # LDR Rd, [pc, #imm]
    if (w & 0x0F7F0000) == 0x051F0000:
        rd = (w >> 12) & 0xF
        imm = w & 0xFFF
        lit = addr + 8 + imm
        val = rdw(lit)
        return f"LDR R{rd}, [pc] -> lit {hex(lit)} = {val if val is None else hex(val)}"
    return f"0x{w:08X}"


with open(OUT, "w", encoding="utf-8") as f:
    for label, site in SITES.items():
        f.write(f"\n{'=' * 70}\n{label}\n{'=' * 70}\n")
        for off in range(-0x20, 0x60, 4):
            a = site + off
            w = rdw(a)
            d = describe(a, w)
            f.write(f"{hex(a)}  {d}\n")

print(f"wrote {OUT}")
