"""Symbol table used by the IPS generator.

The original codedx version imports a PyPI package called `demangler`, which
provides Itanium C++ demangling. That package has no wheel for current Python
(it needs a C build) and is *not* needed here: every hook in `hooks/hooks.hks`
names a plain C symbol, and `normalise_symtab.py` already emits unmangled names.
So demangling is now best-effort:

  1. the `demangler` package, if it happens to be installed;
  2. otherwise `c++filt`, which ships with binutils and devkitPro's MSYS2 and is
     what codedx's own README lists as the supported demangler;
  3. otherwise no demangling, and mangled lookups simply miss.

Failing to demangle must never be fatal: a missing demangling path would
otherwise make the patcher unable to build at all, which is a worse outcome than
not resolving a mangled alias that we do not use.
"""
from __future__ import annotations

import shutil
import subprocess

try:  # optional, and frequently unavailable
    import demangler as _demangler
except Exception:  # pragma: no cover - depends on the machine
    _demangler = None

_CXXFILT = shutil.which("c++filt")


def demangle(mangled_str: str):
    """Return the demangled name, or None if it cannot be demangled."""
    if _demangler is not None:
        try:
            out = _demangler.demangle(mangled_str)
            if out:
                return str(out)
        except Exception:
            pass
    if _CXXFILT:
        try:
            r = subprocess.run([_CXXFILT, mangled_str], capture_output=True,
                               text=True, timeout=10)
            if r.returncode == 0:
                out = r.stdout.strip()
                if out and out != mangled_str:
                    return out
        except Exception:
            pass
    return None


def demangling_available() -> bool:
    return _demangler is not None or _CXXFILT is not None


class SymbolTable:

    def __init__(self, demangle_names=True):
        self.mangled_dict = {}
        self.demangled_dict = {}
        self.hasDemangled = demangle_names and demangling_available()

    def __getitem__(self, key):
        address = self.mangled_dict.get(key)
        if address is None and self.hasDemangled:
            address = self.demangled_dict.get(key)
        return address

    def add(self, mangled_name, address):
        self.mangled_dict[mangled_name] = address
        if self.hasDemangled:
            try:
                d = demangle(mangled_name)
                if d:
                    self.demangled_dict[d] = address
            except Exception:
                pass

    def mangled_syms(self):
        return self.mangled_dict

    def demangled_syms(self):
        return self.demangled_dict

    @staticmethod
    def from_file(path, demangle_names=True, offset=0):
        sym_table = SymbolTable(demangle_names)

        with open(path, "r", errors="replace") as f:
            lines = f.readlines()

        is_map_file = len(lines) > 3 and lines[3].startswith("SYMBOL TABLE:")

        if is_map_file:
            for line in lines[4:]:
                line = line.replace("\u0167", " ").strip("\r\n")
                segs = line.split(" ")
                if len(segs) < 2 or len(segs[0]) != 8:
                    continue
                try:
                    address = int(segs[0], 16)
                except ValueError:
                    continue
                if address & 0x80000000:
                    address = -0x100000000 + address
                name = segs[-1]
                if name:
                    sym_table.add(name, address + offset)
        else:
            for line in lines:
                if line.startswith("#"):
                    continue
                line = (line.replace("\t", " ").replace("\r", "")
                            .replace("\n", "").replace("=", " ")
                            .replace(":", " ").replace(";", " "))
                segs = line.split()
                if len(segs) < 2:
                    continue
                try:
                    address = int(segs[1], 0)
                except ValueError:
                    continue
                sym_table.add(segs[0], address + offset)

        return sym_table
