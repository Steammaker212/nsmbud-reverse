import json
import time

import idapro
import idaapi
import ida_bytes
import ida_funcs
import ida_name
import idautils

DB = r"C:\Users\Saif Khan\Downloads\main.idb\.rea\dbcopy\db.i64"
ELF = r"C:\Users\Saif Khan\Downloads\main.idb\.rea\main.elf"
META = r"C:\Users\Saif Khan\Downloads\main.idb\.rea\dbmeta.json"

idapro.enable_console_messages(False)

# ---------------------------------------------------------------- export metadata
print("PHASE export-open", flush=True)
idapro.open_database(DB, False)
funcs = []
for i in range(ida_funcs.get_func_qty()):
    f = ida_funcs.getn_func(i)
    if f is not None:
        funcs.append((f.start_ea, f.end_ea))
names = [(ea, nm) for ea, nm in idautils.Names() if nm]
comments = []
try:
    for ea, cmt, rep in idautils.Comments():
        comments.append((ea, cmt, int(rep)))
except Exception:
    addrs = {f[0] for f in funcs} | {ea for ea, _ in names}
    for ea in addrs:
        c0 = ida_bytes.get_cmt(ea, 0)
        c1 = ida_bytes.get_cmt(ea, 1)
        if c0:
            comments.append((ea, c0, 0))
        if c1:
            comments.append((ea, c1, 1))
with open(META, "w", encoding="utf-8") as fh:
    json.dump({"funcs": funcs, "names": names, "comments": comments}, fh)
print("PHASE export-done funcs=%d names=%d comments=%d" % (len(funcs), len(names), len(comments)), flush=True)
idapro.close_database(False)

# ---------------------------------------------------------------- apply onto the ELF
print("PHASE apply-open", flush=True)
idapro.open_database(ELF, True)
print("PHASE apply-analyzed funcs=%d" % ida_funcs.get_func_qty(), flush=True)

added = 0
failed = 0
t0 = time.time()
for idx, (s, e) in enumerate(funcs):
    f = ida_funcs.get_func(s)
    if f is not None and f.end_ea == e:
        continue
    if f is not None:
        ida_funcs.del_func(s)
    if ida_funcs.add_func(s, e):
        added += 1
    else:
        failed += 1
    if idx and idx % 5000 == 0:
        print("PHASE apply %d added=%d failed=%d secs=%d" % (idx, added, failed, int(time.time() - t0)), flush=True)
print("PHASE funcs-done added=%d failed=%d secs=%d" % (added, failed, int(time.time() - t0)), flush=True)

applied_names = 0
for ea, nm in names:
    if ida_name.set_name(ea, nm, ida_name.SN_NOWARN | ida_name.SN_FORCE):
        applied_names += 1
print("PHASE names-done applied=%d" % applied_names, flush=True)

applied_comments = 0
for ea, cmt, rep in comments:
    try:
        ida_bytes.set_cmt(ea, cmt, rep)
        applied_comments += 1
    except Exception:
        pass
print("PHASE comments-done applied=%d" % applied_comments, flush=True)

idapro.close_database(True)
print("PHASE saved", flush=True)
