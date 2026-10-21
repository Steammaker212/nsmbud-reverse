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
print("=== player vtable 0x60C24C74 slots 0x250..0x290 ===")
for off in range(0x250, 0x294, 4):
    v = rdw(0x60C24C74 + off)
    print(hex(off), hex(v) if v is not None else None, "->", hex(0x60000000 + v) if v else None)
print("=== player vtable 0x60C24C74 slots 0x600..0x640 ===")
for off in range(0x600, 0x644, 4):
    v = rdw(0x60C24C74 + off)
    print(hex(off), hex(v) if v is not None else None, "->", hex(0x60000000 + v) if v else None)

for a in [0x6076DEAC, 0x603E552C, 0x6077F54]:
    print("\n\n==========", hex(a), "==========")
    try:
        r = call("decompile_function", {"address": hex(a)}, 240)
        t = r if isinstance(r, str) else (r.get("text") if isinstance(r, dict) else str(r))
        open(r".rea/FZ_%X.c" % a, "w", encoding="utf-8").write(t)
        print(t[:16000])
    except Exception as e:
        print("ERR", e)
