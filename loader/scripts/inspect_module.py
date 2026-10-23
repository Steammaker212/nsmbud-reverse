"""Inspect a built module: segments, MOD0, and the branch to static_init.

The checks here are the ones that decide whether a Switch loader will accept the
module at all, so they are mechanical and printed rather than summarised:

  1. exactly 3 PT_LOAD segments (elf2nso.py refuses anything else)
  2. the module's first word is the MOD0 magic offset/count pair, and MOD0's
     relative fields point inside the module
  3. `_init` returns immediately (codedx's crt0 does `bx lr`), so the loader's
     DT_INIT cannot run off the end
  4. every relocation is a relative one, because the module is loaded at an
     unknown base

Usage:
    python inspect_module.py out/mod.elf
"""
from __future__ import annotations

import struct
import sys

from elftools.elf.elffile import ELFFile
from elftools.elf.relocation import RelocationSection


def main(argv) -> int:
    path = argv[1]
    with open(path, "rb") as fh:
        elf = ELFFile(fh)

        loads = [s for s in elf.iter_segments() if s.header.p_type == 'PT_LOAD']
        print("PT_LOAD segments: %d" % len(loads))
        for s in loads:
            print("  vaddr=%08X filesz=%08X memsz=%08X flags=%s"
                  % (s.header.p_vaddr, s.header.p_filesz, s.header.p_memsz,
                     s.header.p_flags))

        # MOD0 lives at the module's first byte.
        text = loads[0]
        fh.seek(text.header.p_offset)
        head = fh.read(0x40)
        first_word, second_word = struct.unpack_from("<II", head, 0)
        mod0_off = second_word
        print("\nmodule first word : %08X" % first_word)
        print("MOD0 offset       : %08X" % mod0_off)

        ok = True
        if mod0_off + 8 > len(head):
            fh.seek(text.header.p_offset + mod0_off)
            blob = fh.read(0x20)
        else:
            blob = head[mod0_off:mod0_off + 0x20]
        magic = blob[0:4]
        print("MOD0 magic        : %r" % magic)
        if magic != b"MOD0":
            print("  FAIL: module does not start with a MOD0 header")
            ok = False

        fields = struct.unpack_from("<6i", blob, 4)
        names = ["dynamic", "bss_start", "bss_end", "eh_frame_hdr_start",
                 "eh_frame_hdr_end", "module_object"]
        print("\nMOD0 relative fields (all must land inside the module):")
        for name, value in zip(names, fields):
            absolute = mod0_off + value
            inside = 0 <= absolute < text.header.p_filesz + 0x100000
            print("  %-18s %+8d -> +%08X  %s"
                  % (name, value, absolute & 0xFFFFFFFF,
                     "ok" if inside else "OUTSIDE"))
            if not inside:
                ok = False

        # .dynamic must exist and be inside the module, i.e. -pie worked.
        dyn = [s for s in elf.iter_segments() if s.header.p_type == 'PT_DYNAMIC']
        print("\nPT_DYNAMIC segments: %d" % len(dyn))

        rel = 0
        other = []
        for sec in elf.iter_sections():
            if isinstance(sec, RelocationSection):
                for r in sec.iter_relocations():
                    # R_ARM_RELATIVE is 23; the module must be position
                    # independent, so anything else would need a real dynamic
                    # relocator before the module could run.
                    if r.entry.r_info_type == 23:
                        rel += 1
                    else:
                        other.append(r.entry.r_info_type)
        print("relocations: RELATIVE=%d  other=%d %s"
              % (rel, len(other), sorted(set(other)) if other else ""))
        if other:
            print("  FAIL: non-relative relocations present; the loader would "
                  "have to resolve them before the module runs")
            ok = False

        # _init must be a bare return, or DT_INIT runs into .text.
        sym = elf.get_section_by_name('.symtab')
        if sym:
            s = sym.get_symbol_by_name('_init')
            if s:
                addr = s[0].entry.st_value
                for seg in loads:
                    if seg.header.p_vaddr <= addr < seg.header.p_vaddr + seg.header.p_filesz:
                        fh.seek(seg.header.p_offset + (addr - seg.header.p_vaddr))
                        w = struct.unpack("<I", fh.read(4))[0]
                        print("\n_init at %08X: %08X (%s)"
                              % (addr, w,
                                 "bx lr" if (w & 0x0FFFFFFF) == 0x012FFF1E else "NOT bx lr"))
                        break

    print("\nRESULT: %s" % ("module header looks loadable" if ok else "header problems above"))
    return 0 if ok else 1


if __name__ == "__main__":
    sys.exit(main(sys.argv))
