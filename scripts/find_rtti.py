import struct, sys, re
sys.path.insert(0, r".rea")
from elfutil import load_elf
d, segs = load_elf(r"convertedmain.rebased.elf")

def va_of(off):
    for s in segs:
        if s["offset"] <= off < s["offset"] + s["filesz"]:
            return s["vaddr"] + (off - s["offset"])
    return None
def off_of(va):
    for s in segs:
        if s["vaddr"] <= va < s["vaddr"] + s["filesz"]:
            return s["offset"] + (va - s["vaddr"])
    return None
def rdw(va):
    o = off_of(va)
    return struct.unpack_from("<I", d, o)[0] if o is not None else None

# find strings
strings = []
for m in re.finditer(rb"[\x20-\x7e]{6,}", d):
    s = m.group().decode("latin1")
    if "Player" in s or "player" in s:
        va = va_of(m.start())
        if va: strings.append((va, s))
print("=== Player strings ===")
for va, s in strings[:80]:
    print(hex(va), repr(s[:100]))

# find pointers to these strings (typeinfo name ptr)
str_vas = {va: s for va, s in strings}
print("\n=== typeinfo candidates (data refs to name strings) ===")
for sva, s in strings:
    pat = struct.pack("<I", sva - 0x60000000)
    start = 0
    while True:
        i = d.find(pat, start)
        if i < 0: break
        va = va_of(i)
        if va and 0x60B00000 <= va < 0x60C80000:
            # typeinfo base is va-4 (vtable ptr at +0, name at +4)
            ti = va - 4
            print("name", hex(sva), s[:60], "-> typeinfo?", hex(ti))
        start = i + 1
