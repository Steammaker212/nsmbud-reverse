"""NAME THE BIGGEST UNNAMED PLAYER/STATE FUNCTIONS from what they actually do.

The coverage report shows player is the worst region (11.1%) and player_states 21.7%, yet these
are the systems the objective cares about most. Two large unnamed functions there:

    0x007E55DC   7,468 bytes  player_states
    0x007E8220   7,736 bytes  player_states

and one very large one in states:

    0x0077BFAC  25,752 bytes  states   (writes +0x528: a mode writer)

This decompiles the head of each, plus their string references and call targets, and only
applies a name when the body establishes it. Anything unclear is left unnamed -- a wrong name is
worse than none.
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
    (0x0077BFAC, "states, 25,752 b, writes +0x528"),
    (0x007E55DC, "player_states, 7,468 b"),
    (0x007E8220, "player_states, 7,736 b"),
    (0x00753720, "states, 8,988 b"),
]


def cstr(ea, maxlen=80):
    b = []
    for i in range(maxlen):
        c = ida_bytes.get_byte(ea + i)
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


for rva, note in TARGETS:
    ea = BASE + rva
    f = ida_funcs.get_func(ea)
    print("=" * 94)
    print(f"{rva:#010x}  {note}   name={ida_name.get_name(ea)}")
    print("=" * 94)

    strs = strings_in(f)
    if strs:
        print("  strings:")
        for s in sorted(strs)[:14]:
            print(f"    {s}")
    else:
        print("  strings: none")

    calls = []
    for insn in idautils.Heads(f.start_ea, f.end_ea):
        if idc.print_insn_mnem(insn) in ("BL", "BLX"):
            t = idc.get_operand_value(insn, 0)
            if BASE <= t < BASE + NSO:
                nm = ida_name.get_name(t) or ""
                if nm and not nm.startswith("sub_"):
                    calls.append(nm)
    if calls:
        print("  named calls:")
        for n in sorted(set(calls))[:18]:
            print(f"    {n}")

    try:
        cf = ida_hexrays.decompile(ea)
        if cf:
            lines = str(cf).splitlines()
            print(f"  pseudocode head ({len(lines)} lines):")
            for ln in lines[:32]:
                print("    " + ln)
        else:
            print("  declined")
    except Exception as e:
        print(f"  error {e}")
    print()
