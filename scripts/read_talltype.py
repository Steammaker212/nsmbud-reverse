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

print("cTallType @0x60B0C300:")
for i in range(13):
    va = 0x60B0C300 + 4*i
    print("  [%2d] %08X = %d" % (i, va, rdw(va)))

for a in [0x60B0C300, 0x60B0C328]:
    print("\n=== xrefs to %s ===" % hex(a))
    try:
        r = call("get_xrefs_to", {"address": hex(a)}, 120)
        for x in r:
            fr = x.get("function") or {}
            print("  ", x.get("address"), x.get("type"), fr.get("name"), fr.get("address"))
    except Exception as e:
        print("ERR", e)
