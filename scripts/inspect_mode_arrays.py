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

for label, start, count, isfloat in [
    ("height", 0x60B0C2BC, 16, True),
    ("body",   0x60B0C230, 16, False),
    ("tall",   0x60B0C300, 16, False),
]:
    print("\n=== %s @0x%X ===" % (label, start))
    for i in range(count):
        va = start + 4*i
        w = rdw(va)
        if isfloat:
            print("  [%2d] %08X %08X %10.4f" % (i, va, w, rdf(va)))
        else:
            print("  [%2d] %08X %08X %10d" % (i, va, w, w))
    print("  xrefs:")
    for va in range(start, start + 4*count, 4):
        try:
            r = call("get_xrefs_to", {"address": hex(va)}, 60)
            if r:
                for x in r:
                    fr = x.get("function") or {}
                    print("    %s: %s %s %s" % (hex(va), x.get("address"), x.get("type"), fr.get("name")))
        except Exception as e:
            pass
