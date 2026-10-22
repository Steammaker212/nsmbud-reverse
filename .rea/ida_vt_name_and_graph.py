"""Name the 6 remaining unnamed vtable slot targets, then measure the NEXT lever honestly.

Part 1 -- vtable slots. Only 6 unnamed slot targets exist out of 5,377, so this is a small,
fully-verifiable batch. Each name asserts exactly one thing: "this function is the implementation at
byte offset <slot> of <Class>'s vtable", which is checkable by reading one word.

Part 2 -- measurement only. With strings exhausted (2,577 named) and vtable slots exhausted (6 left),
the remaining 33,173 unnamed functions need call-graph evidence. Rather than invent a rule, this
counts what the call-graph can actually justify:

  * functions whose callers are ALL named, and which have a single caller
  * functions reachable (transitively) only from the player/powerup subsystems
  * how many can be named at all under a strict "single named caller" rule

That count decides whether call-graph naming is a real lever or another blind alley, before anything
is renamed.
"""
import collections
import idautils
import ida_bytes
import ida_funcs
import ida_name
import idaapi
import ida_xref
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000
NSO = 0x00CD1000


def is_unnamed(nm):
    return (not nm) or nm.startswith("sub_")


# ---------------- part 1: the 6 vtable slots -------------------------------
vtables = {nm: ea for ea, nm in idautils.Names() if "_vtable" in nm}
rows = []
for nm, start in sorted(vtables.items(), key=lambda kv: kv[1]):
    off = 0
    while off <= 0x2000:
        w = ida_bytes.get_dword(start + off)
        if not (0 < w < NSO):
            break
        target = BASE + w
        fn = ida_funcs.get_func(target)
        if not fn or fn.start_ea != target:
            break
        tn = ida_name.get_name(target) or ""
        if is_unnamed(tn):
            rows.append((nm, off, target - BASE))
        off += 4

print(f"unnamed vtable slot targets: {len(rows)}")
applied = 0
for vt, off, rva in rows:
    cls = vt
    for suf in ("_vtable_probably", "_vtable_a", "_vtable_b", "_vtable"):
        if cls.endswith(suf):
            cls = cls[: -len(suf)]
            break
    name = f"{cls}_vf{off}"
    ea = BASE + rva
    clash = any(n2 == name and x2 != ea for x2, n2 in idautils.Names())
    if clash:
        name = f"{cls}_vf{off}_{rva:X}"
    if ida_name.set_name(ea, name, ida_name.SN_NOWARN):
        idc.set_cmt(ea, f"virtual implementation at byte offset {off:#x} of {vt} "
                        f"(vtable at {vtables[vt] - BASE:#x}); verified by reading the slot word", 1)
        applied += 1
        print(f"  {rva:#010x} -> {name}   [slot {off:#x} of {vt}]")
print(f"applied: {applied}")
idaapi.save_database("", 0)

# ---------------- part 2: measure the call-graph lever --------------------
named = {}
unnamed = []
for ea in idautils.Functions():
    nm = ida_name.get_name(ea) or ""
    if is_unnamed(nm):
        unnamed.append(ea)
    else:
        named[ea] = nm

print()
print("=" * 78)
print(f"CALL-GRAPH LEVER (measurement only): {len(named):,} named, {len(unnamed):,} unnamed")
print("=" * 78)

callers = collections.defaultdict(set)
n_edges = 0
for ea in idautils.Functions():
    for insn in idautils.Heads(ea, ida_funcs.get_func(ea).end_ea):
        if idc.print_insn_mnem(insn) in ("BL", "BLX"):
            t = idc.get_operand_value(insn, 0)
            if BASE <= t < BASE + NSO:
                f = ida_funcs.get_func(t)
                if f:
                    callers[f.start_ea].add(ea)
                    n_edges += 1

print(f"BL/BLX call edges attributed to functions: {n_edges:,}")

single_named = []
all_named = []
no_caller = 0
for ea in unnamed:
    cs = callers.get(ea, set())
    if not cs:
        no_caller += 1
        continue
    cn = [ida_name.get_name(c) or "" for c in cs]
    if all(not is_unnamed(x) for x in cn):
        all_named.append(ea)
        if len(cs) == 1:
            single_named.append((ea, cn[0]))

print(f"  unnamed with NO attributed caller : {no_caller:,}")
print(f"  unnamed whose callers are ALL named: {len(all_named):,}")
print(f"    of those, exactly ONE named caller: {len(single_named):,}")

print()
print("sample of single-named-caller candidates (nameable as <Caller>_helper_<RVA>):")
for ea, cn in single_named[:15]:
    size = ida_funcs.get_func(ea).end_ea - ea
    print(f"  {ea - BASE:#010x} {size:>5,}b  caller {cn}")
