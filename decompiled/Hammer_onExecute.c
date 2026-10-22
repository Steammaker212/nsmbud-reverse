#include "nsmbudx_prelude.h"
/* line: 0, address: 0x60134914 */ int __fastcall sub_60134914(int a1)
/* line: 1 */ {
/* line: 2 */   char v2; // r0
/* line: 3 */   _DWORD v4[3]; // [sp+0h] [bp-18h] BYREF
/* line: 4 */   int v5; // [sp+Ch] [bp-Ch] BYREF
/* line: 5 */   int v6; // [sp+10h] [bp-8h] BYREF
/* line: 6 */   _BYTE v7[4]; // [sp+14h] [bp-4h] BYREF
/* line: 7 */ 
/* line: 8, address: 0x60134928 */   StateMgr::execute((StateMgr *)(a1 + 6084));
/* line: 9, address: 0x60134934 */   ActorScaler_execute(a1 + 6440);
/* line: 10, address: 0x60134940 */   if ( !*(_BYTE *)(a1 + 6100) )
/* line: 11 */   {
/* line: 12, address: 0x60134960 */     checkLiquidCollisions(&v6, v7, a1 + 108, *(unsigned __int8 *)(a1 + 86));
/* line: 13, address: 0x60134990 */     if ( v6 == 1 || (checkLiquidCollisions(&v5, v7, a1 + 108, *(unsigned __int8 *)(a1 + 86)), v2 = 0, v5 == 2) )
/* line: 14 */     {
/* line: 15, address: 0x6013499c */       v4[0] = *(_DWORD *)(a1 + 108);
/* line: 16, address: 0x601349a4 */       v4[1] = 0;
/* line: 17, address: 0x601349b0 */       v4[2] = 1170939904;
/* line: 18, address: 0x601349c0 */       (*(void (__fastcall **)(int, _DWORD *))(*(_DWORD *)a1 + 108))(a1, v4);
/* line: 19, address: 0x601349c4 */       v2 = 1;
/* line: 20 */     }
/* line: 21, address: 0x601349c8 */     *(_BYTE *)(a1 + 6100) = v2;
/* line: 22 */   }
/* line: 23, address: 0x601349d8 */   (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 312))(a1);
/* line: 24, address: 0x601349e4 */   return 1;
/* line: 25 */ }