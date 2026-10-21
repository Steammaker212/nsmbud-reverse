import sys
sys.path.insert(0, r'.rea')
from rpc import call

bases = [(0x60AF67B0, 'Fireball ActorInfo'), (0x60AF68F4, 'Iceball ActorInfo'), (0x60AF68AC, 'Hammer ActorInfo')]
for base, label in bases:
    print('===', label, hex(base), '===')
    for off in range(0, 0x40, 4):
        v = call('data_read_dword', {'address': hex(base + off)}, 20)
        print(' +0x%02x %s' % (off, hex(v)))
