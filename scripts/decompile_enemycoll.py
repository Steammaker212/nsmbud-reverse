import sys
sys.path.insert(0, r'.rea')
from rpc import call

for f in ['0x602A6AB8', '0x602A6DF4']:
    try:
        res = call('decompile_function', {'address': f}, 180)
        text = res if isinstance(res, str) else str(res)
        out = '.rea/enemy_coll_%s.c' % f
        open(out, 'w', encoding='utf-8').write(text)
        print('===== %s (%d bytes) =====' % (f, len(text)))
        print(text[:6000])
    except Exception as e:
        print('ERR', f, e)
