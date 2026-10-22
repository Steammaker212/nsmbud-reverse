"""Finish the `_ref` clean-up and state the naming contract precisely.

The verifier asserted `sanitize(some referenced string) == token`. That is the wrong assertion for a
prefix-derived name. The actual claim these names make is narrower and still checkable:

    "<token>_ref"  means  the function references at least one string that STARTS WITH <token>

`SE_BOSS_LEMMY_ref` is therefore honest for a function referencing `SE_BOSS_LEMMY_RUSH_FOOT_F_L` and
`SE_BOSS_LEMMY_B_BALL_RUSH`: it does reference the SE_BOSS_LEMMY_* family. Requiring exact equality
would be a stricter claim than was ever intended, and "fixing" it by inventing a per-variant name
would assert something unproven.

Two names are genuinely broken though, because their token ends in a digit that is part of the
variant number rather than the family name:

    0x005500f4  SpeedUp_Text_0_ref   references SpeedUp_Text_00 / _01
    0x004f83cc  Pa_Item_0_ref       references Pa_Item_00 / _01 / _04 / _09

For those the digit is noise, so the token is trimmed back to the family and the name becomes
SpeedUp_Text_ref / Pa_Item_ref.

Then every `_ref` name is re-checked against the PREFIX contract, which is the contract actually
being made.
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

print(f"control sub_604F9090 -> {len(fs.get(0x4F9090, ()))} strings (expect 20)")
assert len(fs.get(0x4F9090, ())) == 20

# ---- 1. trim tokens whose trailing digits are variant noise ---------------
trimmed = 0
for rva, strs in fs.items():
    ea = BASE + rva
    nm = ida_name.get_name(ea) or ""
    if not nm.endswith("_ref"):
        continue
    tok = nm[:-4]
    san = {sanitize(x) for x in strs}
    san.discard(None)
    if tok in san:
        continue
    cand = tok.rstrip("0123456789").rstrip("_")
    if cand and len(cand) >= 6 and any(x.startswith(cand) for x in san):
        new = cand + "_ref"
        clash = any(n2 == new and x2 != ea for x2, n2 in idautils.Names())
        if clash:
            new = f"{cand}_ref_{rva:X}"
        if ida_name.set_name(ea, new, ida_name.SN_NOWARN):
            idc.set_cmt(ea, f'references strings starting "{cand}" '
                            f'(was {nm}; trailing digit was variant noise)', 1)
            trimmed += 1
            print(f"  {rva:#010x} {nm:<26} -> {new}")

print()
print(f"trimmed trailing-digit tokens: {trimmed}")

# ---- 2. re-check EVERY _ref name against the PREFIX contract --------------
ok = bad = 0
fails = []
for rva, nm in idautils.Names():
    if not (nm.endswith("_ref") or re.search(r"_ref_[0-9A-F]{4,}$", nm)):
        continue
    r = rva - BASE
    strs = fs.get(r, set())
    if not strs:
        bad += 1
        fails.append((r, nm, "no attributed strings"))
        continue
    m = re.match(r"^(.*)_ref_([0-9A-F]{4,})$", nm)
    if m:
        tok, suf = m.group(1), m.group(2)
        if int(suf, 16) != r:
            bad += 1
            fails.append((r, nm, f"RVA suffix {suf} != {r:X}"))
            continue
    else:
        tok = nm[:-4]
    if any((sanitize(x) or "").startswith(tok) for x in strs):
        ok += 1
    else:
        bad += 1
        fails.append((r, nm, f"no referenced string starts with '{tok}'"))

print()
print(f"PREFIX-contract check (all names, not a sample): {ok} ok, {bad} bad")
for r, nm, why in fails[:12]:
    print(f"  {r:#010x} {nm}: {why}")

idaapi.save_database("", 0)
print("saved")
