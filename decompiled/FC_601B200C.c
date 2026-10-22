#include "nsmbudx_prelude.h"

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_601B200C(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_601B200C(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_601B200C(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_601B200C(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_601B200C(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_601B200C(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_601B200C(int a1);
/* line: 0, address: 0x601b200c */ int __fastcall sub_601B200C(int a1)
/* line: 1 */ {
/* line: 2 */   unsigned int v2; // r1
/* line: 3 */   unsigned int v3; // r5
/* line: 4 */   unsigned int v4; // r0
/* line: 5 */   int v5; // s0
/* line: 6 */   float *v6; // r1
/* line: 7 */   float v7; // s22
/* line: 8 */   float v8; // s16
/* line: 9 */   float v9; // s18
/* line: 10 */   float v10; // s26
/* line: 11 */   float v11; // s6
/* line: 12 */   float v12; // s0
/* line: 13 */   float v13; // s2
/* line: 14 */   float v14; // s4
/* line: 15 */   float v15; // s5
/* line: 16 */   float v16; // s12
/* line: 17 */   float v17; // s8
/* line: 18 */   float v18; // s1
/* line: 19 */   float v19; // s9
/* line: 20 */   float v20; // s13
/* line: 21 */   float v21; // s3
/* line: 22 */   float v22; // s10
/* line: 23 */   float v23; // s7
/* line: 24 */   float v24; // s11
/* line: 25 */   float v25; // s20
/* line: 26 */   float v26; // s6
/* line: 27 */   int v27; // r0
/* line: 28 */   int v28; // r0
/* line: 29 */   int v29; // r2
/* line: 30 */   int v30; // r0
/* line: 31 */   float v32[12]; // [sp+0h] [bp-30h] BYREF
/* line: 32 */ 
/* line: 33, address: 0x601b2024 */   if ( sub_601C4404() == 1 )
/* line: 34, address: 0x601b202c */     StateMgr::execute((_DWORD *)(a1 + 904));
/* line: 35, address: 0x601b2068 */   if ( sub_60190968(MEMORY[0xC8996C]) != 1 || *(_DWORD *)(a1 + 1032) == 3 && sub_601916EC(MEMORY[0xC8996C]) == 39 )
/* line: 36, address: 0x601b2070 */     sub_601B2404(a1);
/* line: 37, address: 0x601b2078 */   sub_601861EC(a1);
/* line: 38, address: 0x601b2080 */   sub_601B28C4(a1);
/* line: 39, address: 0x601b208c */   if ( (*(_BYTE *)(a1 + 1122) & 2) == 0 )
/* line: 40 */   {
/* line: 41, address: 0x601b2094 */     v2 = *(_DWORD *)(a1 + 180);
/* line: 42, address: 0x601b2098 */     v3 = *(_DWORD *)(a1 + 184);
/* line: 43, address: 0x601b20a0 */     v4 = *(_DWORD *)(a1 + 176);
/* line: 44, address: 0x601b20bc */     v5 = v2 & 0xFFFFFF;
/* line: 45, address: 0x601b20c4 */     v6 = (float *)(((v2 >> 20) & 0xFF0) + 11773060);
/* line: 46, address: 0x601b2114 */     v7 = *(float *)(a1 + 296);
/* line: 47, address: 0x601b2120 */     v8 = *(float *)(a1 + 88);
/* line: 48, address: 0x601b2124 */     v9 = *(float *)(a1 + 80);
/* line: 49, address: 0x601b212c */     v10 = *(float *)(a1 + 132);
/* line: 50, address: 0x601b2134 */     v11 = (float)(v3 & 0xFFFFFF) * 0.000000059605;
/* line: 51, address: 0x601b2138 */     v12 = (float)(unsigned int)v5 * 0.000000059605;
/* line: 52, address: 0x601b213c */     v13 = (float)(v4 & 0xFFFFFF) * 0.000000059605;
/* line: 53, address: 0x601b2140 */     v14 = *(float *)(a1 + 84);
/* line: 54, address: 0x601b2144 */     v15 = v6[2] + (float)(v12 * v6[3]);
/* line: 55, address: 0x601b2148 */     v16 = *(float *)(((v3 >> 20) & 0xFF0) + 0xB3A48C) + (float)(v11 * *(float *)(((v3 >> 20) & 0xFF0) + 0xB3A490));
/* line: 56, address: 0x601b214c */     v17 = *(float *)(((v3 >> 20) & 0xFF0) + 0xB3A484) + (float)(v11 * *(float *)(((v3 >> 20) & 0xFF0) + 0xB3A488));
/* line: 57, address: 0x601b2150 */     v18 = *v6 + (float)(v12 * v6[1]);
/* line: 58, address: 0x601b2154 */     v19 = *(float *)(((v4 >> 20) & 0xFF0) + 0xB3A484) + (float)(v13 * *(float *)(((v4 >> 20) & 0xFF0) + 0xB3A488));
/* line: 59, address: 0x601b2158 */     v20 = *(float *)(((v4 >> 20) & 0xFF0) + 0xB3A48C) + (float)(v13 * *(float *)(((v4 >> 20) & 0xFF0) + 0xB3A490));
/* line: 60, address: 0x601b215c */     v21 = *(float *)(a1 + 372);
/* line: 61, address: 0x601b2160 */     v22 = v7 * *(float *)(a1 + 128);
/* line: 62, address: 0x601b2164 */     v23 = *(float *)(a1 + 380);
/* line: 63, address: 0x601b2168 */     v24 = *(float *)(a1 + 376);
/* line: 64, address: 0x601b216c */     v25 = *(float *)(a1 + 1004);
/* line: 65, address: 0x601b2198 */     v26 = v7 * *(float *)(a1 + 136);
/* line: 66, address: 0x601b21a4 */     v32[0] = v22 * (float)((float)(v15 * v16) + (float)(v19 * (float)(v18 * v17)));
/* line: 67, address: 0x601b21ac */     v32[4] = v22 * (float)(v20 * v17);
/* line: 68, address: 0x601b21cc */     v32[8] = v22 * (float)((float)(v19 * (float)(v15 * v17)) - (float)(v18 * v16));
/* line: 69, address: 0x601b21d4 */     v32[1] = (float)(v7 * v10) * (float)((float)(v19 * (float)(v18 * v16)) - (float)(v15 * v17));
/* line: 70, address: 0x601b21d8 */     v32[5] = (float)(v7 * v10) * (float)(v20 * v16);
/* line: 71, address: 0x601b21dc */     v32[9] = (float)(v7 * v10) * (float)((float)(v18 * v17) + (float)(v19 * (float)(v15 * v16)));
/* line: 72, address: 0x601b21ec */     v32[2] = v26 * (float)(v20 * v18);
/* line: 73, address: 0x601b21f4 */     v32[6] = -(float)(v26 * v19);
/* line: 74, address: 0x601b21f8 */     v32[10] = v26 * (float)(v20 * v15);
/* line: 75, address: 0x601b2208 */     v32[3] = v9 + v21;
/* line: 76, address: 0x601b220c */     v32[7] = (float)(v14 + v25) + v24;
/* line: 77, address: 0x601b2210 */     v32[11] = v8 + v23;
/* line: 78, address: 0x601b2224 */     sub_60793FF0(
/* line: 79 */       *(_DWORD *)(*(_DWORD *)(a1 + 4 * *(_DWORD *)(a1 + 1248) + 920) + 4),
/* line: 80 */       v32,
/* line: 81 */       ((v3 >> 20) & 0xFF0) + 11773060);
/* line: 82 */   }
/* line: 83, address: 0x601b2234 */   v27 = *(_DWORD *)(*(_DWORD *)(a1 + 920 + 4 * *(_DWORD *)(a1 + 1248)) + 4);
/* line: 84, address: 0x601b2240 */   (*(void (__fastcall **)(int))(*(_DWORD *)v27 + 148))(v27);
/* line: 85, address: 0x601b2248 */   sub_601C5484(a1);
/* line: 86, address: 0x601b2250 */   sub_601C581C(a1);
/* line: 87, address: 0x601b2258 */   sub_601C5900(a1);
/* line: 88, address: 0x601b2288 */   if ( sub_6079437C(*(_DWORD *)(*(_DWORD *)(a1 + 920 + 4 * *(_DWORD *)(a1 + 1248)) + 4)) == 1
/* line: 89 */     || sub_601C68A8(a1, *(_DWORD *)(a1 + 1112), *(_DWORD *)(a1 + 1116)) == 1 )
/* line: 90 */   {
/* line: 91, address: 0x601b2298 */     v28 = sub_601C676C(a1, *(_DWORD *)(a1 + 1112), *(_DWORD *)(a1 + 1116));
/* line: 92, address: 0x601b22a8 */     sub_601C6184(a1, v28);
/* line: 93 */   }
/* line: 94, address: 0x601b22b8 */   if ( (unsigned int)(*(_DWORD *)(a1 + 1112) - 11) > 1 )
/* line: 95 */   {
/* line: 96, address: 0x601b22e4 */     sub_601C69B0(a1);
/* line: 97 */   }
/* line: 98, address: 0x601b22c4 */   else if ( *(int *)(a1 + 432) < 0 )
/* line: 99 */   {
/* line: 100, address: 0x601b22d8 */     *(_DWORD *)(a1 + 432) = sub_601C697C(a1, 11, 0);
/* line: 101 */   }
/* line: 102, address: 0x601b22f4 */   sub_60170B5C(MEMORY[0xC88BC8]);
/* line: 103, address: 0x601b2300 */   if ( (*(_BYTE *)(a1 + 1120) & 0x40) != 0 )
/* line: 104 */   {
/* line: 105, address: 0x601b2360 */     if ( sub_60190968(MEMORY[0xC8996C]) == 1 )
/* line: 106 */     {
/* line: 107, address: 0x601b235c */       if ( *(_BYTE *)(MEMORY[0xC89E18] + 240460) )
/* line: 108, address: 0x601b2374 */         *(_BYTE *)(MEMORY[0xC89E18] + 240462) = 1;
/* line: 109 */     }
/* line: 110, address: 0x601b235c */     else if ( !*(_BYTE *)(MEMORY[0xC89E18] + 240460) )
/* line: 111 */     {
/* line: 112, address: 0x601b238c */       v29 = 0;
/* line: 113, address: 0x601b239c */       if ( *(_DWORD *)(a1 + 1032) == 8 )
/* line: 114, address: 0x601b239c */         v29 = 2;
/* line: 115, address: 0x601b23a0 */       sub_604811F4(MEMORY[0xC89E18] + 227624, 0, v29);
/* line: 116 */     }
/* line: 117 */   }
/* line: 118, address: 0x601b2318 */   else if ( *(_BYTE *)(MEMORY[0xC89E18] + 240460) )
/* line: 119 */   {
/* line: 120, address: 0x601b232c */     *(_BYTE *)(MEMORY[0xC89E18] + 240462) = 1;
/* line: 121 */   }
/* line: 122, address: 0x601b23b4 */   sub_6000897C(MEMORY[0xC7B400], a1);
/* line: 123, address: 0x601b23bc */   sub_601B2A1C(a1);
/* line: 124, address: 0x601b23c0 */   v30 = *(_DWORD *)(a1 + 1136);
/* line: 125, address: 0x601b23c8 */   if ( v30 >= 1 )
/* line: 126, address: 0x601b23cc */     *(_DWORD *)(a1 + 1136) = v30 - 1;
/* line: 127, address: 0x601b23dc */   return 1;
/* line: 128 */ }