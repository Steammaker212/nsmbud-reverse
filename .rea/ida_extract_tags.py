"""EXTRACT the full constructor -> game-internal debug name mapping as DATA.

Two findings from the previous run:

  1. The strings ARE the game's own per-entity debug tags, e.g.
         'ボスK.K.'                  (Boss K.K.)
         'ボスK.K.デモ管理タグ'      (Boss K.K. demo management tag)
         'デモ用カメック'            (Kamek, for demo use)
         'ボスK.K.の雷'              (Boss K.K.'s lightning)
  2. IDA refuses to use them as identifiers: set_name returned False for all 775, because the
     names are non-ASCII. So they cannot become function names directly.

What they ARE good for: an authoritative RVA -> internal-name table. That is worth shipping
because it identifies 775 actor constructors by the name the developers themselves used, and
it lets a reader join a `sub_XXXX` to a real entity.

This writes that table as UTF-8 JSON and a readable text listing, and additionally names the
constructors whose tag happens to be pure ASCII. No CJK names are forced into the IDB.
"""
import json
import os
import re
import idautils
import ida_funcs
import ida_name
import ida_bytes
import ida_hexrays
import idc
import ida_auto
import idaapi

idc.auto_wait()
BASE = 0x60000000
REA = r"C:\Users\Saif Khan\Downloads\main.idb\.rea"
out = []


def log(s=""):
    out.append(s)


def read_bytes(ea, maxlen=96):
    b = bytearray()
    for i in range(maxlen):
        c = ida_bytes.get_byte(ea + i)
        if c == 0:
            break
        b.append(c)
    return bytes(b)


def decode(b):
    for enc in ("utf-8", "shift_jis"):
        try:
            s = b.decode(enc)
            if s:
                return s
        except Exception:
            continue
    return None


def ascii_ident(s):
    if not s or not re.fullmatch(r"[A-Za-z][A-Za-z0-9_]{1,60}", s):
        return None
    return s


records = json.load(open(os.path.join(REA, "out_profile_map.json"), encoding="utf-8"))
by_regfn = {}
for r in records:
    by_regfn.setdefault(r["reg_fn"], []).append(r)

SYM_RE = re.compile(r"&\s*([A-Za-z_][A-Za-z0-9_]*)")

table = []
for regfn, recs in by_regfn.items():
    ea = BASE + regfn
    if not ida_funcs.get_func(ea):
        continue
    try:
        cf = ida_hexrays.decompile(ea)
    except Exception:
        continue
    if not cf:
        continue
    text = str(cf)
    if "Profile" not in text:
        continue
    cands = []
    for m in SYM_RE.finditer(text):
        sym = m.group(1)
        se = idc.get_name_ea_simple(sym)
        if se == idc.BADADDR:
            continue
        raw = read_bytes(se)
        if len(raw) < 2:
            continue
        s = decode(raw)
        if s:
            cands.append(s)
    if not cands:
        continue
    tag = cands[-1]
    for r in recs:
        table.append({
            "ctor_rva": r["ctor_rva"],
            "reg_fn": regfn,
            "profile_id": r.get("profile_id"),
            "actor_id": r.get("actor_id"),
            "internal_name": tag,
        })

# dedupe by ctor
uniq = {}
for t in table:
    uniq.setdefault(t["ctor_rva"], t)
table = [uniq[k] for k in sorted(uniq)]

log(f"mapped constructors: {len(table)}")
nonascii = sum(1 for t in table if any(ord(ch) > 127 for ch in t["internal_name"]))
log(f"  with non-ASCII names: {nonascii}")
log(f"  with ASCII names    : {len(table) - nonascii}")

from collections import Counter
c = Counter(t["internal_name"] for t in table)
log(f"  distinct names       : {len(c)}")

# name only the ASCII ones
applied = 0
for t in table:
    ident = ascii_ident(t["internal_name"])
    if not ident:
        continue
    ea = BASE + t["ctor_rva"]
    cur = ida_name.get_name(ea) or ""
    if cur and not cur.startswith("sub_"):
        continue
    f = ida_funcs.get_func(ea)
    if not f or f.start_ea != ea:
        continue
    if ida_name.set_name(ea, f"Actor_{ident}_build", ida_name.SN_NOWARN):
        applied += 1
        log(f"  named {t['ctor_rva']:#010x} -> Actor_{ident}_build")

log(f"  ASCII names applied : {applied}")

# ship the data
os.makedirs(r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled\data", exist_ok=True)
jp = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled\data\actor_internal_names.json"
with open(jp, "w", encoding="utf-8") as fh:
    json.dump(table, fh, ensure_ascii=False, indent=1)

tp = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\decompiled\data\actor_internal_names.txt"
with open(tp, "w", encoding="utf-8", newline="\n") as fh:
    fh.write("# Actor constructor -> internal debug name, NSMBU Deluxe v1.0.0 (Switch)\n")
    fh.write("# Extracted from the name struct passed as the 4th argument to\n")
    fh.write("# Profile::Profile in each registration function.\n")
    fh.write("# Names are the developers' own Japanese debug tags, UTF-8.\n")
    fh.write("# IDA rejects these as identifiers (non-ASCII), so they are data, not symbols.\n")
    fh.write("#\n# ctor_rva   profile_id  internal_name\n")
    for t in sorted(table, key=lambda x: x["ctor_rva"]):
        fh.write(f"{t['ctor_rva']:#010x}  {str(t['profile_id']):>10}  {t['internal_name']}\n")

idaapi.save_database("", 0)
log(f"wrote {jp}")
log(f"wrote {tp}")
txt = "\n".join(out)
print(txt[:4000])
