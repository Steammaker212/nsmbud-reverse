import sys
sys.path.insert(0, r'.rea')
from rpc import call

fire_vt = 0x60BD2A40
ice_vt = 0x60BD3440
fire_init = 0x13A7FC

print('--- Fireball vtable scan for 0x13A7FC ---')
for off in range(0, 0x200, 4):
    v = call('data_read_dword', {'address': hex(fire_vt + off)}, 20)
    if v == fire_init:
        print('fire init at +0x%x (slot %d)' % (off, off // 4))
        print('ice vtable same slot:', hex(call('data_read_dword', {'address': hex(ice_vt + off)}, 20)))

print('--- Fireball vtable +0xE0..0x110 ---')
for off in range(0xE0, 0x118, 4):
    fv = call('data_read_dword', {'address': hex(fire_vt + off)}, 20)
    iv = call('data_read_dword', {'address': hex(ice_vt + off)}, 20)
    print('+0x%03x fire=%s ice=%s' % (off, hex(fv), hex(iv)))
