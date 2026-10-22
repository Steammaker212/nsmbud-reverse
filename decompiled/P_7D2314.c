#include "nsmbudx_prelude.h"
/* line: 0, address: 0x607d2314 */ _BYTE *__fastcall sub_607D2314(int a1, int *a2)
/* line: 1 */ {
/* line: 2 */   _BYTE *result; // r0
/* line: 3 */   int v4; // t1
/* line: 4 */   int v5; // r0
/* line: 5 */   int v6; // r1
/* line: 6 */   float v7; // s0
/* line: 7 */   int v8; // [sp+8h] [bp-18h] BYREF
/* line: 8 */   unsigned int v9; // [sp+Ch] [bp-14h]
/* line: 9 */   int v10; // [sp+10h] [bp-10h]
/* line: 10 */   _DWORD v11[3]; // [sp+14h] [bp-Ch] BYREF
/* line: 11 */ 
/* line: 12, address: 0x607d2324 */   v4 = *(unsigned __int8 *)(a1 + 11462);
/* line: 13, address: 0x607d2324 */   result = (_BYTE *)(a1 + 11462);
/* line: 14, address: 0x607d232c */   if ( !v4 )
/* line: 15 */   {
/* line: 16, address: 0x607d233c */     *result = 1;
/* line: 17, address: 0x607d2344 */     v5 = *a2;
/* line: 18, address: 0x607d2344 */     v6 = a2[1];
/* line: 19, address: 0x607d2348 */     v7 = *(float *)(a1 + 116);
/* line: 20, address: 0x607d234c */     v11[0] = v5;
/* line: 21, address: 0x607d2350 */     v11[1] = v6;
/* line: 22, address: 0x607d235c */     v8 = 0;
/* line: 23, address: 0x607d2360 */     v9 = 0;
/* line: 24, address: 0x607d2364 */     v10 = 0;
/* line: 25, address: 0x607d2368 */     *(float *)&v11[2] = v7 + -8.0;
/* line: 26, address: 0x607d2374 */     if ( *(_DWORD *)(a1 + 80) == 1 )
/* line: 27, address: 0x607d2378 */       v9 = 0x80000000;
/* line: 28, address: 0x607d2388 */     ((void (__fastcall *)(_DWORD, int, _DWORD *, int *, _DWORD))sub_60236E40)(*(char *)(a1 + 84), 429, v11, &v8, 0);
/* line: 29, address: 0x607d239c */     return (_BYTE *)sub_60814010(a1 + 840, "SE_PLY_YOSHI_TONGUE_HIT", 0);
/* line: 30 */   }
/* line: 31, address: 0x607d23a4 */   return result;
/* line: 32 */ }