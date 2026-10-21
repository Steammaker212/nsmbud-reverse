import sys, struct
sys.path.insert(0, r'.rea')
from elfutil import load_elf, va_to_off
from rpc import call

d, segs = load_elf(r'convertedmain.rebased.elf')

def read_bytes(va, n):
    off = va_to_off(segs, va)
    if off is None:
        return None
    return d[off:off+n]

def show(va, n, label):
    b = read_bytes(va, n)
    print('%s @ %s: %s' % (label, hex(va), b.hex(' ') if b else 'N/A'))

print('=== pointer cells ===')
for a, label in [(0x60C61BE4, 'fire profile id pointer cell'), (0x60C61B48, 'ice profile id pointer cell')]:
    print(label, hex(a), hex(call('data_read_dword', {'address': hex(a)}, 20)))

print('=== hammer init bytes ===')
for va, n, label in [
    (0x6013FB0C, 16, 'prologue'),
    (0x6013FB30, 24, 'param/direction'),
    (0x6013FB64, 16, 'scale'),
    (0x6013FB78, 12, 'scale store'),
]:
    show(va, n, label)

print('=== hammer Info bytes ===')
for va, n, label in [
    (0x60BD31F0, 0x2C, 'hammer info 1'),
    (0x60AF6604, 0x2C, 'hammer info 2'),
]:
    show(va, n, label)

print('=== disasm with bytes around patch points ===')
res = call('disassemble_function', {'start_address': '0x6013FB0C'}, 60)
lines = res['lines']
for l in lines:
    a = int(l['address'], 16)
    if 0x6013FB30 <= a <= 0x6013FB70:
        b = read_bytes(a, 4)
        print(l['address'], b.hex(' ') if b else '????', l['instruction'])
