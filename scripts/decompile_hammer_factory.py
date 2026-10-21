import sys
sys.path.insert(0, r'.rea')
from rpc import call

for f in ['0x6013F02C']:
    try:
        res = call('decompile_function', {'address': f}, 180)
        text = res if isinstance(res, str) else str(res)
        out = '.rea/func_%s.c' % f
        open(out, 'w', encoding='utf-8').write(text)
        print('===== %s (%d bytes) =====' % (f, len(text)))
        print(text)
    except Exception as e:
        print('ERR', f, e)
