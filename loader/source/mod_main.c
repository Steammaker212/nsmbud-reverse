/* mod_main.c -- entry point and the small runtime the loader needs.
 *
 * Written against loader/include/hook_api.h; no libc, no C++ runtime. The
 * loader calls `mod_init` once after relocation.
 *
 * This file is ours (not from codedx). Every address it touches comes from
 * data/loader/main.sym at link time.
 */
#include "hook_api.h"

/* Symbol references resolved by sdk.ld / main.sym at link time. */
extern char __bss_start__[];
extern char __bss_end__[];

static inline void zero_bss(void)
{
    volatile u32 *p = (volatile u32 *)__bss_start__;
    volatile u32 *end = (volatile u32 *)__bss_end__;
    while (p < end)
        *p++ = 0;
}

/* A tiny ring buffer for hook_log. The loader reads it through the module's
 * exported symbol table, so a hook can report without a syscall. */
#define LOG_CAP 4096
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
    static const char digits[] = "0123456789ABCDEF";
    hook_log(label);
    hook_log("0x");
    for (int shift = 28; shift >= 0; shift -= 4)
        log_buf[log_len++] = digits[(value >> shift) & 0xF];
    log_buf[log_len] = 0;
}

/* Exported so the loader (and a debugger) can read it. */
const char *mod_get_log(void)
{
    return log_buf;
}

void mod_init(void)
{
    zero_bss();
    hook_log("nsmbud-reverse loader: init\n");
}
