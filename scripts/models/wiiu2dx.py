"""Turn a Wii U NSMBU model archive into an NSMBU Deluxe one. See docs/WIIU_MODELS.md.

    python scripts/models/wiiu2dx.py --wiiu kakibo.pack --template kakibo --name shyguy \\
        --romfs "<Deluxe romfs>" --out mods/shy_guy/romfs/Model

    python scripts/models/wiiu2dx.py --wiiu pukupuku.pack --template pukupuku --name bee \\
        --romfs "<Deluxe romfs>" --out mods/bee/romfs/Model \\
        --map mt_eye=mat_pukupuku --map mat_pukupuku=mat_pukupuku

--wiiu      the Wii U model: a .pack / .szs (SARC, Yaz0 or not) or a bare .bfres
--template  the Deluxe actor whose shaders the model will use. Looked up as
            romfs/Model/<template>.Nin_NX_NVN.szs, then inside every romfs/Pack/*.pack
--name      the output archive *and* model name (romfs/Model/<name>.Nin_NX_NVN.szs);
            the shy_guy and bee mods load "shyguy" and "bee"
--map       Wii U material = template material (default: same name, else the first)

What happens: the template archive gives output.bfres (its materials) and
Wii_UBER.Nin_NX_NVN.bfsha (Nintendo's compiled shaders for those materials);
tools/wiiu2dx converts the Wii U bfres to a Deluxe one bound to them; the result
is packed the way Deluxe packs its own: little-endian SARC, data at 0x2000,
files at 0x1000 alignment, Yaz0.
"""
from __future__ import annotations

import argparse
import struct
import subprocess
import sys
import tempfile
from pathlib import Path

HERE = Path(__file__).resolve().parent
REPO = HERE.parents[1]
sys.path.insert(0, str(REPO / "scripts" / "sdk"))
from course_sprites import sarc, yaz0  # noqa: E402
sys.path.insert(0, str(HERE))
from bfsha_info import Fsha  # noqa: E402

TOOL = REPO / "tools" / "wiiu2dx" / "bin" / "Release" / "net9.0" / "wiiu2dx.exe"
SHADER_FILE = "Wii_UBER.Nin_NX_NVN.bfsha"


# ---- archives -------------------------------------------------------------------

def read_archive(path: Path) -> dict[str, bytes]:
    data = path.read_bytes()
    if data[:4] == b"Yaz0":
        data = yaz0(data)
    if data[:4] == b"FRES":
        return {path.name: data}
    return sarc(data)


def sarc_hash(name: str, key: int = 0x65) -> int:
    h = 0
    for c in name.encode():
        h = (h * key + c) & 0xFFFFFFFF
    return h


def write_sarc(files: dict[str, bytes], data_start: int = 0x2000, align: int = 0x1000) -> bytes:
    """Little-endian SARC laid out like Deluxe's Model/*.szs (kakibo: data 0x2000, files 0x1000)."""
    names = sorted(files, key=sarc_hash)
    sfnt = bytearray()
    name_off = {}
    for n in names:
        name_off[n] = len(sfnt)
        sfnt += n.encode() + b"\0"
        sfnt += b"\0" * (-len(sfnt) % 4)
    nodes, data = [], bytearray()
    for n in names:
        data += b"\0" * (-len(data) % align)
        start = len(data)
        data += files[n]
        nodes.append(struct.pack("<IIII", sarc_hash(n), 0x01000000 | (name_off[n] // 4), start, len(data)))
    head = 0x14 + 12 + 16 * len(nodes) + 8 + len(sfnt)
    start = max(data_start, (head + align - 1) // align * align)
    out = bytearray()
    out += struct.pack("<4sHHIIHH", b"SARC", 0x14, 0xFEFF, start + len(data), start, 0x0100, 0)
    out += struct.pack("<4sHHI", b"SFAT", 12, len(nodes), 0x65)
    for node in nodes:
        out += node
    out += struct.pack("<4sHH", b"SFNT", 8, 0) + sfnt
    out += b"\0" * (start - len(out))
    out += data
    return bytes(out)


def yaz0_compress(src: bytes, alignment: int = 0x2000) -> bytes:
    """Yaz0, greedy matching over a 4 KiB window (header alignment as in Deluxe's .szs)."""
    out = bytearray(b"Yaz0" + struct.pack(">II", len(src), alignment) + b"\0" * 4)
    table: dict[bytes, list[int]] = {}
    i, n = 0, len(src)
    while i < n:
        flag_pos = len(out)
        out.append(0)
        flags = 0
        for bit in range(8):
            if i >= n:
                break
            best_len, best_dist = 0, 0
            if i + 3 <= n:
                cands = table.get(src[i:i + 3], [])
                limit = min(0x111, n - i)
                for p in reversed(cands[-32:]):
                    dist = i - p
                    if dist > 0x1000:
                        break
                    m = 3
                    while m < limit and src[p + m] == src[i + m]:
                        m += 1
                    if m > best_len:
                        best_len, best_dist = m, dist
                        if m == limit:
                            break
            step = best_len if best_len >= 3 else 1
            for k in range(i, min(i + step, n - 2)):
                table.setdefault(src[k:k + 3], []).append(k)
            if best_len >= 3:
                d = best_dist - 1
                if best_len >= 0x12:
                    out += bytes([d >> 8, d & 0xFF, best_len - 0x12])
                else:
                    out += bytes([((best_len - 2) << 4) | (d >> 8), d & 0xFF])
                i += best_len
            else:
                flags |= 0x80 >> bit
                out.append(src[i])
                i += 1
        out[flag_pos] = flags
    return bytes(out)


# ---- BNTX name repair -----------------------------------------------------------

def bntx_strings(bn: bytes) -> list[tuple[int, bytes]]:
    """(offset of the u16 length, string) for every entry of the BNTX _STR block."""
    s = bn.find(b"_STR")
    count = struct.unpack_from("<I", bn, s + 0x10)[0]
    out, p = [], s + 0x14
    for _ in range(count + 1):          # entry 0 is the empty string
        n = struct.unpack_from("<H", bn, p)[0]
        out.append((p, bn[p + 2:p + 2 + n]))
        p += 2 + n + 1
        p += p % 2
    return out


def repair_bntx_names(bfres: bytes, expected: set[str]) -> bytes:
    """Undo BfresLibrary's BNTX string corruption (docs/WIIU_MODELS.md).

    Its texture-container writer overwrites two bytes of one name in the
    string table (seen: 'lm_02e' -> 'lm_0?\\x02'), while the texture records
    and data are correct -- checked against Nintendo's own kakibo BNTX. The game
    binds textures by name, so the material would sample nothing. A damaged
    entry is restored only when exactly one expected name of the same length is
    missing; afterwards every texture record must name an expected texture.
    """
    out = bytearray(bfres)
    base = bfres.find(b"BNTX")
    if base < 0:
        return bfres
    want = {n.encode() for n in expected} | {b"textures"}
    entries = bntx_strings(bytes(out[base:]))
    present = {s for _, s in entries}
    for off, s in entries:
        if not s or s in want:
            continue
        cands = [w for w in want - present if len(w) == len(s)]
        if len(cands) != 1:
            raise SystemExit(f"BNTX name {s!r} is damaged and cannot be matched ({cands})")
        print(f"repaired BNTX texture name {s!r} -> {cands[0].decode()!r}")
        out[base + off + 2:base + off + 2 + len(s)] = cands[0]
        present.add(cands[0])
    bn = bytes(out[base:])
    j = 0
    while True:
        j = bn.find(b"BRTI", j + 1)
        if j < 0:
            break
        no = struct.unpack_from("<Q", bn, j + 0x60)[0]
        name = bn[no + 2:no + 2 + struct.unpack_from("<H", bn, no)[0]]
        if name not in want:
            raise SystemExit(f"BNTX texture record names {name!r}, not a model texture")
    return bytes(out)


def wiiu_texture_names(bfres: bytes) -> set[str]:
    """FTEX names of a Wii U bfres (each FTEX's own name field, +0xA8)."""
    names, i = set(), 0
    while True:
        i = bfres.find(b"FTEX", i + 1)
        if i < 0:
            return names
        p = i + 0xA8 + struct.unpack_from(">i", bfres, i + 0xA8)[0]
        names.add(bfres[p:bfres.index(b"\0", p)].decode())


# ---- the template ----------------------------------------------------------------

def find_template(romfs: Path, actor: str) -> dict[str, bytes]:
    standalone = romfs / "Model" / f"{actor}.Nin_NX_NVN.szs"
    if standalone.exists():
        return read_archive(standalone)
    want = f"{actor}.Nin_NX_NVN.szs"
    for pack in sorted((romfs / "Pack").glob("*.pack")):
        files = sarc(pack.read_bytes())
        for k, blob in files.items():
            if k.split("/")[-1] == want:
                print(f"template: {pack.name}/{k}")
                return sarc(yaz0(blob) if blob[:4] == b"Yaz0" else blob)
    raise SystemExit(f"no Deluxe archive '{want}' in {romfs}/Model or {romfs}/Pack")


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--wiiu", required=True, type=Path)
    ap.add_argument("--template", required=True)
    ap.add_argument("--name", required=True)
    ap.add_argument("--romfs", required=True, type=Path)
    ap.add_argument("--out", required=True, type=Path)
    ap.add_argument("--map", action="append", default=[])
    ap.add_argument("--tex", action="append", default=[],
                    help="material=tex0,tex1,...: its textures in template sampler order, when the Wii U "
                         "sampler assign does not follow the template's layout (I_hmrflower hammer_head)")
    ap.add_argument("--pattern-frame",
                    help="show texture-pattern animations as at this frame, whatever frame the game holds "
                         "them on (the Cheep Cheep holds its colour variant, 0; the Bee needs 1) -- F0236")
    ap.add_argument("--tool", type=Path, default=TOOL)
    a = ap.parse_args()

    wiiu = {k: v for k, v in read_archive(a.wiiu).items() if v[:4] == b"FRES"}
    if len(wiiu) != 1:
        raise SystemExit(f"{a.wiiu}: expected one .bfres, found {sorted(wiiu)}")
    (wiiu_name, wiiu_bfres), = wiiu.items()
    if wiiu_bfres[4:8] == b"    ":
        raise SystemExit(f"{a.wiiu}: {wiiu_name} is already a Switch bfres")

    tpl = find_template(a.romfs, a.template)
    if "output.bfres" not in tpl or SHADER_FILE not in tpl:
        raise SystemExit(f"template '{a.template}' lacks output.bfres / {SHADER_FILE}: {sorted(tpl)}")
    if not a.tool.exists():
        raise SystemExit(f"build the converter first: dotnet build -c Release {TOOL.parents[3]}")

    with tempfile.TemporaryDirectory() as tmp:
        t = Path(tmp)
        (t / "in.bfres").write_bytes(wiiu_bfres)
        (t / "template.bfres").write_bytes(tpl["output.bfres"])
        cmd = [str(a.tool), str(t / "in.bfres"), str(t / "template.bfres"), str(t / "out.bfres"),
               "--model-name", a.name]
        # The skin count each template shading model was compiled for (F0234): one program per
        # shading model, keyed by gsys_weight, no default -- any other count draws with no program.
        for m in Fsha(tpl[SHADER_FILE]).models():
            weights = sorted({p.get("gsys_weight") for p in m["programs"]} - {None, "-1"})
            if len(weights) == 1:
                cmd += ["--skin", f"{m['name']}={weights[0]}"]
        for m in a.map:
            cmd += ["--map", m]
        for tex in a.tex:
            cmd += ["--tex", tex]
        if a.pattern_frame is not None:
            cmd += ["--pattern-frame", a.pattern_frame]
        rc = subprocess.run(cmd).returncode
        if rc not in (0, 3) or not (t / "out.bfres").exists():
            raise SystemExit(f"wiiu2dx failed ({rc})")
        bfres = repair_bntx_names((t / "out.bfres").read_bytes(), wiiu_texture_names(wiiu_bfres))

    archive = yaz0_compress(write_sarc({SHADER_FILE: tpl[SHADER_FILE], "output.bfres": bfres}))
    a.out.mkdir(parents=True, exist_ok=True)
    dest = a.out / f"{a.name}.Nin_NX_NVN.szs"
    dest.write_bytes(archive)
    print(f"wrote {dest} ({len(archive)} bytes; bfres {len(bfres)}, shaders from '{a.template}')")
    return 0 if rc == 0 else 3


if __name__ == "__main__":
    sys.exit(main())

