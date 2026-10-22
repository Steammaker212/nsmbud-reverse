"""REPAIR the 7 truncated `_ref` names found by verification, and check for the same defect widely.

Verification sampled 240 `_ref` names and found 7 whose token is a PREFIX of a real string rather than
a whole string:

    0x000dc040  SE_BOSS_LEMMY_ref      strings start "SE_BOSS_LEMMY_RUSH_FOOT_..."
    0x0029d4c4  SE_EMY_ref             strings start "SE_EMY_DOSSUN"
    0x005c0258  boss_koopa_ref         strings start "boss_koopa_ashiba"
    0x00607d4c  lift_zen_float_ref     strings start "lift_zen_float_9x3"
    0x0006c634  SE_VOC_KP_L_ref        strings start "SE_VOC_KP_L_STAMP"
    0x005500f4  SpeedUp_Text_ref       strings start "SpeedUp_Text_01"
    0x004f83cc  Pa_Item_ref            strings start "Pa_Item_01"

These are leftovers from an earlier batch that truncated the token. `SE_SYS_THREE` truncated from
`SE_SYS_THREE_UP` is the same defect already recorded in NAMING_LESSONS.md, so this is a recurrence
of a known failure, not a new one.

Rather than patch only the 7 that happened to be sampled, this scans EVERY `_ref` name for the same
condition -- the token being a strict prefix of at least one referenced string, with no exact match --
and repairs each by using the longest common prefix of the referenced strings, which is a real shared
token rather than a truncation.

Reports everything it changes.
"""
import collections
import re
import idautils
import ida_funcs
import ida_name
import idaapi
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000
MIN_LEN = 6
PATH_RE = re.compile(r"(\.cpp|\.c$|\.h$|\.bin|\.bffnt|/home/|\\|[A-Za-z]:/)")


def sanitize(txt):
    t = txt.strip()
    if len(t) < MIN_LEN or PATH_RE.search(t):
        return None
    if not all(32 <= ord(c) < 127 for c in t):
        return None
    t = re.sub(r"[^A-Za-z0-9_]+", "_", t).strip("_")
    if len(t) < 4 or len(t) > 40:
        return None
    if t[0].isdigit():
        t = "s_" + t
    return t


def common_prefix(strs):
    if not strs:
        return ""
    ss = sorted(strs)
    a, b = ss[0], ss[-1]
    n = 0
    while n < len(a) and n < len(b) and a[n] == b[n]:
        n += 1
    return a[:n]


fs = collections.defaultdict(set)
for s in idautils.Strings():
    try:
        ea, txt = s.ea, str(s)
        if len(txt) < MIN_LEN:
            continue
        for xr in idautils.XrefsTo(ea, 0):
            f = ida_funcs.get_func(xr.frm)
            if f:
                fs[f.start_ea - BASE].add(txt)
    except Exception:
        continue

print(f"control: sub_604F9090 -> {len(fs.get(0x4F9090, ()))} strings (expect 20)")

bad = []
for rva, strs in fs.items():
    ea = BASE + rva
    nm = ida_name.get_name(ea) or ""
    if not nm.endswith("_ref"):
        continue
    token = nm[:-4]
    sanitised = {sanitize(s) for s in strs}
    if token in sanitised:
        continue                       # exact match: fine
    # is it a truncation of something we do reference?
    prefixed = [s for s in sanitised if s and s.startswith(token) and s != token]
    if prefixed:
        bad.append((rva, nm, strs))

print(f"truncated _ref names found: {len(bad)}")
print()

fixed = 0
too_short = []
for rva, nm, strs in sorted(bad):
    ea = BASE + rva
    # Use the TRUE common prefix of the referenced strings, with any trailing separator
    # stripped so the result reads SE_EMY_KAME_HIT_ref rather than SE_EMY_KAME_HIT__ref.
    # If the shared prefix is too short to be informative, leave the name ALONE: an
    # uninformative rename is worse than the truncation it replaces.
    cp = common_prefix([s for s in (sanitize(x) for x in strs) if s]).rstrip("_")
    if len(cp) < 6:
        too_short.append((rva, nm, cp))
        continue
    new = f"{cp}_ref"
    # uniqueness
    cur_other = {}
    for x, n2 in idautils.Names():
        if n2 == new and x != ea:
            new = f"{cp}_ref_{rva:X}"
            break
    ok = ida_name.set_name(ea, new, ida_name.SN_NOWARN)
    if ok:
        idc.set_cmt(ea, f'references strings sharing the prefix "{cp}" '
                        f'(was {nm}, a truncated token)', 1)
        fixed += 1
        print(f"  {rva:#010x}  {nm:<28} -> {new}")
        print(f"        strings: {sorted(strs)[:2]}")

print()
print(f"repaired: {fixed}")
if too_short:
    print()
    print(f"LEFT ALONE (shared prefix too short to be informative): {len(too_short)}")
    for rva, nm, cp in too_short[:12]:
        print("  %#010x %s  (shared prefix '%s' is <6 chars)" % (rva, nm, cp))
idaapi.save_database("", 0)
print("saved")
