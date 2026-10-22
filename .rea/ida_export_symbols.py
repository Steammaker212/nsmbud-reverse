"""Refresh the symbol inventory JSON that gen_sweetdx_sym.py consumes.

functions_all.json is the bridge from this database to sweet-dx's linker script. It must be
regenerated whenever names change, or the .sym silently keeps stale/absent entries -- which is
exactly what happened to Player_setPowerupMode, Player_vtable_a and the actor names since the
last refresh.

Emits a list of {"rva": int, "name": str} covering:
  * every function with a real (non sub_*) name
  * every named data symbol that lives inside the image

Names that IDA generated itself (sub_XXXX, dword_XXXX, loc_XXXX, and friends) are excluded
because sweet-dx must not link against them.
"""
import json
import re
import idautils
import ida_funcs
import ida_name
import ida_auto
import idc

idc.auto_wait()
BASE = 0x60000000
NSO_MEM = 0x00CD1000
OUT = r"C:\Users\Saif Khan\Downloads\main.idb\.rea\functions_all.json"

# IDA auto-generated name shapes we must not export
AUTO = re.compile(
    r"^(sub|loc|dword|word|byte|unk|off|flt|dbl|qword|stru|algn|asc|nullsub|j_|def_|"
    r"dword_|word_|byte_|unk_|off_|flt_|qword_|loc_|nullsub_|j_sub_|byte_)",
)

# Names that must NEVER reach sweet-dx's linker script. Emitting _init made the linker
# clobber crt0's _init, and 0x24 is DT_INIT = 0xFF32F024 -- an entry point outside the
# module. Same for _fini. The old hand-maintained .sym excluded these deliberately; an
# automatic export silently reintroduces them, so the exclusion has to live here.
BLOCKED = {
    "_init", "_fini", "_start", "_crt0_section", "static_init_hook",
}

# Any symbol at or below this RVA is ELF/crt0 plumbing, not game code.
PLUMBING_MAX_RVA = 0x288

rows = []
seen = set()

def allowed(nm, rva):
    if not nm or AUTO.match(nm):
        return False
    if nm in BLOCKED:
        return False
    if rva <= PLUMBING_MAX_RVA:
        return False
    if rva < 0 or rva >= NSO_MEM:
        return False
    return True


for ea in idautils.Functions():
    nm = ida_name.get_name(ea) or ""
    rva = ea - BASE
    if not allowed(nm, rva):
        continue
    if nm in seen:
        continue
    seen.add(nm)
    rows.append({"rva": rva, "name": nm, "kind": "func"})

# named data symbols too -- vtables, tables, globals
for ea, nm in idautils.Names():
    rva = ea - BASE
    if not allowed(nm, rva):
        continue
    if nm in seen:
        continue
    if ida_funcs.get_func(ea):
        continue
    seen.add(nm)
    rows.append({"rva": rva, "name": nm, "kind": "data"})

rows.sort(key=lambda r: r["rva"])
# gen_sweetdx_sym.py expects {"data": [{"address": "0x<VA in hex>", "name": ...}]}
# and subtracts IDB (0x60000000) itself, so store absolute VAs here.
payload = {"data": [{"address": hex(BASE + r["rva"]), "name": r["name"]} for r in rows]}
with open(OUT, "w", encoding="utf-8") as fh:
    json.dump(payload, fh, indent=1)

print(f"wrote {OUT}")
print(f"  total named symbols: {len(rows)}")
print(f"  functions          : {sum(1 for r in rows if r['kind']=='func')}")
print(f"  data               : {sum(1 for r in rows if r['kind']=='data')}")
print()
for probe in ("Player_setPowerupMode", "Player_vtable_a", "Player_vtable_b",
              "Object_invokeSlot37", "ItemId_resolveGuardedByPlayerMode",
              "ItemNameTable_build"):
    hit = [r for r in rows if r["name"] == probe]
    print(f"  {probe:<36} {'found at ' + hex(hit[0]['rva']) if hit else 'MISSING'}")
