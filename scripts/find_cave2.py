import sys, json
sys.path.insert(0, r'.rea')
from elfutil import load_elf, va_to_off

d, segs = load_elf(r'convertedmain.rebased.elf')
funcs = json.load(open(r'.rea/functions_all.json'))['data']

text_start, text_size = 0x60000000, 0x9AEC10
text_end = text_start + text_size
ranges = []
for f in funcs:
    try:
        a = int(f['address'], 16)
        s = int(f['size'], 16)
    except Exception:
        continue
    if a >= text_start and a < text_end:
        ranges.append((a, a + max(s, 4), f.get('name', '')))
ranges.sort()
gaps = []
prev = text_start
for a, b, n in ranges:
    if a > prev:
        gaps.append((prev, a, a - prev))
    prev = max(prev, b)
if prev < text_end:
    gaps.append((prev, text_end, text_end - prev))
gaps.sort(key=lambda x: -x[2])
print('functions', len(ranges), 'gaps', len(gaps))
for start, end, size in gaps[:25]:
    off = va_to_off(segs, start)
    data = d[off:off+min(size, 24)] if off is not None else b''
    print(hex(start), hex(end), size, data.hex(' '))
