#!/usr/bin/env python3
"""Nintendo Switch NSO0 (ARM32) -> analysis ELF32 (EM_ARM).

Language: Python 3.10+. Standard library only.
Target platform: any POSIX host (tested on Linux, Python 3.14).

NSO0 modules for 32-bit ARM titles are, structurally, ELF32 ARM images with
the ELF header replaced by the NSO header and the three program segments
laid out independently. This tool rebuilds a real ELF32 ARM container so
that Ghidra/IDA/objdump can load the module with the module's own runtime
addresses (RVAs) intact.

Provenance of the LZ4 block decoder and the NSO header layout:
  nso2elf.py, MIT License, (c) 2026 NxCheatEngine contributors, HY-Leung
  (https://github.com/Eiffel2018/nso2elf) - reimplemented below for the
  32-bit ARM profile this module needs.

Every decompressed segment is verified against the SHA-256 hash carried in
the NSO header before anything is written, so a successful run proves the
decode is byte-exact.
"""
from __future__ import annotations

import argparse
import hashlib
import os
import struct
import sys
import tempfile
from pathlib import Path

# ---------------------------------------------------------------------------
# NSO header layout (switchbrew NSO0 format)
# ---------------------------------------------------------------------------
NSO_MAGIC = b"NSO0"

FLAG_TEXT_COMPRESS = 1 << 0
FLAG_RO_COMPRESS = 1 << 1
FLAG_DATA_COMPRESS = 1 << 2
FLAG_TEXT_HASH = 1 << 3
FLAG_RO_HASH = 1 << 4
FLAG_DATA_HASH = 1 << 5
FLAG_ZBIC = 1 << 7

DT_NULL, DT_NEEDED, DT_PLTRELSZ, DT_PLTGOT = 0, 1, 2, 3
DT_HASH, DT_STRTAB, DT_SYMTAB, DT_RELA, DT_RELASZ = 4, 5, 6, 7, 8
DT_RELAENT, DT_STRSZ, DT_SYMENT = 9, 10, 11
DT_INIT, DT_FINI = 12, 13
DT_REL, DT_RELSZ, DT_RELENT = 17, 18, 19
DT_PLTREL, DT_JMPREL = 20, 23
DT_INIT_ARRAY, DT_FINI_ARRAY = 25, 26
DT_INIT_ARRAYSZ, DT_FINI_ARRAYSZ = 27, 28
DT_GNU_HASH = 0x6FFFFEF5

# ARM32 relocation types as they appear in the NSO relocation tables.
R_ARM_ABS32, R_ARM_REL32 = 2, 3
R_ARM_COPY, R_ARM_GLOB_DAT, R_ARM_JUMP_SLOT, R_ARM_RELATIVE = 20, 21, 22, 23

PT_LOAD, PT_DYNAMIC, PT_NOTE = 1, 2, 4
PT_GNU_EH_FRAME = 0x6474E550
SHT_PROGBITS, SHT_SYMTAB, SHT_STRTAB = 1, 2, 3
SHT_RELA, SHT_HASH, SHT_DYNAMIC, SHT_NOTE = 4, 5, 6, 7
SHT_NOBITS, SHT_REL = 8, 9
SHT_INIT_ARRAY, SHT_FINI_ARRAY = 14, 15
SHT_GNU_HASH = 0x6FFFFFF6

SHF_WRITE, SHF_ALLOC, SHF_EXECINSTR = 0x1, 0x2, 0x4

EF_ARM_EABI_VER5 = 0x05000000
EF_ARM_ABI_FLOAT_SOFT = 0x00000200
EM_ARM = 40
ET_DYN = 3
ET_EXEC = 2


class ConversionError(ValueError):
    pass


def require(ok, message):
    if not ok:
        raise ConversionError(message)


def u32(data, offset):
    require(0 <= offset and offset + 4 <= len(data), "Truncated read")
    return struct.unpack_from("<I", data, offset)[0]


def lz4_block(data: bytes, expected: int) -> bytes:
    """Decode the raw LZ4 block used by NSO segments, including overlapping matches."""
    out = bytearray()
    pos = 0

    def length(base):
        nonlocal pos
        if base == 15:
            while True:
                require(pos < len(data), "Truncated LZ4 length")
                extra = data[pos]
                pos += 1
                base += extra
                require(base <= expected, "LZ4 length exceeds output budget")
                if extra != 255:
                    break
        return base

    while pos < len(data):
        token = data[pos]
        pos += 1
        literals = length(token >> 4)
        require(pos + literals <= len(data), "Truncated LZ4 literals")
        require(len(out) + literals <= expected, "LZ4 output exceeds declared size")
        out.extend(data[pos:pos + literals])
        pos += literals
        if pos == len(data):
            break
        require(pos + 2 <= len(data), "Truncated LZ4 match offset")
        offset = data[pos] | (data[pos + 1] << 8)
        pos += 2
        require(0 < offset <= len(out), "Invalid LZ4 match offset")
        match = length(token & 15) + 4
        require(len(out) + match <= expected, "LZ4 output exceeds declared size")
        pattern = out[-offset:]
        if match <= offset:
            out.extend(pattern[:match])
        else:
            out.extend((pattern * ((match + offset - 1) // offset))[:match])
    require(len(out) == expected, "LZ4 decompressed size mismatch")
    return bytes(out)


class Segment:
    __slots__ = ("name", "rva", "data", "offset", "stored", "codec", "verified")

    def __init__(self, name, rva, data, offset, stored, codec, verified):
        self.name, self.rva, self.data = name, rva, data
        self.offset, self.stored, self.codec, self.verified = offset, stored, codec, verified


def parse_nso(raw: bytes) -> tuple:
    require(len(raw) >= 256 and raw[:4] == NSO_MAGIC, "Expected an NSO0 file")
    require(u32(raw, 4) == 0, "Unsupported NSO version")
    flags = u32(raw, 12)
    require(flags & ~0xFF == 0, "Unknown NSO flag bits")
    require(not flags & FLAG_ZBIC, "ZBIC-compressed modules are not supported by this tool")

    segments, warnings = [], []
    for i, name in enumerate(("text", "rodata", "data")):
        off = u32(raw, 16 + 16 * i)
        rva = u32(raw, 16 + 16 * i + 4)
        size = u32(raw, 16 + 16 * i + 8)
        compressed = bool(flags & (1 << i))
        stored = u32(raw, 96 + 4 * i) if compressed else size
        require(off >= 256 and off + stored <= len(raw), "NSO segment outside file")
        encoded = raw[off:off + stored]
        codec = "LZ4" if compressed else "raw"
        decoded = lz4_block(encoded, size) if compressed else encoded
        checked = bool(flags & (1 << (i + 3)))
        if checked:
            require(hashlib.sha256(decoded).digest() == raw[160 + 32 * i:192 + 32 * i],
                    f"{name} SHA-256 mismatch")
        else:
            warnings.append(f"{name}: source hash flag absent, integrity not verified")
        segments.append(Segment(name, rva, decoded, off, stored, codec, checked))

    bss = u32(raw, 60)
    nameoff, namesize = u32(raw, 28), u32(raw, 44)
    name = raw[nameoff:nameoff + namesize] if namesize else b""
    return raw[:256], name, segments, bss, warnings


class Section:
    __slots__ = ("name", "kind", "flags", "addr", "size", "offset", "link", "info",
                 "align", "entsize", "payload")

    def __init__(self, name, kind, flags=0, addr=0, size=0, offset=0, link=0, info=0,
                 align=1, entsize=0, payload=None):
        self.name, self.kind, self.flags = name, kind, flags
        self.addr, self.size, self.offset = addr, size, offset
        self.link, self.info, self.align, self.entsize = link, info, align, entsize
        self.payload = payload


def parse_dynamic(nso, text):
    """Read the MOD0 dynamic table. NSO ARM32 modules use 8-byte {u32,u32} entries."""
    mod = struct.unpack_from("<i", text.data, 4)[0]
    require(nso.read(mod, 4) == b"MOD0", "No MOD0 header in the text segment")
    mh = nso.read(mod, 28)
    dyn = mod + struct.unpack_from("<i", mh, 4)[0]
    tags, order = {}, []
    i = 0
    while True:
        require(i < 65536, "Dynamic table exceeds the entry budget")
        tag, value = struct.unpack("<II", nso.read(dyn + i * 8, 8))
        if tag == DT_NULL:
            break
        require(tag not in tags or tags[tag] == value, "Conflicting dynamic tags")
        tags[tag] = value
        order.append(tag)
        i += 1
    return tags, dyn, (i + 1) * 8, mh


def build_elf(header, name, segments, bss, tags, dyn_addr, dyn_size, mh):
    text, ro, data = segments
    sections = [Section("", 0)]

    def alloc(name_, kind, addr, size, flags, entsize=0, link=0, info=0):
        sec = Section(name_, kind, flags, addr, size, link=link, info=info, entsize=entsize)
        sections.append(sec)
        return len(sections) - 1

    def payload_section(name_, kind, blob, flags=0, entsize=0, link=0, info=0, align=1):
        sec = Section(name_, kind, flags, size=len(blob), link=link, info=info,
                      align=align, entsize=entsize, payload=blob)
        sections.append(sec)
        return len(sections) - 1

    # --- segment primaries -------------------------------------------------
    # The metadata sections below are carved out of the three loadable
    # segments. Overlapping sections make Ghidra fall back to its file address
    # space for the big ones, so the segments are emitted as a set of
    # non-overlapping pieces instead: the metadata sections themselves plus
    # generic sections covering the gaps.
    bss_index = alloc(".bss", SHT_NOBITS, data.rva + len(data.data), bss, SHF_ALLOC | SHF_WRITE)
    carved = []          # (segment index, addr, size) of every metadata section

    def carve(name_, kind, addr, size, flags, entsize=0, link=0, info=0):
        require(0 < size, f"Empty metadata section {name_}")
        for index, segment in enumerate(segments):
            if segment.rva <= addr and addr + size <= segment.rva + len(segment.data):
                carved.append((index, addr, size))
                return alloc(name_, kind, addr, size, flags, entsize, link, info)
        raise ConversionError(f"{name_} is outside the loadable segments")

    mod = struct.unpack_from("<i", text.data, 4)[0]
    carve(".nso.mod0", SHT_PROGBITS, mod, 28, SHF_ALLOC)

    init_addr = tags.get(DT_INIT)
    fini_addr = tags.get(DT_FINI)
    if init_addr:
        carve(".init", SHT_PROGBITS, init_addr, 0x1F4, SHF_ALLOC | SHF_EXECINSTR)
    if fini_addr:
        carve(".fini", SHT_PROGBITS, fini_addr, 0x68, SHF_ALLOC | SHF_EXECINSTR)

    # .dynamic is the module's own 8-byte-entry table: already ELF32-shaped.
    dynamic_section = Section(".dynamic", SHT_DYNAMIC, SHF_ALLOC | SHF_WRITE, dyn_addr, dyn_size)
    sections.append(dynamic_section)
    carved.append((2, dyn_addr, dyn_size))

    # --- symbols -----------------------------------------------------------
    # NSO symbol entries are 16 bytes: {u32 name, u32 value, u32 size,
    # u32 (st_info | st_shndx << 16)}. Elf32_Sym wants {name, value, size,
    # info, other, shndx}; only the final word needs splitting.
    sym_addr, sym_size = 0, 0
    dynstr_addr = dynstr_size = 0
    ro_rel = header[0x90:0x98]
    sym_rel = header[0x98:0xA0]
    dynstr_off, dynstr_size = struct.unpack("<II", ro_rel)
    sym_off, sym_size = struct.unpack("<II", sym_rel)
    dynstr_addr = ro.rva + dynstr_off
    sym_addr = ro.rva + sym_off
    require(dynstr_size and sym_size, "Module has no dynamic string or symbol table")
    require(dynstr_addr + dynstr_size <= ro.rva + len(ro.data), "Dynamic strings outside .rodata")
    require(sym_addr + sym_size <= ro.rva + len(ro.data), "Dynamic symbols outside .rodata")
    require(tags.get(DT_STRTAB, dynstr_addr) == dynstr_addr, "DT_STRTAB disagrees with the header")
    require(tags.get(DT_SYMTAB, sym_addr) == sym_addr, "DT_SYMTAB disagrees with the header")
    require(tags.get(DT_STRSZ, dynstr_size) == dynstr_size, "DT_STRSZ disagrees with the header")
    require(tags.get(DT_SYMENT, 16) == 16, "Expected 16-byte symbol entries")
    require(tags.get(DT_RELENT, 8) == 8, "Expected 8-byte relocation entries")

    strings = ro.data[dynstr_off:dynstr_off + dynstr_size]
    raw_syms = ro.data[sym_off:sym_off + sym_size]
    count = sym_size // 16
    table = bytearray(count * 16)
    first_global = count
    global_seen = False
    for i in range(count):
        sname, value, size, packed = struct.unpack_from("<IIII", raw_syms, i * 16)
        require(sname < len(strings) and strings.find(b"\0", sname) >= 0,
                "Invalid symbol string offset")
        info = packed & 0xFF
        shndx = packed >> 16
        if info >> 4:
            if not global_seen:
                first_global = i
            global_seen = True
        struct.pack_into("<IIIBBH", table, i * 16, sname, value, size, info, 0, shndx)
    sym_index = payload_section(".dynsym", SHT_SYMTAB, bytes(table), entsize=16,
                                 link=0, info=first_global, align=4)
    carve(".nso.dynsym", SHT_PROGBITS, sym_addr, sym_size, SHF_ALLOC)
    dynstr_index = carve(".dynstr", SHT_STRTAB, dynstr_addr, dynstr_size, SHF_ALLOC)
    sections[sym_index].link = dynstr_index

    # --- relocations: the NSO tables are already standard Elf32_Rel ---------
    jump_cells = set()
    for name_, ptr_tag, size_tag in ((".rel.dyn", DT_REL, DT_RELSZ),
                                      (".rel.plt", DT_JMPREL, DT_PLTRELSZ)):
        if not tags.get(size_tag):
            continue
        require(ptr_tag in tags, f"{name_} pointer tag missing")
        addr, size = tags[ptr_tag], tags[size_tag]
        require(size % 8 == 0, f"Invalid {name_} extent")
        blob = ro.data[addr - ro.rva:addr - ro.rva + size] if ro.rva <= addr < ro.rva + len(ro.data) \
            else data.data[addr - data.rva:addr - data.rva + size]
        require(len(blob) == size, f"{name_} runs past its segment")
        for i in range(size // 8):
            offset, info = struct.unpack_from("<II", blob, i * 8)
            rtype = info & 0xFF
            rsym = info >> 8
            require(rtype in (R_ARM_ABS32, R_ARM_REL32, R_ARM_COPY, R_ARM_GLOB_DAT,
                              R_ARM_JUMP_SLOT, R_ARM_RELATIVE), f"Unknown ARM relocation type {rtype}")
            if rtype == R_ARM_JUMP_SLOT:
                jump_cells.add(offset)
        index = carve(name_, SHT_REL, addr, size, SHF_ALLOC, 8)
        sections[index].link = sym_index
        sections[index].info = 0

    # --- GOT / PLT ---------------------------------------------------------
    pltgot = tags.get(DT_PLTGOT)
    if jump_cells:
        ordered = sorted(jump_cells)
        start, end = ordered[0], ordered[-1] + 4
        if end - start == 4 * len(ordered):
            alloc(".got.plt", SHT_PROGBITS, start, end - start, SHF_ALLOC | SHF_WRITE, 4)
        else:
            alloc(".got.plt", SHT_PROGBITS, start, end - start, SHF_ALLOC | SHF_WRITE, 4)

    # --- init / fini arrays (NSO stores 32-bit RVAs: already ELF32 sized) --
    for name_, ptr_tag, size_tag, kind in ((".init_array", DT_INIT_ARRAY, DT_INIT_ARRAYSZ, SHT_INIT_ARRAY),
                                           (".fini_array", DT_FINI_ARRAY, DT_FINI_ARRAYSZ, SHT_FINI_ARRAY)):
        if not tags.get(size_tag):
            continue
        require(ptr_tag in tags, f"{name_} pointer tag missing")
        addr, size = tags[ptr_tag], tags[size_tag]
        require(size % 4 == 0, f"Invalid {name_} extent")
        index = carve(name_, kind, addr, size, SHF_ALLOC | SHF_WRITE, 4)
        sections[index].link = sym_index

    # --- hash table --------------------------------------------------------
    hash_section = None
    if DT_HASH in tags:
        addr = tags[DT_HASH]
        nbucket, nchain = struct.unpack("<II", ro.data[addr - ro.rva:addr - ro.rva + 8])
        hash_section = Section(".hash", SHT_HASH, SHF_ALLOC, addr, 8 + 4 * (nbucket + nchain), entsize=4)
        sections.append(hash_section)

    dynamic_section.link = dynstr_index
    if hash_section is not None:
        hash_section.link = sym_index

    # --- generic sections covering the gaps between metadata ---------------
    # Every loadable byte belongs to exactly one section, so the section
    # table never overlaps and a loader can map all three segments in RAM.
    generic = []
    for index, segment in enumerate(segments):
        base = segment.rva
        end = base + len(segment.data)
        pieces = sorted((a, a + s) for idx, a, s in carved if idx == index)
        cursor = base
        for start, stop in pieces:
            require(start >= cursor, f"Overlapping metadata sections in {segment.name}")
            if start > cursor:
                generic.append((index, cursor, start - cursor))
            cursor = stop
        if cursor < end:
            generic.append((index, cursor, end - cursor))
    segment_flags = ((SHF_ALLOC | SHF_EXECINSTR), SHF_ALLOC, SHF_ALLOC | SHF_WRITE)
    segment_names = (".text", ".rodata", ".data")
    counters = {}
    for index, addr, size in generic:
        stem = segment_names[index]
        counters[stem] = counters.get(stem, 0) + 1
        name_ = stem if counters[stem] == 1 else f"{stem}.{counters[stem] - 1}"
        alloc(name_, SHT_PROGBITS, addr, size, segment_flags[index])

    # --- build id ----------------------------------------------------------
    buildid = header[64:96]
    note = struct.pack("<III", 4, len(buildid), 3) + b"GNU\0" + buildid
    note_index = payload_section(".note.gnu.build-id", SHT_NOTE, note, align=4)

    def provenance_note(kind, descriptor):
        owner = b"NSO\0"
        return (struct.pack("<III", len(owner), len(descriptor), kind) + owner +
                descriptor + bytes((-len(descriptor)) % 4))

    prov = provenance_note(0x4E530001, header)
    if name:
        prov += provenance_note(0x4E530002, name)
    prov += provenance_note(0x4E530003, bytes.fromhex(hashlib.sha256(header).hexdigest()))
    prov_index = payload_section(".note.nso", SHT_NOTE, prov, align=4)

    # --- file layout -------------------------------------------------------
    # Reserve the ELF header and program header table first so that every
    # segment keeps file offset congruent with its virtual address.
    entry = tags.get(DT_INIT, text.rva)
    phnum = 4
    phoff = 52
    out = bytearray(phoff + phnum * 32)
    segment_offsets = []
    for segment in segments:
        out.extend(b"\0" * ((segment.rva - len(out)) % 4096))
        segment_offsets.append(len(out))
        out.extend(segment.data)

    for sec in sections:
        if sec.payload is not None:
            align = max(1, sec.align)
            out.extend(b"\0" * ((-len(out)) % align))
            sec.offset = len(out)
            out.extend(sec.payload)
        elif sec.kind == SHT_NOBITS:
            # .bss occupies no file space; it starts where .data ends.
            sec.offset = segment_offsets[2] + len(segments[2].data)
        else:
            owner = None
            for i, segment in enumerate(segments):
                if segment.rva <= sec.addr and sec.addr + sec.size <= segment.rva + len(segment.data):
                    owner = i
                    break
            require(owner is not None, f"Section {sec.name} is not backed by a loadable segment")
            sec.offset = segment_offsets[owner] + sec.addr - segments[owner].rva

    # --- section header string table --------------------------------------
    shstr_index = len(sections)
    sections.append(Section(".shstrtab", SHT_STRTAB))
    shstrings = bytearray(b"\0")
    name_offsets = [0]
    for sec in sections[1:]:
        name_offsets.append(len(shstrings))
        shstrings.extend(sec.name.encode("ascii") + b"\0")
    sections[shstr_index].payload = bytes(shstrings)
    sections[shstr_index].size = len(shstrings)
    out.extend(b"\0" * ((-len(out)) % 4))
    sections[shstr_index].offset = len(out)
    out.extend(shstrings)

    # --- program headers ---------------------------------------------------
    headers = []
    for i, segment in enumerate(segments):
        headers.append((PT_LOAD, segment_offsets[i], segment.rva, segment.rva,
                        len(segment.data), len(segment.data) + (bss if i == 2 else 0),
                        (5, 4, 6)[i], 0x1000))
    dyn_section = next(s for s in sections if s.name == ".dynamic")
    headers.append((PT_DYNAMIC, dyn_section.offset, dyn_section.addr, dyn_section.addr,
                    dyn_section.size, dyn_section.size, 4, 4))
    for i, ph in enumerate(headers):
        struct.pack_into("<IIIIIIII", out, phoff + i * 32, *ph)

    # --- section headers ---------------------------------------------------
    out.extend(b"\0" * ((-len(out)) % 4))
    shoff = len(out)
    for nameoff, sec in zip(name_offsets, sections):
        out.extend(struct.pack("<IIIIIIIIII", nameoff, sec.kind, sec.flags, sec.addr,
                                sec.offset, sec.size, sec.link, sec.info, sec.align, sec.entsize))

    ident = b"\x7fELF" + bytes([1, 1, 1, 0]) + bytes(8)
    # ET_EXEC keeps every address equal to the module's own runtime RVA, so
    # the module's relocation targets (unrelocated RVAs) land on the right
    # bytes. ET_DYN makes loaders rebase the image, after which the NSO's
    # relocation table points at unmapped addresses.
    struct.pack_into("<16sHHIIIIIHHHHHH", out, 0, ident, ET_EXEC, EM_ARM, 1, entry,
                     phoff, shoff, EF_ARM_EABI_VER5 | EF_ARM_ABI_FLOAT_SOFT,
                     52, 32, phnum, 40, len(sections), shstr_index)

    # --- readback verification --------------------------------------------
    for i, segment in enumerate(segments):
        p_type, p_off, p_vaddr, _, p_filesz, p_memsz, p_flags, p_align = struct.unpack_from(
            "<IIIIIIII", out, phoff + i * 32)
        require(out[p_off:p_off + p_filesz] == segment.data, "Segment round-trip failure")
        require(p_vaddr == segment.rva, "Segment address round-trip failure")
        require(p_memsz == p_filesz + (bss if i == 2 else 0), "BSS round-trip failure")
    return bytes(out), sections


def publish(path: Path, data: bytes, force: bool):
    fd, temporary = tempfile.mkstemp(prefix="." + path.name + ".", suffix=".partial", dir=path.parent)
    try:
        with os.fdopen(fd, "wb") as handle:
            handle.write(data)
            handle.flush()
            os.fsync(handle.fileno())
        if force:
            os.replace(temporary, path)
        else:
            os.link(temporary, path)
            os.unlink(temporary)
    finally:
        if os.path.exists(temporary):
            os.unlink(temporary)


def main(argv=None):
    parser = argparse.ArgumentParser(description=__doc__,
                                     formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument("input", type=Path)
    parser.add_argument("-o", "--output", type=Path)
    parser.add_argument("--force", action="store_true", help="Overwrite an existing output")
    args = parser.parse_args(argv)

    try:
        destination = args.output or Path(str(args.input) + ".elf")
        require(destination.resolve() != args.input.resolve(), "Refusing to replace the input")
        if destination.exists():
            require(not os.path.samefile(destination, args.input), "Output is a hard link to the input")
            require(args.force, f"Output already exists: {destination}; use --force")
        raw = args.input.read_bytes()
        header, name, segments, bss, warnings = parse_nso(raw)

        class Reader:
            def __init__(self, segments):
                self.segments = segments

            def read(self, address, size):
                for segment in self.segments:
                    rel = address - segment.rva
                    if 0 <= rel and rel + size <= len(segment.data):
                        return segment.data[rel:rel + size]
                raise ConversionError(f"Address 0x{address:x}+0x{size:x} is outside the segments")

        nso = Reader(segments)
        tags, dyn_addr, dyn_size, mh = parse_dynamic(nso, segments[0])
        elf, sections = build_elf(header, name, segments, bss, tags, dyn_addr, dyn_size, mh)
        publish(destination, elf, args.force)

        print(f"{args.input}:")
        print(f"  build id: {header[64:96].hex()}")
        print(f"  {'seg':<8}{'file off':>10}{'file len':>10}{'mem off':>10}{'mem len':>10}{'bss':>10}")
        for i, segment in enumerate(segments):
            bss_size = bss if i == 2 else 0
            print(f"  {segment.name:<8}{segment.offset:>10x}{segment.stored:>10x}"
                  f"{segment.rva:>10x}{len(segment.data):>10x}{bss_size:>10x}")
        print("  compression: " + ", ".join(f"{s.name}={s.codec}" for s in segments))
        print("  hash checks: " + ", ".join(f"{s.name}={'OK' if s.verified else 'UNVERIFIED'}"
                                           for s in segments))
        print(f"  sections: {len(sections)}")
        print(f"ELF: {destination} ({len(elf):,} bytes; ELF32 ARM, relocations unapplied)")
        for warning in warnings:
            print("Warning: " + warning, file=sys.stderr)
        return 0
    except (ConversionError, OSError, struct.error, MemoryError) as exc:
        print(f"Error: {exc}", file=sys.stderr)
        return 1


if __name__ == "__main__":
    sys.exit(main())
