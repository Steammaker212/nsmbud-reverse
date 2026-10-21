import sys, json, struct
sys.path.insert(0, r'.rea')
from elfutil import load_elf, va_to_off

d, segs = load_elf(r'convertedmain.rebased.elf')
funcs = json.load(open(r'.rea/functions_all.json'))
print('funcs type', type(funcs), 'len', len(funcs))
print('first', funcs[0] if isinstance(funcs, list) else list(funcs.items())[:1])

text_start, text_size = 0x60000000, 0x9AEC10
ranges = []
for f in funcs:
    try:
        a = int(f['address'], 16) if isinstance(f['address'], str) else f['address']
        s = int(f['size'], 16) if isinstance(f['size'], str) else f['size']
    except Exception:
        continue
    if a >= text_start and a < text_start + text_size:
        ranges.append((a, a + max(s, 4), f.get('name', '')))
ranges.sort()
print('ranges', len(ranges))
gaps = []
prev = text_start
for a, b, n in ranges:
    if a > prev:
        gaps.append((prev, a, a - prev))
    prev = max(prev, b)
if prev < text_start + text_size:
    gaps.append((prev, text_start + text_size, text_start + text_size - prev))
gaps.sort(key=lambda x: -x[2])
print('top gaps:')
for g in gaps[:20]:
    start, end, size = g
    off = va_to_off(segs, start)
    data = d[off:off+min(size, 32)] if off is not None else b''
    print(hex(start), hex(end), size, data.hex(' '))
