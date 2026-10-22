"""Assemble the six tested reader words and compare against the required DCD values.

Line-based parse (regex splitting kept failing on blank lines / @ comments).

The tested hook file tagged these as `instr` with mangled-looking text such as
    instruction: mlaseq fp, r8, lr, ip        @ address 0x0078C58C
That is just how the target dword disassembles. If clang reproduces the dword, the
build was byte-correct. If not, the build wrote a wrong PC-relative table pointer,
which corrupts every mode lookup.
"""
import io
import os
import re
import struct
import subprocess
import tempfile

HOOKS = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\sweetdx\hooks_reference\mode_tables.hks"
CLANG = r"C:\Program Files\LLVM\bin\clang.exe"

REQUIRED = {
    0x0078C58C: 0x003BCE98,
    0x0078E604: 0x003BAE18,
    0x0078E7E8: 0x003BADA8,
    0x00795FF0: 0x003B3664,
    0x007960F8: 0x003B3390,
    0x007982D8: 0x003B11E0,
}

# ---- parse hooks ----------------------------------------------------------
hooks = []
cur = None
for raw in io.open(HOOKS, encoding="utf-8").read().splitlines():
    if not raw.strip() or raw.strip().startswith("@"):
        continue
    if not raw[0].isspace():
        if cur:
            hooks.append(cur)
        cur = {"name": raw.strip().rstrip(":")}
        continue
    if cur is None:
        continue
    s = raw.strip()
    if s.startswith("address:"):
        cur["address"] = int(s.split(":", 1)[1].strip(), 16)
    elif s.startswith("type:"):
        cur["type"] = s.split(":", 1)[1].strip()
    elif s.startswith("instruction:"):
        v = s.split(":", 1)[1].strip()
        cur["instr"] = v.split("@")[0].strip()
    elif s.startswith("data:"):
        cur["data"] = bytes.fromhex("".join(s.split(":", 1)[1].split()))
if cur:
    hooks.append(cur)
hooks = [h for h in hooks if "address" in h]
print(f"parsed {len(hooks)} hooks\n")


def assemble(text):
    asm = f".syntax unified\n.arm\n{text}\n"
    with tempfile.TemporaryDirectory() as td:
        s, o = os.path.join(td, "a.s"), os.path.join(td, "a.o")
        io.open(s, "w", encoding="utf-8").write(asm)
        r = subprocess.run(
            [CLANG, "--target=armv7l-none-eabihf", "-mcpu=cortex-a57",
             "-mfpu=crypto-neon-fp-armv8", "-mfloat-abi=hard", "-mabi=aapcs-linux",
             "-c", s, "-o", o], capture_output=True, timeout=120)
        if r.returncode != 0:
            return None, r.stderr.decode("utf-8", "replace")[:200]
        d = io.open(o, "rb").read()
        shoff = struct.unpack_from("<I", d, 0x20)[0]
        shent = struct.unpack_from("<H", d, 0x2E)[0]
        shnum = struct.unpack_from("<H", d, 0x30)[0]
        for i in range(shnum):
            b = shoff + i * shent
            t, off, size = (struct.unpack_from("<I", d, b + 4)[0],
                            struct.unpack_from("<I", d, b + 16)[0],
                            struct.unpack_from("<I", d, b + 20)[0])
            if t == 1 and size >= 4:
                return struct.unpack_from("<I", d, off)[0], None
        return None, "no text"


print("=" * 90)
print("TESTED BUILD: the six reader words")
print("=" * 90)
wrong = 0
for h in hooks:
    a = h["address"]
    if a not in REQUIRED:
        continue
    if "instr" in h:
        got, err = assemble(h["instr"])
    else:
        got, err = (struct.unpack("<I", h["data"])[0] if h.get("data") else None), None
    want = REQUIRED[a]
    ok = got == want
    if not ok:
        wrong += 1
    print(f"\n  {h['name']}  @ {a:#010x}  ({h.get('type')})")
    print(f"    text   : {h.get('instr')!r}")
    print(f"    yields : {got:#010x}" if got is not None else f"    yields : ERR {err}")
    print(f"    want   : {want:#010x}   {'OK' if ok else '*** WRONG ***'}")

print(f"\n  wrong: {wrong}/6")
print("\n" + "=" * 90)
if wrong:
    print("""  The tested build wrote wrong PC-relative table pointers for those sites. Every
  mode lookup then read from an arbitrary address => global rendering corruption, and a
  crash once a bogus value was used as a pointer. `data` hooks with exact DCD bytes fix
  it (already done in the shipped mode_tables.hks).""")
else:
    print("""  All six reproduced the required bytes. The tested build's reader words were correct,
  so the crash is NOT explained by the mode tables. Attention moves to the remaining
  hooks: hammer_profile_cell (0xC61BE4), the three ActorInfo writes, and the 8 projectile
  hooks.""")
