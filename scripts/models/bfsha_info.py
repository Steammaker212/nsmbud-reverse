"""List the shading models of a Deluxe Wii_UBER.Nin_NX_NVN.bfsha and the option
values its compiled programs actually cover.

    python scripts/models/bfsha_info.py <archive.Nin_NX_NVN.szs | file.bfsha> [--option gsys_weight]

A material binds to a shading model by name, but drawing a shape needs a
*program* whose option key matches (e.g. gsys_weight = the shape's skin count).
Nintendo compiled one program per shading model, for the exact option values
(gsys_weight = skin count) its own shape uses; there is no default program, so a converted model
must stay inside them. Layout: FSHA v7 (BfshaLibrary, KillzXGaming, MIT, read as
reference): shading models 0xE8 bytes, options 0x28 bytes, key table of
int32[(static+dynamic key length) * programs].
"""
from __future__ import annotations

import argparse
import struct
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "sdk"))
from course_sprites import sarc, yaz0  # noqa: E402


class Fsha:
    def __init__(self, d: bytes):
        assert d[:4] == b"FSHA", d[:8]
        self.d = d

    def u8(self, o): return self.d[o]
    def u16(self, o): return struct.unpack_from("<H", self.d, o)[0]
    def u32(self, o): return struct.unpack_from("<I", self.d, o)[0]
    def i32(self, o): return struct.unpack_from("<i", self.d, o)[0]
    def u64(self, o): return struct.unpack_from("<Q", self.d, o)[0]

    def s(self, p):
        return self.d[p + 2:p + 2 + self.u16(p)].decode() if p else ""

    def keys(self, dic):
        if not dic:
            return []
        n = self.i32(dic + 4)
        return [self.s(self.u64(dic + 8 + 16 * i + 8)) for i in range(1, n + 1)]

    def models(self):
        vals, dic = self.u64(0x48), self.u64(0x50)
        return [self.model(vals + 0xE8 * i) for i, _ in enumerate(self.keys(dic))]

    def options(self, o):
        vals, dic = self.u64(o), self.u64(o + 8)
        out = []
        for i, name in enumerate(self.keys(dic)):
            p = vals + 0x28 * i
            out.append({"name": name, "choices": self.keys(self.u64(p + 8)),
                        "default": self.u8(p + 0x19), "key_offset": self.u8(p + 0x1D),
                        "bit_index": self.u8(p + 0x1E), "shift": self.u8(p + 0x1F),
                        "mask": self.u32(p + 0x20)})
        return out

    def model(self, o):
        m = {"name": self.s(self.u64(o))}
        m["static"] = self.options(o + 0x08)
        m["dynamic"] = self.options(o + 0x18)
        m["attribs"] = self.keys(self.u64(o + 0x30))
        m["samplers"] = self.keys(self.u64(o + 0x40))
        prog_arr, key_tab = self.u64(o + 0x78), self.u64(o + 0x80)
        m["default_program"] = self.i32(o + 0xD0)
        nprog = self.u16(o + 0xD8)
        skl, dkl = self.u8(o + 0xDA), self.u8(o + 0xDB)
        m["programs"] = []
        for p in range(nprog):
            words = [self.u32(key_tab + 4 * (p * (skl + dkl) + k)) for k in range(skl + dkl)]
            key = {}
            # bit_index is the absolute word in the program's key (static words first):
            # kakibo body gsys_weight sits in word 1 = the first dynamic word (F0234).
            for opt in (m["static"], m["dynamic"]):
                for op in opt:
                    w = words[op["bit_index"]] if op["bit_index"] < len(words) else 0
                    idx = (w & op["mask"]) >> op["shift"]
                    key[op["name"]] = op["choices"][idx] if idx < len(op["choices"]) else f"?{idx}"
            m["programs"].append(key)
        return m


def load(path: Path) -> bytes:
    d = path.read_bytes()
    if d[:4] == b"FSHA":
        return d
    if d[:4] == b"Yaz0":
        d = yaz0(d)
    return sarc(d)["Wii_UBER.Nin_NX_NVN.bfsha"]


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("file", type=Path)
    ap.add_argument("--option", action="append", default=[])
    a = ap.parse_args()
    for m in Fsha(load(a.file)).models():
        print(f"shading model {m['name']}: {len(m['programs'])} programs, default {m['default_program']}")
        print(f"  attribs {m['attribs']}  samplers {m['samplers']}")
        for kind in ("static", "dynamic"):
            for op in m[kind]:
                covered = sorted({p[op['name']] for p in m["programs"]})
                if not a.option or op["name"] in a.option:
                    print(f"  {kind:7s} {op['name']:26s} choices {op['choices']}  compiled {covered}")


if __name__ == "__main__":
    main()
