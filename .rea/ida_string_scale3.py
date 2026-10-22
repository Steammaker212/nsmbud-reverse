"""REVERT the batch exactly, then rename using the LONGEST COMMON STRING PREFIX.

Two things had to be fixed.

1) The revert must reproduce the original naming logic bit for bit, otherwise it identifies
   nothing -- which is what happened on the first attempt (it matched 0 of 2,453).

2) The naming rule itself was wrong, not merely unlucky. The audit showed:

     0x7b5c  named ActorUnitHeap, body creates "PlayerUnitHeap"
     0x21b50 named SE_SYS_THREE from "SE_SYS_THREE_UP"        (truncated)
     0x33d4c named SE_OBJ_BOSS  from "SE_OBJ_BOSS_KK_THUNDER_R" (truncated)
     0x0a44  named SE_EMY_KAME, body is a 9-entry sound-table initialiser

   The structural flaw: a function containing a string is not necessarily "the thing named
   by that string". Sound-table initialisers hold dozens of SE_ literals, so picking the
   highest-scoring one is arbitrary, and truncating a prefix invents a different string.

New rule, which is true by construction: take the longest common underscore-token prefix of
ALL usable strings the function references, and name it `<PREFIX>_ref`. For a function
referencing SE_EMY_KAME_HIT_1..7 that yields `SE_EMY_KAME_HIT_ref`, which states exactly what
is known -- this function references that string family -- and asserts nothing more.
"""
import json
import os
import re
from collections import Counter, defaultdict

import idautils
import ida_funcs
import ida_name
import idc
import ida_auto
import idaapi

idc.auto_wait()
BASE = 0x60000000
REA = r"C:\Users\Saif Khan\Downloads\main.idb\.rea"
out = []


def log(s=""):
    out.append(s)


def is_default(nm):
    return (not nm) or nm.startswith("sub_") or nm.startswith("nullsub_")


func_strings = defaultdict(list)
cur = None
for line in open(os.path.join(REA, "out_func_strings.txt"), encoding="utf-8"):
    if line.startswith(" "):
        if cur is not None:
            s = line.strip()
            if s:
                func_strings[cur].append(s)
    else:
        parts = line.split()
        cur = int(parts[0], 16) if parts else None

freq = Counter()
for f, strs in func_strings.items():
    for s in set(strs):
        freq[s] += 1

# ---- EXACT reproduction of the original (v1) rules, for the revert only
ASSET1 = (".bflyt", ".bfres", ".bffnt", ".bars", ".bfsar", ".bfstm", ".bfatm",
          ".bntx", ".byml", ".kcl", ".bch", ".sarc", ".pack", ".txt", ".xml")
BAD_WORDS = {
    "null", "true", "false", "yes", "no", "none", "NULL", "None", "True", "False",
    "%s", "%d", "%02d", "%03d", "%04d", "%s%s", "%d%c", " ", "", "utf-8", "UTF-8",
}


def usable_v1(s):
    if not s or len(s) < 4 or len(s) > 60:
        return False
    if s in BAD_WORDS:
        return False
    if s.lower().endswith(ASSET1):
        return False
    if not re.fullmatch(r"[A-Za-z_][A-Za-z0-9_]*", s):
        return False
    if freq.get(s, 0) > 3:
        return False
    return True


def make_name_v1(strs):
    good = [s for s in strs if usable_v1(s)]
    if not good:
        return None
    scored = []
    for s in good:
        score = 0
        if s.count("_") >= 2:
            score += 3
        if s.isupper() and "_" in s:
            score += 2
        if len(s) >= 10:
            score += 1
        scored.append((score, -len(s), s))
    scored.sort(reverse=True)
    best = scored[0][2]
    parts = best.split("_")
    if len(parts) >= 3:
        prefix = "_".join(parts[:2])
        group = [s for s in good if s.startswith(prefix + "_")]
        tail = parts[2]
        name = f"{prefix}_{tail}" if len(group) >= 2 else best
    else:
        name = best
    name = re.sub(r"[^A-Za-z0-9_]", "_", name)
    name = re.sub(r"_+", "_", name).strip("_")
    return name if len(name) >= 4 else None


# ---- 1) exact revert
log("=" * 96)
log("REVERT the string-derived batch (exact match on the original rule)")
log("=" * 96)
reverted = 0
for f, strs in func_strings.items():
    ea = BASE + f
    cur = ida_name.get_name(ea) or ""
    if is_default(cur):
        continue
    old = make_name_v1(strs)
    if not old:
        continue
    if cur == old or re.fullmatch(re.escape(old) + r"_\d+", cur):
        if ida_name.set_name(ea, f"sub_{ea:08X}", ida_name.SN_NOWARN):
            reverted += 1
log(f"  reverted {reverted}")
log(f"  (functions with strings: {len(func_strings):,}; "
    f"still unnamed: {sum(1 for f in func_strings if is_default(ida_name.get_name(BASE + f) or '')):,})")

# ---- 2) longest-common-prefix naming
log()
log("=" * 96)
log("NAME with <longest common token prefix>_ref")
log("=" * 96)


def common_prefix(strs):
    toks = [s.split("_") for s in strs]
    if not toks:
        return None
    first = toks[0]
    n = 0
    for i in range(len(first)):
        if all(len(t) > i and t[i] == first[i] for t in toks):
            n = i + 1
        else:
            break
    if n == 0:
        return None
    return "_".join(first[:n])


applied = 0
too_short = 0
for f, strs in sorted(func_strings.items()):
    ea = BASE + f
    if not is_default(ida_name.get_name(ea) or ""):
        continue
    fo = ida_funcs.get_func(ea)
    if not fo or fo.start_ea != ea:
        continue
    good = sorted({s for s in strs if usable_v1(s)})
    if not good:
        continue
    pre = common_prefix(good)
    if not pre or len(pre) < 4 or pre.count("_") < 1:
        too_short += 1
        continue
    nm = f"{pre}_ref"
    nm = re.sub(r"_+", "_", nm).strip("_")
    if len(nm) > 78:
        too_short += 1
        continue
    name = nm
    n = 2
    while idc.get_name_ea_simple(name) not in (idc.BADADDR, ea):
        name = f"{nm}_{n}"
        n += 1
        if n > 40:
            break
    if ida_name.set_name(ea, name, ida_name.SN_NOWARN):
        applied += 1
        if applied <= 40:
            log(f"  {f:#010x}  {name:<44} <- {len(good)} string(s)")

log()
log(f"  applied {applied}   skipped (no usable prefix) {too_short}")

REGIONS = [
    (0x000000, 0x0F0000, "core"), (0x0F0000, 0x200000, "actor_construction"),
    (0x200000, 0x300000, "actors_a"), (0x300000, 0x450000, "actors_b"),
    (0x450000, 0x480000, "powerup"), (0x480000, 0x600000, "systems"),
    (0x600000, 0x780000, "states"), (0x780000, 0x7C0000, "player"),
    (0x7C0000, 0x800000, "player_states"), (0x800000, 0x9A0000, "libs"),
]
stats = {}
for ea in idautils.Functions():
    rva = ea - BASE
    for lo, hi, n in REGIONS:
        if lo <= rva < hi:
            d = stats.setdefault(n, [0, 0])
            d[1] += 1
            if not is_default(ida_name.get_name(ea) or ""):
                d[0] += 1
            break
log()
log("COVERAGE")
tn = tt = 0
for lo, hi, n in REGIONS:
    a, b = stats.get(n, [0, 0])
    tn += a
    tt += b
    log(f"  {n:<22}{a:>8,}{b:>9,}{100.0 * a / b if b else 0:>6.1f}%")
log(f"  {'TOTAL':<22}{tn:>8,}{tt:>9,}{100.0 * tn / tt:>6.1f}%")

idaapi.save_database("", 0)
txt = "\n".join(out)
print(txt)
open(os.path.join(REA, "out_strscale3.txt"), "w", encoding="utf-8").write(txt)
