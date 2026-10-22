"""EXTRACT ALL 911 ACTOR REGISTRATIONS: constructor RVA + ActorInfo -> name.

Profile::Profile's mangled signature is
    Profile::Profile(Actor*(*ctor)(ActorBuildInfo const*), unsigned profileId,
                     void*, ActorInfo const* info, unsigned actorId)
and its body stores ctor at +4, profileId at +8, info at +12, actorId at +20, then does
Profiles[profileId] = this.

IDA's pseudocode prints the call as
    Profile::Profile(thisObj, ctorRva, profileId, v, &ActorInfo, actorId)
so the constructor is the 2nd argument, expressed as a plain RVA (e.g. 167868 = 0x28FBC).

For every call site this resolves:
  * ctor RVA  -> the actor constructor function, to be named
  * ActorInfo -> dumped, because its leading words include the actor's name string

That yields name -> constructor for the whole game.
"""
import re
import idautils
import ida_funcs
import ida_name
import ida_bytes
import ida_xref
import ida_hexrays
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000
PROFILE_CTOR = BASE + 0x17F6C
out = []


def log(s=""):
    out.append(s)


def cstr(ea, maxlen=64):
    try:
        b = []
        for i in range(maxlen):
            c = ida_bytes.get_byte(ea + i)
            if c == 0:
                break
            if 32 <= c < 127:
                b.append(chr(c))
            else:
                return None
        t = "".join(b)
        return t if len(t) >= 3 else None
    except Exception:
        return None


def info_name(ea):
    """ActorInfo: scan its first 0x40 bytes for a pointer to a printable string."""
    for off in range(0, 0x40, 4):
        v = ida_bytes.get_dword(ea + off)
        if not v:
            continue
        if 0x60000000 <= v < 0x61000000:
            s = cstr(v)
            if s:
                return s, off
        elif 0x00A00000 <= v < 0x00D00000:
            s = cstr(BASE + v)
            if s:
                return s, off
    return None, None


# ------------------------------------------------------------ gather call sites
sites = {}
xb = ida_xref.xrefblk_t()
ok = xb.first_to(PROFILE_CTOR, ida_xref.XREF_CODE)
while ok:
    f = ida_funcs.get_func(xb.frm)
    if f:
        sites.setdefault(f.start_ea, []).append(xb.frm)
    ok = xb.next_to()

log("=" * 100)
log(f"Profile::Profile CALL SITES: {sum(len(v) for v in sites.values())} "
    f"in {len(sites)} functions")
log("=" * 100)

CALL_RE = re.compile(r"Profile::Profile\(\s*(\d+)\s*,\s*(\d+)\s*,\s*([^,]+)\s*,"
                     r"\s*([^,]+)\s*,\s*([^,]+)\s*,\s*([^)]+)\)")

records = []
for fn in sorted(sites):
    try:
        cf = ida_hexrays.decompile(fn)
        txt = str(cf)
    except Exception:
        continue
    for line in txt.splitlines():
        if "Profile::Profile(" not in line:
            continue
        m = CALL_RE.search(line)
        if not m:
            continue
        this_obj = int(m.group(1))
        ctor_rva = int(m.group(2))
        profile_id = m.group(3).strip()
        info_expr = m.group(5).strip()
        actor_id = m.group(6).strip()
        # resolve ActorInfo if IDA gave a concrete address
        info_ea = None
        im = re.search(r"(?:unk|off|dword)_([0-9A-Fa-f]{8})", info_expr)
        if im:
            info_ea = int(im.group(1), 16)
        name = None
        if info_ea:
            name, _ = info_name(info_ea)
        records.append({
            "reg_fn": fn - BASE, "ctor_rva": ctor_rva, "this": this_obj,
            "info_ea": info_ea, "name": name, "actor_id": actor_id,
            "profile_id": profile_id,
        })

log(f"  parsed {len(records)} registration calls")
log()

# ------------------------------------------------------------ report
log(f"  {'ctorRVA':>10}  {'ctor fn name':<40} {'name':<32} actorId")
named = 0
for r in records[:120]:
    ea = BASE + r["ctor_rva"]
    f = ida_funcs.get_func(ea)
    fname = ida_name.get_name(ea) if f else "(not a function)"
    nm = r["name"] or "?"
    log(f"  {r['ctor_rva']:#010x}  {fname:<40} {nm:<32} {r['actor_id']}")
    if r["name"]:
        named += 1

log()
log(f"  registrations with a resolvable name: {named}/{len(records)}")

# stats on what resolved
with_name = sum(1 for r in records if r["name"])
with_func = sum(1 for r in records if ida_funcs.get_func(BASE + r["ctor_rva"]))
log(f"  constructor RVA resolves to a known function: {with_func}/{len(records)}")
log(f"  ActorInfo gave a name string            : {with_name}/{len(records)}")

txt = "\n".join(out)
print(txt)
with open(r"C:\Users\Saif Khan\Downloads\main.idb\.rea\out_profile_map.txt", "w",
          encoding="utf-8") as fh:
    fh.write(txt)

import json
with open(r"C:\Users\Saif Khan\Downloads\main.idb\.rea\out_profile_map.json", "w",
          encoding="utf-8") as fh:
    json.dump(records, fh, indent=1)
