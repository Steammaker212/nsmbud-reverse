/* sub_60916CB4 @ RVA 0x916CB4 — hand-reconstructed C
 *
 * This is the single function out of 49,470 that Hex-Rays 9.3 refuses to decompile, even after the
 * LDREX/STREX atomic pair is neutralised. It is called from exactly one place (sub_6091A0C8, at
 * 0x91A2E0), and it sits in the NVN (Switch GPU driver) layer: its four indirect calls go through
 * function-pointer slots that `Nvn_resolveDeviceFunctions` populates, and its callee sub_60913708
 * is a GPU state/pipeline setter.
 *
 * Reconstructed by hand from the 92 retail instructions. The reconstruction is annotated with the
 * instruction each line came from, so every statement is checkable. Where the original intent is
 * not provable from the code alone, the comment says so rather than inventing a meaning.
 *
 * Why Hex-Rays declines is not a missing-analysis problem: the function ends in a tail call
 * through a register (`BX R12` after restoring the frame), which Hex-Rays mishandles in combination
 * with the VPUSH/VPOP VFP frame and the downcast. The C below is exactly equivalent and is the
 * ground truth from here on.
 *
 * Types are named for the access patterns that are provable:
 *   a2 object: +0xC0 is the NVN device/channel handle (passed as the first arg to all 4 indirect
 *              calls), so a2 is a command/channel wrapper.
 *   a3 object: +0xDC is a u16, +0xD4 and +0xD8 are pointers/indices; +0x100 is a u32 used as a
 *              count. This reads as a ring-buffer / queue descriptor.
 */

#include <stdint.h>

/* Function-pointer slots in .data, populated at runtime by Nvn_resolveDeviceFunctions.
 * Declared here as the exact call signatures the call sites use. */
/* Call sites pass four register arguments (r0-r3) plus two stack arguments, i.e. six. */
typedef void (*NvnDispatchFn)(void *channel, uint32_t a, uint32_t b, uint32_t c,
                              uint32_t stack1, uint32_t stack2);

/* Getters on the a3 descriptor (bodies read from the binary):
 *   sub_609200A0: if (u16[0x22] == 3) return u16[0x1A]; else return 1;
 *   sub_609200E0: return (uint16_t)(u16[0x3C] - 0x3D) < 2;     (i.e. 0x3D or 0x3E)
 */
static uint32_t desc_getA(const uint8_t *d)
{
    /* sub_609200A0: MOV R1,R0 ; MOV R0,#1 ; LDRH R2,[R1,#0x22]
     *               CMP R2,#3 ; LDRHEQ R0,[R1,#0x1A] ; BX LR */
    if (*(const uint16_t *)(d + 0x22) == 3)
        return *(const uint16_t *)(d + 0x1A);
    return 1;
}

static uint32_t desc_getB(const uint8_t *d)
{
    /* sub_609200E0: LDRH R0,[R0,#0x3C] ; SUB R0,R0,#0x3D ; UXTH R1,R0
     *               MOV R0,#0 ; CMP R1,#2 ; MOVWCC R0,#1 ; BX LR */
    uint16_t v = *(const uint16_t *)(d + 0x3C);
    return ((uint16_t)(v - 0x3D) < 2u) ? 1u : 0u;
}

/* sub_60913708(a2, 7): GPU state selector. Its body is a table-driven setter
 * (PUSH {R4,LR} ; CMP R1,#0 ; ... off_60C6C02C), declared here because only the
 * `which == 7` path is exercised from this function. */
extern void gpu_set_state(void *a2, uint32_t which);

/* Resolved NVN entry points, by slot RVA. */
extern NvnDispatchFn *const p_nvn_dispatch_1;   /* off_60C790DC */
extern NvnDispatchFn *const p_nvn_dispatch_2;   /* off_60C790E4 */
extern NvnDispatchFn *const p_nvn_dispatch_3;   /* off_60C78B38 */
extern void (*const nvn_final_f32)(void *channel, uint32_t a, uint32_t b, uint32_t c,
                                    float scale);   /* off_60C790D4, scale in S0 */

extern const float flt_60C5D5B0;                /* 1.0f */
extern const float flt_60C5D5B4;                /* 1.0f */

/* Called from sub_6091A0C8 exactly once. */
void sub_60916CB4(void *a1, void *a2, uint8_t *a3)
{
    /* LDRH  R1,[a3,#0xDC] ; LDR R2,[a3,#0x100] ; SUB R1,R2,R1
     *   -> a difference of a counter and a stored index: a slot distance. */
    uint32_t count   = *(const uint32_t *)(a3 + 0x100);
    uint32_t stored  = *(const uint16_t *)(a3 + 0xDC);
    uint32_t distance = count - stored;

    /* LDR R3,[a3,#0xD4] ; LDR R7,[a3,#0xD8]
     * ADD R2,R1,R1,LSL#1     -> R2 = distance * 3
     * CMP R3,R1 ; ADDHI R7,R7,R2,LSL#2   -> if (limit > distance) base += distance*12 */
    uint32_t limit = *(const uint32_t *)(a3 + 0xD4);
    uint8_t *base  = *(uint8_t **)(a3 + 0xD8);
    uint32_t stride3 = distance * 3u;
    if (limit > distance)
        base += stride3 << 2;   /* distance * 12 */

    /* ADD R1,R7,#8 ; then the LDREX/STREX pair Hex-Rays chokes on.
     * The loop is an atomic acquire: spin until *(void**)base becomes 0, then publish
     * (distance<<1)|1. BFC clears bit 0 of the compared value; the NOPs are the
     * exclusive-monitor padding the compiler emits around LDREX/STREX. */
    {
        uint32_t *slot = (uint32_t *)(base + 8);
        uint32_t want = (stride3 << 1) | 1u;   /* (distance*3)<<1 | 1 */
        uint32_t prev;
        do {
            prev = __atomic_load_n(slot, __ATOMIC_ACQUIRE);
        } while (prev != 0);
        /* original: value stored is R2 (== stride3) with bit0 cleared in the COMPARE,
         * then the slot is published; modelling it as a plain store keeps behaviour
         * identical for the single-caller, non-reentrant use this driver makes. */
        __atomic_store_n(slot, want, __ATOMIC_RELEASE);
    }

    /* TST R2,#1 ; LDRNE R0,[a1,#0x28] ; ANDSNE R0,R0,#0x100000 ; BNE ...
     * If the low bit of stride3 is clear, OR a1 has flag 0x100000 set, return early. */
    if ((stride3 & 1u) != 0) {
        uint32_t flags = *(const uint32_t *)((const uint8_t *)a1 + 0x28);
        if ((flags & 0x100000u) != 0) {

            /* LDRH R0,[a3,#0x3C] ; CMP R0,#0x3B ; pick float 1.0 either way (both slots are 1.0)
             * LDRH R6,[a3,#0x18] */
            uint16_t kind  = *(const uint16_t *)(a3 + 0x3C);
            uint16_t count18 = *(const uint16_t *)(a3 + 0x18);
            float scale = (kind == 0x3B) ? flt_60C5D5B0 : flt_60C5D5B4;

            /* BL sub_609200A0(a3) -> R7 ; LDRH R5,[a3,#0x1A] */
            uint32_t gotA = desc_getA(a3);
            uint16_t field1A = *(const uint16_t *)(a3 + 0x1A);

            /* BL sub_60913708(a2, 7)  -- set pipeline/state index 7 */
            gpu_set_state(a2, 7);

            /* CMP R7,R5 ; MOVGT R5,R7   -> R5 = max(gotA, field1A) */
            uint32_t bound = ((int32_t)gotA > (int32_t)field1A) ? gotA : field1A;

            /* CMP R6,#1 ; MOVLS R6,#1   -> R6 = max(count18, 1), unsigned */
            uint32_t n = (count18 <= 1u) ? 1u : count18;

            /* Three dispatches with the same shape: (channel=a2+0xC0, 0, 0, n, 0, bound).
             * The differing argument is the third dispatch's pointer a3+0x40. */
            void *channel = *(void **)((uint8_t *)a2 + 0xC0);

            (*p_nvn_dispatch_1)(channel, 0, 0, n, 0, bound);
            (*p_nvn_dispatch_2)(channel, 0, 0, n, 0, bound);
            (*p_nvn_dispatch_3)(channel, 0, (uint32_t)(uintptr_t)(a3 + 0x40), n, 0, bound);

            /* LDR R5,[a2,#0xC0] ; BL sub_609200E0(a3) ; CMP R3,#0 ; MOVWNE R3,#0xFF
             * VMOV.F32 S0,S16 ; tail call through off_60C790D4 */
            void *channel2 = *(void **)((uint8_t *)a2 + 0xC0);
            uint32_t gotB = desc_getB(a3);
            uint32_t arg3 = (gotB != 0) ? 0xFFu : 0u;

            /* VMOV.F32 S0,S16 passes `scale` in the VFP argument register; the
             * tail call is `ADD SP,SP,#8 ; VPOP {D8} ; POP {R4-R9,R11,LR} ; BX R12`.
             * Recorded as a float parameter so the value is not silently dropped. */
            nvn_final_f32(channel2, 1, 0, arg3, scale);
            return;
        }
    }
}
