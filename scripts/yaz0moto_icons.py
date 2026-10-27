"""Make the Yaz0moto editor icons for new sprites in yaz0moto/steam-dx/icons.

    py -3 scripts/yaz0moto_icons.py --yaz0moto "<Yaz0moto folder>"

Icons are 60x60 RGBA PNGs named `<sprite>.png`, and for the ?-block / brick
sprites `<sprite>_0000-0000-0000-1000-000<n>-0000.png` = extended contents 16+n
(tick Extended contents, pick n). They are made from Yaz0moto's own sprite art
(miyamotodata/sprites), recoloured, so they match the rest of the editor:

  740.png  Cold Fuzzy        fuzzy.png, dark fur tinted to the Cold Fuzzy's ice blue
  741.png  Poison Mushroom   the 1-UP Mushroom of block_q_kinoko_up.png, cap made purple
  <block>_..._0008  contents 24 (Poison Mushroom) on each block's own background

A block's background comes from its existing contents icons: the items differ,
so a pixel two unrelated items agree on is background. The middle, which every
item covers, is filled along each row and then hidden under the new item.

Needs Pillow (py -3 -m pip install --user pillow).
"""
from __future__ import annotations

import argparse
import colorsys
from pathlib import Path

from PIL import Image

REPO = Path(__file__).resolve().parents[1]
ICONS = REPO / "yaz0moto" / "steam-dx" / "icons"
BLOCK_SPRITES = ["59", "60", "148", "422", "526", "704", "706"]
SIZE = 60


def contents_icon(sprite: str, n: int) -> Path:
    return ICONS / f"{sprite}_0000-0000-0000-1000-{n:04d}-0000.png"


def block_background(sprite: str) -> tuple[Image.Image, set]:
    """The block without its item, and the set of pixels no two items agreed on."""
    # 6 (P-Acorn) shares the Acorn's face with 3, so it is left out of the vote.
    ims = [Image.open(contents_icon(sprite, n)).convert("RGBA") for n in (0, 1, 2, 3, 4, 5, 7)]
    out = Image.new("RGBA", (SIZE, SIZE))
    unknown = set()
    for y in range(SIZE):
        for x in range(SIZE):
            vals = [im.getpixel((x, y)) for im in ims]
            pick = next((vals[i] for i in range(len(vals)) for j in range(i + 1, len(vals))
                         if sum(abs(a - b) for a, b in zip(vals[i], vals[j])) < 12), None)
            if pick is None:
                unknown.add((x, y))
            else:
                out.putpixel((x, y), pick)
    # Fill each unknown run along its row from the nearest known pixel.
    for y in range(SIZE):
        for x in range(SIZE):
            if (x, y) in unknown:
                for d in range(1, SIZE):
                    for nx in (x - d, x + d):
                        if 0 <= nx < SIZE and (nx, y) not in unknown:
                            out.putpixel((x, y), out.getpixel((nx, y)))
                            break
                    else:
                        continue
                    break
    return out, unknown


def poison_cap(rgba):
    """1-UP green -> Poison Mushroom purple; its white spots -> pink (the I_kinxkx texture)."""
    r, g, b, a = rgba
    if a == 0:
        return rgba
    h, s, v = colorsys.rgb_to_hsv(r / 255, g / 255, b / 255)
    if 0.17 < h < 0.48 and s > 0.25:                  # green cap
        h = 0.79                                      # purple
    else:
        return rgba
    r, g, b = colorsys.hsv_to_rgb(h, s, v)
    return (round(r * 255), round(g * 255), round(b * 255), a)


def inside_outline(im: Image.Image) -> set:
    """Pixels inside the item's dark outline ring (Yaz0moto draws one around
    block items): flood from the border over non-dark pixels; what is not
    reached and is connected to the centre is the item, ring included."""
    def dark(p):
        return colorsys.rgb_to_hsv(p[0] / 255, p[1] / 255, p[2] / 255)[2] < 0.3
    outside, todo = set(), [(x, y) for x in range(SIZE) for y in (0, SIZE - 1)] + \
                           [(x, y) for y in range(SIZE) for x in (0, SIZE - 1)]
    while todo:
        x, y = todo.pop()
        if (x, y) in outside or not (0 <= x < SIZE and 0 <= y < SIZE) or dark(im.getpixel((x, y))):
            continue
        outside.add((x, y))
        todo += [(x + 1, y), (x - 1, y), (x, y + 1), (x, y - 1)]
    item, todo = set(), [(SIZE // 2, SIZE // 2)]
    while todo:
        x, y = todo.pop()
        if (x, y) in item or (x, y) in outside or not (0 <= x < SIZE and 0 <= y < SIZE):
            continue
        item.add((x, y))
        todo += [(x + 1, y), (x - 1, y), (x, y + 1), (x, y - 1)]
    return item


def poison_mushroom(yaz0moto: Path) -> tuple[Image.Image, Image.Image]:
    """(the ?-block icon recoloured, the mushroom alone on transparent)."""
    src = Image.open(yaz0moto / "block_q_kinoko_up.png").convert("RGBA")
    mask = inside_outline(src)
    block = Image.new("RGBA", (SIZE, SIZE))
    item = Image.new("RGBA", (SIZE, SIZE), (0, 0, 0, 0))
    for y in range(SIZE):
        for x in range(SIZE):
            p = poison_cap(src.getpixel((x, y)))
            block.putpixel((x, y), p)
            if (x, y) in mask:
                item.putpixel((x, y), p)
    return block, item


def cold_fuzzy(yaz0moto: Path) -> Image.Image:
    """fuzzy.png with its dark fur turned the Cold Fuzzy's pale ice blue."""
    src = Image.open(yaz0moto / "fuzzy.png").convert("RGBA")
    out = src.copy()
    for y in range(src.height):
        for x in range(src.width):
            r, g, b, a = src.getpixel((x, y))
            if a == 0:
                continue
            h, s, v = colorsys.rgb_to_hsv(r / 255, g / 255, b / 255)
            if s < 0.25 and v < 0.55:                 # black fur (eyes are white, mouth red)
                t = v / 0.55
                nr, ng, nb = colorsys.hsv_to_rgb(0.56, 0.45 - 0.3 * t, 0.55 + 0.45 * t)
                out.putpixel((x, y), (round(nr * 255), round(ng * 255), round(nb * 255), a))
    return out


def fit(im: Image.Image) -> Image.Image:
    """Crop to the drawing and scale it into a 60x60 icon."""
    box = im.getbbox()
    im = im.crop(box)
    k = (SIZE - 4) / max(im.size)
    im = im.resize((max(1, round(im.width * k)), max(1, round(im.height * k))), Image.LANCZOS)
    out = Image.new("RGBA", (SIZE, SIZE), (0, 0, 0, 0))
    out.paste(im, ((SIZE - im.width) // 2, (SIZE - im.height) // 2), im)
    return out


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--yaz0moto", required=True, type=Path, help="the Yaz0moto folder (holds miyamotodata)")
    a = ap.parse_args()
    art = a.yaz0moto / "miyamotodata" / "sprites"

    fit(cold_fuzzy(art)).save(ICONS / "740.png")
    qblock, mushroom = poison_mushroom(art)
    fit(mushroom).save(ICONS / "741.png")
    for sprite in BLOCK_SPRITES:
        if sprite == "59":
            icon = qblock                               # the ?-block itself, recoloured
        else:
            icon, _ = block_background(sprite)
            icon.paste(mushroom, (0, 0), mushroom)
        icon.save(contents_icon(sprite, 8))
    print(f"wrote 740.png, 741.png and contents-24 icons for sprites {', '.join(BLOCK_SPRITES)}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
