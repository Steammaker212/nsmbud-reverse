import struct

SRC = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.elf"
DST = r"C:\Users\Saif Khan\Downloads\main.idb\convertedmain.rebased.elf"
BASE = 0x60000000
ENTRY = 0x60562698  # nnMain

b = bytearray(open(SRC, "rb").read())
eh = struct.unpack_from("<16sHHIIIIIHHHHHH", b, 0)
etype, machine, entry, phoff, shoff, phnum, shnum = eh[1], eh[2], eh[4], eh[5], eh[6], eh[10], eh[12]
print("type", etype, "machine", machine, "entry", hex(entry), "phnum", phnum, "shnum", shnum)

# e_type -> ET_EXEC, e_entry -> nnMain
struct.pack_into("<H", b, 16, 2)
struct.pack_into("<I", b, 24, ENTRY)

loads = 0
for i in range(phnum):
    off = phoff + i * 32
    p_type, p_off, p_va, p_pa, p_fsz, p_msz, p_fl, p_al = struct.unpack_from("<IIIIIIII", b, off)
    if p_type == 1 and p_va < BASE:
        struct.pack_into("<II", b, off + 8, p_va + BASE, p_pa + BASE)
        loads += 1
print("rebased loads", loads)

seccount = 0
for i in range(shnum):
    off = shoff + i * 40
    sh_name, sh_type, sh_flags, sh_addr, sh_offset, sh_size = struct.unpack_from("<IIIIII", b, off)
    if (sh_flags & 2) and sh_addr < BASE:
        struct.pack_into("<I", b, off + 12, sh_addr + BASE)
        seccount += 1
print("rebased sections", seccount)

open(DST, "wb").write(b)
print("wrote", DST, len(b))

# verify with IDA
import idapro
import idaapi
import ida_segment
import ida_bytes
import idc

idapro.enable_console_messages(False)
idapro.open_database(DST, True)
print("filetype", idaapi.get_file_type_name())
print("imagebase", hex(idaapi.get_imagebase()))
print("segments", ida_segment.get_segm_qty(), flush=True)
for n in range(ida_segment.get_segm_qty()):
    s = ida_segment.getnseg(n)
    print("  ", ida_segment.get_segm_name(s), hex(s.start_ea), hex(s.end_ea),
          "class", ida_segment.get_segm_class(s), "perm", s.perm, "bitness", s.bitness)
print("create_insn@_init", idc.create_insn(0x60000024), flush=True)
print("_init disasm", idc.GetDisasm(0x60000024), flush=True)
print("nnMain disasm", idc.GetDisasm(ENTRY), flush=True)
import ida_funcs
print("funcs", ida_funcs.get_func_qty(), flush=True)
idapro.close_database(False)
