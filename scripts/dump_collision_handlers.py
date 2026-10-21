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
print("=== player vtable 0x60C24C74 0x470..0x4C0 ===")
for off in range(0x470, 0x4C4, 4):
    v = rdw(0x60C24C74 + off)
    print(hex(off), hex(v) if v is not None else None, "->", hex(0x60000000 + v) if v else None)
print("=== player vtable 0x60C24C74 0x570..0x5A0 ===")
for off in range(0x570, 0x5A4, 4):
    v = rdw(0x60C24C74 + off)
    print(hex(off), hex(v) if v is not None else None, "->", hex(0x60000000 + v) if v else None)

for a in [0x607A0C20, 0x607A0CD4, 0x607A0D80, 0x607A0514]:
    print("\n\n==========", hex(a), "==========")
    try:
        r = call("decompile_function", {"address": hex(a)}, 240)
        t = r if isinstance(r, str) else (r.get("text") if isinstance(r, dict) else str(r))
        open(r".rea/FC_%X.c" % a, "w", encoding="utf-8").write(t)
        print(t[:20000])
    except Exception as e:
        print("ERR", e)
