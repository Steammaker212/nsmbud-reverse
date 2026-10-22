#include "nsmbudx_prelude.h"
/* line: 0, address: 0x605839e8 */ void __fastcall sub_605839E8(int a1, _DWORD *a2, int a3, int a4, unsigned __int8 a5, int a6)
/* line: 1 */ {
/* line: 2 */   int v7; // r9
/* line: 3 */   unsigned int v8; // r6
/* line: 4 */   _BYTE *v9; // r10
/* line: 5 */   int v10; // [sp+18h] [bp-34h]
/* line: 6 */   _DWORD v12[11]; // [sp+20h] [bp-2Ch] BYREF
/* line: 7 */ 
/* line: 8, address: 0x605839fc */   if ( a3 >= 1 )
/* line: 9 */   {
/* line: 10, address: 0x60583a10 */     v7 = 0;
/* line: 11, address: 0x60583a20 */     v10 = (a6 << 8) | (16 * (a4 == 3));
/* line: 12, address: 0x60583a34 */     v8 = MEMORY[0xAF3378];
/* line: 13, address: 0x60583b44 */     do
/* line: 14 */     {
/* line: 15, address: 0x60583a90 */       memset(&v12[1], 0, 0x28u);
/* line: 16, address: 0x60583a9c */       v12[0] = v10 | v7;
/* line: 17, address: 0x60583aa8 */       v12[3] = Profile::get(v8);
/* line: 18, address: 0x60583ab8 */       v12[4] = *a2;
/* line: 19, address: 0x60583ac0 */       v12[5] = a2[1];
/* line: 20, address: 0x60583ac8 */       v12[6] = a2[2];
/* line: 21, address: 0x60583ad0 */       LOWORD(v12[8]) = a5;
/* line: 22, address: 0x60583adc */       BYTE2(v12[8]) = 0;
/* line: 23, address: 0x60583ae0 */       v12[10] = 0;
/* line: 24, address: 0x60583ae8 */       v9 = ActorMgr::create(MEMORY[0xC7B400], (int)v12, 0);
/* line: 25, address: 0x60583afc */       if ( _cxa_guard_acquire_0(13087588) )
/* line: 26 */       {
/* line: 27, address: 0x60583b10 */         MEMORY[0xC7B360] = 12320920;
/* line: 28, address: 0x60583b18 */         _cxa_guard_release_0(13087588);
/* line: 29 */       }
/* line: 30, address: 0x60583b20 */       if ( v9 )
/* line: 31, address: 0x60583b34 */         (**(void (__fastcall ***)(_BYTE *, int))v9)(v9, 13087584);
/* line: 32, address: 0x60583b3c */       ++v7;
/* line: 33 */     }
/* line: 34, address: 0x60583b44 */     while ( a3 != v7 );
/* line: 35 */   }
/* line: 36 */ }