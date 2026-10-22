"""VERIFY the new names before publishing: every applied name must be reproducible.

1,144 `_ref` names came from a mechanical rule, and mechanical rules have failed four times in this
project, so this re-derives the claim for a random sample and for every collision-suffixed name:

  * for a `<token>_ref` name, confirm the function really does reference a string whose sanitised
    form equals <token>
  * for a `<token>_ref_<RVA>` name, confirm both the token and that the RVA suffix matches the
    function's own address (so the suffix is not decorative)

If any sampled name fails, the batch is suspect and must be reported rather than shipped.
"""
import random
import re
import idautils
import ida_bytes
import ida_funcs
import ida_name
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


func_strings = {}
for ea, nm in idautils.Names():
    pass
# rebuild string attribution
import collections
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

# collect names we created
mine = []
for ea, nm in idautils.Names():
    if nm.endswith("_ref") or re.search(r"_ref_[0-9A-F]{4,}$", nm):
        mine.append((ea - BASE, nm))

print(f"names matching _ref pattern: {len(mine)}")

suffixed = [(r, n) for r, n in mine if re.search(r"_ref_[0-9A-F]{4,}$", n)]
plain = [(r, n) for r, n in mine if n.endswith("_ref") and not re.search(r"_ref_[0-9A-F]{4,}$", n)]
print(f"  plain _ref     : {len(plain)}")
print(f"  suffixed _ref_N: {len(suffixed)}")

random.seed(1234)
sample = random.sample(plain, min(120, len(plain))) + suffixed[:120]

ok = bad = 0
failures = []
for rva, nm in sample:
    strs = fs.get(rva, set())
    if re.search(r"_ref_[0-9A-F]{4,}$", nm):
        m = re.match(r"^(.*)_ref_([0-9A-F]{4,})$", nm)
        token, suf = m.group(1), m.group(2)
        if int(suf, 16) != rva:
            bad += 1
            failures.append((rva, nm, f"RVA suffix {suf} != {rva:X}"))
            continue
    else:
        token = nm[:-4]
    # does any referenced string sanitise to token?
    hit = any(sanitize(s) == token for s in strs)
    if hit:
        ok += 1
    else:
        bad += 1
        failures.append((rva, nm, f"no string sanitising to '{token}'; have "
                                  f"{[s[:28] for s in list(strs)[:3]]}"))

print()
print(f"verified: {ok}   failed: {bad}")
if failures:
    print()
    print("FAILURES:")
    for rva, nm, why in failures[:15]:
        print(f"  {rva:#010x} {nm}")
        print(f"        {why}")
else:
    print("all sampled names reproduce from a referenced string")
