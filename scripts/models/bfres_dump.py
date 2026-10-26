"""Dump a BFRES (Wii U FRES v3/v4 or Switch FRES v8) in one comparable text form.

Nintendo converted every NSMBU model for Deluxe, so each Deluxe archive has a
Wii U twin. Dumping both the same way is how the Wii U -> Deluxe mapping is
learned (docs/WIIU_MODELS.md):

    python scripts/models/bfres_dump.py <file> [<file> ...]
    python scripts/models/bfres_dump.py --materials-only kakibo.szs kakibo.Nin_NX_NVN.szs

A file may be a bare .bfres, a SARC/.pack, or a Yaz0 .szs; every .bfres inside
is dumped. Layouts follow BfresLibrary (KillzXGaming, MIT), read as reference
only: Wii U offsets are self-relative s32 and strings are NUL-terminated;
Switch offsets are absolute u64 and strings are u16-length-prefixed.
"""
from __future__ import annotations

import argparse
import struct
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "sdk"))
from course_sprites import sarc, yaz0  # noqa: E402

PARAM_TYPES = ["bool", "bool2", "bool3", "bool4", "int", "int2", "int3", "int4",
               "uint", "uint2", "uint3", "uint4", "float", "float2", "float3", "float4",
               "_reserved", "float2x2", "float2x3", "float2x4", "_reserved2", "float3x2",
               "float3x3", "float3x4", "_reserved3", "float4x2", "float4x3", "float4x4",
               "srt2d", "srt3d", "texsrt", "texsrtex"]


class WiiU:
    """FRES v3/v4, big-endian, self-relative offsets."""

    def __init__(self, d: bytes):
        self.d = d

    def u8(self, o): return self.d[o]
    def u16(self, o): return struct.unpack_from(">H", self.d, o)[0]
    def u32(self, o): return struct.unpack_from(">I", self.d, o)[0]
    def f32(self, o): return struct.unpack_from(">f", self.d, o)[0]

    def rel(self, o):
        v = struct.unpack_from(">i", self.d, o)[0]
        return o + v if v else 0

    def s(self, o):
        p = self.rel(o)
        if not p:
            return None
        return self.d[p:self.d.index(b"\0", p)].decode("ascii", "replace")

    def dict(self, o):
        p = self.rel(o)
        if not p:
            return []
        n = struct.unpack_from(">i", self.d, p + 4)[0]
        out = []
        for i in range(1, n + 1):
            node = p + 8 + 16 * i
            out.append((self.s(node + 8), self.rel(node + 12)))
        return out

    def file(self):
        d = {"platform": "wiiu", "version": hex(self.u32(4)), "name": self.s(0x14)}
        d["models"] = [self.model(o) for _, o in self.dict(0x20)]
        d["textures"] = [self.texture(n, o) for n, o in self.dict(0x24)]
        d["skeletal_anims"] = [n for n, _ in self.dict(0x28)]
        names = ["shader_param_anims", "color_anims", "tex_srt_anims", "tex_pattern_anims",
                 "bone_vis_anims", "mat_vis_anims", "shape_anims", "scene_anims", "external_files"]
        for k, off in zip(names, range(0x2C, 0x50, 4)):
            d[k] = [n for n, _ in self.dict(off)]
        return d

    def texture(self, name, o):
        # FTEX: GX2Surface at +4: dim, w, h, depth, mips, format ...
        return {"name": name, "w": self.u32(o + 8), "h": self.u32(o + 12),
                "mips": self.u32(o + 20), "gx2_format": hex(self.u32(o + 24))}

    def model(self, o):
        m = {"name": self.s(o + 4)}
        skel = self.rel(o + 0xC)
        m["bones"] = [self.bone(n, b) for n, b in self.dict(skel + 0x10)] if skel else []
        m["shapes"] = [self.shape(n, s) for n, s in self.dict(o + 0x14)]
        m["materials"] = [self.material(mo) for _, mo in self.dict(o + 0x18)]
        m["vertex_buffers"] = self.u16(o + 0x20)
        return m

    def bone(self, name, o):
        return {"name": name, "parent": struct.unpack_from(">h", self.d, o + 6)[0],
                "smooth": struct.unpack_from(">h", self.d, o + 8)[0],
                "rigid": struct.unpack_from(">h", self.d, o + 10)[0]}

    def shape(self, name, o):
        # FSHP: +4 name, +8 flags, +0xC idx, +0xE material idx, +0x10 bone idx, +0x12 vtx buffer idx
        return {"name": name, "material": self.u16(o + 0xE), "bone": self.u16(o + 0x10),
                "skin_count": self.u8(o + 0x16)}

    def material(self, o):
        mat = {"name": self.s(o + 4)}
        ri = {}
        for n, p in self.dict(o + 0x1C):
            cnt, typ = self.u16(p), self.u8(p + 2)
            if typ == 0:
                ri[n] = [struct.unpack_from(">i", self.d, p + 8 + 4 * i)[0] for i in range(cnt)]
            elif typ == 1:
                ri[n] = [round(self.f32(p + 8 + 4 * i), 4) for i in range(cnt)]
            else:
                ri[n] = [self.s(p + 8 + 4 * i) for i in range(cnt)]
        mat["render_info"] = ri
        sa = self.rel(o + 0x24)
        mat["shader_archive"] = self.s(sa)
        mat["shading_model"] = self.s(sa + 4)
        mat["attrib_assign"] = {n: self.d[p:self.d.index(b"\0", p)].decode() for n, p in self.dict(sa + 0x10)}
        mat["sampler_assign"] = {n: self.d[p:self.d.index(b"\0", p)].decode() for n, p in self.dict(sa + 0x14)}
        mat["options"] = {n: self.d[p:self.d.index(b"\0", p)].decode() for n, p in self.dict(sa + 0x18)}
        ntex = self.u8(o + 0x11)
        tl = self.rel(o + 0x28)
        mat["textures"] = [self.s(tl + 8 * i) for i in range(ntex)] if tl else []
        mat["samplers"] = [n for n, _ in self.dict(o + 0x30)]
        data = self.rel(o + 0x3C)
        params = {}
        for n, p in self.dict(o + 0x38):
            typ, size, doff = self.u8(p), self.u8(p + 1), self.u16(p + 2)
            raw = self.d[data + doff:data + doff + min(size, 16)] if data else b""
            params[n] = fmt_param(typ, raw, ">")
        mat["params"] = params
        return mat


class Switch:
    """FRES v8 (NSMBU Deluxe), little-endian, absolute u64 offsets."""

    def __init__(self, d: bytes):
        self.d = d

    def u8(self, o): return self.d[o]
    def u16(self, o): return struct.unpack_from("<H", self.d, o)[0]
    def u32(self, o): return struct.unpack_from("<I", self.d, o)[0]
    def u64(self, o): return struct.unpack_from("<Q", self.d, o)[0]
    def f32(self, o): return struct.unpack_from("<f", self.d, o)[0]

    def str_at(self, p):
        if not p:
            return None
        n = self.u16(p)
        return self.d[p + 2:p + 2 + n].decode("ascii", "replace")

    def s(self, o):
        return self.str_at(self.u64(o))

    def keys(self, dict_off):
        if not dict_off:
            return []
        n = struct.unpack_from("<i", self.d, dict_off + 4)[0]
        return [self.str_at(self.u64(dict_off + 8 + 16 * i + 8)) for i in range(1, n + 1)]

    def dict_values(self, o, stride):
        """A (values u64, dict u64) pair at o -> [(key, value offset)]."""
        vals, dic = self.u64(o), self.u64(o + 8)
        return [(k, vals + stride * i) for i, k in enumerate(self.keys(dic))]

    def file(self):
        d = {"platform": "switch", "version": hex(self.u32(8)), "name": self.s(0x20)}
        models_vals, models_dict = self.u64(0x28), self.u64(0x30)
        d["models"] = [self.model(models_vals + 0x78 * i) for i, _ in enumerate(self.keys(models_dict))]
        d["skeletal_anims"] = self.keys(self.u64(0x40))
        d["material_anims"] = self.keys(self.u64(0x50))
        d["bone_vis_anims"] = self.keys(self.u64(0x60))
        d["shape_anims"] = self.keys(self.u64(0x70))
        d["scene_anims"] = self.keys(self.u64(0x80))
        d["external_files"] = self.keys(self.u64(0xA0))
        return d

    def model(self, o):
        m = {"name": self.s(o + 0x10)}
        skel = self.u64(o + 0x20)
        if skel:
            bone_dict, bone_arr = self.u64(skel + 0x10), self.u64(skel + 0x18)
            m["bones"] = [self.bone(bone_arr + 0x60 * i) for i, _ in enumerate(self.keys(bone_dict))]
        else:
            m["bones"] = []
        m["shapes"] = [{"name": n} for n, _ in self.dict_values(o + 0x30, 0x60)]
        m["materials"] = [self.material(mo) for _, mo in self.dict_values(o + 0x40, 0xB8)]
        m["vertex_buffers"] = self.u16(o + 0x68)
        return m

    def bone(self, o):
        # name, userdata values+dict, 16 reserved (v8), then idx/parent/smooth/rigid
        return {"name": self.s(o), "parent": struct.unpack_from("<h", self.d, o + 0x2A)[0],
                "smooth": struct.unpack_from("<h", self.d, o + 0x2C)[0],
                "rigid": struct.unpack_from("<h", self.d, o + 0x2E)[0]}

    def material(self, o):
        mat = {"name": self.s(o + 0x10)}
        ri = {}
        for n, p in self.dict_values(o + 0x18, 24):
            data, cnt, typ = self.u64(p + 8), self.u16(p + 16), self.u8(p + 18)
            if typ == 0:
                ri[n] = [struct.unpack_from("<i", self.d, data + 4 * i)[0] for i in range(cnt)]
            elif typ == 1:
                ri[n] = [round(self.f32(data + 4 * i), 4) for i in range(cnt)]
            else:
                ri[n] = [self.str_at(self.u64(data + 8 * i)) for i in range(cnt)] if data else []
        mat["render_info"] = ri
        sa = self.u64(o + 0x28)
        mat["shader_archive"] = self.s(sa)
        mat["shading_model"] = self.s(sa + 8)

        def strdict(off):
            return {k: self.str_at(self.u64(v)) for k, v in self.dict_values(off, 8)}
        mat["attrib_assign"] = strdict(sa + 0x10)
        mat["sampler_assign"] = strdict(sa + 0x20)
        mat["options"] = strdict(sa + 0x30)
        ntex = self.u8(o + 0xA8)
        names = self.u64(o + 0x38)
        mat["textures"] = [self.str_at(self.u64(names + 8 * i)) for i in range(ntex)] if names else []
        mat["samplers"] = [n for n, _ in self.dict_values(o + 0x48, 32)]
        data = self.u64(o + 0x68)
        params = {}
        for n, p in self.dict_values(o + 0x58, 32):
            typ, size, doff = self.u8(p + 16), self.u8(p + 17), self.u16(p + 18)
            raw = self.d[data + doff:data + doff + min(size, 16)] if data else b""
            params[n] = fmt_param(typ, raw, "<")
        mat["params"] = params
        return mat


def fmt_param(typ, raw, e):
    name = PARAM_TYPES[typ] if typ < len(PARAM_TYPES) else f"t{typ}"
    if name.startswith("float") and len(raw) >= 4:
        vals = struct.unpack_from(e + "%df" % (len(raw) // 4), raw)
        return f"{name} " + " ".join(f"{v:g}" for v in vals)
    if name.startswith(("int", "uint", "bool")) and len(raw) >= 4:
        vals = struct.unpack_from(e + "%di" % (len(raw) // 4), raw)
        return f"{name} " + " ".join(str(v) for v in vals)
    return f"{name} {raw.hex()}"


def bfres_files(path: Path):
    data = path.read_bytes()
    if data[:4] == b"Yaz0":
        data = yaz0(data)
    if data[:4] == b"FRES":
        yield path.name, data
        return
    for name, blob in sorted(sarc(data).items()):
        if blob[:4] == b"FRES":
            yield name, blob


def load(blob: bytes) -> dict:
    return (Switch(blob) if blob[4:8] == b"    " else WiiU(blob)).file()


def show(d: dict, materials_only: bool):
    print(f"FRES {d['platform']} {d['version']} '{d['name']}'")
    if not materials_only:
        for k, v in d.items():
            if k not in ("platform", "version", "name", "models") and v:
                print(f"  {k}: {v if not isinstance(v[0], dict) else len(v)}")
        for t in d.get("textures", []):
            print(f"  texture {t}")
    for m in d["models"]:
        print(f"  model '{m['name']}': {len(m['bones'])} bones, {len(m['shapes'])} shapes, "
              f"{len(m['materials'])} materials, {m['vertex_buffers']} vertex buffers")
        if not materials_only:
            print("    bones:", [b["name"] for b in m["bones"]])
            print("    shapes:", [s["name"] for s in m["shapes"]])
        for mat in m["materials"]:
            print(f"    material '{mat['name']}'  shader {mat['shader_archive']}/{mat['shading_model']}")
            print(f"      textures {mat['textures']}  samplers {mat['samplers']}")
            print(f"      sampler_assign {mat['sampler_assign']}")
            print(f"      attrib_assign {mat['attrib_assign']}")
            print(f"      options {dict(sorted(mat['options'].items()))}")
            print(f"      render_info {dict(sorted(mat['render_info'].items()))}")
            for k, v in sorted(mat["params"].items()):
                print(f"      param {k} = {v}")


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("files", nargs="+")
    ap.add_argument("--materials-only", action="store_true")
    a = ap.parse_args()
    for f in a.files:
        for name, blob in bfres_files(Path(f)):
            print(f"===== {f} :: {name}")
            show(load(blob), a.materials_only)


if __name__ == "__main__":
    main()
