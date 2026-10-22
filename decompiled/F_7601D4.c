#include "nsmbudx_prelude.h"
/* line: 0, address: 0x607601d4 */ int __fastcall sub_607601D4(int result, int a2)
/* line: 1 */ {
/* line: 2 */   unsigned int v2; // lr
/* line: 3 */   int v3; // r2
/* line: 4 */   int v4; // r3
/* line: 5 */   int v5; // r2
/* line: 6 */   _DWORD *v6; // r3
/* line: 7 */   int v7; // t1
/* line: 8 */   float v8; // s4
/* line: 9 */   float v9; // s8
/* line: 10 */   float v10; // s2
/* line: 11 */   float v11[4]; // [sp+0h] [bp-18h] BYREF
/* line: 12 */   char v12; // [sp+10h] [bp-8h]
/* line: 13 */   char v13; // [sp+11h] [bp-7h]
/* line: 14 */   char v14; // [sp+12h] [bp-6h]
/* line: 15 */   char v15; // [sp+13h] [bp-5h]
/* line: 16 */   char v16; // [sp+14h] [bp-4h]
/* line: 17 */   char v17; // [sp+15h] [bp-3h]
/* line: 18 */   char v18; // [sp+16h] [bp-2h]
/* line: 19 */ 
/* line: 20, address: 0x607601f0 */   if ( *(_DWORD *)(MEMORY[0xC99DD4] + 764) == 2 )
/* line: 21 */   {
/* line: 22, address: 0x607601f4 */     v2 = *(unsigned __int8 *)(result + 84);
/* line: 23, address: 0x607601f8 */     v3 = 0;
/* line: 24, address: 0x60760204 */     if ( v2 < 6 )
/* line: 25, address: 0x60760204 */       v3 = (char)v2;
/* line: 26, address: 0x6076020c */     v4 = MEMORY[0xC99DD4] + 72 * v3;
/* line: 27, address: 0x60760210 */     v7 = *(_DWORD *)(v4 + 344);
/* line: 28, address: 0x60760210 */     v6 = (_DWORD *)(v4 + 344);
/* line: 29, address: 0x60760210 */     v5 = v7;
/* line: 30, address: 0x60760218 */     if ( v7 < a2 )
/* line: 31, address: 0x60760218 */       a2 = v5;
/* line: 32, address: 0x60760220 */     if ( a2 )
/* line: 33 */     {
/* line: 34, address: 0x60760228 */       *v6 = v5 - a2;
/* line: 35, address: 0x6076023c */       v8 = *(float *)(result + 580);
/* line: 36, address: 0x60760240 */       v9 = *(float *)(result + 116);
/* line: 37, address: 0x60760248 */       v10 = *(float *)(result + 112) + *(float *)(result + 576);
/* line: 38, address: 0x6076024c */       v11[0] = *(float *)(result + 108) + *(float *)(result + 572);
/* line: 39, address: 0x60760254 */       v11[1] = v10;
/* line: 40, address: 0x60760258 */       v11[2] = v9 + v8;
/* line: 41, address: 0x60760260 */       v11[3] = *(float *)(result + 80);
/* line: 42, address: 0x60760264 */       v13 = 0;
/* line: 43, address: 0x60760268 */       v15 = 0;
/* line: 44, address: 0x6076026c */       v16 = 0;
/* line: 45, address: 0x60760270 */       v17 = 0;
/* line: 46, address: 0x60760274 */       v12 = a2;
/* line: 47, address: 0x60760278 */       v14 = 0;
/* line: 48, address: 0x6076027c */       v18 = 0;
/* line: 49, address: 0x60760298 */       return ((int (__fastcall *)(_DWORD, float *, int, _DWORD))sub_6058385C)(
/* line: 50 */                MEMORY[0xCAF15C],
/* line: 51 */                v11,
/* line: 52 */                1,
/* line: 53 */                *(char *)(result + 84));
/* line: 54 */     }
/* line: 55 */   }
/* line: 56, address: 0x607602a0 */   return result;
/* line: 57 */ }