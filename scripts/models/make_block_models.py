"""Make one-tile block models (one model named "block", one texture named "block").

    py -3 scripts/models/make_block_models.py --out <romfs/Model> --png my_block.png --name my_block
    py -3 scripts/models/make_block_models.py --out <romfs/Model> --stock <folder with block_stch, block_rdbl, block_beep>
    py -3 scripts/models/make_block_models.py --fix-uv <block archive.szs> ...

--fix-uv snaps an existing block archive's UVs to exactly 0..1 in place, keeping its texture:
block_challenge's quad stops about 3% short of each edge (UVs 8 and 247 of 255), which crops a
texture's border. Archives made by this script after 2026-10-28 already have it.

Each archive is Nintendo's block_challenge (a 16x16 quad on the lit, alpha-tested map-object
program, so it is lit like the level's own blocks) with the model renamed "block" and its colour
texture replaced: an RGBA image of any size, where alpha below 0.5 is cut out (see-through).
Draw it with tsuru::createModel("<name>", "block") at the block's centre.

--stock makes the ten switch-block-family models from the ported Tsuru textures:
block_on / block_off (Switch Block red / blue), block_red / block_blue and their _hollow outlines
(Red-Blue Block), beep_red / beep_blue and their _hollow outlines (Beep Block).
Run with plain `py -3` (not -I) so libyaz0 is found.
"""
from __future__ import annotations

import argparse, struct, subprocess, sys, tempfile, zlib
from pathlib import Path

HERE = Path(__file__).resolve().parent
sys.path.insert(0, str(HERE))
sys.path.insert(0, str(HERE.parents[0] / "sdk"))
import libyaz0  # noqa: E402
from bntx_compare import textures, image  # noqa: E402
from fix_bntx_dict import fix_bfres  # noqa: E402
from wiiu2dx import read_archive, write_sarc  # noqa: E402

TOOL = HERE.parents[1] / r"tools\wiiu2dx\bin\Release\net9.0\wiiu2dx.exe"
BASE = "block_challenge"
HOLLOW = 12          # outline width in texels (of 128)


def read_png(path: Path) -> list:
    """8-bit RGB / RGBA, non-interlaced PNG -> rows of RGBA tuples."""
    d = path.read_bytes()
    i, idat, w = 8, b"", 0
    while i < len(d):
        n, t = struct.unpack_from(">I4s", d, i)
        body = d[i + 8:i + 8 + n]
        if t == b"IHDR":
            w, h, depth, ctype, _, _, interlace = struct.unpack(">IIBBBBB", body)
            if depth != 8 or ctype not in (2, 6) or interlace:
                raise SystemExit(f"{path}: needs an 8-bit RGB or RGBA, non-interlaced PNG")
            bpp = 4 if ctype == 6 else 3
        elif t == b"IDAT":
            idat += body
        i += 12 + n
    raw, stride, rows, prev = zlib.decompress(idat), w * bpp, [], bytearray(w * bpp)
    for y in range(h):
        f, line = raw[y * (stride + 1)], bytearray(raw[y * (stride + 1) + 1:(y + 1) * (stride + 1)])
        for x in range(stride):
            a = line[x - bpp] if x >= bpp else 0
            b, c = prev[x], prev[x - bpp] if x >= bpp else 0
            if f == 1: line[x] = (line[x] + a) & 255
            elif f == 2: line[x] = (line[x] + b) & 255
            elif f == 3: line[x] = (line[x] + (a + b) // 2) & 255
            elif f == 4:
                p = a + b - c
                pa, pb, pc = abs(p - a), abs(p - b), abs(p - c)
                line[x] = (line[x] + (a if pa <= pb and pa <= pc else b if pb <= pc else c)) & 255
        rows.append([tuple(line[x * bpp:x * bpp + 3]) + ((line[x * bpp + 3],) if bpp == 4 else (255,))
                     for x in range(w)])
        prev = line
    return rows


def hollow(px: list) -> list:
    h, w = len(px), len(px[0])
    edge = HOLLOW * w // 128
    return [[p if min(x, y, w - 1 - x, h - 1 - y) < edge else (0, 0, 0, 0) for x, p in enumerate(row)]
            for y, row in enumerate(px)]


def make(name: str, px: list, romfs: Path, out: Path):
    base = read_archive(romfs / "Model" / f"{BASE}.Nin_NX_NVN.szs")
    h, w = len(px), len(px[0])
    with tempfile.TemporaryDirectory() as t:
        t = Path(t)
        (t / "in.bfres").write_bytes(base["output.bfres"])
        (t / "img.rgba").write_bytes(bytes(c for row in px for p in row for c in p))
        r = subprocess.run([str(TOOL), "--make-block", str(t / "in.bfres"), str(t / "img.rgba"), str(w), str(h),
                            str(t / "out.bfres")], capture_output=True, text=True)
        if r.returncode:
            raise SystemExit(f"{name}: wiiu2dx --make-block failed\n{r.stdout}{r.stderr}")
        b = bytearray((t / "out.bfres").read_bytes())
    log = []
    fix_bfres(b, name, log)      # BfresLibrary's save: keep every texture reachable
    data = write_sarc({"Wii_UBER.Nin_NX_NVN.bfsha": base["Wii_UBER.Nin_NX_NVN.bfsha"], "output.bfres": bytes(b)})
    out.mkdir(parents=True, exist_ok=True)
    (out / f"{name}.Nin_NX_NVN.szs").write_bytes(bytes(libyaz0.compress(data, 0x2000, 1)))
    print(f"{name}: {w}x{h}", *log)


def fix_uv(p: Path):
    files = read_archive(p)
    with tempfile.TemporaryDirectory() as t:
        t = Path(t)
        (t / "in.bfres").write_bytes(files["output.bfres"])
        r = subprocess.run([str(TOOL), "--fix-block-uv", str(t / "in.bfres"), str(t / "out.bfres")],
                           capture_output=True, text=True)
        if r.returncode:
            raise SystemExit(f"{p}: wiiu2dx --fix-block-uv failed\n{r.stdout}{r.stderr}")
        b = bytearray((t / "out.bfres").read_bytes())
    log = []
    fix_bfres(b, p.name, log)
    files["output.bfres"] = bytes(b)
    p.write_bytes(bytes(libyaz0.compress(write_sarc(files), 0x2000, 1)))
    print(f"{p.name}: UVs snapped to 0..1", *log)


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--out", type=Path)
    ap.add_argument("--fix-uv", nargs="+", type=Path, default=[])
    ap.add_argument("--romfs", type=Path, default=Path(r"G:\SSMB\ROMFS"), help="the Deluxe romfs (block_challenge)")
    ap.add_argument("--png", type=Path)
    ap.add_argument("--name")
    ap.add_argument("--stock", type=Path)
    a = ap.parse_args()
    for p in a.fix_uv:
        fix_uv(p)
    if a.png:
        make(a.name or a.png.stem, read_png(a.png), a.romfs, a.out)
    if a.stock:
        tex = {n: textures(a.stock / f"{n}.Nin_NX_NVN.szs") for n in ("block_stch", "block_rdbl", "block_beep")}
        def px(n, i):
            return image(tex[n][f"block_pata.{i}"])
        for name, img in [("block_on", px("block_stch", 0)), ("block_off", px("block_stch", 1)),
                          ("block_red", px("block_rdbl", 0)), ("block_blue", px("block_rdbl", 1)),
                          ("beep_red", px("block_beep", 0)), ("beep_blue", px("block_beep", 1))]:
            make(name, img, a.romfs, a.out)
            if not name.startswith("block_o"):
                make(name + "_hollow", hollow(img), a.romfs, a.out)


if __name__ == "__main__":
    main()
