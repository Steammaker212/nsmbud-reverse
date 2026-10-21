import sys
sys.path.insert(0, r'.rea')
from rpc import call

infos = [(0x60BD28C0, 'Fireball ActiveCollider Info'), (0x60AF693C, 'Iceball ActiveCollider Info'), (0x60BD31F0, 'Hammer ActiveCollider Info #1'), (0x60AF6604, 'Hammer ActiveCollider Info #2')]
for base, label in infos:
    print('===', label, hex(base), '===')
    names = ['posX?', 'posY?', 'sizeX?', 'sizeY?', 'group', 'type', 'subtype', 'mask', 'subtype_mask', 'flags', 'callback']
    for i in range(11):
        v = call('data_read_dword', {'address': hex(base + i*4)}, 20)
        print(' Info[%2d] +0x%02x %-12s %s' % (i, i*4, names[i], hex(v)))
