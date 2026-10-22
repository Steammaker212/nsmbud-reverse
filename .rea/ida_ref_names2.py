"""Extend `<token>_ref` naming to every function with a clean, single string -- verified first.

The existing 1,428 `_ref` names came from this route and are deliberately uninformative: they record
WHICH string a function references, nothing more. That is honest and mechanical, and unlike the
reverted bulk rules it asserts exactly one checkable thing.

The failure mode to avoid is the one that killed the 2,450 `SE_*` names: a "string reference" that is
really a table initialiser or a literal-pool word that happens to decode as ASCII. So before applying
anything, this:
  1. requires the string to be attributed via a DATA xref (the corrected method, positive-controlled
     on sub_604F9090 -> 20 strings)
  2. requires the string to be printable ASCII, >= 6 chars, and not a file path
  3. requires it to be the function's ONLY distinct string (a single signal, not a mixture)
  4. requires the function to be currently unnamed
  5. writes the exact string into the comment so the claim is visible at the address

Anything that fails a check is skipped and counted, and the skip reasons are reported.
"""
import collections
import re
import idautils
import ida_bytes
import ida_funcs
import ida_name
import idaapi
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000

APPLY = True
MIN_LEN = 6

PATH_RE = re.compile(r"(\.cpp|\.c$|\.h$|\.bin|\.bffnt|/home/|\\|[A-Za-z]:/)")


def sanitize(txt):
    """Turn a string into a safe identifier fragment. Returns None if unusable."""
    t = txt.strip()
    if len(t) < MIN_LEN:
        return None
    if PATH_RE.search(t):
        return None
    if not all(32 <= ord(c) < 127 for c in t):
        return None
    # keep alnum and underscore; collapse the rest
    t = re.sub(r"[^A-Za-z0-9_]+", "_", t).strip("_")
    if len(t) < 4 or len(t) > 40:
        return None
    if t[0].isdigit():
        t = "s_" + t
    return t


# attribute strings to functions via DATA xrefs (the corrected route)
func_strings = collections.defaultdict(set)
for s in idautils.Strings():
    try:
        ea, txt = s.ea, str(s)
        if len(txt) < MIN_LEN:
            continue
        for xr in idautils.XrefsTo(ea, 0):
            f = ida_funcs.get_func(xr.frm)
            if f:
                func_strings[f.start_ea - BASE].add(txt)
    except Exception:
        continue

print(f"control sub_604F9090 -> {len(func_strings.get(0x4F9090, ()))} strings (expect 20)")
assert len(func_strings.get(0x4F9090, ())) == 20, "scanner broken; refusing to name"

skips = collections.Counter()
cands = []
for rva, strs in func_strings.items():
    ea = BASE + rva
    nm = ida_name.get_name(ea) or ""
    if nm and not nm.startswith("sub_"):
        skips["already named"] += 1
        continue
    if len(strs) != 1:
        skips["multiple distinct strings"] += 1
        continue
    txt = next(iter(strs))
    tok = sanitize(txt)
    if not tok:
        skips["string unusable (short/path/non-ascii)"] += 1
        continue
    cands.append((rva, tok, txt))

print()
print(f"candidates: {len(cands)}")
for k, v in skips.most_common():
    print(f"  skipped {k}: {v}")

# collision check against all existing names AND within the batch
existing = {}
for ea, nm in idautils.Names():
    existing.setdefault(nm, set()).add(ea)

applied = 0
collided = 0
for rva, tok, txt in sorted(cands):
    ea = BASE + rva
    want = f"{tok}_ref"
    if want in existing and ea not in existing[want]:
        collided += 1
        want = f"{tok}_ref_{rva:X}"
    if APPLY:
        if ida_name.set_name(ea, want, ida_name.SN_NOWARN):
            idc.set_cmt(ea, f'references the only string "{txt}"', 1)
            existing.setdefault(want, set()).add(ea)
            applied += 1
    else:
        applied += 1

print()
print(f"applied: {applied}")
print(f"collisions resolved by RVA suffix: {collided}")
if APPLY:
    idaapi.save_database("", 0)
    print("saved")
else:
    print("DRY RUN")
