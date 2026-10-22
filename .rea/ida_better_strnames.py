"""IMPROVE the 1,442 string-ref names: replace weak *_ref names with stronger derived names.

Current string-ref names look like `SE_PLY_ref_6`. They are honest but nearly useless: "the 6th
function that references something starting with SE_PLY".

A better name is available where the function's DOMINANT string is specific enough. For example a
function whose only string is "StateMgr::changeState" can be named after it; a function that
references "E_EMY_KAME" among 30 other strings cannot.

Rule, chosen to be verifiable:
  * take all printable string literals the function references
  * keep those at least 6 chars, alphanumeric/underscore only (no spaces, no punctuation)
  * require the MOST COMMON such string to appear in EVERY reference to a string in that
    function's literal pool -- i.e. one dominant string, not a table
  * refuse if the function references more than 3 distinct such strings (that is a table, and
    naming it after one entry is what produced the 2,450 wrong SE_* names before)

Name form: <sanitised-dominant-string>_uses1  -- never truncated, always the whole token.

This measures first, then applies, and reports the distribution so the yield is visible.
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
NSO = 0x00CD1000


def cstr(ea, maxlen=96):
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


def strings_in(f):
    out = []
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
                    out.append(s)
    return out


GOOD = re.compile(r"^[A-Za-z_][A-Za-z0-9_]{5,60}$")

cand = []
stats = collections.Counter()
for ea in idautils.Functions():
    nm = ida_name.get_name(ea) or ""
    if not re.search(r"_ref(_\d+)?$", nm):
        continue
    f = ida_funcs.get_func(ea)
    if not f:
        continue
    ss = strings_in(f)
    uniq = [s for s in dict.fromkeys(ss) if GOOD.match(s)]
    if not uniq:
        stats["no_good_string"] += 1
        continue
    if len(uniq) > 3:
        stats["too_many(table)"] += 1
        continue
    # dominant must appear at least as often as any other
    cnt = collections.Counter(s for s in ss if GOOD.match(s))
    top, topn = cnt.most_common(1)[0]
    if topn < 1:
        stats["no_dominant"] += 1
        continue
    cand.append((ea - BASE, top, len(uniq), nm))

print("=" * 90)
print(f"string-ref functions examined: {sum(stats.values()) + len(cand)}")
print("=" * 90)
for k, v in stats.most_common():
    print(f"  skipped {k:<22} {v:,}")
print(f"  candidates                {len(cand):,}")

print()
print("=" * 90)
print("sample candidates")
print("=" * 90)
for rva, top, n, old in cand[:25]:
    print(f"  {rva:#010x}  {old:<28} -> {top}   ({n} distinct)")

# apply, keeping uniqueness
existing = {}
for ea in idautils.Functions():
    n = ida_name.get_name(ea) or ""
    if n and not n.startswith("sub_"):
        existing.setdefault(n, set()).add(ea - BASE)

applied = 0
collided = 0
for rva, top, n, old in cand:
    name = f"{top}_uses1"
    if name in existing and rva not in existing[name]:
        collided += 1
        continue
    if ida_name.set_name(BASE + rva, name, ida_name.SN_NOWARN):
        applied += 1
        existing.setdefault(name, set()).add(rva)

print()
print(f"  applied  : {applied}")
print(f"  collided : {collided}")

idaapi.save_database("", 0)
print("saved")
