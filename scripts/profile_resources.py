#!/usr/bin/env python3
"""Extract the profile -> resource-archive mapping from the ELF.

codedx main.sym gives us:
    Profile::hasResourcesOriginal   = 0x00AF4288  (u8[914])
    Profile::resourceCountOriginal  = 0x00AF461A  (u8[914])
    Profile::resourceListsOriginal  = 0x00BC05F0  (SafeString*[914])
    Profile::prioritiesOriginal     = 0x00AF3B64  (s16[914])

SafeString layout (sead::SafeStringBase<char>):
    +0  char*  mStringTop? (varies)
Actually sead::SafeStringBase is { const char* mString; const char* mStringTop; u32 mSize; }

We resolve each list pointer -> array of SafeString -> the C string.
"""
import struct
import sys

ELF = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.rebased.elf"
BASE = 0x60000000

HAS_RES   = BASE + 0x00AF4288
RES_COUNT = BASE + 0x00AF461A
RES_LISTS = BASE + 0x00BC05F0
PRIORITY  = BASE + 0x00AF3B64

CHEEP = list(range(530, 548))


def segs(data):
    ph = struct.unpack_from("<I", data, 0x1C)[0]
    ents = struct.unpack_from("<H", data, 0x2A)[0]
    n = struct.unpack_from("<H", data, 0x2C)[0]
    out = []
    for i in range(n):
        b = ph + i * ents
        if struct.unpack_from("<I", data, b)[0] == 1:
            out.append((struct.unpack_from("<I", data, b + 8)[0],
                        struct.unpack_from("<I", data, b + 16)[0],
                        struct.unpack_from("<I", data, b + 4)[0]))
    return out


SEGS = []
def off(va):
    for v, sz, o in SEGS:
        if v <= va < v + sz:
            return o + va - v
    return None


def rd32(va):
    o = off(va)
    if o is None:
        return None
    return struct.unpack_from("<I", data, o)[0]


def rd8(va):
    o = off(va)
    if o is None:
        return None
    return data[o]


def rd_cstr(va):
    o = off(va)
    if o is None:
        return None
    end = data.find(b"\x00", o, o + 512)
    if end < 0:
        return None
    return data[o:end].decode("ascii", "replace")


data = open(ELF, "rb").read()
SEGS = segs(data)

print(f"ELF {ELF}")
print(f"hasResources  @ {HAS_RES:#x}  first byte = {rd8(HAS_RES)}")
print(f"resourceCount @ {RES_COUNT:#x} first byte = {rd8(RES_COUNT)}")
print(f"resourceLists @ {RES_LISTS:#x} first ptr  = ", end="")
p0 = rd32(RES_LISTS)
print(f"{p0 if p0 is None else hex(p0)}")
print(f"priorities    @ {PRIORITY:#x} first s16  = ", end="")
o = off(PRIORITY)
print(struct.unpack_from("<h", data, o)[0] if o else None)

print("\n=== profile -> resources (Cheep Cheep family) ===")
for pid in CHEEP:
    has = rd8(HAS_RES + pid)
    cnt = rd8(RES_COUNT + pid)
    lst = rd32(RES_LISTS + 4 * pid)
    prio = struct.unpack_from("<h", data, off(PRIORITY + 2 * pid))[0] \
        if off(PRIORITY + 2 * pid) else None
    resources = []
    if lst and cnt:
        # lst is an RVA to an array of SafeString (each 12 bytes: ptr,top,size)
        for k in range(min(cnt, 8)):
            ss_va = BASE + lst + 12 * k
            sptr = rd32(ss_va)
            if sptr:
                s = rd_cstr(BASE + sptr)
                if s:
                    resources.append(s)
    else:
        # maybe lst points directly at char*
        if lst:
            s = rd_cstr(BASE + lst)
            if s:
                resources = [s]
    print(f"  {pid}: has={has} count={cnt} prio={prio} "
          f"resources={resources}")

print("\n=== sanity: FireBall 476 / Hammer 759 ===")
for pid in (474, 476, 759):
    has = rd8(HAS_RES + pid)
    cnt = rd8(RES_COUNT + pid)
    lst = rd32(RES_LISTS + 4 * pid)
    resources = []
    if lst and cnt:
        for k in range(min(cnt, 6)):
            ss_va = BASE + lst + 12 * k
            sptr = rd32(ss_va)
            if sptr:
                s = rd_cstr(BASE + sptr)
                if s:
                    resources.append(s)
    print(f"  {pid}: has={has} count={cnt} resources={resources}")
