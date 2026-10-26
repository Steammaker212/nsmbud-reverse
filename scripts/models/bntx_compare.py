"""Decode the BC1/BC3 textures of two Deluxe model archives and compare them by name.

    python scripts/models/bntx_compare.py <a.Nin_NX_NVN.szs> <b.Nin_NX_NVN.szs> [--png DIR]

Used to check a converted archive against Nintendo's own: tile-mode or format
errors show up as large per-pixel differences; a re-encode as small ones.
Mip 0 only. Tegra block-linear layout per the X1 TRM (GOB = 64 B x 8 rows).
"""
from __future__ import annotations

import argparse
import struct
import sys
import zlib
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "sdk"))
from course_sprites import sarc, yaz0  # noqa: E402

FMT_RGBA8, FMT_BC1, FMT_BC3 = 0x0B, 0x1A, 0x1C   # BNTX format >> 8


def textures(path: Path) -> dict:
    data = path.read_bytes()
    files = sarc(yaz0(data) if data[:4] == b"Yaz0" else data)
    b = files["output.bfres"]
    bn = b[b.find(b"BNTX"):]
    out, j = {}, 0
    while True:
        j = bn.find(b"BRTI", j + 1)
        if j < 0:
            return out
        fmt = struct.unpack_from("<I", bn, j + 0x1C)[0]
        w, h = struct.unpack_from("<II", bn, j + 0x24)
        bh = struct.unpack_from("<I", bn, j + 0x34)[0]
        no = struct.unpack_from("<Q", bn, j + 0x60)[0]
        name = bn[no + 2:no + 2 + struct.unpack_from("<H", bn, no)[0]].decode("ascii", "replace")
        mp = struct.unpack_from("<Q", bn, j + 0x70)[0]
        m0 = struct.unpack_from("<Q", bn, mp)[0]
        out[name] = (fmt >> 8, w, h, bh, bn[m0:])


def deswizzle(data: bytes, wb: int, hb: int, bpp: int, bh_log2: int) -> bytes:
    bh = 1 << bh_log2
    gobs_x = (wb * bpp + 63) // 64
    out = bytearray(wb * hb * bpp)
    for y in range(hb):
        for x in range(wb):
            xb = x * bpp
            addr = ((y // (8 * bh)) * 512 * bh * gobs_x + (xb // 64) * 512 * bh + ((y % (8 * bh)) // 8) * 512
                    + ((xb % 64) // 32) * 256 + ((y % 8) // 2) * 64 + ((xb % 32) // 16) * 32
                    + (y % 2) * 16 + (xb % 16))
            out[(y * wb + x) * bpp:(y * wb + x + 1) * bpp] = data[addr:addr + bpp]
    return bytes(out)


def rgb565(c):
    return ((c >> 11) & 31) * 255 // 31, ((c >> 5) & 63) * 255 // 63, (c & 31) * 255 // 31


def decode(fmt: int, w: int, h: int, linear: bytes) -> list:
    if fmt == FMT_RGBA8:
        return [[tuple(linear[(y * w + x) * 4:(y * w + x) * 4 + 4]) for x in range(w)] for y in range(h)]
    bpp = 8 if fmt == FMT_BC1 else 16
    px = [[(0, 0, 0, 0)] * w for _ in range(h)]
    wb = (w + 3) // 4
    for by in range((h + 3) // 4):
        for bx in range(wb):
            blk = linear[(by * wb + bx) * bpp:(by * wb + bx + 1) * bpp]
            alpha = [255] * 16
            if fmt == FMT_BC3:
                a0, a1 = blk[0], blk[1]
                bits = int.from_bytes(blk[2:8], "little")
                pal = [a0, a1] + ([((6 - i) * a0 + (1 + i) * a1) // 7 for i in range(6)] if a0 > a1 else
                                  [((4 - i) * a0 + (1 + i) * a1) // 5 for i in range(4)] + [0, 255])
                alpha = [pal[(bits >> (3 * i)) & 7] for i in range(16)]
                blk = blk[8:]
            c0, c1, idx = struct.unpack_from("<HHI", blk)
            p0, p1 = rgb565(c0), rgb565(c1)
            if c0 > c1 or fmt == FMT_BC3:
                pal = [p0, p1, tuple((2 * a + b) // 3 for a, b in zip(p0, p1)),
                       tuple((a + 2 * b) // 3 for a, b in zip(p0, p1))]
            else:
                pal = [p0, p1, tuple((a + b) // 2 for a, b in zip(p0, p1)), (0, 0, 0)]
            for i in range(16):
                x, y = bx * 4 + i % 4, by * 4 + i // 4
                if x < w and y < h:
                    px[y][x] = pal[(idx >> (2 * i)) & 3] + (alpha[i],)
    return px


def png(path: Path, px: list):
    h, w = len(px), len(px[0])
    raw = b"".join(b"\0" + bytes(c for p in row for c in p) for row in px)
    def chunk(t, d):
        return struct.pack(">I", len(d)) + t + d + struct.pack(">I", zlib.crc32(t + d))
    path.write_bytes(b"\x89PNG\r\n\x1a\n" + chunk(b"IHDR", struct.pack(">IIBBBBB", w, h, 8, 6, 0, 0, 0))
                     + chunk(b"IDAT", zlib.compress(raw)) + chunk(b"IEND", b""))


def image(t):
    fmt, w, h, bh, data = t
    if fmt == FMT_RGBA8:
        return decode(fmt, w, h, deswizzle(data, w, h, 4, bh))
    bpp = 8 if fmt == FMT_BC1 else 16
    return decode(fmt, w, h, deswizzle(data, (w + 3) // 4, (h + 3) // 4, bpp, bh))


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("a", type=Path)
    ap.add_argument("b", type=Path, nargs="?")
    ap.add_argument("--png", type=Path)
    o = ap.parse_args()
    if o.b is None:      # one archive: export every texture as PNG (needs --png)
        for name, t in textures(o.a).items():
            print(name, t[1], "x", t[2], "format", hex(t[0]))
            if o.png and t[0] in (FMT_RGBA8, FMT_BC1, FMT_BC3):
                o.png.mkdir(parents=True, exist_ok=True)
                png(o.png / f"{name}.png", image(t))
        return
    ta, tb = textures(o.a), textures(o.b)
    for name in sorted(set(ta) & set(tb)):
        if ta[name][0] not in (FMT_BC1, FMT_BC3) or ta[name][:3] != tb[name][:3]:
            print(f"{name}: format/size differ {ta[name][:4]} vs {tb[name][:4]}")
            continue
        ia, ib = image(ta[name]), image(tb[name])
        diffs = [abs(ca - cb) for ra, rb in zip(ia, ib) for pa, pb in zip(ra, rb) for ca, cb in zip(pa, pb)]
        print(f"{name:14s} {ta[name][1]}x{ta[name][2]}  mean |diff| {sum(diffs) / len(diffs):6.2f}  max {max(diffs)}")
        if o.png:
            o.png.mkdir(parents=True, exist_ok=True)
            png(o.png / f"{name}_a.png", ia)
            png(o.png / f"{name}_b.png", ib)
    only = sorted(set(ta) ^ set(tb))
    if only:
        print("names in only one archive:", [n.encode("unicode_escape").decode() for n in only])


if __name__ == "__main__":
    main()
