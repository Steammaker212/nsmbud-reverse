#include "nsmbudx_prelude.h"
/* line: 0, address: 0x60818290 */ int __fastcall StateMgrExt_changeState(int *a1, int a2)
/* line: 1 */ {
/* line: 2 */   int v4; // r0
/* line: 3 */   int *v5; // r6
/* line: 4 */   int v6; // r0
/* line: 5 */   int v7; // r1
/* line: 6 */   int result; // r0
/* line: 7 */ 
/* line: 8, address: 0x608182a0 */   v5 = a1 + 2;
/* line: 9, address: 0x608182a0 */   v4 = a1[2];
/* line: 10, address: 0x608182a8 */   if ( v4 )
/* line: 11 */   {
/* line: 12, address: 0x608182b4 */     v6 = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
/* line: 13, address: 0x608182b8 */     v7 = *v5;
/* line: 14 */   }
/* line: 15 */   else
/* line: 16 */   {
/* line: 17, address: 0x608182c0 */     v6 = a1[1];
/* line: 18, address: 0x608182cc */     if ( !v6 )
/* line: 19, address: 0x608182cc */       v6 = 12755100;
/* line: 20, address: 0x608182d0 */     v7 = 0;
/* line: 21 */   }
/* line: 22, address: 0x608182d4 */   a1[4] = v6;
/* line: 23, address: 0x608182e8 */   a1[3] = (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
/* line: 24, address: 0x608182fc */   (*(void (__fastcall **)(int, int *))(*(_DWORD *)*a1 + 20))(*a1, v5);
/* line: 25, address: 0x60818310 */   result = (*(int (__fastcall **)(int, int))(*(_DWORD *)*a1 + 8))(*a1, a2);
/* line: 26, address: 0x60818314 */   a1[2] = result;
/* line: 27, address: 0x60818318 */   return result;
/* line: 28 */ }