"""READ sub_604F9090 and sub_6052F1C4: the two functions holding the P_FireFlower_00/01 strings.

These are the only code that references the Fire Flower's player animations, so they are how the
Fire Flower gets its pose. If the Fire Flower animates as a mushroom, the fault is plausibly here:
the animation set being selected may be the mushroom's.

Both were located by IDA xrefs:
    "P_FireFlower_00" (0xACDE20) referenced from 0x4F90E8, 0x4F90F0 in sub_604F9090
                                   and 0x52F21C, 0x52F224 in sub_6052F1C4
    "P_FireFlower_01" (0xACDEB0) referenced from 0x4F9188, 0x4F9190 in sub_604F9090
                                   and 0x52F2CC, 0x52F2D4 in sub_6052F1C4

This dumps both bodies plus every other animation-name string they reference, so the Fire Flower
set can be compared against the neighbouring sets (e.g. is there a Kinoko set right beside it?).
"""
import collections
import idautils
import ida_bytes
import ida_funcs
import ida_name
import ida_hexrays
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000
NSO = 0x00CD1000

TARGETS = [(0x004F9090, "sub_604F9090"), (0x0052F1C4, "sub_6052F1C4")]


def cstr(ea, maxlen=64):
    b = []
    for i in range(maxlen):
        try:
            c = ida_bytes.get_byte(ea + i)
        except Exception:
            return None
        if c == 0:
            break
        if not (32 <= c < 127):
            return None
        b.append(chr(c))
    return "".join(b) if len(b) >= 3 else None


def all_strings(f):
    out = []
    for insn in idautils.Heads(f.start_ea, f.end_ea):
        if "=" not in idc.print_operand(insn, 1):
            continue
        disp = idc.get_operand_value(insn, 1)
        if not disp or not (BASE <= disp < BASE + NSO):
            continue
        w = ida_bytes.get_dword(disp)
        for cand in (w, w + BASE):
            if BASE <= cand < BASE + NSO:
                s = cstr(cand)
                if s:
                    out.append((insn - BASE, s))
    return out


for rva, label in TARGETS:
    ea = BASE + rva
    f = ida_funcs.get_func(ea)
    print("=" * 94)
    print(f"{label}  {rva:#010x}  {(f.end_ea - f.start_ea) if f else 0:#x} bytes")
    print("=" * 94)
    if not f:
        print("  no func")
        continue
    ss = all_strings(f)
    print(f"  strings referenced ({len(ss)}):")
    for site, s in ss[:40]:
        print(f"    {site:#010x}  \"{s}\"")
    print()
    try:
        cf = ida_hexrays.decompile(ea)
        if cf:
            lines = str(cf).splitlines()
            print(f"  pseudocode {len(lines)} lines, first 70:")
            for ln in lines[:70]:
                print("  " + ln)
            if len(lines) > 70:
                print(f"  ... {len(lines)-70} more")
        else:
            print("  declined")
    except Exception as e:
        print(f"  error {e}")
    print()
