"""Repair the BNTX texture dictionary of Deluxe model archives written with BfresLibrary.

    python scripts/models/fix_bntx_dict.py [--dry-run] <archive.szs | folder> ...

BfresLibrary's BNTX writer damages one texture name in every archive it writes and builds the
texture dictionary (an nn::util::ResDic patricia trie) from the damaged name. The game finds
textures through that trie, so that texture is never bound: a colour texture draws the model
black, a lightmap halves its lighting (docs/WIIU_MODELS.md, "The real cause of the black").

For each archive this restores a damaged name from the texture names the model itself uses
(the bfres string table, which is intact), rebuilds the trie, checks that every texture is
found by lookup, and patches those bytes in place: the SARC layout, the other files and the
rest of the bfres are left exactly as they were. Archives that need nothing are not written.
"""
from __future__ import annotations

import argparse
import struct
import sys
from pathlib import Path

HERE = Path(__file__).resolve().parent
sys.path.insert(0, str(HERE))
sys.path.insert(0, str(HERE.parents[0] / "sdk"))
from course_sprites import yaz0  # noqa: E402
from wiiu2dx import dict_build, dict_find, yaz0_compress  # noqa: E402

# AboodXD's libyaz0 (pip install libyaz0) when present: much faster than the pure-Python codec
# above (its Cython part may print a compile error on import and fall back; it still works).
try:
    import contextlib
    import io
    with contextlib.redirect_stdout(io.StringIO()), contextlib.redirect_stderr(io.StringIO()):
        import libyaz0
    def unpack(raw: bytes) -> bytes:
        return bytes(libyaz0.decompress(raw))
    def pack(data: bytes, alignment: int) -> bytes:
        return bytes(libyaz0.compress(data, alignment, 1))  # level 9's brute-force search takes minutes
    CODEC = "libyaz0"
except ImportError:
    CODEC = "built-in pure-Python Yaz0 (slow; pip install --user libyaz0, and do not run with python -I)"
    def unpack(raw: bytes) -> bytes:
        return yaz0(raw)
    def pack(data: bytes, alignment: int) -> bytes:
        return yaz0_compress(data, alignment)


def strings(data: bytes, s: int) -> list[tuple[int, bytes]]:
    """(offset of the u16 length, string) for every entry of the _STR block at s."""
    count = struct.unpack_from("<I", data, s + 0x10)[0]
    out, p = [], s + 0x14
    for _ in range(count + 1):          # entry 0 is the empty string
        n = struct.unpack_from("<H", data, p)[0]
        out.append((p, bytes(data[p + 2:p + 2 + n])))
        p += 2 + n + 1
        p += p % 2
    return out


def printable(s: bytes) -> bool:
    return all(0x20 <= c < 0x7F and c != 0x3F for c in s)


def sarc_files(data: bytes) -> list[tuple[str, int, int]]:
    """(name, start, end) of every file in a little-endian SARC, as absolute offsets."""
    assert data[:4] == b"SARC" and data[6:8] == b"\xff\xfe", "not a little-endian SARC"
    data_start = struct.unpack_from("<I", data, 0x0C)[0]
    count = struct.unpack_from("<H", data, 0x14 + 6)[0]
    sfat = 0x14 + 12
    sfnt = sfat + 16 * count + 8
    out = []
    for i in range(count):
        _, attr, start, end = struct.unpack_from("<IIII", data, sfat + 16 * i)
        name = ""
        if attr & 0x01000000:
            p = sfnt + (attr & 0xFFFF) * 4
            name = data[p:data.index(b"\0", p)].decode()
        out.append((name, data_start + start, data_start + end))
    return out


def fix_bfres(b: bytearray, label: str, log: list[str]) -> bool:
    """Fix the BNTX inside bfres b in place. True when something changed."""
    base = b.find(b"BNTX")
    if base < 0:
        return False
    bn_end = base + struct.unpack_from("<I", b, base + 0x1C)[0]
    # The model's own names: every _STR block of the bfres outside the BNTX.
    used, j = set(), -1
    while True:
        j = b.find(b"_STR", j + 1)
        if j < 0:
            break
        if not base <= j < bn_end:
            try:
                used |= {s for _, s in strings(b, j) if s}
            except struct.error:
                pass
    s = b.find(b"_STR", base)
    entries = strings(b, s)
    present = {x for _, x in entries}
    changed = False
    for off, name in entries:
        if not name or printable(name):
            continue
        keep = max(0, len(name) - 3)    # the stray u32 covers the last 3 characters and the NUL
        cands = sorted(w for w in used - present if len(w) == len(name) and w[:keep] == name[:keep])
        if len(cands) == 1:
            b[off + 2:off + 2 + len(name)] = cands[0]
            present.add(cands[0])
            log.append(f"  {label}: name {name!r} -> {cands[0].decode()!r}")
            changed = True
        else:
            log.append(f"  {label}: name {name!r} left as is ({'unused by the model' if not cands else cands})")
    d = b.find(b"_DIC", base)
    count = struct.unpack_from("<I", b, d + 4)[0]
    keys = []
    for i in range(1, count + 1):
        kp = base + struct.unpack_from("<Q", b, d + 8 + 16 * i + 8)[0]
        keys.append(bytes(b[kp + 2:kp + 2 + struct.unpack_from("<H", b, kp)[0]]))
    # Two textures of one name (kamiya: a template lightmap was imported while the Wii U copy's
    # name was still damaged, so it was added instead of replacing it). A ResDic cannot hold
    # both; the earlier copy (the Wii U one: imports are appended) is renamed so the material
    # finds the later one.
    for i, k in enumerate(keys):
        if k in keys[i + 1:]:
            kp = base + struct.unpack_from("<Q", b, d + 8 + 16 * (i + 1) + 8)[0]
            if kp == base + struct.unpack_from("<Q", b, d + 8 + 16 * (keys.index(k, i + 1) + 1) + 8)[0]:
                raise SystemExit(f"{label}: duplicate texture {k!r} shares one name string")
            new = k[:-1] + b"~"
            b[kp + 2:kp + 2 + len(k)] = new
            keys[i] = new
            log.append(f"  {label}: duplicate texture {k.decode()!r}: the earlier copy renamed {new.decode()!r}")
            changed = True
    bn = memoryview(b)[base:]
    dd = d - base
    before = [k for i, k in enumerate(keys) if dict_find(bytes(bn), dd, k) != i]
    if before or changed:
        for i, (ref, left, right) in enumerate(dict_build(keys)):
            struct.pack_into("<iHH", b, d + 8 + 16 * i, ref, left, right)
        bad = [k for i, k in enumerate(keys) if dict_find(bytes(memoryview(b)[base:]), dd, k) != i]
        if bad:
            raise SystemExit(f"{label}: still unreachable after the rebuild: {bad}")
        log.append(f"  {label}: dictionary rebuilt; were unreachable: "
                   f"{[k.decode(errors='replace') for k in before] or 'none'}")
        return True
    return False


def fix_archive(path: Path, dry_run: bool) -> str:
    raw = path.read_bytes()
    compressed = raw[:4] == b"Yaz0"
    data = bytearray(unpack(raw) if compressed else raw)
    if data[:4] != b"SARC":
        return "skipped (not a SARC)"
    log: list[str] = []
    changed = False
    for name, start, end in sarc_files(bytes(data)):
        if data[start:start + 4] != b"FRES":
            continue
        blob = bytearray(data[start:end])
        if fix_bfres(blob, name, log):
            data[start:end] = blob
            changed = True
    if not changed:
        return "ok, nothing to fix"
    if not dry_run:
        out = pack(bytes(data), struct.unpack_from(">I", raw, 8)[0]) if compressed else bytes(data)
        if (unpack(out) if compressed else out) != bytes(data):
            raise SystemExit(f"{path}: recompression check failed")
        path.write_bytes(out)
    return ("would fix" if dry_run else "fixed") + "\n" + "\n".join(log)


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("paths", nargs="+", type=Path)
    ap.add_argument("--dry-run", action="store_true")
    a = ap.parse_args()
    print(f"Yaz0 codec: {CODEC}", flush=True)
    files = []
    for p in a.paths:
        files += sorted(p.glob("*.szs")) if p.is_dir() else [p]
    import time
    for f in files:
        print(f"{f.parent.name}/{f.name}: ...", end=" ", flush=True)
        t = time.time()
        result = fix_archive(f, a.dry_run)
        print(f"{result} ({time.time() - t:.1f}s)", flush=True)
    return 0


if __name__ == "__main__":
    sys.exit(main())
