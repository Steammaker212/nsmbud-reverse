"""ASSISTED naming for the player / powerup / question-block / fireball subsystems.

These are the subsystems the objective names explicitly, and they are the WORST named in the
database (player 92.3% unnamed, powerup 93.9%, player_states 95.5%). Rather than run a bulk rule
over everything -- four bulk rules have already been reverted in this project -- this gathers the
EVIDENCE for each unnamed function so the name can be justified individually:

  * every string it references (with the instruction site)
  * whether it reads the player mode field [.,#0x528]
  * its vtable membership, if any
  * its callers, by name
  * its callees, by name, when they are already named

Output is a report, not a rename. Names are only applied where the evidence pins one down, and the
report records the justification next to the address so a reviewer can falsify any single one.

This is deliberately limited to functions >= 256 bytes in those regions, because a 40-byte thunk
carries no nameable evidence and a large function carries plenty.
"""
import collections
import idautils
import ida_bytes
import ida_funcs
import ida_name
import ida_xref
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000
NSO = 0x00CD1000

FOCUS = [(0x450000, 0x480000, "powerup"),
         (0x780000, 0x7C0000, "player"),
         (0x7C0000, 0x800000, "player_states")]

MIN_SIZE = 0x100


def cstr(ea, maxlen=72):
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
    return "".join(b) if len(b) >= 4 else None


def strings_of(f):
    out = []
    for insn in idautils.Heads(f.start_ea, f.end_ea):
        if not insn:
            continue
        op = idc.get_operand_value(insn, 1)
        if not op or not (BASE <= op < BASE + NSO):
            continue
        w = ida_bytes.get_dword(op)
        for cand in (w, w + BASE):
            if BASE <= cand < BASE + NSO:
                s = cstr(cand)
                if s:
                    out.append((insn - BASE, s))
                    break
    return out


def reads_mode(f):
    for insn in idautils.Heads(f.start_ea, f.end_ea):
        if "#0x528]" in idc.GetDisasm(insn):
            return True
    return False


def named_callees(f, limit=8):
    out = []
    for insn in idautils.Heads(f.start_ea, f.end_ea):
        m = idc.print_insn_mnem(insn)
        if m in ("BL", "BLX"):
            t = idc.get_operand_value(insn, 0)
            if BASE <= t < BASE + NSO:
                nm = ida_name.get_name(t) or ""
                if nm and not nm.startswith("sub_"):
                    out.append(nm)
    return out[:limit]


def named_callers(ea, limit=4):
    out = []
    xb = ida_xref.xrefblk_t()
    if xb.first_to(ea, ida_xref.XREF_ALL):
        n = 0
        while n < limit:
            f = ida_funcs.get_func(xb.frm)
            if f:
                nm = ida_name.get_name(f.start_ea) or ""
                if nm and not nm.startswith("sub_"):
                    out.append(nm)
            n += 1
            if not xb.next_to():
                break
    return out


report = []
for lo, hi, reg in FOCUS:
    for ea in idautils.Functions():
        rva = ea - BASE
        if not (lo <= rva < hi):
            continue
        nm = ida_name.get_name(ea) or ""
        if nm and not nm.startswith("sub_"):
            continue
        f = ida_funcs.get_func(ea)
        if not f:
            continue
        size = f.end_ea - f.start_ea
        if size < MIN_SIZE:
            continue
        ss = strings_of(f)
        report.append({
            "rva": rva, "region": reg, "size": size,
            "strings": ss, "mode": reads_mode(f),
            "callees": named_callees(f), "callers": named_callers(ea),
        })

report.sort(key=lambda r: -r["size"])
print(f"unnamed functions >= {MIN_SIZE:#x} bytes in player/powerup/player_states: {len(report)}")
with_strings = [r for r in report if r["strings"]]
single = [r for r in report if len({s for _, s in r["strings"]}) == 1]
mode_readers = [r for r in report if r["mode"]]
print(f"  with >=1 string reference : {len(with_strings)}")
print(f"  with EXACTLY one distinct string: {len(single)}")
print(f"  read the player mode field: {len(mode_readers)}")

print()
print("=" * 96)
print("HIGH-VALUE CANDIDATES: unnamed, one distinct string, >=512 bytes")
print("=" * 96)
n = 0
for r in sorted(report, key=lambda r: -r["size"]):
    if len({s for _, s in r["strings"]}) != 1 or r["size"] < 0x200:
        continue
    n += 1
    if n > 35:
        break
    s = r["strings"][0][1]
    print(f"  {r['rva']:#010x}  {r['size']:>6,}b  {r['region']:<14} \"{s}\"")
    if r["callees"]:
        print(f"        calls   : {', '.join(r['callees'][:4])}")
    if r["callers"]:
        print(f"        called by: {', '.join(r['callers'][:3])}")
    if r["mode"]:
        print("        reads player mode field")
print()
print(f"  shown {min(n,35)} of {len([r for r in report if len({s for _,s in r['strings']})==1 and r['size']>=0x200])}")
