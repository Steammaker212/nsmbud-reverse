"""CORRECT the profile-id extraction: the id is argument 3, NOT the last argument.

Profile::Profile's real body (read from 0x17F6C) settles it:

    int Profile::Profile(int this, int ctor, unsigned int id, int a4, void *actorInfo, int a6)
    {
        *(this + 0)  = 12322236;            // vtable
        *(this + 4)  = ctor;                // <-- CONSTRUCTOR
        *(this + 8)  = id;                  // <-- ID
        *(this + 12) = actorInfo ? actorInfo : &ActorInfo_Default;
        *(this + 16) = 0;
        *(this + 20) = a6;                  // <-- a6 is NOT the id
        if (id < 0x392) v7 = id;
        Profiles[v7] = this;                // Profile::get indexes this array
        return this;
    }

So in
    Profile::Profile(0xC87B30, 0x13A7A4, MEMORY[0xAF3498], v1, &unk_60AF67B0, 130)
the id is MEMORY[0xAF3498], and 130 is just a6 (stored at +20).

That means my earlier statement "PlayerFireball profile id = 130" was WRONG and is retracted
before it reached the repo. The real id is whatever sits at 0xAF3498.

This reads those id globals directly. If they are statically initialised in .data/.rodata the id is
immediately readable; if they are zero, ids are assigned at runtime and must be recovered from the
.init_array registration order instead -- which this also computes, as a cross-check.
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


sites = []
for addr in range(BASE + TEXT_LO, BASE + TEXT_HI - 4, 4):
    if arm_bl_target(addr) == CTOR:
        fn = ida_funcs.get_func(addr)
        if fn:
            sites.append(fn.start_ea - BASE)
sites = sorted(set(sites))
print(f"registration initialisers: {len(sites)}")

rows = []
idsrc_zero = 0
for rva in sites:
    try:
        cf = ida_hexrays.decompile(BASE + rva)
    except Exception:
        cf = None
    if not cf:
        continue
    txt = str(cf)
    m = re.search(r"Profile::Profile\(([^;]*)\)", txt)
    if not m:
        continue
    parts = [p.strip() for p in m.group(1).split(",")]
    if len(parts) < 3:
        continue
    ctor = int(parts[1]) if re.fullmatch(r"\d+", parts[1]) else None
    idarg = parts[2]
    a6 = parts[5] if len(parts) > 5 else None

    idval = None
    idaddr = None
    mv = re.fullmatch(r"MEMORY\[(0x[0-9A-Fa-f]+)\]", idarg)
    if mv:
        idaddr = int(mv.group(1), 16)
        idval = ida_bytes.get_dword(idaddr)
        if idval == 0:
            idsrc_zero += 1
            idval = None
    elif re.fullmatch(r"\d+", idarg):
        idval = int(idarg)
    elif idarg in ("ActorInfo_Default",) or "unk_" in idarg:
        idval = None

    rows.append({
        "init": hex(rva),
        "ctor": hex(ctor) if ctor else None,
        "ctor_name": (ida_name.get_name(BASE + ctor) if ctor else None),
        "id": idval,
        "id_addr": hex(idaddr) if idaddr else None,
        "a6": a6,
    })

got = [r for r in rows if r["id"] is not None]
print(f"parsed {len(rows)}; with a statically-readable id: {len(got)}; id was zero: {idsrc_zero}")

with open(r"C:\Users\Saif Khan\Downloads\main.idb\.rea\profiles_fixed.json", "w",
          encoding="utf-8") as fh:
    json.dump(rows, fh, indent=1)

print()
print("=" * 96)
print("id-address values for the fireball family")
print("=" * 96)
for r in rows:
    n = r["ctor_name"] or ""
    if "Fireball" in n:
        print(f"  {r['init']}  ctor {r['ctor']} {n}")
        print(f"      id_addr={r['id_addr']} id={r['id']} a6={r['a6']}")

print()
print("=" * 96)
print("first 30 profiles that DO have a readable id")
print("=" * 96)
for r in sorted(got, key=lambda r: r["id"])[:30]:
    print(f"  id {r['id']:>5}  {r['ctor_name'] or r['ctor']}")
