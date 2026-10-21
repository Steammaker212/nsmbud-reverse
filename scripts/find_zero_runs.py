import sys, json
sys.path.insert(0, r'.rea')
from elfutil import load_elf, va_to_off

d, segs = load_elf(r'convertedmain.rebased.elf')
funcs = json.load(open(r'.rea/functions_all.json'))['data']
text_start, text_size = 0x60000000, 0x9AEC10
text_end = text_start + text_size

# mark covered
covered = bytearray(text_size)
for f in funcs:
    try:
        a = int(f['address'], 16)
        s = int(f['size'], 16)
    except Exception:
        continue
    if text_start <= a < text_end:
        lo = a - text_start
        hi = min(lo + max(s, 4), text_size)
        covered[lo:hi] = b'\x01' * (hi - lo)

base_off = va_to_off(segs, text_start)
data = d[base_off:base_off+text_size]

def runs(byte, minlen=64):
    out = []
    i = 0
    while i < len(data):
        if data[i] == byte:
            j = i
            while j < len(data) and data[j] == byte:
                j += 1
            if j - i >= minlen:
                out.append((i, j))
            i = j
        else:
            i += 1
    return out

for byte, label in [(0x00, 'zero'), (0xff, 'ff')]:
    print('=== %s runs ===' % label)
    found = 0
    for i, j in runs(byte):
        # check uncovered
        seg = covered[i:j]
        if seg.count(1) == 0:
            print(hex(text_start+i), hex(text_start+j), j-i, 'uncovered')
            found += 1
        elif j - i >= 256:
            # print large runs even if partially covered
            first_uncovered = seg.find(0)
            print(hex(text_start+i), hex(text_start+j), j-i, 'covered', 'first_uncovered', first_uncovered)
            found += 1
        if found >= 20:
            break
