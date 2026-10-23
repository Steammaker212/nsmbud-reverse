.section ".crt0", "ax"

@ The module's first byte. Its run-time address is the address the module was
@ loaded at, which is why mod_main.c reports it as proof of having been loaded.
@ Vendored from codedx (GPL-3.0); the `.global` on _crt0_section is ours, so the
@ C side can read the load address.
.global _crt0_section
_crt0_section:
    .word 0
    .word __mod0_start - _crt0_section

.global __mod0_start
__mod0_start:
    .ascii "MOD0"
    .word _DYNAMIC             - __mod0_start
    .word __bss_start__        - __mod0_start
    .word __bss_end__          - __mod0_start
    .word __eh_frame_hdr_start - __mod0_start
    .word __eh_frame_hdr_end   - __mod0_start
    .word __bss_start__        - __mod0_start   @ Runtime-generated module object: Linkerscript reserves 0x60 bytes for this at __bss_start__

.global _init
_init:
    bx      lr      @ Return to rltd


@ Assure that custom constructors are called after main ones.
@
@ The .hks hook at RVA 0x19C branches here from the game's static-init path.
@ The two instructions after the call replay what the branch displaced:
@   sub   sp, r11, #8            (E24BD008)
@   ldmfd sp!, {r4,r5,r11,pc}    (E8BD8830)
@ Both words were read out of the retail image at 0x600001A0 and 0x600001A4
@ before being written here, so the game resumes exactly as it would have.
.global static_init_hook
static_init_hook:
    bl      static_init
    sub     sp, r11, #8
    ldmfd   sp!, {r4,r5,r11,pc}

.section ".note.GNU-stack", "", %progbits
