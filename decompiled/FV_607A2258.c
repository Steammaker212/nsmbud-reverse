#include "nsmbudx_prelude.h"

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607A2258(int a1, int a2, int a3);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607A2258(int a1, int a2, int a3);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607A2258(int a1, int a2, int a3);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607A2258(int a1, int a2, int a3);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607A2258(int a1, int a2, int a3);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607A2258(int a1, int a2, int a3);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607A2258(int a1, int a2, int a3);
/* line: 0, address: 0x607a2258 */ int __fastcall sub_607A2258(int a1, int a2, int a3)
/* line: 1 */ {
/* line: 2 */   int v6; // r5
/* line: 3 */   int v7; // r0
/* line: 4 */   bool v8; // zf
/* line: 5 */   float v10; // r0
/* line: 6 */   int v11; // r1
/* line: 7 */   int v12; // r0
/* line: 8 */   float v13; // r1
/* line: 9 */   int v14; // r2
/* line: 10 */   float v15; // r1
/* line: 11 */   int v16; // r2
/* line: 12 */   int v17; // r0
/* line: 13 */   float v18; // s0
/* line: 14 */   int v19; // r0
/* line: 15 */   int v20; // r1
/* line: 16 */   float v21; // [sp+4h] [bp-14h] BYREF
/* line: 17 */   int v22; // [sp+8h] [bp-10h] BYREF
/* line: 18 */   float v23; // [sp+Ch] [bp-Ch]
/* line: 19 */   int v24; // [sp+10h] [bp-8h]
/* line: 20 */ 
/* line: 21, address: 0x607a2270 */   v6 = sub_6079D894();
/* line: 22, address: 0x607a2278 */   if ( v6 )
/* line: 23 */   {
/* line: 24, address: 0x607a2280 */     if ( a3 == 1 )
/* line: 25, address: 0x607a2280 */       goto LABEL_16;
/* line: 26, address: 0x607a2284 */     v7 = *(_DWORD *)(a1 + 1320);
/* line: 27, address: 0x607a2288 */     v8 = v7 == 3;
/* line: 28, address: 0x607a228c */     if ( v7 != 3 )
/* line: 29, address: 0x607a2290 */       v8 = *(_DWORD *)(v6 + 1320) == 3;
/* line: 30, address: 0x607a2294 */     if ( !v8 )
/* line: 31 */     {
/* line: 32, address: 0x607a22e0 */       if ( *(_BYTE *)(MEMORY[0xCC6D8C] + 17) )
/* line: 33 */       {
/* line: 34, address: 0x607a22ec */         v10 = *(float *)(v6 + 112);
/* line: 35, address: 0x607a22f0 */         v11 = *(_DWORD *)(v6 + 116);
/* line: 36, address: 0x607a2300 */         v22 = *(_DWORD *)(a1 + 108);
/* line: 37, address: 0x607a2304 */         v23 = v10;
/* line: 38, address: 0x607a2308 */         v24 = v11;
/* line: 39, address: 0x607a2320 */         if ( sub_60155C38(a1 + 1328, &v22, &v21, 0) == 1 )
/* line: 40 */         {
/* line: 41, address: 0x607a2330 */           v12 = sub_60799A08(a1, *(_DWORD *)(a1 + 1320), 0);
/* line: 42, address: 0x607a2350 */           v23 = (float)(v21 - *(float *)(v12 + 20)) + -2.0;
/* line: 43, address: 0x607a2354 */           v13 = v23;
/* line: 44, address: 0x607a2354 */           v14 = v24;
/* line: 45, address: 0x607a2358 */           *(_DWORD *)(v6 + 108) = v22;
/* line: 46, address: 0x607a2358 */           *(float *)(v6 + 112) = v13;
/* line: 47, address: 0x607a2358 */           *(_DWORD *)(v6 + 116) = v14;
/* line: 48 */         }
/* line: 49 */       }
/* line: 50 */       else
/* line: 51 */       {
/* line: 52, address: 0x607a236c */         v15 = *(float *)(v6 + 112);
/* line: 53, address: 0x607a236c */         v16 = *(_DWORD *)(v6 + 116);
/* line: 54, address: 0x607a2370 */         v22 = *(_DWORD *)(v6 + 108);
/* line: 55, address: 0x607a2370 */         v23 = v15;
/* line: 56, address: 0x607a2370 */         v24 = v16;
/* line: 57, address: 0x607a238c */         if ( sub_60155C38(a1 + 1328, &v22, &v21, 0) == 1 )
/* line: 58 */         {
/* line: 59, address: 0x607a239c */           v17 = sub_60799A08(a1, *(_DWORD *)(a1 + 1320), 0);
/* line: 60, address: 0x607a23b4 */           v23 = (float)(v21 - *(float *)(v17 + 20)) + -2.0;
/* line: 61, address: 0x607a23b0 */           v18 = v23;
/* line: 62, address: 0x607a23b8 */           v19 = v22;
/* line: 63, address: 0x607a23bc */           *(_DWORD *)(v6 + 108) = v22;
/* line: 64, address: 0x607a23c0 */           *(float *)(v6 + 112) = v18;
/* line: 65, address: 0x607a23c4 */           v20 = v24;
/* line: 66, address: 0x607a23c8 */           *(_DWORD *)(v6 + 116) = v24;
/* line: 67, address: 0x607a23cc */           *(_DWORD *)(v6 + 584) = v19;
/* line: 68, address: 0x607a23d0 */           *(float *)(v6 + 588) = v18;
/* line: 69, address: 0x607a23d4 */           *(_DWORD *)(v6 + 592) = v20;
/* line: 70, address: 0x607a23d8 */           *(_DWORD *)(v6 + 608) = v19;
/* line: 71, address: 0x607a23dc */           *(float *)(v6 + 612) = v18;
/* line: 72, address: 0x607a23e0 */           *(_DWORD *)(v6 + 616) = v20;
/* line: 73 */         }
/* line: 74 */       }
/* line: 75, address: 0x607a235c */       goto LABEL_16;
/* line: 76 */     }
/* line: 77, address: 0x607a22a0 */     sub_60764270(v6, a2);
/* line: 78 */   }
/* line: 79, address: 0x607a22bc */   if ( !sub_6079E090(a1) && (*(_BYTE *)(a1 + 1221) & 0x80) == 0 )
/* line: 80, address: 0x607a22d0 */     return sub_60764270(a1, a2);
/* line: 81 */ LABEL_16:
/* line: 82, address: 0x607a23e4 */   sub_6079E724(a1);
/* line: 83, address: 0x607a23f4 */   return 0;
/* line: 84 */ }