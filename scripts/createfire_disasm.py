import sys, json
sys.path.insert(0, r'.rea')
from rpc import call

res = call('disassemble_function', {'start_address': '0x607AABA0'}, 90)
lines = res['lines'] if isinstance(res, dict) and 'lines' in res else res
print('type', type(res), 'keys', list(res.keys()) if isinstance(res, dict) else 'n/a')
if isinstance(lines, list):
    print('line keys', list(lines[0].keys()))
    for l in lines:
        a = l.get('address', '')
        try:
            ai = int(a, 16)
        except Exception:
            continue
        if 0x607aacf0 <= ai <= 0x607aada0:
            print(a, l.get('bytes', ''), l.get('instruction', ''))
else:
    print(str(lines)[:3000])
