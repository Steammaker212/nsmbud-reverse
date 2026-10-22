#!/usr/bin/env python3
"""Validate generated .hks files by reimplementing SweetDX's Hks parser exactly.

Ported from refs/sweetdx/modules/wisdom/lib/hks.ts so failures here are the same
failures SweetDX would raise. Also assembles every `instruction` hook and writes
a flat IPS-equivalent byte map for cross-checking against the ELF diff.
"""
import os
import re
import struct
import subprocess
import sys
import tempfile

PROJ = r"C:\Users\Saif Khan\Downloads\nsmbud-reverse\sweetdx"
SRC = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.rebased.elf"
OUT = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.hammer_b.elf"
NSO_HEADER = 0x100

FLAGS = [
    "--no-default-config", "--target=armv7l-none-eabihf",
    "-mcpu=cortex-a57", "-mfpu=crypto-neon-fp-armv8",
    "-mfloat-abi=hard", "-mabi=aapcs-linux", "-fPIC",
    "-nostdlib", "-fno-rtti", "-fno-exceptions", "-fpermissive", "-c",
]

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
        raise ValueError(f"Invalid hexadecimal number: {s!r}")
    return sign * int(d, 16)


def parse_data_bytes(value):
    toks = [t for t in re.split(r"\s+", value.strip()) if t]
    combined = "".join(re.sub(r"^0x", "", t, flags=re.I) for t in toks)
    if not combined or not re.fullmatch(r"[0-9a-fA-F]*", combined):
        raise ValueError(f"Invalid data bytes: {value!r}")
    if len(combined) % 2:
        raise ValueError(f"Odd hex digit count: {value!r}")
    return bytes.fromhex(combined)


def parse_hks(text, path):
    hooks = []
    name, name_line, fields = None, 0, {}

    def finalize():
        if name is not None:
            t = fields.get("type", {}).get("value")
            if t not in SPEC:
                raise ValueError(f'hook "{name}" (line {name_line}) bad/missing type')
            spec = SPEC[t]
            for r in spec["required"]:
                if r not in fields:
                    raise ValueError(f'hook "{name}" missing "{r}"')
            for k in fields:
                if k not in spec["required"] and k not in spec["optional"]:
                    raise ValueError(f'hook "{name}" unknown field "{k}" for type {t}')
            af = fields["address"]
            addr = dehexify(af["value"])
            if addr < 0:
                raise ValueError(f'hook "{name}" negative address')
            if t in ("hook", "call", "instr") and addr % 4:
                raise ValueError(f'hook "{name}" address 0x{addr:X} not 4-aligned')
            d = {"name": name, "type": t, "address": addr, "line": name_line}
            if t == "instr":
                d["instruction"] = fields["instruction"]["value"]
            elif t == "data":
                d["data"] = parse_data_bytes(fields["data"]["value"])
            hooks.append(d)

    for i, raw in enumerate(text.split("\n"), 1):
        line = strip_comment(raw)
        if not line.strip():
            continue
        if not re.match(r"^\s", line):
            finalize()
            m = HOOK_HEADER.match(line.strip())
            if not m:
                raise ValueError(f"invalid hook header line {i}: {raw!r}")
            if any(h["name"] == m.group(1) for h in hooks):
                raise ValueError(f'duplicate hook "{m.group(1)}" line {i}')
            name, name_line, fields = m.group(1), i, {}
            continue
        if name is None:
            raise ValueError(f"field before any header line {i}")
        m = FIELD.match(line)
        if not m:
            raise ValueError(f"invalid field line {i}: {raw!r}")
        k, v = m.group(1), m.group(2).strip()
        if k in fields:
            raise ValueError(f'duplicate field "{k}" in "{name}" line {i}')
        fields[k] = {"value": v, "line": i}
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
        with open(s, "w", encoding="utf-8") as f:
            f.write('.section ".instruction"\n.arm\n'
                    f'.fpu crypto-neon-fp-armv8\n    {text.strip()}\n')
        r = subprocess.run(["clang++", *FLAGS, s, "-o", o],
                           capture_output=True, text=True)
        if r.returncode:
            return None, r.stderr.strip().splitlines()[-1][:160]
        with open(o, "rb") as f:
            d = f.read()
        sec = read_section(d, ".instruction")
        if not sec or len(sec) != 4:
            return None, "no 4-byte .instruction"
        return sec, None


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


def main():
    hook_dir = os.path.join(PROJ, "hooks")
    files = sorted(f for f in os.listdir(hook_dir) if f.endswith(".hks"))

    all_hooks = []
    ok = True
    for fn in files:
        p = os.path.join(hook_dir, fn)
        try:
            hs = parse_hks(open(p, encoding="utf-8").read(), p)
            all_hooks.extend(hs)
            print(f"  OK  hooks/{fn:26} {len(hs)} hooks")
        except ValueError as e:
            print(f"  FAIL hooks/{fn}: {e}")
            ok = False
    if not ok:
        return 1

    names = [h["name"] for h in all_hooks]
    addrs = [h["address"] for h in all_hooks]
    if len(set(names)) != len(names):
        print("  FAIL duplicate hook names across files")
        return 1
    if len(set(addrs)) != len(addrs):
        dup = [hex(a) for a in addrs if addrs.count(a) > 1]
        print(f"  FAIL duplicate addresses: {dup}")
        return 1
    print(f"\n  {len(all_hooks)} hooks parsed, names unique, addresses unique")

    # build the ipso facto patch map and compare to the ELF diff
    a = open(SRC, "rb").read()
    b = open(OUT, "rb").read()
    SA, SB = segs(a), segs(b)

    patched = {}
    for h in all_hooks:
        va = 0x60000000 + h["address"]
        if h["type"] == "instr":
            data, err = assemble(h["instruction"])
            if data is None:
                print(f"  FAIL assemble {h['name']}: {err}")
                return 1
        else:
            data = h["data"]
        patched[va] = data

    # expected: every changed word covered
    diffs = [i for i in range(min(len(a), len(b))) if a[i] != b[i]]

    def off2va(S, o):
        for v, sz, so in S:
            if so <= o < so + sz:
                return v + (o - so)
        return None

    expected = sorted({(off2va(SA, i) // 4) * 4 for i in diffs if off2va(SA, i)})
    got = sorted(patched)
    missing = [v for v in expected if v not in patched]
    extra = [v for v in got if v not in expected]

    print(f"\n  changed words in ELF : {len(expected)}")
    print(f"  words covered by hks : {len(got)}")
    print(f"  missing from hks     : {len(missing)}")
    for v in missing:
        print(f"      UNCOVERED {v:#010x}")
    print(f"  hks words not changed: {len(extra)}")
    for v in extra:
        print(f"      EXTRA     {v:#010x}")

    # verify bytes match exactly
    mism = 0
    for va, data in patched.items():
        o = None
        for v, sz, so in SB:
            if v <= va < v + sz:
                o = so + va - v
                break
        if o is None:
            print(f"      {va:#x} not in image")
            mism += 1
            continue
        actual = b[o:o + len(data)]
        if actual != data:
            print(f"      BYTE MISMATCH {va:#010x}: "
                  f"hks {data.hex()} vs elf {actual.hex()}")
            mism += 1
    print(f"  byte mismatches      : {mism}")

    good = not missing and not extra and not mism
    print(f"\n  RESULT: {'PASS - .hks reproduces the entire diff' if good else 'FAIL'}")
    return 0 if good else 1


if __name__ == "__main__":
    sys.exit(main())
