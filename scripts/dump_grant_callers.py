import sys, struct
sys.path.insert(0, r".rea")
from rpc import call
from elfutil import load_elf

for a in [0x60463998, 0x607A2820, 0x607A2F40]:
    print("\n=== xrefs to %s ===" % hex(a))
    try:
        r = call("get_xrefs_to", {"address": hex(a)}, 120)
        for x in r:
            print("  ", x.get("address"), x.get("type"), (x.get("function") or {}).get("name"), (x.get("function") or {}).get("address"))
    except Exception as e:
        print("ERR", e)

print("\n=== player vtable 0x60C24C74 +0x540..0x580 ===")
d, segs = load_elf(r"convertedmain.rebased.elf")
def rdw(va):
    for s in segs:
        if s["vaddr"] <= va < s["vaddr"] + s["filesz"]:
            return struct.unpack_from("<I", d, s["offset"] + (va - s["vaddr"]))[0]
    return None
for off in range(0x540, 0x584, 4):
    v = rdw(0x60C24C74 + off)
    print(hex(off), hex(v) if v is not None else None, "->", hex(0x60000000 + v) if v else None)

print("\n\n========== sub_607A2820 ==========")
r = call("decompile_function", {"address": "0x607A2820"}, 240)
t = r if isinstance(r, str) else (r.get("text") if isinstance(r, dict) else str(r))
open(r".rea/FN_607A2820.c", "w", encoding="utf-8").write(t)
print(t[:12000])
