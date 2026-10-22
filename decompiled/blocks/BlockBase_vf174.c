#include "nsmbudx_prelude.h"

// ---- addr: 0x60563cc4 */ int __fastcall BlockBase_vf174(int a1)
/* line: 1 */ {
/* line: 2 */   int CurrentState; // r0
/* line: 3 */   int v3; // r5
/* line: 4 */   int v5; // r0
/* line: 5 */   bool v6; // zf
/* line: 6 */   float v7; // s0
/* line: 7 */ 
/* line: 8, address: 0x60563cd4 */   CurrentState = StateMgr::getCurrentState(a1 + 6084);
/* line: 9, address: 0x60563ce4 */   v3 = (*(int (__fastcall **)(int))(*(_DWORD *)CurrentState + 8))(CurrentState);
/* line: 10, address: 0x60563d00 */   if ( v3 == (*(int (**)(void))(MEMORY[0xCB117C] + 8))() )
/* line: 11 */   {
/* line: 12, address: 0x60563d0c */     *(_DWORD *)(a1 + 6884) = 0;
/* line: 13, address: 0x60563d14 */     *(_DWORD *)(a1 + 6888) = 0;
/* line: 14, address: 0x60563d18 */     return 6888;
/* line: 15 */   }
/* line: 16, address: 0x60563d20 */   v5 = *(_DWORD *)(a1 + 7300);
/* line: 17, address: 0x60563d24 */   v6 = v5 == 0;
/* line: 18, address: 0x60563d28 */   if ( v5 )
/* line: 19, address: 0x60563d30 */     v6 = *(_DWORD *)(a1 + 7304) == 0;
/* line: 20, address: 0x60563d34 */   if ( v6 )
/* line: 21, address: 0x60563d34 */     goto LABEL_10;
/* line: 22, address: 0x60563d44 */   MovementHandler::execute((MovementHandler *)(a1 + 6992));
/* line: 23, address: 0x60563d54 */   if ( *(_DWORD *)(a1 + 7040) != 1 )
/* line: 24, address: 0x60563d54 */     goto LABEL_10;
/* line: 25, address: 0x60563d64 */   if ( *(_DWORD *)(a1 + 7060) != 1 )
/* line: 26 */   {
/* line: 27, address: 0x60563e00 */     *(_DWORD *)(a1 + 108) = *(_DWORD *)(a1 + 6992);
/* line: 28, address: 0x60563e0c */     v7 = *(float *)(a1 + 6996);
/* line: 29, address: 0x60563e10 */     if ( !*(_BYTE *)(a1 + 7377) )
/* line: 30, address: 0x60563e28 */       v7 = v7 + *(float *)(a1 + 6796);
/* line: 31, address: 0x60563e2c */     *(float *)(a1 + 112) = v7;
/* line: 32, address: 0x60563e38 */     *(_DWORD *)(a1 + 164) = *(_DWORD *)(a1 + 7072);
/* line: 33, address: 0x60563e3c */     goto LABEL_13;
/* line: 34 */   }
/* line: 35, address: 0x60563d7c */   if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 400))(a1) == 1 )
/* line: 36 */   {
/* line: 37, address: 0x60563d80 */     v7 = *(float *)(a1 + 112);
/* line: 38 */   }
/* line: 39 */   else
/* line: 40 */   {
/* line: 41 */ LABEL_10:
/* line: 42, address: 0x60563d94 */     v7 = *(float *)(a1 + 6984);
/* line: 43, address: 0x60563d98 */     if ( !*(_BYTE *)(a1 + 7377) )
/* line: 44, address: 0x60563db0 */       v7 = v7 + *(float *)(a1 + 6796);
/* line: 45, address: 0x60563db4 */     *(float *)(a1 + 112) = v7;
/* line: 46 */   }
/* line: 47 */ LABEL_13:
/* line: 48, address: 0x60563db8 */   *(float *)(a1 + 6884) = *(float *)(a1 + 108) - *(float *)(a1 + 584);
/* line: 49, address: 0x60563de0 */   *(float *)(a1 + 6888) = v7 - *(float *)(a1 + 588);
/* line: 50, address: 0x60563d18 */   return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 396))(a1);
/* line: 51 */ }