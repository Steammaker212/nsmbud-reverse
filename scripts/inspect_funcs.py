import json
funcs = json.load(open(r'.rea/functions_all.json'))
print(type(funcs))
if isinstance(funcs, dict):
    print('keys', list(funcs.keys())[:10])
    for k, v in funcs.items():
        print('key', k, 'type', type(v), 'len', len(v) if hasattr(v, '__len__') else None)
        if isinstance(v, list) and v:
            print('first', v[0])
            print('last', v[-1])
        break
