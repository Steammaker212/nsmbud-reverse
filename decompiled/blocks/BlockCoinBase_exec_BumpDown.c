#include "nsmbudx_prelude.h"

// ---- addr: 0x605b6790 */ int __fastcall BlockCoinBase_executeState_BumpDown(int a1)
/* line: 1 */ {
/* line: 2 */   float32x2_t v1; // d0
/* line: 3 */   float32x2_t v2; // d2
/* line: 4 */ 
/* line: 5, address: 0x605b679c */   v2.n64_u32[0] = 2.0;
/* line: 6, address: 0x605b67b0 */   v1.n64_f32[0] = *(float *)(a1 + 6812) + *(float *)(a1 + 124);
/* line: 7, address: 0x605b67b8 */   *(_DWORD *)(a1 + 124) = vmin_f32(v1, v2).n64_u32[0];
/* line: 8, address: 0x605b67c8 */   (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 232))(a1, 2);
/* line: 9, address: 0x605b67dc */   *(float *)(a1 + 108) = *(float *)(a1 + 108) + *(float *)(a1 + 120);
/* line: 10, address: 0x605b67ec */   *(float *)(a1 + 112) = *(float *)(a1 + 112) + *(float *)(a1 + 124);
/* line: 11, address: 0x605b67fc */   *(float *)(a1 + 116) = *(float *)(a1 + 116) + *(float *)(a1 + 128);
/* line: 12, address: 0x605b6800 */   CollisionMgr_process((unsigned __int8 *)(a1 + 648));
/* line: 13 */   return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 216))(a1);
/* line: 14 */ }