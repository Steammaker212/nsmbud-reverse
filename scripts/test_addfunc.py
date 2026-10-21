import json

import idapro
import ida_funcs

ELF = r"C:\Users\Saif Khan\Downloads\main.idb\.rea\main.elf"
META = r"C:\Users\Saif Khan\Downloads\main.idb\.rea\dbmeta.json"

with open(META, encoding="utf-8") as fh:
    funcs = json.load(fh)["funcs"]

idapro.enable_console_messages(False)
idapro.open_database(ELF, True)
print("analyzed funcs", ida_funcs.get_func_qty(), flush=True)

ok = 0
fail = 0
for s, e in funcs[:30]:
    f = ida_funcs.get_func(s)
    if f is not None:
        ida_funcs.del_func(f.start_ea)
    if ida_funcs.add_func(s, e):
        ok += 1
    else:
        fail += 1
        if fail <= 5:
            print("FAIL", hex(s), hex(e), "old", None if f is None else hex(f.start_ea), flush=True)
print("del-containing + add: ok", ok, "fail", fail, flush=True)
f = ida_funcs.get_func(0x60000024)
print("_init now", None if f is None else (hex(f.start_ea), hex(f.end_ea)), flush=True)
idapro.close_database(False)
