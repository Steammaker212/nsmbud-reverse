"""Names the module's own link defines, so the symbol map must not assign them.

Why this is a module and not a constant in two scripts: the exact failure this
guards against is a *disagreement* between what the linker defines and what the
game's symbol map claims. Keeping one list makes that disagreement impossible.

The failure mode, measured in this repository: `main.sym` contains the game's
`_DYNAMIC` at RVA 0x00C611AC. `emit_linker_script.py` wrote
`_DYNAMIC = -0x6FE54;`, and because a linker-script assignment is absolute it
overrode the `-pie`-generated `_DYNAMIC`. crt0.s then emitted a MOD0 whose
`dynamic` field pointed at 0xFFF901AC -- outside the module. sweetdx shipped the
same class of bug (`DT_INIT = 0xff32f024`) and every model rendered black.

`_init` and `_fini` are in the list for the same reason, and they are the pair
sweetdx's post-mortem names explicitly.
"""

MODULE_SYMBOLS = {
    # linker-script definitions
    "_DYNAMIC", "_GLOBAL_OFFSET_TABLE_", "__start__", "__end__", "_end",
    "_edata", "__bss_start__", "__bss_end__", "__data_start", "__got_start__",
    "__got_end__", "__sdk_start", "__eh_frame_hdr_start", "__eh_frame_hdr_end",
    "__tdata_lma", "__tdata_lma_end", "__tls_start", "__tls_end",
    "__init_array_start", "__init_array_end", "__fini_array_start",
    "__fini_array_end", "__preinit_array_start", "__preinit_array_end",
    # crt0.s definitions
    "_crt0_section", "__mod0_start", "_init", "_fini",
    "static_init", "static_init_hook",
    # C runtime stubs we provide
    "__dso_handle", "__cxa_atexit", "__cxa_guard_acquire",
    "__cxa_guard_release",
}
