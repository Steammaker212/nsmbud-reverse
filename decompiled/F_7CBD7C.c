#include "nsmbudx_prelude.h"

/* ---- forward declarations for functions defined below ---- */
_DWORD * __fastcall sub_607CBD7C(int a1);

/* ---- forward declarations for functions defined below ---- */
_DWORD * __fastcall sub_607CBD7C(int a1);

/* ---- forward declarations for functions defined below ---- */
_DWORD * __fastcall sub_607CBD7C(int a1);

/* ---- forward declarations for functions defined below ---- */
_DWORD * __fastcall sub_607CBD7C(int a1);

/* ---- forward declarations for functions defined below ---- */
_DWORD * __fastcall sub_607CBD7C(int a1);

/* ---- forward declarations for functions defined below ---- */
_DWORD * __fastcall sub_607CBD7C(int a1);
/* line: 0, address: 0x607cbd7c */ _DWORD *__fastcall sub_607CBD7C(int a1)
/* line: 1 */ {
/* line: 2 */   unsigned int v2; // r5
/* line: 3 */   unsigned int v3; // r6
/* line: 4 */   unsigned int v4; // r7
/* line: 5 */   float v5; // s16
/* line: 6 */   float v6; // s17
/* line: 7 */   float v7; // s18
/* line: 8 */   float v8; // s19
/* line: 9 */   float v9; // s22
/* line: 10 */   float v10; // s21
/* line: 11 */   float v11; // s20
/* line: 12 */   float v12; // s23
/* line: 13 */   float v13; // s26
/* line: 14 */   float v14; // s25
/* line: 15 */   float v15; // s24
/* line: 16 */   float v16; // s27
/* line: 17 */   float v17; // s29
/* line: 18 */   float v18; // s30
/* line: 19 */   float v19; // s28
/* line: 20 */   float v20; // s2
/* line: 21 */   float v21; // s4
/* line: 22 */   float v22; // s0
/* line: 23 */   float v23; // s24
/* line: 24 */   float v24; // s20
/* line: 25 */   float v25; // s26
/* line: 26 */   float v26; // s22
/* line: 27 */   float v27; // s18
/* line: 28 */   float v28; // s16
/* line: 29 */   int v29; // r2
/* line: 30 */   int v30; // r0
/* line: 31 */   _DWORD *result; // r0
/* line: 32 */   bool v32; // zf
/* line: 33 */   float v33; // [sp+4h] [bp-3Ch] BYREF
/* line: 34 */   float v34; // [sp+8h] [bp-38h]
/* line: 35 */   float v35; // [sp+Ch] [bp-34h]
/* line: 36 */   float v36[12]; // [sp+10h] [bp-30h] BYREF
/* line: 37 */ 
/* line: 38, address: 0x607cbd94 */   if ( (*(_BYTE *)(a1 + 1209) & 2) != 0 )
/* line: 39, address: 0x607cbd9c */     sub_6077059C(a1);
/* line: 40, address: 0x607cbdb0 */   v2 = *(_DWORD *)(a1 + 156);
/* line: 41, address: 0x607cbdb0 */   v3 = *(_DWORD *)(a1 + 160);
/* line: 42, address: 0x607cbdb0 */   v4 = *(_DWORD *)(a1 + 164);
/* line: 43, address: 0x607cbdd0 */   v5 = *(float *)(((v2 >> 20) & 0xFF0) + 0xB3A484);
/* line: 44, address: 0x607cbdd0 */   v6 = *(float *)(((v2 >> 20) & 0xFF0) + 0xB3A488);
/* line: 45, address: 0x607cbdd0 */   v7 = *(float *)(((v2 >> 20) & 0xFF0) + 0xB3A48C);
/* line: 46, address: 0x607cbdd0 */   v8 = *(float *)(((v2 >> 20) & 0xFF0) + 0xB3A490);
/* line: 47, address: 0x607cbdd4 */   v36[3] = *(float *)(a1 + 108);
/* line: 48, address: 0x607cbdd8 */   v9 = *(float *)(((v3 >> 20) & 0xFF0) + 0xB3A484);
/* line: 49, address: 0x607cbddc */   v10 = *(float *)(((v3 >> 20) & 0xFF0) + 0xB3A488);
/* line: 50, address: 0x607cbde0 */   v11 = *(float *)(((v3 >> 20) & 0xFF0) + 0xB3A48C);
/* line: 51, address: 0x607cbde4 */   v12 = *(float *)(((v3 >> 20) & 0xFF0) + 0xB3A490);
/* line: 52, address: 0x607cbde8 */   v13 = *(float *)(((v4 >> 20) & 0xFF0) + 0xB3A484);
/* line: 53, address: 0x607cbdec */   v14 = *(float *)(((v4 >> 20) & 0xFF0) + 0xB3A488);
/* line: 54, address: 0x607cbdf0 */   v15 = *(float *)(((v4 >> 20) & 0xFF0) + 0xB3A48C);
/* line: 55, address: 0x607cbdf4 */   v16 = *(float *)(((v4 >> 20) & 0xFF0) + 0xB3A490);
/* line: 56, address: 0x607cbe00 */   v36[7] = *(float *)(a1 + 112);
/* line: 57, address: 0x607cbe08 */   v36[11] = *(float *)(a1 + 116);
/* line: 58, address: 0x607cbe10 */   v17 = *(float *)(a1 + 144);
/* line: 59, address: 0x607cbe14 */   v18 = *(float *)(a1 + 148);
/* line: 60, address: 0x607cbe18 */   v19 = *(float *)(a1 + 152);
/* line: 61, address: 0x607cbe1c */   v33 = 1.0;
/* line: 62, address: 0x607cbe20 */   v34 = 1.0;
/* line: 63, address: 0x607cbe24 */   v35 = 1.0;
/* line: 64, address: 0x607cbe2c */   sub_6076628C(a1, &v33);
/* line: 65, address: 0x607cbe64 */   v20 = (float)(v4 & 0xFFFFFF) * 0.000000059605;
/* line: 66, address: 0x607cbe68 */   v21 = (float)(v3 & 0xFFFFFF) * 0.000000059605;
/* line: 67, address: 0x607cbe6c */   v22 = (float)(v2 & 0xFFFFFF) * 0.000000059605;
/* line: 68, address: 0x607cbe70 */   v23 = v15 + (float)(v20 * v16);
/* line: 69, address: 0x607cbe74 */   v24 = v11 + (float)(v21 * v12);
/* line: 70, address: 0x607cbe78 */   v25 = v13 + (float)(v20 * v14);
/* line: 71, address: 0x607cbe7c */   v26 = v9 + (float)(v21 * v10);
/* line: 72, address: 0x607cbe80 */   v27 = v7 + (float)(v22 * v8);
/* line: 73, address: 0x607cbe84 */   v28 = v5 + (float)(v22 * v6);
/* line: 74, address: 0x607cbeac */   v36[0] = (float)((float)(v24 * v23) * v17) * v33;
/* line: 75, address: 0x607cbeb0 */   v36[4] = v33 * (float)(v17 * (float)(v24 * v25));
/* line: 76, address: 0x607cbeb8 */   v36[8] = -(float)((float)(v26 * v17) * v33);
/* line: 77, address: 0x607cbef0 */   v36[1] = (float)((float)((float)((float)(v28 * v26) * v23) - (float)(v27 * v25)) * v18) * v34;
/* line: 78, address: 0x607cbef4 */   v36[5] = v34 * (float)(v18 * (float)((float)(v27 * v23) + (float)((float)(v28 * v26) * v25)));
/* line: 79, address: 0x607cbf0c */   v36[9] = (float)((float)(v28 * v24) * v18) * v34;
/* line: 80, address: 0x607cbf28 */   v36[2] = (float)((float)((float)(v26 * (float)(v27 * v23)) + (float)(v28 * v25)) * v19) * v35;
/* line: 81, address: 0x607cbf2c */   v36[6] = v35 * (float)(v19 * (float)((float)(v26 * (float)(v27 * v25)) - (float)(v28 * v23)));
/* line: 82, address: 0x607cbf30 */   v36[10] = (float)((float)(v27 * v24) * v19) * v35;
/* line: 83, address: 0x607cbf38 */   sub_60793FF0(*(_DWORD *)(a1 + 11368), v36, v29);
/* line: 84, address: 0x607cbf3c */   v30 = *(_DWORD *)(a1 + 1236);
/* line: 85, address: 0x607cbf44 */   if ( (v30 & 0x40000) != 0 )
/* line: 86 */   {
/* line: 87, address: 0x607cbf4c */     sub_607CD09C(a1);
/* line: 88, address: 0x607cbf54 */     sub_607D19F8(a1);
/* line: 89, address: 0x607cbf58 */     v30 = *(_DWORD *)(a1 + 1236);
/* line: 90 */   }
/* line: 91, address: 0x607cbf60 */   if ( (v30 & 0x80000) != 0 )
/* line: 92 */   {
/* line: 93, address: 0x607cbf68 */     *(_DWORD *)(a1 + 1236) = v30 & 0xFFF7FFFF;
/* line: 94, address: 0x607cbf70 */     sub_607CD1D4(a1);
/* line: 95 */   }
/* line: 96, address: 0x607cbf78 */   result = (_DWORD *)sub_607CFB50(a1);
/* line: 97, address: 0x607cbf7c */   v32 = result == 0;
/* line: 98, address: 0x607cbf80 */   if ( result )
/* line: 99 */   {
/* line: 100, address: 0x607cbf80 */     result = (_DWORD *)result[155];
/* line: 101, address: 0x607cbf84 */     v32 = result == 0;
/* line: 102 */   }
/* line: 103, address: 0x607cbf88 */   if ( !v32 )
/* line: 104, address: 0x607cbf98 */     return (_DWORD *)(*(int (__fastcall **)(_DWORD *, int))(*result + 12))(result, a1);
/* line: 105, address: 0x607cbfa4 */   return result;
/* line: 106 */ }