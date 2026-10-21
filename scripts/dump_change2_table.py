import sys, struct
sys.path.insert(0, r".rea")
from rpc import call
from elfutil import load_elf

for a, n in [(0x60773E6C, "F_73E6C_changeState2"), (0x6075E5C0, "F_5E5C0")]:
    print("=====", n, hex(a))
    try:
        r = call("decompile_function", {"address": hex(a)}, 240)
        t = r if isinstance(r, str) else (r.get("text") if isinstance(r, dict) else str(r))
        open(r".rea/" + n + ".c", "w", encoding="utf-8").write(t)
        print(t[:16000])
    except Exception as e:
        print("ERR", e)

d, segs = load_elf(r"convertedmain.rebased.elf")
def rdw(va):
    for s in segs:
        if s["vaddr"] <= va < s["vaddr"] + s["filesz"]:
            o = s["offset"] + (va - s["vaddr"])
            return struct.unpack_from("<I", d, o)[0]
    return None

print("\n=== table 0x60C25B10..0x60C25C10 ===")
for a in range(0x60C25B10, 0x60C25C10, 4):
    v = rdw(a)
    print(hex(a), hex(v) if v is not None else None,
          ("-> VA 0x%X" % (0x60000000 + v)) if v and v < 0x1000000 else "")
