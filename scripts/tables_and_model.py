import struct, sys
sys.path.insert(0, r".rea")
from elfutil import load_elf
from rpc import call

d, segs = load_elf(r"convertedmain.rebased.elf")
def rdw(va):
    for s in segs:
        if s["vaddr"] <= va < s["vaddr"] + s["filesz"]:
            return struct.unpack_from("<I", d, s["offset"] + (va - s["vaddr"]))[0]
    return None
def rdf(va):
    w = rdw(va)
    return struct.unpack("<f", struct.pack("<I", w))[0] if w is not None else None

print("11580596 = 0x%X, 11580716 = 0x%X" % (11580596, 11580716))
print()
print("height table flt_60B0C2BC:")
for i in range(12):
    va = 0x60B0C2BC + 4*i
    print("  [%2d] %08X = %.4f" % (i, va, rdf(va)))

print()
print("speed table A at 0x%X, entry stride 240:" % (0x60000000 + 11580596))
for i in range(0, 11):
    va = 0x60000000 + 11580596 + 240*i
    print("  [%2d] va %08X words: %08X %08X %08X %08X" % (i, va, rdw(va), rdw(va+4), rdw(va+8), rdw(va+12)))

print()
print("speed table B at 0x%X, entry stride 240:" % (0x60000000 + 11580716))
for i in range(0, 11):
    va = 0x60000000 + 11580716 + 240*i
    print("  [%2d] va %08X words: %08X %08X %08X %08X" % (i, va, rdw(va), rdw(va+4), rdw(va+8), rdw(va+12)))

for a in [0x6078E608, 0x607B6C38]:
    print("\n\n========== %s ==========" % hex(a))
    try:
        r = call("decompile_function", {"address": hex(a)}, 240)
        t = r if isinstance(r, str) else (r.get("text") if isinstance(r, dict) else str(r))
        open(r".rea/FM2_%X.c" % a, "w", encoding="utf-8").write(t)
        print(t[:9000])
    except Exception as e:
        print("ERR", e)
