#include "nsmbudx_prelude.h"

// ---- addr: 0x605b6b88 */ int __fastcall BlockCoinBase_executeState_BumpDown2(int a1)
/* line: 1 */ {
/* line: 2 */   float32x2_t v1; // d0
/* line: 3 */   float32x2_t v2; // d2
/* line: 4 */ 
/* line: 5, address: 0x605b6b94 */   v2.n64_u32[0] = 2.0;
/* line: 6, address: 0x605b6ba0 */   v1.n64_f32[0] = *(float *)(a1 + 124) + 0.281;
/* line: 7, address: 0x605b6ba8 */   *(_DWORD *)(a1 + 124) = vmin_f32(v1, v2).n64_u32[0];
/* line: 8, address: 0x605b6bb8 */   (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 232))(a1, 2);
/* line: 9, address: 0x605b6bd4 */   *(float *)(a1 + 6796) = *(float *)(a1 + 124) + *(float *)(a1 + 6796);
/* line: 10, address: 0x605b6bd8 */   CollisionMgr_process((unsigned __int8 *)(a1 + 648));
/* line: 11, address: 0x605b6be8 */   if ( *(float *)(a1 + 6796) >= 0.0 )
/* line: 12 */   {
/* line: 13, address: 0x605b6c0c */     *(_DWORD *)(a1 + 6796) = 0;
/* line: 14, address: 0x605b6c20 */     (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 224))(a1);
/* line: 15, address: 0x605b6c24 */     *(_DWORD *)(a1 + 6900) = 0;
/* line: 16 */   }
/* line: 17, address: 0x605b6bf4 */   else if ( (*(_BYTE *)(a1 + 2872) & 1) != 0 )
/* line: 18 */   {
/* line: 19, address: 0x605b6bfc */     *(_BYTE *)(a1 + 6868) = 1;
/* line: 20 */   }
/* line: 21 */   return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 244))(a1);
/* line: 22 */ }