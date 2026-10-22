#include "nsmbudx_prelude.h"
/* line: 0, address: 0x607a1388 */ int __fastcall sub_607A1388(int a1, int a2, int a3, int a4, int a5)
/* line: 1 */ {
/* line: 2 */   int CurrentState; // r0
/* line: 3 */   int v9; // r6
/* line: 4 */   int v10; // r7
/* line: 5 */   int v11; // r0
/* line: 6 */ 
/* line: 7, address: 0x607a139c */   if ( !a4 )
/* line: 8 */   {
/* line: 9, address: 0x607a13a8 */     CurrentState = StateMgr::getCurrentState((StateMgr *)(a1 + 9916));
/* line: 10, address: 0x607a13b8 */     v9 = (*(int (__fastcall **)(int))(*(_DWORD *)CurrentState + 8))(CurrentState);
/* line: 11, address: 0x607a13d0 */     v10 = 0;
/* line: 12, address: 0x607a13d8 */     if ( v9 == (*(int (**)(void))(MEMORY[0xCC4E6C] + 8))() )
/* line: 13, address: 0x607a13d8 */       return v10;
/* line: 14 */   }
/* line: 15, address: 0x607a13e0 */   sub_6079E724(a1);
/* line: 16, address: 0x607a13ec */   if ( (unsigned int)(a2 - 4) < 2 )
/* line: 17 */   {
/* line: 18, address: 0x607a1420 */     v11 = 4;
/* line: 19 */ LABEL_9:
/* line: 20, address: 0x607a1428 */     if ( a2 == 7 )
/* line: 21 */     {
/* line: 22, address: 0x607a1474 */       v11 |= 0x300u;
/* line: 23 */     }
/* line: 24, address: 0x607a1430 */     else if ( a2 == 5 )
/* line: 25 */     {
/* line: 26, address: 0x607a144c */       *(float *)(a1 + 112) = *(float *)(a1 + 112) + 12.0;
/* line: 27, address: 0x607a1464 */       *(float *)(a1 + 108) = *(float *)(a1 + 108) + (float)(*(float *)(4 * *(_DWORD *)(a1 + 80) + 0xB0A898) * -4.0);
/* line: 28 */     }
/* line: 29, address: 0x607a1468 */     goto LABEL_14;
/* line: 30 */   }
/* line: 31, address: 0x607a13f4 */   if ( a2 != 2 )
/* line: 32 */   {
/* line: 33, address: 0x607a13f8 */     v11 = 0;
/* line: 34, address: 0x607a1400 */     if ( a2 == 8 )
/* line: 35 */     {
/* line: 36, address: 0x607a1408 */       v10 = 0;
/* line: 37, address: 0x607a1410 */       v11 = 6;
/* line: 38, address: 0x607a1418 */       if ( (*(_BYTE *)(a1 + 6900) & 1) == 0 )
/* line: 39, address: 0x607a1418 */         return v10;
/* line: 40, address: 0x607a1418 */       goto LABEL_14;
/* line: 41 */     }
/* line: 42, address: 0x607a1400 */     goto LABEL_9;
/* line: 43 */   }
/* line: 44, address: 0x607a146c */   v11 = 2;
/* line: 45 */ LABEL_14:
/* line: 46, address: 0x607a1480 */   if ( a5 )
/* line: 47, address: 0x607a1480 */     v11 |= 0x100u;
/* line: 48, address: 0x607a1494 */   Player_changeState(a1, 13389420, v11 + a3);
/* line: 49, address: 0x607a1498 */   v10 = 1;
/* line: 50, address: 0x607a14ac */   if ( a2 != 2 && !*(_DWORD *)(a1 + 12788) )
/* line: 51 */   {
/* line: 52, address: 0x607a14c0 */     sub_607601D4(a1, 2);
/* line: 53, address: 0x607a14c8 */     *(_DWORD *)(a1 + 12788) = 5;
/* line: 54 */   }
/* line: 55, address: 0x607a14d0 */   return v10;
/* line: 56 */ }