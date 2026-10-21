import sys, struct
sys.path.insert(0, r".rea")
from rpc import call
from elfutil import load_elf

for a, n in [(0x60773F3C, "F_73F3C"), (0x60773630, "F_73630"),
             (0x607734E8, "F_734E8"), (0x60773DC0, "F_73DC0_changeState")]:
    print("=====", n, hex(a))
    try:
        r = call("decompile_function", {"address": hex(a)}, 240)
        t = r if isinstance(r, str) else (r.get("text") if isinstance(r, dict) else str(r))
        open(r".rea/" + n + ".c", "w", encoding="utf-8").write(t)
        print(t[:14000])
    except Exception as e:
        print("ERR", e)

# resolve player vtable +0x44C and +0x1100? offset 1100 decimal = 0x44C
d, segs = load_elf(r"convertedmain.rebased.elf")
def rdw(va):
    for s in segs:
        if s["vaddr"] <= va < s["vaddr"] + s["filesz"]:
            return struct.unpack_from("<I", d, s["offset"] + (va - s["vaddr"]))[0]
    return None

print("\n=== player vtable entries around 0x44C ===")
vt = 0x60C253D4
for off in range(0x430, 0x470, 4):
    v = rdw(vt + off)
    print(hex(off), hex(v) if v is not None else None, ("-> 0x%X" % (0x60000000 + v)) if v else "")
