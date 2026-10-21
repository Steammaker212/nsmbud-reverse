import sys
sys.path.insert(0, r'.rea')
from elfutil import load_elf, va_to_off

d, segs = load_elf(r'convertedmain.rebased.elf')

def show(va, new, purpose):
    off = va_to_off(segs, va)
    old = d[off:off+len(new)]
    print('0x%08X | 0x%08X | %-14s | %-14s | %s' % (va, off, old.hex(' '), new.hex(' '), purpose))

print('VA         | file offset | original       | new            | purpose')
print('-' * 110)
show(0x60C61BE4, bytes.fromhex('04 39 af 00'), 'fire runtime profile ptr -> hammer ID cell')
show(0x60BD3208, bytes.fromhex('13 00 00 00'), 'Hammer Info#1 subtype = 19')
show(0x60BD3210, bytes.fromhex('01 00 08 00'), 'Hammer Info#1 subtype mask = 0x00080001')
show(0x60AF6620, bytes.fromhex('00 00 00 00'), 'Hammer Info#2 type mask = 0 (disable player hit)')
show(0x6013FB38, bytes.fromhex('50 12 e0 e7'), 'direction = (param>>4)&1  [UBFX R1,R0,#4,#1]')
show(0x6013FB68, bytes.fromhex('0a 00 a0 e3'), 'scale denominator = 10    [MOV R0,#10]')
show(0x60140744, bytes.fromhex('14 60 94 e5'), 'ctor: LDR R6,[R4,#0x14]')
show(0x60140748, bytes.fromhex('0f 60 06 e2'), 'ctor: AND R6,R6,#0xF')
show(0x6014074C, bytes.fromhex('13 64 86 e3'), 'ctor: ORR R6,R6,#0x13000000')
show(0x60140770, bytes.fromhex('ff 6c 86 e3'), 'ctor: ORR R6,R6,#0xFF00')
show(0x60140778, bytes.fromhex('54 60 84 e5'), 'ctor: STR R6,[R4,#0x54]  (+84..+87)')

print('\nOptional sound literal: find a dword equal to (0x60ADBBF9 - PC) and replace with (0x60ABED00 - PC).')
print('SE_PLY_THROW_FIRE VA = 0x60ADBBF9')
print('SE_EMY_HAMMER_BROS_HAMMER VA = 0x60ABED00')
