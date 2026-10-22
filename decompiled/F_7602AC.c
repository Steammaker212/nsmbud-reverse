#include "nsmbudx_prelude.h"
/* line: 0, address: 0x607602ac */ _DWORD *__fastcall sub_607602AC(int a1, int a2, int a3)
/* line: 1 */ {
/* line: 2 */   _DWORD *result; // r0
/* line: 3 */   unsigned int v7; // r1
/* line: 4 */   int v8; // r2
/* line: 5 */   int v9; // r7
/* line: 6 */   int v10; // r0
/* line: 7 */   int v11; // r3
/* line: 8 */   bool v12; // cc
/* line: 9 */   bool v13; // cc
/* line: 10 */   unsigned int v14; // r1
/* line: 11 */   int v15; // r2
/* line: 12 */   int v16; // r0
/* line: 13 */   int v17; // r1
/* line: 14 */   int v18; // t1
/* line: 15 */   float v19; // s2
/* line: 16 */   float v20; // s0
/* line: 17 */   float v21; // s4
/* line: 18 */   int v22; // r1
/* line: 19 */   float v23; // s6
/* line: 20 */   float v24; // s4
/* line: 21 */   float v25; // s6
/* line: 22 */   float v26; // [sp+Ch] [bp-Ch] BYREF
/* line: 23 */   float v27; // [sp+10h] [bp-8h]
/* line: 24 */   float v28; // [sp+14h] [bp-4h]
/* line: 25 */ 
/* line: 26, address: 0x607602c8 */   result = (_DWORD *)MEMORY[0xC99DD4];
/* line: 27, address: 0x607602d4 */   if ( *(_DWORD *)(MEMORY[0xC99DD4] + 764) == 2 )
/* line: 28 */   {
/* line: 29, address: 0x607602d8 */     v7 = *(unsigned __int8 *)(a1 + 84);
/* line: 30, address: 0x607602dc */     v8 = 0;
/* line: 31, address: 0x607602e4 */     if ( v7 < 6 )
/* line: 32, address: 0x607602e4 */       v8 = (char)v7;
/* line: 33, address: 0x607602f0 */     v9 = *(_DWORD *)(MEMORY[0xC99DD4] + 72 * v8 + 344);
/* line: 34, address: 0x60760304 */     v10 = v9 - sub_6078B380(MEMORY[0xCC436C]);
/* line: 35, address: 0x6076030c */     if ( a2 )
/* line: 36 */     {
/* line: 37, address: 0x60760310 */       v11 = 20;
/* line: 38, address: 0x60760318 */       if ( v10 <= 49 )
/* line: 39 */       {
/* line: 40, address: 0x6076031c */         v11 = 10;
/* line: 41, address: 0x60760320 */         v12 = v10 <= 29;
/* line: 42, address: 0x60760324 */         if ( v10 <= 29 )
/* line: 43 */         {
/* line: 44, address: 0x60760324 */           v11 = 5;
/* line: 45, address: 0x60760328 */           v12 = v10 <= 9;
/* line: 46 */         }
/* line: 47, address: 0x6076032c */         if ( v12 )
/* line: 48 */         {
/* line: 49, address: 0x60760330 */           v11 = 1;
/* line: 50, address: 0x60760338 */           if ( v10 > 0 )
/* line: 51, address: 0x60760338 */             v11 = 2;
/* line: 52 */         }
/* line: 53 */       }
/* line: 54 */     }
/* line: 55 */     else
/* line: 56 */     {
/* line: 57, address: 0x60760340 */       v11 = 10;
/* line: 58, address: 0x60760348 */       if ( v10 <= 49 )
/* line: 59 */       {
/* line: 60, address: 0x6076034c */         v11 = 5;
/* line: 61, address: 0x60760350 */         v13 = v10 <= 29;
/* line: 62, address: 0x60760354 */         if ( v10 <= 29 )
/* line: 63 */         {
/* line: 64, address: 0x60760354 */           v11 = 3;
/* line: 65, address: 0x60760358 */           v13 = v10 <= 9;
/* line: 66 */         }
/* line: 67, address: 0x6076035c */         if ( v13 )
/* line: 68, address: 0x60760368 */           v11 = v10 > 0;
/* line: 69 */       }
/* line: 70 */     }
/* line: 71, address: 0x60760374 */     result = (_DWORD *)MEMORY[0xC99DD4];
/* line: 72, address: 0x60760380 */     if ( *(_DWORD *)(MEMORY[0xC99DD4] + 764) == 2 )
/* line: 73 */     {
/* line: 74, address: 0x60760384 */       v14 = *(unsigned __int8 *)(a1 + 84);
/* line: 75, address: 0x60760388 */       v15 = 0;
/* line: 76, address: 0x60760390 */       if ( v14 < 6 )
/* line: 77, address: 0x60760390 */         v15 = (char)v14;
/* line: 78, address: 0x60760398 */       v16 = MEMORY[0xC99DD4] + 72 * v15;
/* line: 79, address: 0x6076039c */       v18 = *(_DWORD *)(v16 + 344);
/* line: 80, address: 0x6076039c */       result = (_DWORD *)(v16 + 344);
/* line: 81, address: 0x6076039c */       v17 = v18;
/* line: 82, address: 0x607603a4 */       if ( v18 < v11 )
/* line: 83, address: 0x607603a4 */         v11 = v17;
/* line: 84, address: 0x607603ac */       if ( v11 )
/* line: 85 */       {
/* line: 86, address: 0x607603b8 */         *result = v17 - v11;
/* line: 87, address: 0x607603cc */         v19 = *(float *)(a1 + 108) + *(float *)(a1 + 572);
/* line: 88, address: 0x607603d4 */         v26 = v19;
/* line: 89, address: 0x607603e0 */         v20 = *(float *)(a1 + 112) + *(float *)(a1 + 576);
/* line: 90, address: 0x607603e4 */         v27 = v20;
/* line: 91, address: 0x607603f4 */         v28 = *(float *)(a1 + 116) + *(float *)(a1 + 580);
/* line: 92, address: 0x607603f8 */         v21 = *(float *)(MEMORY[0xCC6484] + 112);
/* line: 93, address: 0x607603fc */         if ( a2 == 2 )
/* line: 94 */         {
/* line: 95, address: 0x60760404 */           v22 = 1;
/* line: 96, address: 0x6076040c */           v23 = *(float *)(MEMORY[0xCC6484] + 120);
/* line: 97, address: 0x60760420 */           if ( v19 < (float)(v21 + -16.0) )
/* line: 98, address: 0x60760420 */             v22 = 2;
/* line: 99, address: 0x6076042c */           if ( v19 > (float)(v23 + 16.0) )
/* line: 100, address: 0x6076042c */             v22 = 3;
/* line: 101 */         }
/* line: 102 */         else
/* line: 103 */         {
/* line: 104, address: 0x60760434 */           v23 = *(float *)(MEMORY[0xCC6484] + 120);
/* line: 105, address: 0x60760438 */           v22 = 0;
/* line: 106 */         }
/* line: 107, address: 0x60760440 */         v24 = v21 + -16.0;
/* line: 108, address: 0x6076044c */         if ( v19 >= v24 )
/* line: 109 */         {
/* line: 110, address: 0x60760454 */           v25 = v23 + 16.0;
/* line: 111, address: 0x60760458 */           v24 = v19;
/* line: 112, address: 0x60760464 */           if ( v19 > v25 )
/* line: 113, address: 0x60760464 */             v24 = v25;
/* line: 114 */         }
/* line: 115, address: 0x60760468 */         v26 = v24;
/* line: 116, address: 0x60760488 */         if ( (float)(*(float *)(MEMORY[0xCC6484] + 132) + -16.0) > v20 )
/* line: 117, address: 0x60760488 */           v20 = *(float *)(MEMORY[0xCC6484] + 132) + -16.0;
/* line: 118, address: 0x6076048c */         v27 = v20;
/* line: 119, address: 0x6076049c */         return (_DWORD *)sub_60583B70(MEMORY[0xCAF15C], &v26, *(char *)(a1 + 84), v11, v22, a3);
/* line: 120 */       }
/* line: 121 */     }
/* line: 122 */   }
/* line: 123, address: 0x607604a4 */   return result;
/* line: 124 */ }