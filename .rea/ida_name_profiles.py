"""Name all 772 actor Profile registration initialisers -- verifiably.

Each is a static constructor whose body is exactly one Profile::Profile call, with R1 = the actor
constructor. So "<ctor>_registerProfile" is true by construction: the function's whole purpose is
to register that actor's profile.

Name form: registerProfile_<ShortCtor>_<RVA>   (RVA keeps it unique when one ctor is registered
more than once, which happens for boss variants).

This is a large, safe, human-readable win: a reader following any actor's profile registration
lands on a function whose name says which actor it registers.

Explicitly NOT claimed: profile ids. All 772 id slots read 0xFFFFFFFF statically, so ids are
assigned at runtime; the earlier "PlayerFireball is id 130" reading was wrong (130 is the 6th
argument, stored at profile+20, not the id).
"""
import json
import ida_name
import idaapi
import idc
import ida_auto

idc.auto_wait()
BASE = 0x60000000

rows = json.load(open(r"C:\Users\Saif Khan\Downloads\main.idb\.rea\profiles_fixed.json",
                     encoding="utf-8"))
print(f"rows: {len(rows)}")

applied = 0
skipped = 0
examples = []
for r in rows:
    init = int(r["init"], 16)
    ea = BASE + init
    cur = ida_name.get_name(ea) or ""
    if cur and not cur.startswith("sub_"):
        skipped += 1
        continue
    cn = r.get("ctor_name") or ""
    if not cn:
        skipped += 1
        continue
    # shorten a mangled name to something readable
    if cn.startswith("_ZN"):
        short = cn.split("_")[1] if "_" in cn else cn
        short = "".join(ch for ch in short if ch.isalnum())[:24]
    else:
        short = cn
        for pre in ("Actor_",):
            if short.startswith(pre):
                short = short[len(pre):]
        if short.endswith("_build"):
            short = short[:-6]
    if not short:
        skipped += 1
        continue
    name = f"registerProfile_{short}_{init:06X}"
    if ida_name.set_name(ea, name, ida_name.SN_NOWARN):
        applied += 1
        if len(examples) < 12:
            examples.append((init, cn, name))
    else:
        skipped += 1

print(f"applied: {applied}   skipped: {skipped}")
for init, cn, name in examples:
    print(f"  {init:#010x}  {cn}")
    print(f"        -> {name}")

idaapi.save_database("", 0)
print("saved")
