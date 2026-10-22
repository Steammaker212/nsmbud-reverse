#include "nsmbudx_prelude.h"

/* ---- forward declarations for functions defined below ---- */
_DWORD * __fastcall sub_600080BC(_DWORD *result, _DWORD *a2);

/* ---- forward declarations for functions defined below ---- */
_DWORD * __fastcall sub_600080BC(_DWORD *result, _DWORD *a2);

/* ---- forward declarations for functions defined below ---- */
_DWORD * __fastcall sub_600080BC(_DWORD *result, _DWORD *a2);

/* ---- forward declarations for functions defined below ---- */
_DWORD * __fastcall sub_600080BC(_DWORD *result, _DWORD *a2);

/* ---- forward declarations for functions defined below ---- */
_DWORD * __fastcall sub_600080BC(_DWORD *result, _DWORD *a2);

/* ---- forward declarations for functions defined below ---- */
_DWORD * __fastcall sub_600080BC(_DWORD *result, _DWORD *a2);
/* line: 0, address: 0x600080bc */ _DWORD *__fastcall sub_600080BC(_DWORD *result, _DWORD *a2)
/* line: 1 */ {
/* line: 2 */   int v2; // r12
/* line: 3 */   int v3; // r3
/* line: 4 */   int v4; // r2
/* line: 5 */   int v5; // r0
/* line: 6 */   int v6; // r3
/* line: 7 */   int v7; // r4
/* line: 8 */   int v8; // r5
/* line: 9 */   int v9; // r6
/* line: 10 */   _DWORD *v10; // r0
/* line: 11 */   int v11; // r2
/* line: 12 */   int v12; // r3
/* line: 13 */   int v13; // r6
/* line: 14 */ 
/* line: 15, address: 0x600080bc */   v2 = result[7];
/* line: 16, address: 0x600080c0 */   v3 = result[9];
/* line: 17, address: 0x600080c8 */   if ( v3 < v2 )
/* line: 18 */   {
/* line: 19, address: 0x600080d4 */     result[9] = v3 + 1;
/* line: 20, address: 0x600080d8 */     v4 = result[6];
/* line: 21, address: 0x600080e0 */     v5 = result[8] + v3;
/* line: 22, address: 0x600080e4 */     v6 = v5 - v2;
/* line: 23, address: 0x600080ec */     if ( v5 < v2 )
/* line: 24, address: 0x600080ec */       v6 = v5;
/* line: 25, address: 0x600080f0 */     v7 = a2[1];
/* line: 26, address: 0x600080f0 */     v8 = a2[2];
/* line: 27, address: 0x600080f0 */     v9 = a2[3];
/* line: 28, address: 0x600080f8 */     *(_DWORD *)(v4 + 44 * v6) = *a2;
/* line: 29, address: 0x600080fc */     v10 = (_DWORD *)(v4 + 44 * v6);
/* line: 30, address: 0x60008100 */     v10[1] = v7;
/* line: 31, address: 0x60008100 */     v10[2] = v8;
/* line: 32, address: 0x60008100 */     v10[3] = v9;
/* line: 33, address: 0x6000810c */     v10[4] = a2[4];
/* line: 34, address: 0x60008114 */     v10[5] = a2[5];
/* line: 35, address: 0x6000811c */     v10[6] = a2[6];
/* line: 36, address: 0x60008120 */     v11 = a2[7];
/* line: 37, address: 0x60008120 */     v12 = a2[8];
/* line: 38, address: 0x60008120 */     v13 = a2[9];
/* line: 39, address: 0x60008128 */     v10[10] = a2[10];
/* line: 40, address: 0x6000812c */     result = v10 + 7;
/* line: 41, address: 0x60008130 */     *result = v11;
/* line: 42, address: 0x60008130 */     result[1] = v12;
/* line: 43, address: 0x60008130 */     result[2] = v13;
/* line: 44 */   }
/* line: 45, address: 0x60008134 */   return result;
/* line: 46 */ }