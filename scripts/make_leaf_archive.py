"""Builds env_leaf.Nin_NX_NVN.szs, the Falling Leaves texture (source/code/sprites/weather.cpp).

It is env_snow (the Snow Effect's archive, inside romfs/Pack/jyotyuActorPack.pack) with texture
wmy_bgsnow.1 (64x64 BC3, 7 mips, block-linear) overwritten by a white leaf silhouette. Each leaf
is tinted in game, so the texture is white with the shape in alpha and a grey vein. Same size and
format, so only the texture bytes change.

    py -I scripts/make_leaf_archive.py <romfs>/Pack/jyotyuActorPack.pack <out dir> [preview.png]

Needs Pillow and NumPy (pip install --target <dir> pillow numpy; set PYTHONPATH=<dir>).
"""
import math
import struct
import sys

import numpy as np
from PIL import Image, ImageDraw, ImageFilter


# ---- Yaz0 / SARC --------------------------------------------------------------------------------

def yaz0_decompress(d):
    if d[:4] != b'Yaz0':
        return d
    size = struct.unpack('>I', d[4:8])[0]
    out = bytearray(size)
    src, dst = 16, 0
    while dst < size:
        code = d[src]; src += 1
        for _ in range(8):
            if dst >= size:
                break
            if code & 0x80:
                out[dst] = d[src]; src += 1; dst += 1
            else:
                b1, b2 = d[src], d[src + 1]; src += 2
                dist = ((b1 & 0xF) << 8 | b2) + 1
                n = b1 >> 4
                if n == 0:
                    n = d[src] + 0x12; src += 1
                else:
                    n += 2
                for _ in range(n):
                    out[dst] = out[dst - dist]; dst += 1
            code <<= 1
    return bytes(out)


def yaz0_store(d):
    """Valid Yaz0 with every byte a literal (no compression)."""
    out = bytearray(b'Yaz0' + struct.pack('>I', len(d)) + b'\0' * 8)
    for i in range(0, len(d), 8):
        out.append(0xFF)
        out += d[i:i + 8]
    return bytes(out)


def sarc_files(d):
    e = '<' if d[6:8] == b'\xff\xfe' else '>'
    hdr = struct.unpack(e + 'H', d[4:6])[0]
    data_off = struct.unpack(e + 'I', d[0xC:0x10])[0]
    n = struct.unpack(e + 'H', d[hdr + 6:hdr + 8])[0]
    names = hdr + 0xC + n * 16 + 8
    files = {}
    for i in range(n):
        _, attr, s, en = struct.unpack(e + 'IIII', d[hdr + 0xC + i * 16:hdr + 0x1C + i * 16])
        o = names + (attr & 0xFFFF) * 4
        files[d[o:d.index(b'\0', o)].decode()] = (data_off + s, data_off + en)
    return files


# ---- BNTX ---------------------------------------------------------------------------------------

def bntx_texture(b, name):
    count = struct.unpack('<I', b[0x24:0x28])[0]
    arr = struct.unpack('<Q', b[0x28:0x30])[0]
    for i in range(count):
        p = struct.unpack('<Q', b[arr + i * 8:arr + i * 8 + 8])[0]
        no = struct.unpack('<Q', b[p + 0x60:p + 0x68])[0]
        nl = struct.unpack('<H', b[no:no + 2])[0]
        if b[no + 2:no + 2 + nl].decode() != name:
            continue
        mips = struct.unpack('<H', b[p + 0x16:p + 0x18])[0]
        fmt = struct.unpack('<I', b[p + 0x1C:p + 0x20])[0]
        w, h = struct.unpack('<II', b[p + 0x24:p + 0x2C])
        blk = struct.unpack('<I', b[p + 0x34:p + 0x38])[0]
        mp = struct.unpack('<Q', b[p + 0x70:p + 0x78])[0]
        offs = [struct.unpack('<Q', b[mp + j * 8:mp + j * 8 + 8])[0] for j in range(mips)]
        return dict(fmt=fmt, w=w, h=h, mips=mips, blk=blk, offs=offs)
    raise KeyError(name)


def swizzle(blocks, wb, hb, block_height):
    """Tegra X1 block-linear layout of a wb x hb grid of 16-byte blocks."""
    bpe = 16
    width_gobs = (wb * bpe + 63) // 64
    rows = 8 * block_height
    hb_pad = (hb + rows - 1) // rows * rows
    out = bytearray(width_gobs * 512 * block_height * (hb_pad // rows))
    for y in range(hb):
        for x in range(wb):
            xb = x * bpe
            gob = ((y // rows) * 512 * block_height * width_gobs
                   + (xb // 64) * 512 * block_height
                   + (y % rows) // 8 * 512)
            a = (gob + (xb % 64) // 32 * 256 + (y % 8) // 2 * 64
                 + (xb % 32) // 16 * 32 + (y % 2) * 16 + (xb % 16))
            out[a:a + 16] = blocks[y * wb + x]
    return bytes(out)


def bc3_block(rgba):
    """4x4x4 uint8 -> 16-byte BC3 block. Colour between white and grey, alpha 0..255."""
    a = rgba[:, :, 3].astype(np.float32).ravel()
    lum = rgba[:, :, 0].astype(np.float32).ravel()
    # Alpha: 8-value mode, a0 = 255 > a1 = 0. Palette index -> value.
    pal_a = [255, 0] + [round(((7 - k) * 255) / 7) for k in range(1, 7)]
    ai = [min(range(8), key=lambda k: abs(pal_a[k] - v)) for v in a]
    bits = 0
    for i, k in enumerate(ai):
        bits |= k << (3 * i)
    alpha = bytes([255, 0]) + bits.to_bytes(6, 'little')
    # Colour: c0 white, c1 grey (200); 4-colour mode as c0 > c1.
    def rgb565(v):
        return ((v >> 3) << 11) | ((v >> 2) << 5) | (v >> 3)
    c0, c1 = rgb565(255), rgb565(200)
    levels = [255, 200, (2 * 255 + 200) / 3, (255 + 2 * 200) / 3]
    ci = [min(range(4), key=lambda k: abs(levels[k] - v)) for v in lum]
    cb = 0
    for i, k in enumerate(ci):
        cb |= k << (2 * i)
    colour = struct.pack('<HHI', c0, c1, cb)
    return alpha + colour


def encode_bc3(img):
    arr = np.asarray(img.convert('RGBA'))
    h, w = arr.shape[:2]
    wb, hb = max(1, (w + 3) // 4), max(1, (h + 3) // 4)
    pad = np.zeros((hb * 4, wb * 4, 4), np.uint8)
    pad[:h, :w] = arr
    return [bc3_block(pad[by * 4:by * 4 + 4, bx * 4:bx * 4 + 4])
            for by in range(hb) for bx in range(wb)], wb, hb


# ---- The leaf -----------------------------------------------------------------------------------

def leaf_image(size=256):
    """White leaf on transparent: an almond blade with a pointed tip, a stem and a grey vein."""
    s = size
    img = Image.new('RGBA', (s, s), (255, 255, 255, 0))
    d = ImageDraw.Draw(img)
    cx, top, bottom = s / 2, s * 0.06, s * 0.80
    pts_r, pts_l = [], []
    for i in range(41):
        t = i / 40
        y = top + (bottom - top) * t
        w = s * 0.36 * math.sin(math.pi * t) ** 0.75 * (1 - 0.25 * t)
        w *= 1 + 0.06 * math.sin(t * math.pi * 9)             # slight serration
        pts_r.append((cx + w, y))
        pts_l.append((cx - w, y))
    d.polygon(pts_r + pts_l[::-1], fill=(255, 255, 255, 255))
    d.line([(cx, bottom - 4), (cx + s * 0.03, s * 0.97)], fill=(255, 255, 255, 255), width=int(s * 0.035))
    vein = (200, 200, 200, 255)
    d.line([(cx, top + s * 0.08), (cx, bottom)], fill=vein, width=int(s * 0.022))
    for k in range(1, 5):
        y = top + (bottom - top) * k / 5.5
        w = s * 0.20 * math.sin(math.pi * k / 5.5)
        d.line([(cx, y + s * 0.06), (cx + w, y)], fill=vein, width=int(s * 0.014))
        d.line([(cx, y + s * 0.06), (cx - w, y)], fill=vein, width=int(s * 0.014))
    return img.filter(ImageFilter.GaussianBlur(s / 200))


def main():
    pack, out_dir = sys.argv[1], sys.argv[2]
    pk = open(pack, 'rb').read()
    s, e = sarc_files(pk)['Model/env_snow.Nin_NX_NVN.szs']
    inner = bytearray(yaz0_decompress(pk[s:e]))
    bs, be = sarc_files(bytes(inner))['output.bfres']
    bfres = inner[bs:be]
    nb = bfres.find(b'BNTX')
    bntx = bfres[nb:]
    t = bntx_texture(bntx, 'wmy_bgsnow.1')
    assert t['fmt'] == 0x1C01 and t['w'] == 64 and t['h'] == 64, t

    leaf = leaf_image()
    if len(sys.argv) > 3:
        leaf.save(sys.argv[3])
    bh0 = 1 << t['blk']
    for m in range(t['mips']):
        w = max(1, 64 >> m)
        img = leaf.resize((w, w), Image.LANCZOS)
        blocks, wb, hb = encode_bc3(img)
        bh = bh0
        while bh > 1 and hb <= bh * 8 // 2:
            bh //= 2
        data = swizzle(blocks, wb, hb, bh)
        end = t['offs'][m + 1] if m + 1 < t['mips'] else t['offs'][m] + len(data)
        assert len(data) <= end - t['offs'][m], (m, len(data), end - t['offs'][m])
        o = bs + nb + t['offs'][m]
        inner[o:o + len(data)] = data

    path = out_dir.rstrip('/\\') + '/env_leaf.Nin_NX_NVN.szs'
    open(path, 'wb').write(yaz0_store(bytes(inner)))
    print('wrote', path)


if __name__ == '__main__':
    main()
