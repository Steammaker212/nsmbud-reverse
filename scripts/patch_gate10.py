import sys
import struct
import hashlib

sys.path.insert(0, r'.rea')
from elfutil import load_elf

fn = 'convertedmain.hammer_b.elf'
d, segs = load_elf(fn)


def off(va):
    for s in segs:
        if s['vaddr'] <= va < s['vaddr'] + s['filesz']:
            return s['offset'] + (va - s['vaddr'])
    raise KeyError(hex(va))


EXP = {0x60465F34: 0xE3500008, 0x60466000: 0xE3500008,
       0x60465F40: 0xE30011FB, 0x6046600C: 0xE30011FB}
NEW = {0x60465F34: 0xE3500009, 0x60466000: 0xE3500009,
       0x60465F40: 0xE30015FB, 0x6046600C: 0xE30015FB}

for va, w in EXP.items():
    got = struct.unpack_from('<I', d, off(va))[0]
    ok = 'OK' if got == w else 'MISMATCH!'
    print('0x%08X current 0x%08X expect 0x%08X %s' % (va, got, w, ok))
    assert got == w, 'pre-patch verification failed at 0x%08X' % va

d = bytearray(d)

for va, w in NEW.items():
    struct.pack_into('<I', d, off(va), w)

open(fn, 'wb').write(d)

# re-verify from disk
d2, _ = load_elf(fn)
allok = True
for va, w in NEW.items():
    got = struct.unpack_from('<I', d2, off(va))[0]
    ok = got == w
    allok &= ok
    print('patched 0x%08X -> 0x%08X %s' % (va, got, 'OK' if ok else 'FAIL'))
print('new MD5:', hashlib.md5(open(fn, 'rb').read()).hexdigest())
print('ALL OK' if allok else 'ERRORS PRESENT')
