"""READ the player functions that branch on power-up mode most often.

Two functions currently carry worthless string-derived names but are clearly core player logic:

    0x007ACE00   1,796 b  "SE_PLY_ref_6"   8 reads of [.,#0x528]
    0x007AB744   1,048 b  "SE_PLY_ref_5"   5 reads of [.,#0x528]

A function that reads the power-up mode repeatedly is deciding behaviour per power-up. That is
exactly what a fire-shoot handler has to do. Reading them will show whether the FireFlower branch
exists, what it calls, and what it gates on.

This dumps both bodies and their complete call sets, so the fire path can be followed concretely
instead of inferred.
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

TARGETS = [
    (0x007ACE00, "SE_PLY_ref_6", 130),
    (0x007AB744, "SE_PLY_ref_5", 90),
]


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


def strings_in(f):
    out = set()
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
                    out.add(s)
    return out


for rva, label, limit in TARGETS:
    ea = BASE + rva
    f = ida_funcs.get_func(ea)
    print("=" * 94)
    print(f"{label}   {rva:#010x}   {f.end_ea - f.start_ea:#x} bytes")
    print("=" * 94)
    ss = strings_in(f)
    print(f"  strings ({len(ss)}): {sorted(ss)[:12]}")
    calls = []
    for insn in idautils.Heads(f.start_ea, f.end_ea):
        if idc.print_insn_mnem(insn) in ("BL", "BLX"):
            t = idc.get_operand_value(insn, 0)
            if BASE <= t < BASE + NSO:
                nm = ida_name.get_name(t) or ""
                if nm:
                    calls.append(nm)
    print(f"  calls ({len(set(calls))} distinct):")
    for n, k in collections.Counter(calls).most_common(20):
        print(f"      {n}  x{k}")
    try:
        cf = ida_hexrays.decompile(ea)
        if cf:
            lines = str(cf).splitlines()
            print(f"  pseudocode ({len(lines)} lines):")
            for ln in lines[:limit]:
                print("  " + ln)
            if len(lines) > limit:
                print(f"  ... {len(lines)-limit} more")
        else:
            print("  declined")
    except Exception as e:
        print(f"  error {e}")
    print()
