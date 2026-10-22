"""WHO CALLS Player_setPowerupMode? That answers the Fire Flower question.

Player_setPowerupMode (0x795CDC) saves the old mode to +0x2C78, writes the new mode to +0x528,
and re-applies the height table. It is the general transition. So the fire-flower pickup must
reach it somehow -- directly, or via an intermediate.

This walks the call graph upward from the setter, at each level reporting:
  * whether the caller references an item id (a small immediate being moved into r1, which is
    the `a2` mode parameter)
  * any item / power-up strings it references

A caller that passes a constant 1 to this function is the Fire Flower grant. A caller that
passes a table lookup is the generic path.
"""
import collections
import idautils
import ida_funcs
import ida_name
import ida_bytes
import ida_hexrays
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000
SETTER = 0x00795CDC

out = []


def log(s=""):
    out.append(s)


def cstr(ea, maxlen=64):
    b = []
    for i in range(maxlen):
        c = ida_bytes.get_byte(ea + i)
        if c == 0:
            break
        b.append(chr(c) if 32 <= c < 127 else "?")
    s = "".join(b)
    return s if s.isprintable() and len(s) >= 3 else None


def strings_in(f):
    found = set()
    for insn in idautils.Heads(f.start_ea, f.end_ea):
        if idc.print_insn_mnem(insn) not in ("LDR", "ADD", "MOV"):
            continue
        if "=" not in idc.print_operand(insn, 1):
            continue
        disp = idc.get_operand_value(insn, 1)
        if not disp or not (BASE <= disp < BASE + 0xCD1000):
            continue
        w = ida_bytes.get_dword(disp)
        for cand in (w, w + BASE):
            if BASE <= cand < BASE + 0xCD1000:
                s = cstr(cand)
                if s:
                    found.add(s)
    return found


# BFS upward, bounded
seen = set()
level = {SETTER}
depth = 0
log("=" * 96)
log(f"CALL GRAPH ABOVE Player_setPowerupMode ({SETTER:#x})")
log("=" * 96)

while level and depth < 4:
    nxt = set()
    for target in sorted(level):
        if target in seen:
            continue
        seen.add(target)
        callers = []
        xb = ida_xref.xrefblk_t() if False else None
        import ida_xref
        xb = ida_xref.xrefblk_t()
        ok = xb.first_to(BASE + target, ida_xref.XREF_ALL)
        while ok:
            if ida_funcs.get_func(xb.frm):
                callers.append(xb.frm)
            ok = xb.next_to()
        callers = sorted(set(callers))
        if not callers:
            continue
        log()
        log(f"  target {target:#010x} {ida_name.get_name(BASE + target)}  "
            f"({len(callers)} caller(s), depth {depth})")
        for c in callers:
            f = ida_funcs.get_func(c)
            if not f:
                continue
            rva = f.start_ea - BASE
            nm = ida_name.get_name(f.start_ea) or ""
            strs = strings_in(f)
            interesting = sorted(
                s for s in strs
                if any(k in s.lower() for k in
                       ("kinoko", "flower", "item", "power", "mushroom", "star",
                        "penguin", "propeller", "hammer", "ice"))
            )
            log(f"    <- {rva:#010x}  {nm}")
            if interesting:
                log(f"         strings: {interesting[:8]}")
            nxt.add(rva)
    level = nxt
    depth += 1

txt = "\n".join(out)
print(txt)
open(r"C:\Users\Saif Khan\Downloads\main.idb\.rea\out_setter_callers.txt", "w",
     encoding="utf-8").write(txt)
