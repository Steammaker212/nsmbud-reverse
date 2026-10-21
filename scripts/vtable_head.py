import sys
sys.path.insert(0, r'.rea')
from rpc import call

fire_vt = 0x60BD2A40
ice_vt = 0x60BD3440
print('slot  off   fire       ice')
for slot in range(0, 24):
    off = slot * 4
    fv = call('data_read_dword', {'address': hex(fire_vt + off)}, 20)
    iv = call('data_read_dword', {'address': hex(ice_vt + off)}, 20)
    print('%3d  0x%03x  %s  %s' % (slot, off, hex(fv), hex(iv)))
