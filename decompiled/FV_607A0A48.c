#include "nsmbudx_prelude.h"
/* line: 0, address: 0x607a0a48 */ int __fastcall sub_607A0A48(int a1, int a2, int a3)
/* line: 1 */ {
/* line: 2 */   float v3; // s0
/* line: 3 */   int v6; // r4
/* line: 4 */   int (__fastcall ***v7)(_DWORD, int); // r7
/* line: 5 */ 
/* line: 6, address: 0x607a0a5c */   v6 = 0;
/* line: 7, address: 0x607a0ab8 */   if ( *(_DWORD *)(a3 + 136) != 15
/* line: 8 */     && *(_DWORD *)(a1 + 1320) == *(_DWORD *)(a1 + 11388)
/* line: 9 */     && !(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 644))(a1)
/* line: 10 */     && !(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1204))(a1)
/* line: 11 */     && !(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1156))(a1) )
/* line: 12 */   {
/* line: 13, address: 0x607a0acc */     if ( (*(_BYTE *)(a1 + 1221) & 0x80) != 0 )
/* line: 14, address: 0x607a0acc */       goto LABEL_13;
/* line: 15, address: 0x607a0ad8 */     v7 = (int (__fastcall ***)(_DWORD, int))sub_6079DFCC(a1);
/* line: 16, address: 0x607a0af8 */     if ( _cxa_guard_acquire_0(13087760) )
/* line: 17 */     {
/* line: 18, address: 0x607a0b18 */       MEMORY[0xC7B40C] = 12320980;
/* line: 19, address: 0x607a0b24 */       _cxa_guard_release_0(13087760);
/* line: 20 */     }
/* line: 21, address: 0x607a0b80 */     if ( v7
/* line: 22 */       && (**v7)(v7, 13087756) == 1
/* line: 23 */       && (ActiveCollider_getCenterX(a2),
/* line: 24 */           (float)((float)(v3 - *(float *)(a1 + 108)) * *(float *)(4 * *(_DWORD *)(a1 + 80) + 0xB0A898)) > 0.0) )
/* line: 25 */     {
/* line: 26, address: 0x607a0b8c */       sub_605DCF28(v7, a1);
/* line: 27, address: 0x607a0b94 */       sub_6079E724(a1);
/* line: 28, address: 0x607a0ba0 */       *(_DWORD *)(a1 + 9572) = 127;
/* line: 29 */     }
/* line: 30 */     else
/* line: 31 */     {
/* line: 32 */ LABEL_13:
/* line: 33, address: 0x607a0bb4 */       v6 = 0;
/* line: 34, address: 0x607a0bc8 */       if ( (*(int (__fastcall **)(int, _DWORD, _DWORD))(*(_DWORD *)a1 + 1180))(a1, *(_DWORD *)(a2 + 64), 0) == 1 )
/* line: 35 */       {
/* line: 36, address: 0x607a0bec */         AreaRumbleMgr_rumbleForPlayer(MEMORY[0xC99E3C], *(char *)(a1 + 84), 4, 0, 0);
/* line: 37, address: 0x607a0bf0 */         return 1;
/* line: 38 */       }
/* line: 39 */     }
/* line: 40 */   }
/* line: 41, address: 0x607a0bfc */   return v6;
/* line: 42 */ }