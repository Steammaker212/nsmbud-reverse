#include "nsmbudx_prelude.h"
/* line: 0, address: 0x6079e724 */ int __fastcall sub_6079E724(int a1)
/* line: 1 */ {
/* line: 2 */   int result; // r0
/* line: 3 */   int v3; // r5
/* line: 4 */   int v4; // r6
/* line: 5 */ 
/* line: 6, address: 0x6079e72c */   result = 11408;
/* line: 7, address: 0x6079e730 */   if ( *(_DWORD *)(a1 + 11408) )
/* line: 8 */   {
/* line: 9, address: 0x6079e754 */     v3 = ActorMgrRelated_getById(MEMORY[0xC7B400] + 27168);
/* line: 10, address: 0x6079e774 */     if ( _cxa_guard_acquire_0(13087588) )
/* line: 11 */     {
/* line: 12, address: 0x6079e794 */       MEMORY[0xC7B360] = 12320920;
/* line: 13, address: 0x6079e7a0 */       _cxa_guard_release_0(13087588);
/* line: 14 */     }
/* line: 15, address: 0x6079e7a4 */     v4 = 0;
/* line: 16, address: 0x6079e7ac */     if ( v3 )
/* line: 17 */     {
/* line: 18, address: 0x6079e7cc */       if ( (**(int (__fastcall ***)(int, int))v3)(v3, 13087584) == 1 )
/* line: 19 */       {
/* line: 20, address: 0x6079e7e4 */         (*(void (__fastcall **)(int, int, int))(*(_DWORD *)v3 + 84))(v3, a1, 20);
/* line: 21, address: 0x6079e7ec */         v4 = v3;
/* line: 22, address: 0x6079e7f4 */         *(_BYTE *)(v3 + 538) |= 1u;
/* line: 23, address: 0x6079e7fc */         *(_DWORD *)(v3 + 556) = *(_DWORD *)(a1 + 80);
/* line: 24 */       }
/* line: 25 */     }
/* line: 26, address: 0x6079e80c */     return Player_ReleaseCarryableEnemy(a1, v4);
/* line: 27 */   }
/* line: 28, address: 0x6079e738 */   return result;
/* line: 29 */ }