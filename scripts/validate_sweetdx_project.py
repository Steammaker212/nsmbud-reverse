#!/usr/bin/env python3
"""End-to-end check of the sweetdx/ project against every SweetDX requirement.

Runs without Deno (which is not installed here) by reimplementing the parts of
SweetDX that matter: the .hks parser, the .sym parser and linker conversion, the
hook-address arithmetic, and the actual clang compile of the C++ sources.
"""
import io
import os
import re
import struct
import subprocess
import sys
import tempfile

PROJ = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\sweetdx"
SRC = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.rebased.elf"
OUT = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.hammer_b.elf"

NSO_MEM = 0x00CD1000
NSO_HEADER = 0x100

FLAGS = [
    "--no-default-config", "--target=armv7l-none-eabihf",
    "-mcpu=cortex-a57", "-mfpu=crypto-neon-fp-armv8",
    "-mfloat-abi=hard", "-mabi=aapcs-linux", "-fPIC",
    "-nostdlib", "-fno-rtti", "-fno-exceptions", "-fpermissive", "-c",
]

results = []


def check(name, ok, detail=""):
    results.append((name, ok, detail))
    print(f"  [{'PASS' if ok else 'FAIL'}] {name}"
          + (f"  -- {detail}" if detail else ""))
    return ok


# ---------------------------------------------------------------- layout check
def check_layout():
    need = ["code", "hooks", "symbols", "include"]
    missing = [d for d in need if not os.path.isdir(os.path.join(PROJ, d))]
    ok = not missing
    check("project has code/hooks/symbols/include", ok,
          f"missing {missing}" if missing else "")
    # nso/main is supplied by the user
    has_nso = os.path.isfile(os.path.join(PROJ, "nso", "main"))
    print(f"       (nso/main present: {has_nso} -- user must supply this)")
    return ok


# ------------------------------------------------------------------ sym check
def check_sym():
    p = os.path.join(PROJ, "symbols", "nsmbudx.sym")
    if not os.path.isfile(p):
        return check("symbols/nsmbudx.sym exists", False)
    txt = io.open(p, encoding="utf-8").read()
    pat = re.compile(r"^([^\s=]+)\s*=\s*(-?0x[0-9a-fA-F]+)\s*;?$", re.I)
    seen, addrs, bad = set(), [], []
    for i, line in enumerate(txt.split("\n"), 1):
        s = line.split("#")[0].strip()
        if not s:
            continue
        m = pat.match(s)
        if not m:
            bad.append((i, line))
            continue
        nm, hx = m.group(1), m.group(2)
        a = int(hx, 16)
        if nm in seen:
            bad.append((i, f"duplicate {nm}"))
        if a < 0 or a >= NSO_MEM:
            bad.append((i, f"address {hx} outside image"))
        seen.add(nm)
        addrs.append(a)
    ok = check("sym parses, unique, all in-image", not bad,
               f"{len(seen)} symbols" if not bad else f"{bad[:3]}")
    # every name must be a legal ld symbol (SweetDX writes them into a linker script)
    legal = all(re.fullmatch(r"[A-Za-z_.$][A-Za-z0-9_.$]*", n) for n in seen)
    check("all symbol names are linker-legal", legal)
    return ok and legal


# ------------------------------------------------------------------ hks check
HOOK_HEADER = re.compile(r"^(\S+):$")
FIELD = re.compile(r"^\s+([A-Za-z_][A-Za-z0-9_]*)\s*:\s*(.*)$")
SPEC = {
    "hook":  {"required": ["type", "address", "symbol"], "optional": ["trampoline"]},
    "call":  {"required": ["type", "address", "symbol"], "optional": []},
    "instr": {"required": ["type", "address", "instruction"], "optional": []},
    "data":  {"required": ["type", "address", "data"], "optional": []},
}


def strip_comment(line):
    return re.sub(r"(^|\s)@.*$", r"\1", line).rstrip()


def dehexify(s):
    d = re.sub(r"\s+", "", s).lower()
    sign = 1
    if d.startswith("-"):
        sign, d = -1, d[1:]
    if d.startswith("0x"):
        d = d[2:]
    if not re.fullmatch(r"[0-9a-f]+", d):
        raise ValueError(f"bad hex {s!r}")
    return sign * int(d, 16)


def parse_hks(text):
    hooks, name, fields = [], None, {}

    def finalize():
        if name is None:
            return
        t = fields.get("type", {}).get("value")
        if t not in SPEC:
            raise ValueError(f'hook "{name}" bad type')
        for r in SPEC[t]["required"]:
            if r not in fields:
                raise ValueError(f'hook "{name}" missing {r}')
        for k in fields:
            if k not in SPEC[t]["required"] and k not in SPEC[t]["optional"]:
                raise ValueError(f'hook "{name}" unknown field {k}')
        addr = dehexify(fields["address"]["value"])
        if addr < 0:
            raise ValueError(f'hook "{name}" negative address')
        if t in ("hook", "call", "instr") and addr % 4:
            raise ValueError(f'hook "{name}" unaligned {addr:#x}')
        d = {"name": name, "type": t, "address": addr}
        if t == "instr":
            d["instruction"] = fields["instruction"]["value"]
        elif t == "data":
            toks = [x for x in re.split(r"\s+", fields["data"]["value"].strip()) if x]
            comb = "".join(re.sub(r"^0x", "", x, flags=re.I) for x in toks)
            if len(comb) % 2:
                raise ValueError(f'hook "{name}" odd hex')
            d["data"] = bytes.fromhex(comb)
        hooks.append(d)

    for i, raw in enumerate(text.split("\n"), 1):
        line = strip_comment(raw)
        if not line.strip():
            continue
        if not re.match(r"^\s", line):
            finalize()
            m = HOOK_HEADER.match(line.strip())
            if not m:
                raise ValueError(f"bad header line {i}: {raw!r}")
            if any(h["name"] == m.group(1) for h in hooks):
                raise ValueError(f'duplicate hook {m.group(1)}')
            name, fields = m.group(1), {}
            continue
        if name is None:
            raise ValueError(f"field before header line {i}")
        m = FIELD.match(line)
        if not m:
            raise ValueError(f"bad field line {i}: {raw!r}")
        k, v = m.group(1), m.group(2).strip()
        if k in fields:
            raise ValueError(f'duplicate field {k} in {name}')
        fields[k] = {"value": v}
    finalize()
    return hooks


def read_section(data, name):
    shoff = struct.unpack_from("<I", data, 0x20)[0]
    shent = struct.unpack_from("<H", data, 0x2E)[0]
    shnum = struct.unpack_from("<H", data, 0x30)[0]
    shstr = struct.unpack_from("<H", data, 0x32)[0]
    stro = struct.unpack_from("<I", data, shoff + shstr * shent + 16)[0]
    for i in range(shnum):
        b = shoff + i * shent
        n = struct.unpack_from("<I", data, b)[0]
        end = data.index(b"\0", stro + n)
        if data[stro + n:end].decode() == name:
            so = struct.unpack_from("<I", data, b + 16)[0]
            sz = struct.unpack_from("<I", data, b + 20)[0]
            return data[so:so + sz]
    return None


def assemble(text):
    with tempfile.TemporaryDirectory() as td:
        s, o = os.path.join(td, "t.s"), os.path.join(td, "t.o")
        io.open(s, "w", encoding="utf-8").write(
            '.section ".instruction"\n.arm\n'
            f'.fpu crypto-neon-fp-armv8\n    {text.strip()}\n')
        r = subprocess.run(["clang++", *FLAGS, s, "-o", o],
                           capture_output=True, text=True)
        if r.returncode:
            return None
        d = io.open(o, "rb").read()
        sec = read_section(d, ".instruction")
        return sec if sec and len(sec) == 4 else None


def segs(data):
    ph = struct.unpack_from("<I", data, 0x1C)[0]
    ents = struct.unpack_from("<H", data, 0x2A)[0]
    n = struct.unpack_from("<H", data, 0x2C)[0]
    out = []
    for i in range(n):
        b = ph + i * ents
        if struct.unpack_from("<I", data, b)[0] == 1:
            out.append((struct.unpack_from("<I", data, b + 8)[0],
                        struct.unpack_from("<I", data, b + 16)[0],
                        struct.unpack_from("<I", data, b + 4)[0]))
    return out


def check_hooks():
    d = os.path.join(PROJ, "hooks")
    files = sorted(f for f in os.listdir(d) if f.endswith(".hks"))
    allh, err = [], None
    for fn in files:
        try:
            allh.extend(parse_hks(io.open(os.path.join(d, fn), encoding="utf-8").read()))
        except ValueError as e:
            err = f"{fn}: {e}"
            break
    if not check("all .hks parse under SweetDX rules", err is None,
                 err or f"{len(files)} files, {len(allh)} hooks"):
        return False

    names = [h["name"] for h in allh]
    addrs = [h["address"] for h in allh]
    check("hook names unique", len(set(names)) == len(names))
    check("hook addresses unique", len(set(addrs)) == len(addrs))

    # every instruction hook must assemble
    bad = []
    for h in allh:
        if h["type"] == "instr":
            if assemble(h["instruction"]) is None:
                bad.append(h["name"])
    check("every instr hook assembles", not bad, str(bad[:3]) if bad else "")

    # reproduce the diff
    a = io.open(SRC, "rb").read()
    b = io.open(OUT, "rb").read()
    SA, SB = segs(a), segs(b)

    patched = {}
    for h in allh:
        va = 0x60000000 + h["address"]
        patched[va] = assemble(h["instruction"]) if h["type"] == "instr" else h["data"]

    def off2va(S, o):
        for v, sz, so in S:
            if so <= o < so + sz:
                return v + (o - so)
        return None

    diffs = [i for i in range(min(len(a), len(b))) if a[i] != b[i]]
    expected = sorted({(off2va(SA, i) // 4) * 4 for i in diffs if off2va(SA, i)})

    missing = [v for v in expected if v not in patched]
    extra = [v for v in patched if v not in expected]
    check("hooks cover every changed word", not missing,
          str([hex(v) for v in missing[:3]]) if missing else f"{len(expected)} words")
    check("no hook targets an unchanged word", not extra,
          str([hex(v) for v in extra[:3]]) if extra else "")

    mism = 0
    def va2off(S, va):
        for v, sz, so in S:
            if v <= va < v + sz:
                return so + va - v
        return None

    for va, data in patched.items():
        o = va2off(SB, va)
        if o is None or b[o:o + len(data)] != data:
            mism += 1
    check("hook bytes equal patched bytes", mism == 0, f"{mism} mismatches")
    return not missing and not extra and mism == 0


# ------------------------------------------------------------------ compile
def check_compile():
    srcs = []
    for root, _, fs in os.walk(os.path.join(PROJ, "code")):
        for f in fs:
            if f.endswith((".cpp", ".c")):
                srcs.append(os.path.join(root, f))
    failed = []
    with tempfile.TemporaryDirectory() as td:
        for s in srcs:
            o = os.path.join(td, os.path.basename(s) + ".o")
            r = subprocess.run(["clang++", *FLAGS,
                                "-I", os.path.join(PROJ, "include"),
                                s, "-o", o],
                               capture_output=True, text=True)
            if r.returncode:
                failed.append((os.path.basename(s),
                               r.stderr.strip().splitlines()[:2]))
    ok = check(f"all {len(srcs)} C++ sources compile", not failed)
    for f, e in failed:
        print(f"       {f}: {e}")
    return ok


def main():
    print("=== sweetdx project validation ===\n")
    check_layout()
    check_sym()
    check_hooks()
    check_compile()
    n_pass = sum(1 for _, ok, _ in results if ok)
    print(f"\n=== {n_pass}/{len(results)} checks passed ===")
    return 0 if n_pass == len(results) else 1


if __name__ == "__main__":
    sys.exit(main())
