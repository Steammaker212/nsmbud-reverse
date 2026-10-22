"""EXTRACT THE COMPLETE ACTOR PROFILE TABLE: id -> constructor -> internal name.

The exact registration call is
    _ZN7ProfileC2EPFP5ActorPK14ActorBuildInfoEjPvPK9ActorInfoj
      Profile::Profile(Actor *(*)(ActorBuildInfo const*, unsigned int),
                       void *, ActorInfo const *, unsigned int)

From the decompiled sites the real layout is
    Profile::Profile(this=0xC87xxx, ctor, name_ptr, (int)v1, &ActorInfo, id)

so argument 1 (R1) is the actor CONSTRUCTOR, argument 2 (R2) is the internal NAME, and the last
argument is the profile ID.

911 call sites. For each: decompile the initialiser, pull the Profile::Profile(...) call text,
extract ctor / name / id, and resolve the name string. Emitted as JSON so the corpus can consume
it, and printed as a table.

This is a big verifiable win: every one of these initialisers is literally
"<Actor>_registerProfile", and the id map is what the block-item / spawn work needs.
"""
import json
import re
import idautils
import ida_bytes
import ida_funcs
import ida_name
import ida_hexrays
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000
NSO = 0x00CD1000
TEXT_LO, TEXT_HI = 0x288, 0x9AD3BC
CTOR = 0x00017F6C


def arm_bl_target(addr):
    try:
        w = ida_bytes.get_dword(addr)
    except Exception:
        return None
    if (w & 0x0F000000) == 0x0B000000:
        imm = w & 0xFFFFFF
        if imm & 0x800000:
            imm -= 0x1000000
        tgt = (addr + 8) + (imm << 2)
        return (tgt - BASE) if BASE <= tgt < BASE + NSO else None
    return None


def cstr(ea, maxlen=64):
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
    return "".join(b) if len(b) >= 3 else None


sites = []
for addr in range(BASE + TEXT_LO, BASE + TEXT_HI - 4, 4):
    if arm_bl_target(addr) == CTOR:
        fn = ida_funcs.get_func(addr)
        if fn:
            sites.append(fn.start_ea - BASE)
sites = sorted(set(sites))
print(f"distinct registration initialisers: {len(sites)}")

rows = []
fail = 0
for rva in sites:
    try:
        cf = ida_hexrays.decompile(BASE + rva)
    except Exception:
        cf = None
    if not cf:
        fail += 1
        continue
    txt = str(cf)
    m = None
    for mm in re.finditer(r"Profile::Profile\(([^;]*)\)", txt):
        m = mm
        break
    if not m:
        fail += 1
        continue
    args = m.group(1)
    parts = [p.strip() for p in args.split(",")]
    ctor = name = pid = None
    # ctor: second arg is an integer RVA
    for p in parts:
        if re.fullmatch(r"\d+", p):
            v = int(p)
            if 0x288 <= v < 0x9AD3BC and ctor is None:
                ctor = v
    # id: last numeric arg
    nums = [int(p) for p in parts if re.fullmatch(r"\d+", p)]
    if nums:
        pid = nums[-1]
    # name: a quoted string in the call text
    q = re.search(r'"((?:[^"\\]|\\.){2,})"', txt)
    if q:
        name = q.group(1)
    else:
        # try memory operand MEMORY[0x...] then resolve as string
        for p in parts:
            mv = re.fullmatch(r"MEMORY\[(0x[0-9A-Fa-f]+)\]", p)
            if mv:
                a = int(mv.group(1), 16)
                s = cstr(a) or cstr(a + BASE)
                if s:
                    name = s
                    break
    rows.append({"init": hex(rva), "ctor": hex(ctor) if ctor else None,
                 "id": pid, "name": name,
                 "ctor_name": (ida_name.get_name(BASE + ctor) if ctor else None)})

print(f"parsed registrations: {len(rows)}   unparsed: {fail}")
with open(r"C:\Users\Saif Khan\Downloads\main.idb\.rea\profile_table.json", "w",
          encoding="utf-8") as fh:
    json.dump(rows, fh, indent=1)

print()
print("=" * 96)
print("SAMPLE (first 40 by id)")
print("=" * 96)
ok = [r for r in rows if r["id"] is not None]
for r in sorted(ok, key=lambda r: r["id"])[:40]:
    print(f"  id {r['id']:>5}  ctor {r['ctor']}  {r['ctor_name'] or '?'}   name={r['name']}")

print()
print("total parsed:", len(rows))
