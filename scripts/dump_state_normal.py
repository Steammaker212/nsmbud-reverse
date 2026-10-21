import sys, struct
sys.path.insert(0, r".rea")
from rpc import call
from elfutil import load_elf
d, segs = load_elf(r"convertedmain.rebased.elf")
def rdw(va):
    for s in segs:
        if s["vaddr"] <= va < s["vaddr"] + s["filesz"]:
            return struct.unpack_from("<I", d, s["offset"] + (va - s["vaddr"]))[0]
    return None
print("=== state table around 0x60CC4C04 ===")
for a in range(0x60CC4BC0, 0x60CC4C80, 4):
    v = rdw(a)
    print(hex(a), hex(v) if v is not None else None, ("-> 0x%X" % (0x60000000+v)) if v and 0x60000000 <= 0x60000000+v < 0x60D00000 else "")

for a in [0x607A9228, 0x607A8674, 0x607A878C, 0x60835704]:
    print("\n\n==========", hex(a), "==========")
    try:
        r = call("decompile_function", {"address": hex(a)}, 240)
        t = r if isinstance(r, str) else (r.get("text") if isinstance(r, dict) else str(r))
        open(r".rea/FS_%X.c" % a, "w", encoding="utf-8").write(t)
        print(t[:16000])
    except Exception as e:
        print("ERR", e)
