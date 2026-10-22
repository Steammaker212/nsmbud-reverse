#include "nsmbudx_prelude.h"

// ---- addr: 0x605640bc */ int __fastcall BlockBase_vf16C(int a1)
/* line: 1 */ {
/* line: 2 */   int v2; // r1
/* line: 3 */   int *v3; // r5
/* line: 4 */   int v4; // r0
/* line: 5 */   int v5; // r1
/* line: 6 */   unsigned int v6; // r0
/* line: 7 */ 
/* line: 8, address: 0x605640c8 */   v2 = 1;
/* line: 9, address: 0x605640d0 */   v3 = (int *)(a1 + 6856);
/* line: 10, address: 0x605640d8 */   if ( *(_DWORD *)(a1 + 6856) == 13 )
/* line: 11 */   {
/* line: 12, address: 0x605640f0 */     v4 = sub_605B9044(MEMORY[0xCB061C], a1 + 6980);
/* line: 13, address: 0x605640f8 */     v2 = 0;
/* line: 14, address: 0x60564100 */     if ( (v4 | 1) == 3 )
/* line: 15 */     {
/* line: 16, address: 0x60564104 */       v5 = 12;
/* line: 17, address: 0x6056410c */       if ( v4 == 3 )
/* line: 18, address: 0x6056410c */         v5 = 14;
/* line: 19, address: 0x60564110 */       *v3 = v5;
/* line: 20, address: 0x60564114 */       v2 = 1;
/* line: 21 */     }
/* line: 22 */   }
/* line: 23, address: 0x60564120 */   v6 = *(_DWORD *)(a1 + 7368);
/* line: 24, address: 0x60564128 */   if ( v6 == 1 )
/* line: 25 */   {
/* line: 26, address: 0x60564140 */     if ( ((unsigned __int8)v2 & (*v3 != 21)) == 0 )
/* line: 27, address: 0x60564140 */       goto LABEL_12;
/* line: 28 */   }
/* line: 29, address: 0x6056414c */   else if ( v2 != 1 )
/* line: 30 */   {
/* line: 31, address: 0x6056414c */     goto LABEL_11;
/* line: 32 */   }
/* line: 33, address: 0x60564178 */   sub_605BA078(MEMORY[0xCB061C], a1 + 6980, 1, *(unsigned __int8 *)(MEMORY[0xC9A684] + 18));
/* line: 34, address: 0x6056417c */   v6 = *(_DWORD *)(a1 + 7368);
/* line: 35 */ LABEL_11:
/* line: 36, address: 0x60564184 */   if ( v6 <= 1 )
/* line: 37 */ LABEL_12:
/* line: 38, address: 0x60564188 */     sub_605B6364(a1, v3, *(char *)(a1 + 6850));
/* line: 39 */   return sub_605641B4(a1);
/* line: 40 */ }