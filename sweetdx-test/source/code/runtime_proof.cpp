// runtime_proof.cpp -- asks the only question this phase can answer on hardware.
//
// A module can load, link, patch correctly and still never be called. Three
// separate facts have to be established, and they fail independently:
//
//   1. the module was loaded at all      -> mod_base is non-zero
//   2. its constructor ran               -> mod_ready / init_array ran
//   3. a *game* call reached module code -> hook_calls > 0
//
// Only the third proves the branch patch works, so the proof file records all
// three separately rather than a single "ran = yes".
//
// The file is written to sd:/nsmbudx/proof.txt. A Switch reading it over its SD
// card is the hardware claim; an emulator writing it is not, and the format says
// which build produced it so the two can never be confused after the fact.

#include "nn.h"
#include "string.h"
#include "log.h"
#include "project.h"

// Provided by crt0.s: the first byte of the module. Its run-time value is
// exactly the address the loader chose, which no other symbol can tell us.
extern "C" char _crt0_section;

// Written by every generated hook wrapper.
extern "C" u32 mod_hook_calls;
extern "C" u32 mod_ready;

// Set by static_init() once the module's constructors have run.
static u32 proof_written;

namespace {

// A tiny formatter. The module links -nostdlib, so there is no sprintf; this
// writes only what the proof needs (hex and decimal) and never overruns.
struct Buf {
    char data[512];
    u32 len;

    Buf() : len(0) { data[0] = '\0'; }

    void put(const char* s)
    {
        while (*s && len < sizeof(data) - 1)
            data[len++] = *s++;
        data[len] = '\0';
    }

    void hex(u32 v)
    {
        static const char* d = "0123456789ABCDEF";
        char tmp[9];
        for (int i = 0; i < 8; i++)
            tmp[i] = d[(v >> ((7 - i) * 4)) & 0xF];
        tmp[8] = '\0';
        put("0x");
        put(tmp);
    }

    void dec(u32 v)
    {
        char tmp[11];
        int i = 0;
        if (v == 0)
            tmp[i++] = '0';
        while (v) {
            tmp[i++] = char('0' + (v % 10));
            v /= 10;
        }
        char out[11];
        for (int j = 0; j < i; j++)
            out[j] = tmp[i - 1 - j];
        out[i] = '\0';
        put(out);
    }
};

} // namespace


// Called by every hook wrapper the first time it is entered, and by mod_init.
// Safe to call repeatedly: the file is only ever written once, because a second
// write would race the game's file system for no benefit.
extern "C" void mod_write_proof(void)
{
    if (proof_written)
        return;
    proof_written = 1;

    nn::Result rc = nn::fs::MountSdCard("sd");
    if (!rc.isSuccess())
        return;

    nn::fs::CreateDirectory("sd:/nsmbudx");

    nn::fs::FileHandle fh;
    rc = nn::fs::OpenFile(&fh, "sd:/nsmbudx/proof.txt",
                          nn::fs::OpenMode_ReadWrite);
    if (!rc.isSuccess())
        rc = nn::fs::CreateFile("sd:/nsmbudx/proof.txt", 0);
    if (!rc.isSuccess())
        return;
    if (!(rc = nn::fs::OpenFile(&fh, "sd:/nsmbudx/proof.txt",
                                nn::fs::OpenMode_ReadWrite)).isSuccess())
        return;

    Buf b;
    b.put("nsmbudx-loader proof\n");
    b.put("-------------------\n");
    b.put("project      " PROJECT_NAME " " PROJECT_VERSION_STRING "\n");
    b.put("game         New Super Mario Bros. U Deluxe v1.0.0\n");
    b.put("title_id     0100EA80032EA000\n");
    b.put("build_id     AEE6DCCC06D9C05B42061E2019123A61\n");
    b.put("\n");

    // 1. the module is resident, and where.
    b.put("module_base  ");
    b.hex((u32)&_crt0_section);
    b.put("\n");

    // 2. the module's own constructor ran.
    b.put("mod_ready    ");
    b.dec(mod_ready);
    b.put("\n");

    // 3. a game call actually reached module code. This is the one that
    //    distinguishes a working hook from a module that merely loaded.
    b.put("hook_calls   ");
    b.dec(mod_hook_calls);
    b.put("\n");

    b.put("\n");
    b.put("interpretation:\n");
    b.put("  module_base != 0  and hook_calls > 0  => the branch patch executed\n");
    b.put("  module_base != 0  and hook_calls == 0 => loaded, never called\n");
    b.put("  no file at all                        => the loader did not run us\n");

    nn::fs::WriteFile(fh, 0, b.data, b.len, nn::fs::WriteOption(1));
    nn::fs::FlushFile(fh);
    nn::fs::CloseFile(fh);
}
