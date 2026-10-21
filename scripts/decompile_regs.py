import sys, re
sys.path.insert(0, r'.rea')
from rpc import call

funcs = ['0x6013A5A8', '0x6013CA14', '0x60141F1C', '0x601437F4']
for f in funcs:
    try:
        res = call('decompile_function', {'address': f}, 180)
        text = res if isinstance(res, str) else str(res)
        out = '.rea/reg_%s.c' % f
        open(out, 'w', encoding='utf-8').write(text)
        print('===== %s (%d bytes) =====' % (f, len(text)))
        for line in text.splitlines():
            if re.search(r'Profile::Profile|Profile::get|AF349|AF390|AF366|AF367|Profile\(', line):
                print(line.strip())
    except Exception as e:
        print('ERR', f, e)
