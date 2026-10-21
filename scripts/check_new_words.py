import struct
from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM

md = Cs(CS_ARCH_ARM, CS_MODE_ARM)
words = [
    (0x6045DDCC, 0xE3A0200A, 'grant mov r2,#10'),
    (0x607A2708, 0x83A03001, 'canChangeTo movhi r3,#1'),
    (0x6078E6A8, 0xE350000A, 'suit cmp r0,#10'),
    (0x607AAA88, 0xE350000A, 'setFireBallAction cmp r0,#10'),
    (0x607AA9BC, 0xE351000A, 'checkSetFireBall cmp r1,#10'),
    (0x607AABB8, 0xE350000A, 'createFireBall A cmp r0,#10'),
    (0x607AAC94, 0xE350000A, 'createFireBall C cmp r0,#10'),
    (0x607AAFF4, 0xE351000A, 'fire exec bound cmp r1,#10'),
    (0x607AB000, 0xE3003464, 'fire exec mask movw r3,#0x464'),
    (0x607AB0E4, 0xE350000A, 'fire exec inner cmp r0,#10'),
]
for va, w, label in words:
    code = struct.pack('<I', w)
    ins = list(md.disasm(code, va))
    print('0x%08X  %08X  %-30s  %s' % (va, w, label, ins[0].mnemonic + ' ' + ins[0].op_str if ins else '??'))
