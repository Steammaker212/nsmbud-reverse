"""List sprite ids placed in NSMBU(DX) course SARCs; flag custom (codedx) ones."""
import struct
import sys
from pathlib import Path

CUSTOM = {724: "MrSun", 725: "MrMoon", 726: "ActorSpawner", 727: "ModelTest",
          728: "LightActor", 729: "BombBros", 730: "EffectSpawner",
          731: "FakeStarCoin", 732: "MagicLift", 733: "KoopaShellBros"}


def yaz0(d):
    size = struct.unpack(">I", d[4:8])[0]
    out, src = bytearray(), 16
    while len(out) < size:
        code = d[src]; src += 1
        for bit in range(8):
            if len(out) >= size:
                break
            if code & (0x80 >> bit):
                out.append(d[src]); src += 1
            else:
                b1, b2 = d[src], d[src + 1]; src += 2
                dist = ((b1 & 0xF) << 8 | b2) + 1
                n = b1 >> 4
                if n == 0:
                    n = d[src] + 0x12; src += 1
                else:
                    n += 2
                for _ in range(n):
                    out.append(out[-dist])
    return bytes(out)


def sarc(d):
    if d[:4] == b"Yaz0":
        d = yaz0(d)
    assert d[:4] == b"SARC", d[:4]
    e = "<" if d[6:8] == b"\xff\xfe" else ">"
    data_off = struct.unpack_from(e + "I", d, 0xC)[0]
    hdr = struct.unpack_from(e + "H", d, 4)[0]
    sfat = hdr
    nodes = struct.unpack_from(e + "H", d, sfat + 6)[0]
    sfnt = sfat + 12 + nodes * 16
    names_base = sfnt + 8
    files = {}
    for i in range(nodes):
        h, attr, s, t = struct.unpack_from(e + "IIII", d, sfat + 12 + i * 16)
        name = f"#{i}"
        if attr & 0x01000000:
            off = names_base + (attr & 0xFFFF) * 4
            name = d[off:d.index(b"\0", off)].decode("utf-8", "replace")
        files[name] = d[data_off + s:data_off + t]
    return files


def sprites(course):
    for e in ("<", ">"):
        blocks = [struct.unpack_from(e + "II", course, i * 8) for i in range(15)]
        if all(o + s <= len(course) for o, s in blocks) and blocks[7][1]:
            off, size = blocks[7]
            out = []
            for p in range(off, off + size - 1, 24):
                t = struct.unpack_from(e + "H", course, p)[0]
                if t == 0xFFFF:
                    break
                out.append(t)
            return e, out
    return None, []


def main() -> None:
    for path in sys.argv[1:]:
        try:
            files = sarc(Path(path).read_bytes())
        except Exception as ex:  # report and keep going
            print(f"{Path(path).name}: unreadable ({ex})")
            continue
        for name, data in sorted(files.items()):
            if not (name.endswith(".bin") and "course" in name and "bgdat" not in name):
                continue
            e, ids = sprites(data)
            custom = sorted({i for i in ids if i in CUSTOM or i > 723})
            tag = ", ".join(f"{i} {CUSTOM.get(i, '??')}" for i in custom) or "none"
            print(f"{Path(path).name:12s} {name:28s} {len(ids):4d} sprites  "
                  f"max id {max(ids) if ids else '-':>4}  custom: {tag}")


if __name__ == "__main__":
    main()
