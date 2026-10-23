"""Decode the generated IPS and prove each record branches to its hook.

The patcher reports success if it wrote *something*. That is not the same as a
correct patch: a record could encode the branch from the wrong base, or the hook
symbol could have resolved to a game address instead of module code, and the game
would still boot and simply never call the hook.

So every record is decoded back from the bytes that will be written:

  * the recorded offset must equal `site_rva + 0x100` (NSO header size), because
    the IPS is applied to the NSO file, not to the loaded image
  * the 4-byte word must be a B or BL, with the link bit matching the hook type
  * the displacement must be `(dest - (site + 8)) / 4`, where **site** is an
    address in the game's own image (`0x60000000 + site_rva`) and **dest** is an
    address in our module (`module_base + hook_symbol_offset`)

Those two bases are different and it matters. The patch site is inside the retail
main module, which is loaded at `0x60000000`; our module is loaded after it, at
`0x60CD1000`. Using the module base for the site -- which this script did on its
first run -- reports every record as "wrong target" even though the patcher's
arithmetic was right. Both bases are named explicitly below so the mistake cannot
recur silently.

Usage:
    python verify_ips.py --ips out/0100EA80032EA000.ips \
        --sym out/mod.sym --hks ../hooks/hooks.hks --base 0x00CD1000
"""
from __future__ import annotations

import argparse
import re
import struct
from pathlib import Path

NSO_HEADER = 0x100

# Address the game's own main module is mapped at. The patch site is inside it.
IMAGE_BASE = 0x60000000


def read_ips(path: Path):
    """Yield (offset, data) records from a codedx IPS32 file.

    The format is *not* classic IPS. codedx's ips32.py writes:

        "IPS32"                      4-byte magic
        repeat: u32be offset, u16be size, size bytes
        "EEOF"                       terminator

    Classic IPS uses a 3-byte offset / 2-byte size and "PATCH"/"EOF", with a
    special case when size == 0. Reading this file with the classic parser is
    what made the first verification attempt report "not an IPS file".
    """
    data = path.read_bytes()
    if data[:5] != b"IPS32":
        raise SystemExit("%s is not an IPS32 file (magic %r)" % (path, data[:5]))
    i = 5
    while i < len(data):
        if data[i:i + 4] == b"EEOF":
            return
        off = struct.unpack_from(">I", data, i)[0]
        size = struct.unpack_from(">H", data, i + 4)[0]
        i += 6
        yield off, data[i:i + size]
        i += size


def parse_hks(path: Path):
    hooks = []
    cur = None
    for line in path.read_text(errors="replace").splitlines():
        s = line.split("@")[0].strip()
        if not s:
            continue
        m = re.match(r"^(\w+):$", s)
        if m:
            if cur:
                hooks.append(cur)
            cur = {"name": m.group(1)}
            continue
        if cur is None:
            continue
        m = re.match(r"^type:\s*(\w+)", s)
        if m:
            cur["type"] = m.group(1)
        m = re.match(r"^func:\s*(\w+)", s)
        if m:
            cur["func"] = m.group(1)
        m = re.match(r"^addr:\s*(0x[0-9A-Fa-f]+)", s)
        if m:
            cur["addr"] = int(m.group(1), 16)
    if cur:
        hooks.append(cur)
    return hooks


def load_syms(path: Path):
    out = {}
    for line in path.read_text(errors="replace").splitlines():
        m = re.match(r"^(\w+)\s*=\s*0x([0-9A-Fa-f]+);", line.strip())
        if m:
            out[m.group(1)] = int(m.group(2), 16)
    return out


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--ips", required=True)
    ap.add_argument("--sym", required=True)
    ap.add_argument("--hks", required=True)
    ap.add_argument("--base", default="0x00CD1000")
    args = ap.parse_args()

    base = int(args.base, 0)
    syms = load_syms(Path(args.sym))
    hooks = parse_hks(Path(args.hks))
    records = list(read_ips(Path(args.ips)))

    print("hooks: %d   ips records: %d" % (len(hooks), len(records)))
    by_site = {h["addr"]: h for h in hooks}

    ok = 0
    bad = 0
    for off, data in records:
        site_rva = off - NSO_HEADER
        h = by_site.get(site_rva)
        if h is None:
            print("  record at file 0x%X (site RVA 0x%X): no matching hook"
                  % (off, site_rva))
            bad += 1
            continue
        if len(data) != 4:
            print("  %-32s record is %d bytes, expected 4" % (h["name"], len(data)))
            bad += 1
            continue
        word = struct.unpack("<I", data)[0]

        want = syms.get(h["func"])
        if want is None:
            print("  %-32s symbol %s not in module" % (h["name"], h["func"]))
            bad += 1
            continue

        # `want` is module-relative (the offset from the module's load address),
        # so the absolute address of the hook is image_base + module_base + want.
        # Omitting image_base here made every record look like a wrong target.
        dest = IMAGE_BASE + base + want        # absolute address of the hook
        src = IMAGE_BASE + site_rva            # absolute address of the patch site
        expected_imm = (dest - (src + 8)) >> 2
        expected = 0xEA000000 | (expected_imm & 0xFFFFFF)
        if h["type"].startswith("bl"):
            expected |= 1 << 24

        cond = word >> 28
        link = (word >> 24) & 1
        imm = word & 0xFFFFFF
        if imm & 0x800000:
            imm -= 0x1000000
        got_dest = (src + 8 + imm * 4)

        kind = "bl" if link else "b"
        kind_ok = kind == ("bl" if h["type"].startswith("bl") else "b")
        addr_ok = got_dest == dest
        word_ok = word == expected

        status = "ok" if (kind_ok and addr_ok and word_ok) else "FAIL"
        if status == "ok":
            ok += 1
        else:
            bad += 1
        print("  %-32s @RVA 0x%06X %s -> 0x%08X (hook 0x%08X)  %s%s%s"
              % (h["name"], site_rva, kind, got_dest, dest, status,
                 "" if addr_ok else " [wrong target]",
                 "" if word_ok else " [word 0x%08X != 0x%08X]" % (word, expected)))

    print("\nverified: %d / %d" % (ok, len(records)))
    return 0 if bad == 0 and ok == len(hooks) else 1


if __name__ == "__main__":
    raise SystemExit(main())
