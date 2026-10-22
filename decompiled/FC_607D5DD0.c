#include "nsmbudx_prelude.h"

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607D5DD0(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607D5DD0(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607D5DD0(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607D5DD0(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607D5DD0(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607D5DD0(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607D5DD0(int a1);
/* line: 0, address: 0x607d5dd0 */ int __fastcall sub_607D5DD0(int a1)
/* line: 1 */ {
/* line: 2 */   float32x2_t v1; // d3
/* line: 3 */   float32x2_t v2; // d8
/* line: 4 */   int v4; // r1
/* line: 5 */   int v5; // r11
/* line: 6 */   int (__fastcall *v6)(int, int, int); // r3
/* line: 7 */   int v7; // r10
/* line: 8 */   int v8; // r9
/* line: 9 */   int v9; // r12
/* line: 10 */   float v10; // s0
/* line: 11 */   float v11; // s4
/* line: 12 */   float v12; // s4
/* line: 13 */   float v13; // s2
/* line: 14 */   float v14; // s4
/* line: 15 */   float v15; // s0
/* line: 16 */   float v16; // s10
/* line: 17 */   float v17; // s2
/* line: 18 */   float v18; // s8
/* line: 19 */   bool v19; // fzf
/* line: 20 */   bool v20; // fnf
/* line: 21 */   float v21; // s8
/* line: 22 */   int v22; // r3
/* line: 23 */   __int64 v23; // r4
/* line: 24 */   __int64 v24; // r6
/* line: 25 */   float v25; // r3
/* line: 26 */   __int64 v26; // r4
/* line: 27 */   __int64 v27; // r6
/* line: 28 */   __int64 v28; // d17
/* line: 29 */   __int64 v29; // d17
/* line: 30 */   __int64 v30; // d17
/* line: 31 */   int result; // r0
/* line: 32 */   int v32; // r5
/* line: 33 */   __int64 v33; // [sp+8h] [bp-40h] BYREF
/* line: 34 */   __int64 v34; // [sp+10h] [bp-38h]
/* line: 35 */   __int64 v35; // [sp+18h] [bp-30h]
/* line: 36 */   __int64 v36; // [sp+20h] [bp-28h]
/* line: 37 */   __int64 v37; // [sp+28h] [bp-20h]
/* line: 38 */   __int64 v38; // [sp+30h] [bp-18h]
/* line: 39 */   float v39[3]; // [sp+3Ch] [bp-Ch] BYREF
/* line: 40 */ 
/* line: 41, address: 0x607d5dec */   v4 = *(_DWORD *)(a1 + 344);
/* line: 42, address: 0x607d5df0 */   v5 = **(_DWORD **)(a1 + 24);
/* line: 43, address: 0x607d5dfc */   v6 = *(int (__fastcall **)(int, int, int))(*(_DWORD *)v5 + 136);
/* line: 44, address: 0x607d5e00 */   if ( *(_DWORD *)(a1 + 324) != 1 )
/* line: 45, address: 0x607d6074 */     return v6(v5, v4, 0);
/* line: 46, address: 0x607d5e0c */   v6(v5, v4, 1);
/* line: 47, address: 0x607d5e28 */   LODWORD(v33) = 12321336;
/* line: 48, address: 0x607d5e34 */   HIDWORD(v33) = "tongue_1";
/* line: 49, address: 0x607d5e3c */   sub_60793F04(a1, v39, &v33);
/* line: 50, address: 0x607d5e40 */   v2.n64_u32[0] = 0;
/* line: 51, address: 0x607d5e4c */   v7 = 0;
/* line: 52, address: 0x607d5e50 */   v8 = 18;
/* line: 53, address: 0x607d5f8c */   do
/* line: 54 */   {
/* line: 55, address: 0x607d5e60 */     v9 = a1 + v7;
/* line: 56, address: 0x607d5e68 */     v1.n64_u32[0] = *(_DWORD *)(a1 + 332);
/* line: 57, address: 0x607d5e6c */     v10 = *(float *)(a1 + v7 + 408);
/* line: 58, address: 0x607d5e70 */     v11 = v39[0] - v10;
/* line: 59, address: 0x607d5e80 */     if ( (float)(v39[0] - v10) <= 0.0 )
/* line: 60, address: 0x607d5e80 */       v11 = -(float)(v39[0] - v10);
/* line: 61, address: 0x607d5e8c */     if ( v11 > v1.n64_f32[0] )
/* line: 62 */     {
/* line: 63, address: 0x607d5e90 */       v12 = *(float *)(v9 + 360);
/* line: 64, address: 0x607d5ea4 */       v13 = v39[0] - v12;
/* line: 65, address: 0x607d5ea8 */       v14 = v10 - v12;
/* line: 66, address: 0x607d5eac */       v15 = *(float *)(v9 + 440) - *(float *)(v9 + 392);
/* line: 67, address: 0x607d5eb4 */       v16 = -v13;
/* line: 68, address: 0x607d5ebc */       if ( v13 > 0.0 )
/* line: 69, address: 0x607d5ebc */         v16 = v13;
/* line: 70, address: 0x607d5ec0 */       v17 = *(float *)(v9 + 424) - *(float *)(v9 + 376);
/* line: 71, address: 0x607d5ec8 */       v18 = -v14;
/* line: 72, address: 0x607d5ed0 */       if ( v14 > 0.0 )
/* line: 73, address: 0x607d5ed0 */         v18 = v14;
/* line: 74, address: 0x607d5ed4 */       v19 = v18 == 0.1;
/* line: 75, address: 0x607d5ed4 */       v20 = v18 < 0.1;
/* line: 76, address: 0x607d5ed8 */       v21 = 0.0;
/* line: 77, address: 0x607d5ee0 */       if ( !v20 && !v19 )
/* line: 78 */       {
/* line: 79, address: 0x607d5ee4 */         v1.n64_f32[0] = v1.n64_f32[0] - v16;
/* line: 80, address: 0x607d5ee8 */         v1.n64_f32[0] = fmaxf(v1.n64_f32[0], v2.n64_f32[0]);
/* line: 81, address: 0x607d5eec */         v1.n64_f32[0] = v1.n64_f32[0] / v14;
/* line: 82, address: 0x607d5ef4 */         v21 = -v1.n64_f32[0];
/* line: 83, address: 0x607d5efc */         if ( v1.n64_f32[0] > 0.0 )
/* line: 84, address: 0x607d5efc */           v21 = v1.n64_f32[0];
/* line: 85 */       }
/* line: 86, address: 0x607d5f08 */       v22 = *(_DWORD *)(v9 + 352);
/* line: 87, address: 0x607d5f08 */       v23 = *(_QWORD *)(v9 + 356);
/* line: 88, address: 0x607d5f08 */       v24 = *(_QWORD *)(v9 + 364);
/* line: 89, address: 0x607d5f10 */       LODWORD(v33) = *(_DWORD *)(v9 + 348);
/* line: 90, address: 0x607d5f10 */       HIDWORD(v33) = v22;
/* line: 91, address: 0x607d5f10 */       v34 = v23;
/* line: 92, address: 0x607d5f10 */       v35 = v24;
/* line: 93, address: 0x607d5f14 */       v25 = *(float *)(v9 + 376);
/* line: 94, address: 0x607d5f14 */       v26 = *(_QWORD *)(v9 + 380);
/* line: 95, address: 0x607d5f14 */       v27 = *(_QWORD *)(v9 + 388);
/* line: 96, address: 0x607d5f18 */       LODWORD(v36) = *(_DWORD *)(v9 + 372);
/* line: 97, address: 0x607d5f18 */       v37 = v26;
/* line: 98, address: 0x607d5f18 */       LODWORD(v38) = v27;
/* line: 99, address: 0x607d5f2c */       *((float *)&v34 + 1) = *((float *)&v34 + 1) + (float)(v14 * v21);
/* line: 100, address: 0x607d5f38 */       *((float *)&v36 + 1) = v25 + (float)(v17 * v21);
/* line: 101, address: 0x607d5f44 */       *((float *)&v38 + 1) = *((float *)&v27 + 1) + (float)(v15 * v21);
/* line: 102, address: 0x607d5f48 */       v28 = v34;
/* line: 103, address: 0x607d5f4c */       *(_QWORD *)(v9 + 396) = v33;
/* line: 104, address: 0x607d5f4c */       *(_QWORD *)(v9 + 404) = v28;
/* line: 105, address: 0x607d5f54 */       v29 = v36;
/* line: 106, address: 0x607d5f5c */       *(_QWORD *)(v9 + 412) = v35;
/* line: 107, address: 0x607d5f5c */       *(_QWORD *)(v9 + 420) = v29;
/* line: 108, address: 0x607d5f64 */       v30 = v38;
/* line: 109, address: 0x607d5f6c */       *(_QWORD *)(v9 + 428) = v37;
/* line: 110, address: 0x607d5f6c */       *(_QWORD *)(v9 + 436) = v30;
/* line: 111, address: 0x607d5f7c */       (*(void (__fastcall **)(int, int))(*(_DWORD *)v5 + 104))(v5, v8);
/* line: 112 */     }
/* line: 113, address: 0x607d5f80 */     v7 += 48;
/* line: 114, address: 0x607d5f84 */     ++v8;
/* line: 115 */   }
/* line: 116, address: 0x607d5f8c */   while ( v7 != 288 );
/* line: 117, address: 0x607d5f90 */   result = *(_DWORD *)(a1 + 324);
/* line: 118, address: 0x607d5f98 */   if ( result == 1 )
/* line: 119 */   {
/* line: 120, address: 0x607d5fa8 */     v32 = **(_DWORD **)(a1 + 24);
/* line: 121, address: 0x607d5fb8 */     (*(void (__fastcall **)(int, int, int))(*(_DWORD *)v32 + 104))(v32, 17, a1 + 348);
/* line: 122, address: 0x607d5fd0 */     (*(void (__fastcall **)(int, int, int))(*(_DWORD *)v32 + 104))(v32, 18, a1 + 396);
/* line: 123, address: 0x607d5fe8 */     (*(void (__fastcall **)(int, int, int))(*(_DWORD *)v32 + 104))(v32, 19, a1 + 444);
/* line: 124, address: 0x607d6000 */     (*(void (__fastcall **)(int, int, int))(*(_DWORD *)v32 + 104))(v32, 20, a1 + 492);
/* line: 125, address: 0x607d6018 */     (*(void (__fastcall **)(int, int, int))(*(_DWORD *)v32 + 104))(v32, 21, a1 + 540);
/* line: 126, address: 0x607d6030 */     (*(void (__fastcall **)(int, int, int))(*(_DWORD *)v32 + 104))(v32, 22, a1 + 588);
/* line: 127, address: 0x607d6048 */     return (*(int (__fastcall **)(int, int, int))(*(_DWORD *)v32 + 104))(v32, 23, a1 + 636);
/* line: 128 */   }
/* line: 129, address: 0x607d6058 */   return result;
/* line: 130 */ }