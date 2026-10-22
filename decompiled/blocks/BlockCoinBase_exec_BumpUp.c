#include "nsmbudx_prelude.h"

// ---- addr: 0x605b668c */ int __fastcall BlockCoinBase_executeState_BumpUp(int a1)
/* line: 1 */ {
/* line: 2 */   float v2; // s0
/* line: 3 */ 
/* line: 4, address: 0x605b66b0 */   v2 = *(float *)(a1 + 124) - *(float *)(a1 + 6812);
/* line: 5, address: 0x605b66bc */   if ( v2 <= -2.0 )
/* line: 6, address: 0x605b66bc */     v2 = 2.0;
/* line: 7, address: 0x605b66c0 */   *(float *)(a1 + 124) = v2;
/* line: 8, address: 0x605b66d0 */   (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 232))(a1, 1);
/* line: 9, address: 0x605b66e4 */   *(float *)(a1 + 108) = *(float *)(a1 + 108) + *(float *)(a1 + 120);
/* line: 10, address: 0x605b66f4 */   *(float *)(a1 + 112) = *(float *)(a1 + 112) + *(float *)(a1 + 124);
/* line: 11, address: 0x605b6704 */   *(float *)(a1 + 116) = *(float *)(a1 + 116) + *(float *)(a1 + 128);
/* line: 12, address: 0x605b6708 */   CollisionMgr_process((unsigned __int8 *)(a1 + 648));
/* line: 13 */   return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 208))(a1);
/* line: 14 */ }