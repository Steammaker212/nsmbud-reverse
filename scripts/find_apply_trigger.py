import struct, sys
sys.path.insert(0, r".rea")
from elfutil import load_elf
from rpc import call

d, segs = load_elf(r"convertedmain.rebased.elf")

def find_ptr(val):
    hits = []
    for s in segs:
        if not s.get("filesz"): continue
        buf = d[s["offset"]:s["offset"]+s["filesz"]]
        needle = struct.pack("<I", val)
        i = buf.find(needle)
        while i != -1:
            if i % 4 == 0:
                hits.append(s["vaddr"] + i)
            i = buf.find(needle, i+1)
    return hits

for target in [0x3E56C0, 0x7A2F40, 0x7A27A8, 0x7A2708]:
    print("pointers to RVA 0x%X:" % target)
    for h in find_ptr(target)[:20]:
        print("   ", hex(h))

print("\n\n========== sub_60463CD0 ==========")
r = call("decompile_function", {"address": "0x60463CD0"}, 240)
t = r if isinstance(r, str) else (r.get("text") if isinstance(r, dict) else str(r))
open(r".rea/FP_60463CD0.c","w",encoding="utf-8").write(t)
print(t[:16000])
