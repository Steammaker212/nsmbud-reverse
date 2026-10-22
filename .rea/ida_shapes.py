"""CLASSIFY function kinds at scale, so big batches can be named from structure, not guessing.

Three shapes are common and each is decisive on its own evidence:

  1. STATIC TABLE INITIALISER
     Body is a long run of `MEMORY[<global + k>] = <constant or string pointer>` with no branches
     and no calls. Naming these `<Global>_init` is true if we can name the global; otherwise
     `<Region>_tableInit_<addr>` is true but useless, so we prefer to skip.

  2. NVN / SDK RESOLVER
     Body is `MEMORY[<global>] = callback(handle, "nvn...")` or similar lookup strings.

  3. THUNK
     Body is a single `B <target>` -- a tail call. These can be named `<Target>_thunk`, which is
     completely true and hugely improves readability of the corpus, since a reader following a
     call lands somewhere sensibly named.

This run counts how many functions fall in each class, and reports the thunk class in detail
because it is the largest and safest win. Thunks are ALSO the reason simple function counts
overstate the work: they are tiny but numerous.
"""
import collections
import idautils
import ida_funcs
import ida_name
import ida_bytes
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000
NSO = 0x00CD1000

thunks = []          # (rva, target_rva, target_named)
table_inits = []     # (rva, size, ng_stores)
nvn = []

for ea in idautils.Functions():
    f = ida_funcs.get_func(ea)
    if not f:
        continue
    size = f.end_ea - f.start_ea
    nm = ida_name.get_name(ea) or ""
    if nm and not nm.startswith("sub_"):
        continue
    heads = list(idautils.Heads(f.start_ea, f.end_ea))
    if not heads:
        continue

    # --- thunk: exactly one instruction, a tail branch
    if len(heads) == 1:
        i = heads[0]
        if idc.print_insn_mnem(i) in ("B", "BX"):
            t = idc.get_operand_value(i, 0)
            if BASE <= t < BASE + NSO:
                tn = ida_name.get_name(t) or ""
                thunks.append((ea - BASE, t - BASE, bool(tn) and not tn.startswith("sub_")))
                continue

    # --- static table init: no calls/branches, many stores to absolute addrs
    has_call = False
    has_branch = False
    stores = 0
    for i in heads:
        m = idc.print_insn_mnem(i)
        if m in ("BL", "BLX"):
            has_call = True
            break
        if m.startswith("B") and m != "BIC":
            has_branch = True
        if m in ("STR", "STRB", "STRH"):
            # store to absolute address via literal load: MOVW/MOVT then STR [Rn]
            stores += 1
    if not has_call and not has_branch and stores >= 40:
        table_inits.append((ea - BASE, size, stores))
        continue

    # --- nvn resolver: references a literal starting with "nvn"
    for i in heads:
        if "=" not in idc.print_operand(i, 1):
            continue
        disp = idc.get_operand_value(i, 1)
        if not disp or not (BASE <= disp < BASE + NSO):
            continue
        w = ida_bytes.get_dword(disp)
        for cand in (w, w + BASE):
            if BASE <= cand < BASE + NSO:
                b = []
                ok = True
                for k in range(4):
                    c = ida_bytes.get_byte(cand + k)
                    if not (32 <= c < 127):
                        ok = False
                        break
                    b.append(chr(c))
                if ok and "".join(b) == "nvn":
                    nvn.append(ea - BASE)
                break
        if ea - BASE in nvn:
            break

print("=" * 86)
print("FUNCTION SHAPE CLASSIFICATION")
print("=" * 86)
print(f"  single-instruction tail-call THUNKS : {len(thunks):,}")
print(f"    of which target is already named  : "
      f"{sum(1 for t in thunks if t[2]):,}")
print(f"  static TABLE INITIALISERS            : {len(table_inits):,}")
print(f"  NVN resolvers                        : {len(nvn):,}")

print()
print("=" * 86)
print("THUNKS whose target HAS a real name (safe to name <Target>_thunk)")
print("=" * 86)
named_target = [t for t in thunks if t[1] is not None and t[2]]
print(f"  count: {len(named_target):,}")
for rva, trva, _ in named_target[:20]:
    tgt = ida_name.get_name(BASE + trva)
    print(f"    {rva:#010x} -> {trva:#010x}  {tgt}")

print()
print("=" * 86)
print("LARGEST TABLE INITIALISERS")
print("=" * 86)
table_inits.sort(key=lambda x: -x[1])
for rva, size, st in table_inits[:12]:
    print(f"    {rva:#010x}  {size:>6,} b  {st:>5} stores")
