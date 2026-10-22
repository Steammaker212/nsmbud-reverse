#include "nsmbudx_prelude.h"
/* line: 0, address: 0x6013fdc0 */ int __fastcall sub_6013FDC0(int a1)
/* line: 1 */ {
/* line: 2 */   int v2; // r3
/* line: 3 */   int v3; // r7
/* line: 4 */   int v4; // r6
/* line: 5 */   float v5; // r0
/* line: 6 */   float v6; // r2
/* line: 7 */   float v7; // r1
/* line: 8 */   int v9; // [sp+4h] [bp-44h] BYREF
/* line: 9 */   float v10; // [sp+8h] [bp-40h] BYREF
/* line: 10 */   float v11; // [sp+Ch] [bp-3Ch]
/* line: 11 */   float v12; // [sp+10h] [bp-38h]
/* line: 12 */   float v13; // [sp+14h] [bp-34h]
/* line: 13 */   float v14; // [sp+18h] [bp-30h]
/* line: 14 */   float v15; // [sp+1Ch] [bp-2Ch]
/* line: 15 */   float v16; // [sp+20h] [bp-28h]
/* line: 16 */   float v17; // [sp+24h] [bp-24h]
/* line: 17 */   float v18; // [sp+28h] [bp-20h]
/* line: 18 */   float v19; // [sp+2Ch] [bp-1Ch]
/* line: 19 */   float v20; // [sp+30h] [bp-18h]
/* line: 20 */   float v21; // [sp+34h] [bp-14h]
/* line: 21 */   int v22; // [sp+38h] [bp-10h] BYREF
/* line: 22 */   int v23; // [sp+3Ch] [bp-Ch] BYREF
/* line: 23 */   int v24; // [sp+40h] [bp-8h] BYREF
/* line: 24 */ 
/* line: 25, address: 0x6013fdcc */   v2 = *(_DWORD *)(a1 + 156);
/* line: 26, address: 0x6013fdd0 */   v3 = *(_DWORD *)(a1 + 160);
/* line: 27, address: 0x6013fdd4 */   v4 = *(_DWORD *)(a1 + 164);
/* line: 28, address: 0x6013fdd8 */   v5 = *(float *)(a1 + 112);
/* line: 29, address: 0x6013fddc */   v6 = *(float *)(a1 + 108);
/* line: 30, address: 0x6013fde0 */   v7 = *(float *)(a1 + 116);
/* line: 31, address: 0x6013fde4 */   v24 = v4;
/* line: 32, address: 0x6013fde8 */   v23 = v3;
/* line: 33, address: 0x6013fdec */   v22 = v2;
/* line: 34, address: 0x6013fdf8 */   v10 = 1.0;
/* line: 35, address: 0x6013fdfc */   v11 = 0.0;
/* line: 36, address: 0x6013fe00 */   v12 = 0.0;
/* line: 37, address: 0x6013fe04 */   v14 = 0.0;
/* line: 38, address: 0x6013fe08 */   v15 = 1.0;
/* line: 39, address: 0x6013fe0c */   v16 = 0.0;
/* line: 40, address: 0x6013fe10 */   v18 = 0.0;
/* line: 41, address: 0x6013fe14 */   v19 = 0.0;
/* line: 42, address: 0x6013fe18 */   v20 = 1.0;
/* line: 43, address: 0x6013fe1c */   v13 = v6;
/* line: 44, address: 0x6013fe20 */   v17 = v5;
/* line: 45, address: 0x6013fe28 */   v21 = v7;
/* line: 46, address: 0x6013fe34 */   Mtx34_rotateY(&v10, &v23);
/* line: 47, address: 0x6013fe40 */   if ( *(_BYTE *)(a1 + 11844) )
/* line: 48 */   {
/* line: 49, address: 0x6013fe74 */     v13 = v13 + (float)((float)((float)(v11 * 6.0) + (float)(v10 * 0.0)) + (float)(v12 * 0.0));
/* line: 50, address: 0x6013fe98 */     v17 = v17 + (float)((float)((float)(v15 * 6.0) + (float)(v14 * 0.0)) + (float)(v16 * 0.0));
/* line: 51, address: 0x6013febc */     v21 = v21 + (float)((float)((float)(v19 * 6.0) + (float)(v18 * 0.0)) + (float)(v20 * 0.0));
/* line: 52 */   }
/* line: 53, address: 0x6013fed0 */   Mtx34_rotateX(&v10, &v22);
/* line: 54, address: 0x6013fee0 */   v9 = *(_DWORD *)(a1 + 11848);
/* line: 55, address: 0x6013fee8 */   Mtx34_rotateY(&v10, &v9);
/* line: 56, address: 0x6013feec */   if ( *(_BYTE *)(a1 + 11844) )
/* line: 57 */   {
/* line: 58, address: 0x6013ff20 */     v13 = v13 + (float)((float)((float)(v10 * 0.0) - (float)(v11 * 6.0)) + (float)(v12 * 0.0));
/* line: 59, address: 0x6013ff44 */     v17 = v17 + (float)((float)((float)(v14 * 0.0) - (float)(v15 * 6.0)) + (float)(v16 * 0.0));
/* line: 60, address: 0x6013ff68 */     v21 = v21 + (float)((float)((float)(v18 * 0.0) - (float)(v19 * 6.0)) + (float)(v20 * 0.0));
/* line: 61 */   }
/* line: 62, address: 0x6013ff78 */   Mtx34_rotateZ(&v10, &v24);
/* line: 63, address: 0x6013ff94 */   (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(a1 + 11824) + 60))(**(_DWORD **)(a1 + 11824), &v10);
/* line: 64, address: 0x6013ffb8 */   return (*(int (__fastcall **)(_DWORD, int))(***(_DWORD ***)(a1 + 11824) + 68))(**(_DWORD **)(a1 + 11824), a1 + 6444);
/* line: 65 */ }