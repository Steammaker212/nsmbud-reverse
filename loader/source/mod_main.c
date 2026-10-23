/* mod_main.c -- entry point and the small runtime the loader needs.
 *
 * Written against loader/include/hook_api.h; no libc, no C++ runtime.
 *
 * ## How a run on hardware is proved
 *
 * A log buffer inside the module is useless for proof: it only exists while the
 * module does, and reading it needs a debugger. This module instead *persists*
 * evidence through the game's own filesystem service, which is already
 * initialised by the time static_init() runs:
 *
 *     sd:/nsmbudx-runtime/proof.txt
 *
 * The file records a monotonically increasing counter, the address the module
 * was loaded at, and the number of hook calls seen. If that file appears on a
 * console's SD card with a plausible load address, the module was loaded and its
 * code executed. If it never appears, nothing ran, and this project will say so
 * rather than claim otherwise.
 *
 * The filesystem calls are the game's own imported functions, resolved from
 * data/loader/main.sym at link time -- the same mechanism the hooks use.
 */
#include "hook_api.h"

extern char __bss_start__[];
extern char __bss_end__[];
extern char __data_start[];

/* nn::fs entry points, from the game's own import table (loader/sdk.ld).
 *
 * Prototypes are the SDK's, and the two that matter are:
 *   Result MountSdCard(const char *mount);
 *   Result OpenFile(FileHandle *out, const char *path, int mode);
 * A Result is a wrapped 32-bit value; the lowest bit of the raw word is 1 for
 * success in this SDK, so success is tested with `(rc & 1) == 1`.
 */
typedef u32 Result;
typedef s32 FileHandle;

DECLARE_ORIG(Result, _ZN2nn2fs11MountSdCardEPKc, (const char *mount));
DECLARE_ORIG(Result, _ZN2nn2fs15CreateDirectoryEPKc, (const char *path));
DECLARE_ORIG(Result, _ZN2nn2fs10CreateFileEPKcx, (const char *path, u64 size));
DECLARE_ORIG(Result, _ZN2nn2fs8OpenFileEPNS0_10FileHandleEPKci,
             (FileHandle *out, const char *path, int mode));
DECLARE_ORIG(Result, _ZN2nn2fs9WriteFileENS0_10FileHandleExPKvjRKNS0_11WriteOptionE,
             (FileHandle h, s64 offset, const void *buf, u32 size, const void *opt));
DECLARE_ORIG(Result, _ZN2nn2fs9FlushFileENS0_10FileHandleE, (FileHandle h));
DECLARE_ORIG(Result, _ZN2nn2fs9CloseFileENS0_10FileHandleE, (FileHandle h));

u32 mod_ready;

/* Filled in by crt0.s: the address the module actually loaded at, which the
 * game's loader only knows at run time. crt0.s is the first thing in the
 * module, so the address of _crt0_section *is* the load address. */
extern char _crt0_section[];

/* ---- tiny formatting, no libc ------------------------------------------ */

static u32 str_len(const char *s)
{
    const char *p = s;
    while (*p)
        ++p;
    return (u32)(p - s);
}

static char *put_str(char *o, const char *s)
{
    while (*s)
        *o++ = *s++;
    return o;
}

static char *put_hex(char *o, u32 v)
{
    static const char digits[] = "0123456789ABCDEF";
    int shift;
    *o++ = '0';
    *o++ = 'x';
    for (shift = 28; shift >= 0; shift -= 4)
        *o++ = digits[(v >> shift) & 0xF];
    return o;
}

static char *put_dec(char *o, u32 v)
{
    char tmp[12];
    int n = 0;
    if (v == 0) {
        *o++ = '0';
        return o;
    }
    while (v && n < (int)sizeof(tmp)) {
        tmp[n++] = (char)('0' + (v % 10));
        v /= 10;
    }
    while (n)
        *o++ = tmp[--n];
    return o;
}

/* ---- the log ring, kept for a hook to inspect -------------------------- */

#define LOG_CAP 2048
static char log_buf[LOG_CAP];
static u32 log_len;

void hook_log(const char *msg)
{
    if (!msg)
        return;
    while (*msg && log_len < LOG_CAP - 1)
        log_buf[log_len++] = *msg++;
    log_buf[log_len] = 0;
}

void hook_log_hex(const char *label, u32 value)
{
    char *o = log_buf + log_len;
    u32 room = LOG_CAP - 1 - log_len;
    if (label) {
        while (*label && room > 10) {
            *o++ = *label++;
            --room;
        }
    }
    if (room > 10) {
        o = put_hex(o, value);
        *o = 0;
        log_len = (u32)(o - log_buf);
    }
}

void hook_log_dec(const char *label, u32 value)
{
    char *o = log_buf + log_len;
    u32 room = LOG_CAP - 1 - log_len;
    if (label) {
        while (*label && room > 12) {
            *o++ = *label++;
            --room;
        }
    }
    if (room > 12) {
        o = put_dec(o, value);
        *o = 0;
        log_len = (u32)(o - log_buf);
    }
}

const char *mod_get_log(void)
{
    return log_buf;
}

/* ---- the proof file ---------------------------------------------------- */

#define PROOF_DIR  "sd:/nsmbudx-runtime"
#define PROOF_PATH "sd:/nsmbudx-runtime/proof.txt"
#define PROOF_CAP  512

/* Counts hook invocations so the file can report that the hook, not just the
 * module, was reached. Declared here and incremented by hooks. */
u32 mod_hook_calls;

static char proof_buf[PROOF_CAP];

static Result write_proof(u32 ok_mount, u32 ok_dir)
{
    FileHandle h = 0;
    Result rc;
    char *o = proof_buf;
    u32 len;

    o = put_str(o, "nsmbud-reverse loader\n");
    o = put_str(o, "module_base=");
    o = put_hex(o, (u32)_crt0_section);
    o = put_str(o, "\nmod_ready=");
    o = put_dec(o, mod_ready);
    o = put_str(o, "\nmount_rc=");
    o = put_hex(o, ok_mount);
    o = put_str(o, "\nmkdir_rc=");
    o = put_hex(o, ok_dir);
    o = put_str(o, "\nhook_calls=");
    o = put_dec(o, mod_hook_calls);
    o = put_str(o, "\nbss_start=");
    o = put_hex(o, (u32)__bss_start__);
    o = put_str(o, "\nbss_end=");
    o = put_hex(o, (u32)__bss_end__);
    o = put_str(o, "\nend\n");
    len = (u32)(o - proof_buf);

    /* Mode 6 = read|write|create. */
    rc = HOOK_ORIG(_ZN2nn2fs8OpenFileEPNS0_10FileHandleEPKci)(&h, PROOF_PATH, 6);
    if ((rc & 1) != 1)
        return rc;

    rc = HOOK_ORIG(_ZN2nn2fs9WriteFileENS0_10FileHandleExPKvjRKNS0_11WriteOptionE)(
        h, 0, proof_buf, len, NULL);
    (void)HOOK_ORIG(_ZN2nn2fs9FlushFileENS0_10FileHandleE)(h);
    (void)HOOK_ORIG(_ZN2nn2fs9CloseFileENS0_10FileHandleE)(h);
    return rc;
}

void mod_init(void)
{
    Result mount_rc, dir_rc;

    mod_ready = 0;

    mount_rc = HOOK_ORIG(_ZN2nn2fs11MountSdCardEPKc)("sd");
    dir_rc = HOOK_ORIG(_ZN2nn2fs15CreateDirectoryEPKc)(PROOF_DIR);

    mod_ready = 0x4E534D42; /* 'NSMB' */
    hook_log("nsmbud-reverse loader: init\n");

    (void)write_proof(mount_rc, dir_rc);
}

/* Refresh the proof file with the current hook counter. A hook calls this once
 * on its first invocation, so the file's hook_calls field distinguishes
 * "module loaded" from "hook actually executed". */
void mod_write_proof(void)
{
    Result mount_rc = HOOK_ORIG(_ZN2nn2fs11MountSdCardEPKc)("sd");
    Result dir_rc = HOOK_ORIG(_ZN2nn2fs15CreateDirectoryEPKc)(PROOF_DIR);
    (void)write_proof(mount_rc, dir_rc);
}
