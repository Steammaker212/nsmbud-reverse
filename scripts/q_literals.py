#!/usr/bin/env python3
"""Resolve the ARM PC-relative literal loads that reference pukupuku names.

Each xref site is an instruction like:
    e59f1d74   ldr r1, [pc, #0xd74]      (or ldr r0/r2/r3, ...)
    e08f1001   add r1, pc, r1            (R_ARM_RELATIVE-style fixup)

The literal is stored at (insn_va + 8 + imm12) and holds an unrebased RVA.
We compute that, then read the descriptor the caller builds around it.
"""
import json

from rpc import call


def rdw(a):
    try:
        return call("data_read_dword", {"address": hex(a)}, 30)
    except Exception as e:
        return None


def decode_ldr(insn_va, word):
    """Return the literal address for an ARM LDR (literal) encoding."""
    # 1110 0101 1001 Rn 1111 imm12  => ldr Rt,[pc,#imm12]
    if (word & 0x0F7F0000) == 0x051F0000:
        imm = word & 0xFFF
        rt = (word >> 12) & 0xF
        return insn_va + 8 + imm, rt
    return None, None


SITES = [
    ("sInit_ProfileArchiveLists", 0x600192E8),
    ("sInit_ProfileArchiveLists", 0x600192F4),
    ("sInit_ProfileArchiveLists", 0x6001A064),
    ("sub_60203138", 0x60203158),
    ("sub_60203138", 0x60203164),
    ("(none)", 0x6020324C),
    ("sub_60370B74", 0x60370EFC),
    ("sub_60370B74", 0x60370F04),
]

if __name__ == "__main__":
    for fn, va in SITES:
        w = rdw(va)
        if w is None:
            print(f"{hex(va)}  <unreadable>")
            continue
        lit, rt = decode_ldr(va, w)
        if lit is None:
            print(f"{hex(va)}  {hex(w)}  <not a literal LDR>")
            continue
        val = rdw(lit)
        print(f"{hex(va)}  {hex(w)}  ldr r{rt},[pc] -> lit {hex(lit)}"
              f"  value={val if val is None else hex(val)}  fn={fn}")
