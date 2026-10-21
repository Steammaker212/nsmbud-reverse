import struct, sys

def load_elf(path):
    d = open(path,'rb').read()
    assert d[:4] == b'\x7fELF', 'not ELF'
    is64 = d[4] == 2
    assert not is64
    e_phoff, = struct.unpack_from('<I', d, 0x1c)
    e_phentsize, e_phnum = struct.unpack_from('<HH', d, 0x2a)
    segs = []
    for i in range(e_phnum):
        off = e_phoff + i*e_phentsize
        p_type, p_offset, p_vaddr, p_paddr, p_filesz, p_memsz, p_flags, p_align = struct.unpack_from('<IIIIIIII', d, off)
        segs.append(dict(type=p_type, offset=p_offset, vaddr=p_vaddr, filesz=p_filesz, memsz=p_memsz, flags=p_flags))
    return d, segs

def va_to_off(segs, va):
    for s in segs:
        if s['type'] == 1 and s['vaddr'] <= va < s['vaddr'] + s['filesz']:
            return s['offset'] + (va - s['vaddr'])
    return None

def off_to_va(segs, off):
    for s in segs:
        if s['type'] == 1 and s['offset'] <= off < s['offset'] + s['filesz']:
            return s['vaddr'] + (off - s['offset'])
    return None

if __name__ == '__main__':
    path = sys.argv[1] if len(sys.argv) > 1 else 'convertedmain.rebased.elf'
    d, segs = load_elf(path)
    print('segments:')
    for s in segs:
        print(' ', s)
    targets = [0x6013a7a4, 0x6013f02c, 0x602cbb20, 0x60135a90]
    for t in targets:
        pat = struct.pack('<I', t)
        offs = []
        i = 0
        while True:
            i = d.find(pat, i)
            if i < 0: break
            offs.append(i); i += 1
        print(hex(t), 'count', len(offs))
        for o in offs[:20]:
            print('   off', hex(o), 'va', hex(off_to_va(segs, o) or 0))
