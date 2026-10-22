"""ANALYSE the six largest unnamed functions in bulk.

Sizes from the size-weighted report. For each: strings referenced, named calls, and the
pseudocode head. Enough to identify the subsystem and often the purpose, without decompiling
27 KB of output into the conversation.

Priority order:
  0x77BFAC  25,752 b  states   -- writes Player+0x528, so it is power-up related
  0x969DE4  27,044 b  libs     -- biggest in the image
  0x1873D0  22,464 b  actor_construction
  0x836678  16,152 b  libs
  0x1DBB64  15,284 b  actor_construction
  0x712498  14,620 b  states
"""
import idautils
import ida_funcs
import ida_name
import ida_bytes
import ida_hexrays
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000
NSO = 0x00CD1000

TARGETS = [
    0x0077BFAC, 0x00969DE4, 0x001873D0,
    0x00836678, 0x001DBB64, 0x00712498,
]


def cstr(ea, maxlen=90):
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


for rva in TARGETS:
    ea = BASE + rva
    f = ida_funcs.get_func(ea)
    if not f:
        print(f"{rva:#x}: no func")
        continue
    print("=" * 96)
    print(f"{rva:#010x}   {f.end_ea - f.start_ea:,} bytes   {ida_name.get_name(ea)}")
    print("=" * 96)

    strs = strings_in(f)
    print(f"  strings ({len(strs)}):")
    for s in sorted(strs)[:18]:
        print(f"    {s}")

    calls = []
    for insn in idautils.Heads(f.start_ea, f.end_ea):
        if idc.print_insn_mnem(insn) in ("BL", "BLX"):
            t = idc.get_operand_value(insn, 0)
            if BASE <= t < BASE + NSO:
                nm = ida_name.get_name(t) or ""
                if nm and not nm.startswith("sub_"):
                    calls.append(nm)
    if calls:
        import collections
        print(f"  named calls ({len(set(calls))} distinct):")
        for n, k in collections.Counter(calls).most_common(20):
            print(f"    {n}  x{k}")

    try:
        cf = ida_hexrays.decompile(ea)
        if cf:
            lines = str(cf).splitlines()
            print(f"  pseudocode ({len(lines)} lines) head 26:")
            for ln in lines[:26]:
                print("    " + ln)
        else:
            print("  declined")
    except Exception as e:
        print(f"  error {e}")
    print()
