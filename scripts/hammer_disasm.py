import sys, json, struct
sys.path.insert(0, r'.rea')
from rpc import call

print('=== ID cells ===')
for a, label in [(0x60AF3498, 'fire profile id'), (0x60AF3490, 'ice profile id'), (0x60AF3904, 'hammer profile id')]:
    print(label, hex(a), call('data_read_dword', {'address': hex(a)}, 20))

print('=== flt_60B0C2BC speed table ===')
for i in range(12):
    v = call('data_read_dword', {'address': hex(0x60B0C2BC + i*4)}, 20)
    f = struct.unpack('<f', struct.pack('<I', v))[0]
    print(i, hex(v), f)

print('=== sub_6013FB0C disassembly (first 60) ===')
res = call('disassemble_function', {'start_address': '0x6013FB0C'}, 60)
lines = res['lines'] if isinstance(res, dict) and 'lines' in res else res
if isinstance(lines, str):
    print(lines[:8000])
else:
    for l in lines[:60]:
        print(l.get('address'), l.get('instruction'))
