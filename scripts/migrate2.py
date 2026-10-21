import json
import time

import idapro
import ida_bytes
import ida_funcs
import ida_name

ELF = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.rebased.elf"
META = r"C:\Users\Saif Khan\Downloads\main.idb\.rea\dbmeta.json"

with open(META, encoding="utf-8") as fh:
    meta = json.load(fh)
funcs = meta["funcs"]
names = meta["names"]
comments = meta["comments"]
print("meta funcs=%d names=%d comments=%d" % (len(funcs), len(names), len(comments)), flush=True)

idapro.enable_console_messages(False)
idapro.open_database(ELF, True)
print("analyzed funcs=%d" % ida_funcs.get_func_qty(), flush=True)

t0 = time.time()
adjusted = 0
added = 0
failed = 0
for idx, (s, e) in enumerate(funcs):
    f = ida_funcs.get_func(s)
    if f is not None:
        if f.end_ea == e:
            continue
        ida_funcs.del_func(f.start_ea)
        if ida_funcs.add_func(s, e):
            adjusted += 1
        else:
            failed += 1
    else:
        if ida_funcs.add_func(s, e):
            added += 1
        else:
            failed += 1
    if idx and idx % 5000 == 0:
        print("PHASE funcs %d adjusted=%d added=%d failed=%d secs=%d"
              % (idx, adjusted, added, failed, int(time.time() - t0)), flush=True)
print("PHASE funcs-done adjusted=%d added=%d failed=%d secs=%d"
      % (adjusted, added, failed, int(time.time() - t0)), flush=True)
print("FUNCS now %d" % ida_funcs.get_func_qty(), flush=True)

applied_names = 0
for ea, nm in names:
    if ida_name.set_name(ea, nm, ida_name.SN_NOWARN | ida_name.SN_FORCE):
        applied_names += 1
print("PHASE names applied=%d" % applied_names, flush=True)

applied_comments = 0
for ea, cmt, rep in comments:
    try:
        ida_bytes.set_cmt(ea, cmt, rep)
        applied_comments += 1
    except Exception:
        pass
print("PHASE comments applied=%d" % applied_comments, flush=True)

idapro.close_database(True)
print("PHASE saved", flush=True)
