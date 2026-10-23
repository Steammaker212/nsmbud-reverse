import json
import struct
import idapro
import idaapi

DB = r"C:\Users\Saif Khan\Downloads\main.idb\.rea\dbcopy\db.i64"
NSO = r"C:\Users\Saif Khan\Downloads\main.idb\.rea\nso-copy\main.nso"
OUT = r"C:\Users\Saif Khan\Downloads\main.idb\.rea\main.elf"

report = {}
idapro.enable_console_messages(False)

# ---------------------------------------------------------------- phase 1: names from the user's DB
import ida_bytes
import ida_funcs
import idautils

print("PHASE db-open", flush=True)
db_ok = idapro.open_database(DB, False)
print("PHASE db-opened", flush=True)
hdr = ida_bytes.get_bytes(0x60000000, 16)
report["db_opened"] = int(db_ok)
report["db_text16"] = hdr.hex() if hdr else None

syms = {}
nfunc = ida_funcs.get_func_qty()
for i in range(nfunc):
    f = ida_funcs.getn_func(i)
    if f is None:
        continue
    ea = f.start_ea
    nm = ida_funcs.get_func_name(ea) or ""
    if nm:
        syms[ea] = (nm, True, f.end_ea - f.start_ea)
print("PHASE db-funcs", nfunc, flush=True)
for ea, nm in idautils.Names():
    if ea in syms or not nm:
        continue
    syms[ea] = (nm, False, 0)
report["db_functions"] = nfunc
report["db_symbols"] = len(syms)
print("PHASE db-names", len(syms), flush=True)
idapro.close_database(False)

# ---------------------------------------------------------------- phase 2: NSO load layout
import ida_segment

print("PHASE nso-open", flush=True)
nso_ok = idapro.open_database(NSO, False, args='-T"Nintendo Switch"')
print("PHASE nso-opened", flush=True)
report["nso_opened"] = int(nso_ok)
report["nso_filetype"] = idaapi.get_file_type_name()
report["nso_imagebase"] = hex(idaapi.get_imagebase())

loads = []
for n in range(ida_segment.get_segm_qty()):
    s = ida_segment.getnseg(n)
    size = s.end_ea - s.start_ea
    nm = ida_segment.get_segm_name(s)
    nobits = nm == ".bss"
    data = None if nobits else (ida_bytes.get_bytes(s.start_ea, size) or b"")
    flags = 4
    if s.perm & 1:
        flags |= 1
    if s.perm & 2:
        flags |= 2
    loads.append({"name": nm, "addr": s.start_ea, "end": s.end_ea, "size": size,
                  "flags": flags, "nobits": nobits, "data": data})
loads.sort(key=lambda x: x["addr"])

kept = []
for seg in loads:
    if kept and seg["addr"] < kept[-1]["end"]:
        prev = kept[-1]
        report.setdefault("clipped_overlaps", []).append(seg["name"])
        prev["end"] = seg["addr"]
        prev["size"] = prev["end"] - prev["addr"]
        if prev["data"] is not None:
            prev["data"] = prev["data"][:prev["size"]]
    kept.append(seg)
loads = kept
report["segments"] = [{"name": s["name"], "start": hex(s["addr"]), "end": hex(s["end"]),
                       "nobits": s["nobits"]} for s in loads]
idapro.close_database(False)

# ---------------------------------------------------------------- phase 3: write ELF64 AArch64
lo = loads[0]["addr"]
hi = max(s["end"] for s in loads)
syms = {ea: v for ea, v in syms.items() if lo <= ea < hi}
report["symbols_in_image"] = len(syms)

entry = 0x60000024
for ea, (nm, isf, sz) in syms.items():
    if nm == "nnMain":
        entry = ea
        break

ehsize, phentsize, shentsize = 64, 56, 64
phnum = len(loads)

out = bytearray(b"\x00" * (ehsize + phentsize * phnum))
out += b"\x00" * ((-len(out)) % 0x1000)

def sec_align(addr):
    for a in (0x1000, 0x100, 0x10, 8, 4, 2, 1):
        if addr % a == 0:
            return a
    return 1


phdrs = []
secs = []
for seg in loads:
    sh_flags = 2 | (4 if seg["flags"] & 1 else 0) | (1 if seg["flags"] & 2 else 0)
    need = ((seg["addr"] % 0x1000) - (len(out) % 0x1000)) % 0x1000
    out += b"\x00" * need
    off = len(out)
    if seg["nobits"]:
        phdrs.append((1, seg["flags"], off, seg["addr"], seg["addr"], 0, seg["size"], 0x1000))
        secs.append({"name": seg["name"], "type": 8, "flags": sh_flags,
                     "addr": seg["addr"], "offset": off, "size": seg["size"],
                     "align": sec_align(seg["addr"])})
        continue
    data = seg["data"]
    if len(data) < seg["size"]:
        data = data + b"\x00" * (seg["size"] - len(data))
    phdrs.append((1, seg["flags"], off, seg["addr"], seg["addr"], len(data), len(data), 0x1000))
    secs.append({"name": seg["name"], "type": 1, "flags": sh_flags,
                 "addr": seg["addr"], "offset": off, "size": len(data),
                 "align": sec_align(seg["addr"])})
    out += data

report["seed_calls"] = 0

used = {}
for s in secs:
    nm = s["name"]
    if nm in used:
        used[nm] += 1
        s["name"] = f"{nm}.{used[nm]}"
    else:
        used[nm] = 0

def sec_index(ea):
    for i, seg in enumerate(loads, start=1):
        if seg["addr"] <= ea < seg["end"]:
            return i
    return 0

strtab = bytearray(b"\x00")
ents = [(0, 0, 0, 0, 0, 0)]
skipped = 0
for ea in sorted(syms):
    nm, isfunc, sz = syms[ea]
    enc = nm.encode("utf-8", "replace")
    if b"\x00" in enc or len(enc) > 2000:
        skipped += 1
        continue
    idx = sec_index(ea)
    if idx == 0:
        skipped += 1
        continue
    name_off = len(strtab)
    strtab += enc + b"\x00"
    ents.append((name_off, (1 << 4) | (2 if isfunc else 1), 0, idx, ea, sz))
report["elf_symbols"] = len(ents) - 1
report["skipped_symbols"] = skipped
symtab = b"".join(struct.pack("<IBBHQQ", *e) for e in ents)

out += b"\x00" * ((-len(out)) % 8)
sym_off = len(out)
out += symtab
str_off = len(out)
out += bytes(strtab)

symtab_idx = len(secs) + 1
strtab_idx = symtab_idx + 1
shstrtab_idx = strtab_idx + 1
all_names = [s["name"] for s in secs] + [".symtab", ".strtab", ".shstrtab"]
shstr = bytearray(b"\x00")
noff = {}
for nm in all_names:
    noff[nm] = len(shstr)
    shstr += nm.encode() + b"\x00"
shstr_off = len(out)
out += bytes(shstr)

out += b"\x00" * ((-len(out)) % 8)
sh_off = len(out)

shdrs = [(0, 0, 0, 0, 0, 0, 0, 0, 0, 0)]
for s in secs:
    shdrs.append((noff[s["name"]], s["type"], s["flags"], s["addr"], s["offset"],
                  s["size"], 0, 0, s["align"], s.get("entsize", 0)))
shdrs.append((noff[".symtab"], 2, 0, 0, sym_off, len(symtab), strtab_idx, 1, 8, 24))
shdrs.append((noff[".strtab"], 3, 0, 0, str_off, len(strtab), 0, 0, 1, 0))
shdrs.append((noff[".shstrtab"], 3, 0, 0, shstr_off, len(shstr), 0, 0, 1, 0))
shbytes = b"".join(struct.pack("<IIQQQQIIQQ", *s) for s in shdrs)
out += shbytes

ident = b"\x7fELF" + bytes([2, 1, 1, 0]) + b"\x00" * 8
ehdr = struct.pack("<16sHHIQQQIHHHHHH", ident, 2, 183, 1, entry, ehsize, sh_off, 0,
                   ehsize, phentsize, len(phdrs), shentsize, len(shdrs), shstrtab_idx)
phbytes = b"".join(struct.pack("<IIQQQQQQ", *p) for p in phdrs)
out[0:ehsize] = ehdr
out[ehsize:ehsize + len(phbytes)] = phbytes

with open(OUT, "wb") as f:
    f.write(out)

report["sections"] = len(shdrs)
report["entry"] = hex(entry)
report["output"] = OUT
report["file_size"] = len(out)
report["sh_off"] = hex(sh_off)
print("PHASE write-done", flush=True)
print("RESULT " + json.dumps(report), flush=True)







