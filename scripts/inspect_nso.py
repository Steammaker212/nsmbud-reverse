import json
import idapro
import idaapi
import ida_segment
import ida_entry
import ida_bytes

PATH = r"C:\Users\Saif Khan\Downloads\main.idb\.rea\nso-copy\main.nso"

idapro.enable_console_messages(True)
ok = idapro.open_database(PATH, False, args='-T"Nintendo Switch"')
info = {
    "opened": int(ok) if isinstance(ok, int) else bool(ok),
    "filetype": idaapi.get_file_type_name(),
    "imagebase": hex(idaapi.get_imagebase()),
}
segs = []
for n in range(ida_segment.get_segm_qty()):
    s = ida_segment.getnseg(n)
    first = ida_bytes.get_bytes(s.start_ea, 16)
    segs.append({
        "name": ida_segment.get_segm_name(s),
        "start": hex(s.start_ea),
        "end": hex(s.end_ea),
        "perm": s.perm,
        "bitness": s.bitness,
        "first16": first.hex() if first else None,
    })
info["segments"] = segs
ents = []
for i in range(ida_entry.get_entry_qty()):
    o = ida_entry.get_entry_ordinal(i)
    ents.append({"ea": hex(ida_entry.get_entry(o)), "name": ida_entry.get_entry_name(o)})
info["entries"] = ents
print("RESULT " + json.dumps(info), flush=True)
idapro.close_database(False)
