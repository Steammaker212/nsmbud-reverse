"""Add the Hammer Suit textures to the player models and rebuild jyotyuActorPack.pack.

    py -I scripts/models/hammer_suit_textures.py <out dir> [--romfs G:/SSMB/ROMFS] [--preview-only]

Reads the retail models, never writes them. Each model gets new textures, recoloured from its own
(see the *_suit functions), and a new frame on its switch animations (tools/suittex):

    Mario, Luigi    frame 3      player_body.3
    Blue Toad       frame 7      player_body.7, player_head.7
    Yellow Toad     frame 8      player_body.8, player_head.8
    Toadette        frame 3      player_body.3  (one atlas for head and body)

Mario, Luigi and the Toads are in Pack/jyotyuActorPack.pack. Toadette is not: her model is the
loose file Model/KinopicoMdl, written next to the pack. Previews go to <out dir>/preview.
"""
from __future__ import annotations

import argparse
import colorsys
import struct
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
sys.path[:0] = [str(ROOT / ".projectignore/icon_renderer/pylib"), str(ROOT / "scripts/models"),
                str(ROOT / "scripts/sdk"), str(ROOT / "scripts")]
import numpy as np                      # noqa: E402
from PIL import Image                   # noqa: E402

import bntx_compare as bc               # noqa: E402
import sarc as sarc_file                # noqa: E402
from course_sprites import sarc, yaz0   # noqa: E402
from fix_bntx_dict import pack as yaz0_pack  # noqa: E402
from wiiu2dx import write_sarc          # noqa: E402

SUITTEX = ROOT / "tools/suittex/bin/Release/net9.0/suittex.exe"
FIX_DICT = ROOT / "scripts/models/fix_bntx_dict.py"

# From the reference picture.
OLIVE = np.array([104, 122, 44], float)         # boots
CHARCOAL = 48.0                                 # shirts, vests: mid grey of the shading
BLUE = np.array([24, 44, 226], float)
YELLOW = np.array([240, 186, 24], float)
PINK = np.array([238, 74, 160], float)


def lum(a):
    return (a[..., 0] * .299 + a[..., 1] * .587 + a[..., 2] * .114) / 255


def hsv(a):
    rgb = a[..., :3] / 255
    mx, mn = rgb.max(-1), rgb.min(-1)
    d = mx - mn
    s = np.where(mx > 0, d / np.maximum(mx, 1e-6), 0)
    h = np.zeros_like(mx)
    r, g, b = rgb[..., 0], rgb[..., 1], rgb[..., 2]
    nz = d > 1e-6
    h = np.where(nz & (mx == r), ((g - b) / np.maximum(d, 1e-6)) % 6, h)
    h = np.where(nz & (mx == g), (b - r) / np.maximum(d, 1e-6) + 2, h)
    h = np.where(nz & (mx == b), (r - g) / np.maximum(d, 1e-6) + 4, h)
    return h * 60, s, mx


def charcoal(v):
    """Near-black cloth that keeps the texture's folds: v is 0..1 shading."""
    g = CHARCOAL * (0.45 + 1.1 * np.clip(v, 0, 1) ** 2)
    return np.stack([g, g, g * 1.06], -1)


def tint(colour, v):
    return colour[None, None, :] * np.clip(v, 0, 1.25)[..., None]


def over(base, colour, mask):
    return base * (1 - mask[..., None]) + colour * mask[..., None]


def box(h, w, y0, y1, x0, x1):
    m = np.zeros((h, w))
    m[y0:y1, x0:x1] = 1
    return m


def dilate(m, n):
    m = m > 0.5
    for _ in range(n):
        p = np.pad(m, 1)
        m = p[1:-1, 1:-1] | p[:-2, 1:-1] | p[2:, 1:-1] | p[1:-1, :-2] | p[1:-1, 2:]
    return m


def mario_suit(normal, fire):
    """Fire keeps the overalls of the picture and white shirt: the shirt goes dark, boots olive."""
    a = fire[..., :3].astype(float)
    h, w = a.shape[:2]
    _, sn, _ = hsv(normal.astype(float))
    _, sf, _ = hsv(fire.astype(float))
    shirt = np.clip((sn - .25) / .2, 0, 1) * np.clip((.4 - sf) / .2, 0, 1)
    shirt *= 1 - box(h, w, 0, 26, 0, w) - box(h, w, 92, h, 64, w)
    a = over(a, charcoal(lum(a)), shirt)

    boots = box(h, w, 0, 26, 0, 64)
    v = lum(a)
    a = over(a, tint(OLIVE, 0.45 + v / max(v[:26, :64].mean(), .05) * 0.55), boots)
    return a


def toad_body(body, colour):
    a = body[..., :3].astype(float)
    h, w = a.shape[:2]
    v = lum(a)

    # The vest, with the neck hole the dark oval in it, and a collar in the Toad's colour.
    vest = np.zeros((h, w), bool)
    vest[32:, :64] = True
    level = np.median(v[vest])
    hole = vest & (v < level * .8) & box(h, w, 44, 90, 8, 56).astype(bool)
    collar = dilate(hole, 3) & ~hole
    shade = np.clip(v / level, 0, 1.3) * .62
    out = over(a, charcoal(shade), vest.astype(float))
    out = over(out, charcoal(np.zeros_like(v)), hole.astype(float))
    out = over(out, tint(colour, np.clip(shade + .35, 0, 1)), collar.astype(float))

    # The shorts, and the little square of the belt in the Toad's colour.
    shorts = box(h, w, 0, 32, 0, w)
    belt = box(h, w, 16, 32, 112, w)
    out = over(out, charcoal(v * .62), shorts * (1 - belt))
    out = over(out, tint(colour, np.ones_like(v) * .9), belt)

    # The boots.
    out = over(out, tint(OLIVE, .55 + v * .75), box(h, w, 32, h, 64, 96))
    return out


def toad_head(head):
    """The white cap goes black; the spot stays."""
    a = head[..., :3].astype(float)
    _, s, _ = hsv(a)
    return over(charcoal(lum(a) * .55), a, np.clip(s / .55, 0, 1))


def toadette_suit(body):
    a = body[..., :3].astype(float)
    h, w = a.shape[:2]
    hue, s, val = hsv(a)
    v = lum(a)

    pink = ((hue > 300) & (hue < 345) & (s > .4) & (val > .72)).astype(float)
    spots = ((s < .16) & box(h, w, 0, 190, 0, 172).astype(bool)).astype(float)
    bloomers = ((s < .2) & box(h, w, 170, h, 170, w).astype(bool)).astype(float)
    bodice = (((hue > 335) | (hue < 25)) & (s > .4) & (val < .72)).astype(float) * box(h, w, 170, 245, 0, 170)
    boots = (val < .55).astype(float) * box(h, w, 118, 178, 205, w)
    trim = (((hue > 40) & (hue < 70)) | (s < .2)).astype(float) * box(h, w, 238, h, 0, 180)

    out = over(a, charcoal(v * .9), pink)
    out = over(out, tint(PINK, .55 + v * .55), spots)
    out = over(out, tint(PINK, .45 + v * .55), bloomers)
    out = over(out, tint(PINK, np.ones_like(v)), trim)
    out = over(out, charcoal(v * 1.4), bodice)
    out = over(out, tint(OLIVE, .35 + v), boots)
    return out


# ---- encoding ---------------------------------------------------------------------------------

def to565(c):
    c = np.clip(np.rint(c), 0, 255).astype(int)
    return ((c[0] >> 3) << 11) | ((c[1] >> 2) << 5) | (c[2] >> 3)


def from565(v):
    return np.array([((v >> 11) & 31) * 255 / 31, ((v >> 5) & 63) * 255 / 63, (v & 31) * 255 / 31])


def encode_colour(block):
    """One 4x4 block, 4-colour BC1 (c0 >= c1): endpoints along the principal axis."""
    px = block.reshape(16, 3)
    mean = px.mean(0)
    d = px - mean
    if (d ** 2).sum() < 1e-6:
        axis = np.array([1.0, 1, 1])
    else:
        axis = np.linalg.svd(d, full_matrices=False)[2][0]
    t = d @ axis
    c0, c1 = to565(mean + axis * t.max()), to565(mean + axis * t.min())
    if c0 < c1:
        c0, c1 = c1, c0
    p0, p1 = from565(c0), from565(c1)
    pal = np.stack([p0, p1, (2 * p0 + p1) / 3, (p0 + 2 * p1) / 3])
    idx = ((px[:, None, :] - pal[None]) ** 2).sum(-1).argmin(1)
    bits = 0
    for i, k in enumerate(idx):
        bits |= int(k) << (2 * i)
    return struct.pack("<HHI", c0, c1, bits)


def encode(rgb, bc3):
    h, w = rgb.shape[:2]
    bw, bh = (w + 3) // 4, (h + 3) // 4
    out = bytearray()
    for by in range(bh):
        for bx in range(bw):
            ys = np.minimum(np.arange(by * 4, by * 4 + 4), h - 1)
            xs = np.minimum(np.arange(bx * 4, bx * 4 + 4), w - 1)
            if bc3:
                out += b"\xff\xff\0\0\0\0\0\0"      # every retail player texture is opaque
            out += encode_colour(rgb[np.ix_(ys, xs)])
    return bytes(out), bw, bh


def swizzle(linear, wb, hb, bpp, bh_log2):
    """The inverse of bntx_compare.deswizzle."""
    bh = 1 << bh_log2
    gobs_x = (wb * bpp + 63) // 64
    rows = (hb + 8 * bh - 1) // (8 * bh)
    out = bytearray(rows * bh * 512 * gobs_x)
    for y in range(hb):
        for x in range(wb):
            xb = x * bpp
            addr = ((y // (8 * bh)) * 512 * bh * gobs_x + (xb // 64) * 512 * bh + ((y % (8 * bh)) // 8) * 512
                    + ((xb % 64) // 32) * 256 + ((y % 8) // 2) * 64 + ((xb % 32) // 16) * 32
                    + (y % 2) * 16 + (xb % 16))
            out[addr:addr + bpp] = linear[(y * wb + x) * bpp:(y * wb + x + 1) * bpp]
    return bytes(out)


def mip_block_height(hb, bh_log2):
    while bh_log2 > 0 and hb <= 4 << bh_log2:
        bh_log2 -= 1
    return bh_log2


def surface(mips, bc3, bh_log2, total):
    """The mips one after the other, each block-linear: the layout of the retail textures."""
    bpp = 16 if bc3 else 8
    out = bytearray()
    for rgb in mips:
        linear, wb, hb = encode(rgb, bc3)
        out += swizzle(linear, wb, hb, bpp, mip_block_height(hb, bh_log2))
    if len(out) != total:
        raise SystemExit(f"surface is {len(out)} bytes, the retail texture's {total}")
    return bytes(out)


def mip_chain(rgb, count):
    im = rgb
    chain = [im]
    for _ in range(count - 1):
        h, w = im.shape[:2]
        nh, nw = max(h // 2, 1), max(w // 2, 1)
        y = (np.arange(nh) * h // nh)
        x = (np.arange(nw) * w // nw)
        y2, x2 = np.minimum(y + (h > 1), h - 1), np.minimum(x + (w > 1), w - 1)
        im = (im[np.ix_(y, x)] + im[np.ix_(y2, x)] + im[np.ix_(y, x2)] + im[np.ix_(y2, x2)]) / 4
        chain.append(im)
    return chain


# ---- the models -------------------------------------------------------------------------------

class Model:
    def __init__(self, name, archive: bytes, work: Path):
        self.name = name
        self.files = sarc(yaz0(archive))
        self.dir = work / name
        self.dir.mkdir(parents=True, exist_ok=True)
        self.szs = self.dir / "in.szs"
        self.szs.write_bytes(archive)
        self.tex = bc.textures(self.szs)
        self.job = []

    def image(self, name):
        return np.array(bc.image(self.tex[name]), np.uint8)

    def add(self, new, source, rgb, preview: Path):
        fmt, w, h, bh, data = self.tex[source]
        bc3 = fmt == bc.FMT_BC3
        mips = 1 + int(np.log2(max(w, h)))
        total = sizes(self, source)[0]
        path = self.dir / f"{new}.bin"
        path.write_bytes(surface(mip_chain(rgb, mips), bc3, bh, total))
        self.job.append(f"texture {new} {source} {path}")
        Image.fromarray(np.clip(np.rint(rgb), 0, 255).astype(np.uint8), "RGB").save(preview / f"{self.name}_{new}.png")

    def frame(self, anim, frame, material, texture, sampler="_a0"):
        self.job.append(f"frame {anim} {frame} {material} {sampler} {texture}")

    def build(self) -> bytes:
        src, out, job = self.dir / "in.bfres", self.dir / "out.bfres", self.dir / "job.txt"
        src.write_bytes(self.files["output.bfres"])
        job.write_text("\n".join(self.job) + "\n")
        subprocess.run([str(SUITTEX), "apply", str(src), str(out), str(job)], check=True,
                       stdout=subprocess.DEVNULL)
        files = dict(self.files)
        files["output.bfres"] = restore_baked_sizes(self.files["output.bfres"], out)
        szs = self.dir / "out.szs"
        szs.write_bytes(yaz0_pack(write_sarc(files), 0x2000))
        subprocess.run([sys.executable, "-I", str(FIX_DICT), str(szs)], check=True, stdout=subprocess.DEVNULL)
        return szs.read_bytes()


def material_anims(bfres: bytes):
    """(name, offset of the header) of every material animation."""
    at = 0
    while (at := bfres.find(b"FMAA", at + 1)) >= 0:
        name = struct.unpack_from("<Q", bfres, at + 0x10)[0]
        size = struct.unpack_from("<H", bfres, name)[0]
        yield bfres[name + 2:name + 2 + size].decode(), at


def restore_baked_sizes(retail: bytes, saved: Path) -> bytes:
    """BfresLibrary overwrites every animation's baked size on save, with a formula smaller than
    Nintendo's. Each goes back to the retail value; the ones suittex changed take the size it
    computed, which matches every retail switch animation."""
    data = bytearray(saved.read_bytes())
    original = {name: struct.unpack_from("<I", retail, at + 0x6C)[0] for name, at in material_anims(retail)}
    info = subprocess.run([str(SUITTEX), "info", str(saved)], capture_output=True, text=True, check=True)
    computed = {line.split()[0]: int(line.split("computed=")[1].split()[0])
                for line in info.stdout.splitlines() if " computed=" in line}
    frames = {name: struct.unpack_from("<I", retail, at + 0x68)[0] for name, at in material_anims(retail)}
    for name, at in list(material_anims(bytes(data))):
        grew = struct.unpack_from("<I", data, at + 0x68)[0] != frames[name]
        struct.pack_into("<I", data, at + 0x6C, computed[name] if grew else original[name])
    return bytes(data)


def sizes(model, name):
    """TextureData lengths, as `suittex info` prints them."""
    info = subprocess.run([str(SUITTEX), "info", str(model.dir / "in.bfres")], capture_output=True, text=True, check=True)
    for line in info.stdout.splitlines():
        if line.startswith(f"tex {name} "):
            return [int(n) for n in line.split("[")[1].rstrip("]").split(",")]
    raise SystemExit(f"{name} is not in {model.name}")


def write_pack(original: bytes, replaced: dict[str, bytes]) -> bytes:
    """The same SARC with some files swapped: same order, each file aligned as it was."""
    if original[:4] != b"SARC":
        raise SystemExit("not a SARC")
    header = struct.unpack_from("<H", original, 4)[0]
    data_start = struct.unpack_from("<I", original, 0xC)[0]
    count = struct.unpack_from("<H", original, header + 6)[0]
    nodes_at = header + 12
    out = bytearray(original[:data_start])
    pos = 0
    names_at = nodes_at + count * 16 + 8
    for i in range(count):
        at = nodes_at + i * 16
        _, attrs, begin, end = struct.unpack_from("<IIII", original, at)
        name_at = names_at + (attrs & 0xFFFFFF) * 4
        name = original[name_at:original.index(b"\0", name_at)].decode()
        data = replaced.get(name, original[data_start + begin:data_start + end])
        absolute = data_start + begin
        align = min(absolute & -absolute if absolute else 0x2000, 0x2000)
        new_begin = pos
        while (data_start + new_begin) % align:
            new_begin += 1
        out += b"\0" * (new_begin - pos)
        out += data
        pos = new_begin + len(data)
        struct.pack_into("<II", out, at + 8, new_begin, pos)
    struct.pack_into("<I", out, 8, len(out))
    return bytes(out)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("out", type=Path)
    ap.add_argument("--romfs", type=Path, default=Path("G:/SSMB/ROMFS"))
    ap.add_argument("--preview-only", action="store_true")
    args = ap.parse_args()

    work = args.out / "work"
    preview = args.out / "preview"
    preview.mkdir(parents=True, exist_ok=True)

    pack_path = args.romfs / "Pack/jyotyuActorPack.pack"
    pack = pack_path.read_bytes()
    packed, _ = sarc_file.load(str(pack_path))
    key = "Model/{}.Nin_NX_NVN.szs"

    models = {n: Model(n, packed.read(key.format(n)), work) for n in ("MarioMdl", "LuigiMdl", "KinopioMdl")}
    models["KinopicoMdl"] = Model("KinopicoMdl", (args.romfs / "Model" / "KinopicoMdl.Nin_NX_NVN.szs").read_bytes(), work)
    for m in models.values():
        (m.dir / "in.bfres").write_bytes(m.files["output.bfres"])

    for n in ("MarioMdl", "LuigiMdl"):
        m = models[n]
        m.add("player_body.3", "player_body.1", mario_suit(m.image("player_body.0"), m.image("player_body.1")), preview)
        m.frame("PB_switch_ftp", 3, "mat_player_body", "player_body.3")
        m.frame("PC_switch_ftp", 3, "mat_player_hat", "player_head.0")
        m.frame("PH_switch_ftp", 3, "mat_player_hair", "player_head.0")
        m.frame("PH_switch_ftp", 3, "mat_player_eye", "player_eye.0")
        m.frame("PH_switch_ftp", 3, "mat_player_face", "player_head.0")
        m.frame("PH_switch_ftp", 3, "mat_player_hat", "player_head.0")

    m = models["KinopioMdl"]
    for frame, normal, colour in ((7, 0, BLUE), (8, 3, YELLOW)):
        m.add(f"player_body.{frame}", f"player_body.{normal}", toad_body(m.image(f"player_body.{normal}"), colour), preview)
        m.add(f"player_head.{frame}", f"player_head.{normal}", toad_head(m.image(f"player_head.{normal}")), preview)
        m.frame("KB_switch_ftp", frame, "mat_player_body", f"player_body.{frame}")
        m.frame("KH_switch_ftp", frame, "mat_player_hat", f"player_head.{frame}")
    m.frame("KH_switch_ftp", 7, "mat_player_eye", "player_eye.0")   # its curve ends on eye.1

    m = models["KinopicoMdl"]
    m.add("player_body.3", "player_body.0", toadette_suit(m.image("player_body.0")), preview)
    m.frame("CB_model_switch_ftp", 3, "mat_player_body", "player_body.3")
    m.frame("CH_model_switch_ftp", 3, "mat_player_hat", "player_body.3")

    if args.preview_only:
        return

    built = {n: m.build() for n, m in models.items()}
    toadette = built.pop("KinopicoMdl")
    (args.out / "KinopicoMdl.Nin_NX_NVN.szs").write_bytes(toadette)
    (args.out / "jyotyuActorPack.pack").write_bytes(write_pack(pack, {key.format(n): d for n, d in built.items()}))
    print("wrote", args.out)


if __name__ == "__main__":
    main()
