import sys, re
sys.path.insert(0, r'.rea')
from rpc import call

funcs = ['0x601425DC', '0x60140F90', '0x60136F64', '0x6013B808']
for f in funcs:
    try:
        res = call('decompile_function', {'address': f}, 180)
        text = res if isinstance(res, str) else str(res)
        out = '.rea/slot_%s.c' % f
        open(out, 'w', encoding='utf-8').write(text)
        print('===== %s (%d bytes) =====' % (f, len(text)))
        # print only lines with +86/+87 or calls
        for line in text.splitlines():
            if re.search(r'\+ 86|\+ 87|\+ 533|sub_|onCreate|\+ 84', line):
                print(line.strip())
    except Exception as e:
        print('ERR', f, e)
