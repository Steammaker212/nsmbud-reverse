"""Unpack a Nintendo Yaz0 + SARC archive (the .szs files in Model/).

The Model/*.szs files in Deluxe are Yaz0-compressed SARC (SARC = "SArc" magic
little-endian), the same container the Wii U game uses. This reader is
read-only and dependency-free: it exists so "what is inside kakibo" can be
answered from the shipped romfs rather than guessed at.

    python scripts/sarc.py list  <file.szs>
    python scripts/sarc.py tree  <file.szs>
    python scripts/sarc.py cat   <file.szs> <node path>
    python scripts/sarc.py info  <file.szs>

SARC layout (all little-endian; header at 0x00 after Yaz0 is inflated):
   0x00  "SARC"
   0x04  u16 header size (0x14)
   0x06  u16 BOM (0xFEFF)
   0x08  u32 file size
   0x0C  u32 data offset
   0x10  u16 version (0x0100)
   0x12  u16 reserved
   0x14  "SFAT"  u32 header size, u16 node count, u16 hash key
          nodes: u32 hash, u32 name offset (x4), u32 data begin, u32 data end
   ....  "SFNT"  u32 header size, u16 reserved, u16 reserved
          names: NUL-terminated, at name offset * 4 from the SFNT start
   ....  data at data offset, 4-byte aligned; begin/end are relative to it
"""
from __future__ import annotations

import argparse
import struct
import sys
from pathlib import Path


def yaz0_decompress(src: bytes) -> bytes:
    if src[:4] != b"Yaz0":
        raise ValueError("not Yaz0")
    size = struct.unpack_from(">I", src, 4)[0]
    out = bytearray()
    i = 16                                     # header is 0x10 bytes
    n = len(src)
    while len(out) < size:
        if i >= n:
            break
        code = src[i]
        i += 1
        for bit in range(8):
            if len(out) >= size:
                break
            if i >= n:
                break
            if code & 0x80:
                out.append(src[i])
                i += 1
            else:
                b1 = src[i]
                b2 = src[i + 1] if i + 1 < n else 0
                i += 2
                dist = ((b1 & 0x0F) << 8) | b2
                copy = b1 >> 4
                if copy == 0:
                    copy = src[i] + 0x12
                    i += 1
                else:
                    copy += 2
                start = len(out) - (dist + 1)
                for k in range(copy):
                    out.append(out[start + k])
            code <<= 1
    return bytes(out)


class Sarc:
    def __init__(self, data: bytes):
        if data[:4] != b"SARC":
            raise ValueError(f"not SARC (magic {data[:4]!r})")
        self.data = data
        self.header_size, = struct.unpack_from("<H", data, 4)
        self.file_size, self.data_offset = struct.unpack_from("<II", data, 8)
        sfat = 0x14
        if data[sfat:sfat + 4] != b"SFAT":
            raise ValueError("no SFAT")
        sfat_size, count, self.hash_key = struct.unpack_from("<HHI", data, sfat + 4)
        self.nodes = []
        p = sfat + sfat_size
        for _ in range(count):
            h, attr, begin, end = struct.unpack_from("<IIII", data, p)
            p += 16
            self.nodes.append({
                "hash": h,
                # SFAT attributes: bits 0-23 are the name offset in 4-byte
                # units, bits 24-31 the node flags (0x01 = "has name").
                "name_offset": (attr & 0xFFFFFF) * 4,
                "flags": attr >> 24,
                "begin": begin, "end": end,
                "attrs": attr,
            })
        if data[p:p + 4] != b"SFNT":
            raise ValueError("no SFNT")
        self.sfnt = p
        sfnt_size, = struct.unpack_from("<I", data, p + 4)
        # Names are relative to the end of the SFNT header (8 bytes in every
        # Deluxe file), not to the "SFNT" magic.
        self.names = p + sfnt_size
        for node in self.nodes:
            s = self.names + node["name_offset"]
            e = data.index(b"\0", s)
            node["name"] = data[s:e].decode("utf-8", "replace")
        # SARC stores paths with '/' separators already.
        self.by_name = {node["name"]: node for node in self.nodes}

    def read(self, name: str) -> bytes:
        node = self.by_name[name]
        start = self.data_offset + node["begin"]
        return self.data[start:start + (node["end"] - node["begin"])]

    def size_of(self, name: str) -> int:
        node = self.by_name[name]
        return node["end"] - node["begin"]


def load(path: str) -> tuple[Sarc, dict]:
    raw = Path(path).read_bytes()
    info = {"file": path, "file_size": len(raw), "compressed": raw[:4] == b"Yaz0"}
    if raw[:4] == b"Yaz0":
        info["yaz0_header"] = {
            "decompressed_size": struct.unpack_from(">I", raw, 4)[0],
            "alignment": struct.unpack_from(">I", raw, 8)[0],
        }
        raw = yaz0_decompress(raw)
    info["sarc_size"] = len(raw)
    return Sarc(raw), info


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__.split("\n")[0])
    ap.add_argument("command", choices=["list", "tree", "cat", "info", "hexdump"])
    ap.add_argument("path")
    ap.add_argument("node", nargs="?")
    args = ap.parse_args()

    sarc, info = load(args.path)

    if args.command == "info":
        for k, v in info.items():
            print(f"{k}: {v}")
        print(f"hash key: 0x{sarc.hash_key:08X}")
        print(f"data offset: 0x{sarc.data_offset:X}")
        print(f"nodes: {len(sarc.nodes)}")
        return 0

    if args.command == "list":
        for node in sorted(sarc.by_name, key=str.lower):
            print(f"{sarc.size_of(node):>9}  {node}")
        return 0

    if args.command == "tree":
        depth = {}
        for name in sarc.by_name:
            parts = name.split("/")
            for i in range(1, len(parts)):
                depth["/".join(parts[:i])] = True
        for name in sorted(set(sarc.by_name) | set(depth), key=str.lower):
            if name in sarc.by_name:
                print(f"{sarc.size_of(name):>9}  {name}")
            else:
                print(f"{'':>9}  {name}/")
        return 0

    if args.command == "cat":
        if not args.node:
            raise SystemExit("cat needs a node path")
        sys.stdout.buffer.write(sarc.read(args.node))
        return 0

    if args.command == "hexdump":
        if not args.node:
            raise SystemExit("hexdump needs a node path")
        data = sarc.read(args.node)
        for off in range(0, min(len(data), 0x200), 16):
            chunk = data[off:off + 16]
            hexs = " ".join(f"{b:02x}" for b in chunk)
            text = "".join(chr(b) if 32 <= b < 127 else "." for b in chunk)
            print(f"{off:08x}  {hexs:<47}  {text}")
        return 0
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
