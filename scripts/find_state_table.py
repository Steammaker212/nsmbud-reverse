import struct, sys
sys.path.insert(0, r".rea")
from elfutil import load_elf
d, segs = load_elf(r"convertedmain.rebased.elf")
def find_ptr(val):
    hits=[]
    for s in segs:
        if not s.get("filesz"): continue
        buf=d[s["offset"]:s["offset"]+s["filesz"]]
        needle=struct.pack("<I",val)
        i=buf.find(needle)
        while i!=-1:
            if i%4==0: hits.append(s["vaddr"]+i)
            i=buf.find(needle,i+1)
    return hits
for t in [0x7AAF80, 0x7BD438, 0x78C444, 0x7AABA0, 0x7A2F40]:
    print("ptr to 0x%X:" % t)
    for h in find_ptr(t)[:20]:
        print("   ", hex(h))
        # print surrounding pointers
        for k in range(-3,4):
            va=h+4*k
            for s in segs:
                if s["vaddr"]<=va<s["vaddr"]+s["filesz"]:
                    w=struct.unpack_from("<I",d,s["offset"]+(va-s["vaddr"]))[0]
                    print("        %+d %08X %08X" % (k, va, w))
                    break
