#include "nsmbudx_prelude.h"
/* line: 0, address: 0x602cc244 */ _BYTE *__fastcall HammerBros_createHammer(_DWORD *a1)
/* line: 1 */ {
/* line: 2 */   int v1; // s0
/* line: 3 */   int v2; // s1
/* line: 4 */   int v3; // s2
/* line: 5 */   int v5; // r6
/* line: 6 */   int v6; // r0
/* line: 7 */   int v7; // r4
/* line: 8 */   _BYTE *v8; // r5
/* line: 9 */   _DWORD v10[11]; // [sp+4h] [bp-2Ch] BYREF
/* line: 10 */ 
/* line: 11, address: 0x602cc260 */   (*(void (__fastcall **)(_DWORD *))(*a1 + 708))(a1);
/* line: 12, address: 0x602cc264 */   v5 = a1[20];
/* line: 13, address: 0x602cc280 */   memset(&v10[1], 0, 0x28u);
/* line: 14, address: 0x602cc288 */   v10[0] = v5 | 0xA0000;
/* line: 15, address: 0x602cc29c */   v10[3] = Profile::get(MEMORY[0xAF3904]);
/* line: 16, address: 0x602cc2a0 */   v10[4] = v1;
/* line: 17, address: 0x602cc2a4 */   v10[5] = v2;
/* line: 18, address: 0x602cc2a8 */   v10[6] = v3;
/* line: 19, address: 0x602cc2b4 */   v6 = a1[40];
/* line: 20, address: 0x602cc2b8 */   v7 = 0;
/* line: 21, address: 0x602cc2bc */   v10[7] = v6;
/* line: 22, address: 0x602cc2c4 */   LOBYTE(v10[8]) = 0;
/* line: 23, address: 0x602cc2d4 */   v8 = ActorMgr::create(MEMORY[0xC7B400], (int)v10, 0);
/* line: 24, address: 0x602cc2f4 */   if ( _cxa_guard_acquire_0(13087588) )
/* line: 25 */   {
/* line: 26, address: 0x602cc314 */     MEMORY[0xC7B360] = 12320920;
/* line: 27, address: 0x602cc320 */     _cxa_guard_release_0(13087588);
/* line: 28 */   }
/* line: 29, address: 0x602cc328 */   if ( v8 )
/* line: 30 */   {
/* line: 31, address: 0x602cc344 */     v7 = (**(int (__fastcall ***)(_BYTE *, int))v8)(v8, 13087584);
/* line: 32, address: 0x602cc34c */     if ( v7 )
/* line: 33, address: 0x602cc34c */       return v8;
/* line: 34 */   }
/* line: 35, address: 0x602cc35c */   return (_BYTE *)v7;
/* line: 36 */ }