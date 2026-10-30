"""Convert a Wii U NSMBU model into a working NSMBU Deluxe archive: the conversion, every fix
found the hard way, and a full verification. docs/WIIU_MODEL_CONVERSION.md explains each step.

    py -3 scripts/models/convert_wiiu_model.py --wiiu <x.szs> --template <deluxe actor> --name <x> \\
        --romfs "<Deluxe romfs>" --out <dir> [wiiu2dx.py options ...] [--install <romfs/Model>]

Every option wiiu2dx.py takes is passed through (--map, --tex, --template-lightmaps,
--drop-material, --bake-scale, --pattern-frame ...). Run it with plain `py -3`, not `py -3 -I`:
isolated mode hides the user-installed libyaz0 and everything falls back to slow Yaz0.

  1. wiiu2dx.py converts. Its C# side and the Python packer already apply: per-attribute vertex
     buffers, inverse bind matrices, skin counts fitted to the template's compiled program (up
     and down), template lightmaps and missing textures imported, fog_index from the template,
     packed 10_10_10_2 normals copied from the Wii U data, BNTX name repair, the texture
     dictionary rebuilt, the duplicate-texture guard, optional baked scale.
  2. fix_bntx_dict.py runs over the result as a safety net (damaged names, duplicate textures,
     unreachable textures). It writes only if it finds something.
  3. The archive is verified, and nothing is installed unless every check passes:
       - each shape's skin count is one its shading model was compiled for;
       - each material's shading model is in the archive's .bfsha;
       - each texture a material names exists, and every texture is found by the game's lookup;
       - every texture name is printable;
       - every packed normal is unit length (or exactly as long as in the Wii U source);
       - fog_index equals the template material's.
"""
from __future__ import annotations

import argparse
import contextlib
import io
import os
import re
import shutil
import struct
import subprocess
import sys
import tempfile
from pathlib import Path

HERE = Path(__file__).resolve().parent
sys.path.insert(0, str(HERE))
sys.path.insert(0, str(HERE.parents[0] / "sdk"))
import wiiu2dx  # noqa: E402
from wiiu2dx import FAST_YAZ0, TOOL, SHADER_FILE, dict_find, find_template, read_archive  # noqa: E402
from bfsha_info import Fsha  # noqa: E402


def dump(bfres: bytes) -> str:
    fd, tmp = tempfile.mkstemp(suffix=".bfres")
    os.write(fd, bfres)
    os.close(fd)
    env = dict(os.environ, WIIU2DX_DUMP_PARAMS="1")
    try:
        return subprocess.run([str(TOOL), "--dump", tmp], capture_output=True, text=True, env=env).stdout
    finally:
        os.remove(tmp)


def packed_normal_errors(text: str) -> list[int]:
    return [int(x) for x in re.findall(r"packed normal .* (\d+)/\d+ not unit", text)]


def materials(text: str) -> dict[str, dict]:
    """shading model -> {'textures': [...], 'fog_index': value} from a dump, per material."""
    out, cur = {}, None
    for line in text.splitlines():
        m = re.match(r"  material ([^:]+): (\S+) tex=\[([^\]]*)\]", line)
        if m:
            cur = (m.group(1), m.group(2))
            out[cur] = {"textures": [t for t in m.group(3).split(",") if t], "fog_index": None}
        elif cur and line.strip().startswith("param fog_index"):
            out[cur]["fog_index"] = line.split("=")[-1].strip()
        elif not line.startswith("    "):
            cur = None if not line.startswith("  material") else cur
    return out


def verify(archive: Path, wiiu: Path, template: str, romfs: Path) -> list[str]:
    files = read_archive(archive)
    bfres, problems = files["output.bfres"], []
    weights = {m["name"]: {int(p["gsys_weight"]) for p in m["programs"] if p.get("gsys_weight") not in (None, "-1")}
               for m in Fsha(files[SHADER_FILE]).models()}
    text = dump(bfres)

    # skin counts and programs, per model
    shapes, mats = [], []
    def flush():
        for name, mi, skin in shapes:
            sm = mats[mi] if mi < len(mats) else None
            if sm not in weights:
                problems.append(f"{name}: shading model {sm} is not in the .bfsha")
            elif weights[sm] and skin not in weights[sm]:
                problems.append(f"{name}: skin count {skin}, but {sm} was compiled for {sorted(weights[sm])}")
    model = None
    for line in text.splitlines():
        if line.startswith("model "):
            if model:
                flush()
            model, shapes, mats = line.split()[1], [], []
        m = re.match(r"  shape (\S+): .*mat=(\d+).* skin=(\d+)", line)
        if m:
            shapes.append((f"{model}/{m.group(1)}", int(m.group(2)), int(m.group(3))))
        m = re.match(r"  material [^:]+: (\S+) tex=", line)
        if m:
            mats.append(m.group(1))
    if model:
        flush()

    # textures: names, existence, the game's dictionary lookup
    base = bfres.find(b"BNTX")
    bn = bfres[base:]
    d = bn.find(b"_DIC")
    count = struct.unpack_from("<I", bn, d + 4)[0]
    keys = []
    for i in range(1, count + 1):
        kp = struct.unpack_from("<Q", bn, d + 8 + 16 * i + 8)[0]
        keys.append(bn[kp + 2:kp + 2 + struct.unpack_from("<H", bn, kp)[0]])
    for i, k in enumerate(keys):
        if not all(0x20 <= c < 0x7F for c in k):
            problems.append(f"texture name {k!r} is damaged")
        if dict_find(bn, d, k) != i:
            problems.append(f"texture {k!r} is not found by the game's dictionary lookup")
    names = {k.decode(errors="replace") for k in keys}
    mat_info = materials(text)
    for (mat, sm), info in mat_info.items():
        for t in info["textures"]:
            if t not in names:
                problems.append(f"material {mat}: texture {t!r} is not in the archive")

    # normals: unit length, or as in the Wii U source
    got = sum(packed_normal_errors(text))
    src = [v for v in read_archive(wiiu).values() if v[:4] == b"FRES"][0]
    want = sum(packed_normal_errors(dump(src)))
    if got > want:
        problems.append(f"{got} packed normals are not unit length (the Wii U source has {want})")

    # fog_index from the template
    with contextlib.redirect_stdout(io.StringIO()):
        tpl = find_template(romfs, template)
    tpl_fog = {sm: info["fog_index"] for (_, sm), info in materials(dump(tpl["output.bfres"])).items()}
    for (mat, sm), info in mat_info.items():
        if sm in tpl_fog and info["fog_index"] != tpl_fog[sm]:
            problems.append(f"material {mat}: fog_index {info['fog_index']}, template {tpl_fog[sm]}")
    return problems


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--wiiu", required=True, type=Path)
    ap.add_argument("--template", required=True)
    ap.add_argument("--name", required=True)
    ap.add_argument("--romfs", required=True, type=Path)
    ap.add_argument("--out", required=True, type=Path)
    ap.add_argument("--install", type=Path, help="copy the verified archive here (romfs/Model); "
                    "an existing file of the same name is kept as <name>.bak first")
    a, passthrough = ap.parse_known_args()

    if not FAST_YAZ0:
        print("note: no compiled libyaz0; Yaz0 runs in pure Python (slow). See docs/WIIU_MODEL_CONVERSION.md")

    print(f"[1/3] converting {a.wiiu.name} with template '{a.template}'", flush=True)
    cmd = [sys.executable, str(HERE / "wiiu2dx.py"), "--wiiu", str(a.wiiu), "--template", a.template,
           "--name", a.name, "--romfs", str(a.romfs), "--out", str(a.out)] + passthrough
    rc = subprocess.run(cmd).returncode
    archive = a.out / f"{a.name}.Nin_NX_NVN.szs"
    if rc not in (0, 3) or not archive.exists():
        print(f"conversion failed ({rc})")
        return 1
    if rc == 3:
        print("note: wiiu2dx reported problems (a missing texture?); the checks below decide")

    print("[2/3] safety pass: fix_bntx_dict.py", flush=True)
    if subprocess.run([sys.executable, str(HERE / "fix_bntx_dict.py"), str(archive)]).returncode != 0:
        print("fix_bntx_dict.py failed")
        return 1

    print("[3/3] verifying", flush=True)
    problems = verify(archive, a.wiiu, a.template, a.romfs)
    if problems:
        print("FAILED:")
        for p in problems:
            print("  - " + p)
        return 1
    print(f"OK: {archive}")

    if a.install:
        dest = a.install / archive.name
        if dest.exists():
            shutil.copy2(dest, dest.with_suffix(dest.suffix + ".bak"))
            print(f"kept the previous one as {dest.name}.bak")
        shutil.copy2(archive, dest)
        print(f"installed {dest}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
