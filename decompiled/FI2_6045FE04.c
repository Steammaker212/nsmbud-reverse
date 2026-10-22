#include "nsmbudx_prelude.h"

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_6045FE04(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_6045FE04(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_6045FE04(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_6045FE04(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_6045FE04(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_6045FE04(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_6045FE04(int a1);
/* line: 0, address: 0x6045fe04 */ int __fastcall sub_6045FE04(int a1)
/* line: 1 */ {
/* line: 2 */   _DWORD *v2; // r0
/* line: 3 */   int v3; // r1
/* line: 4 */   int v4; // t1
/* line: 5 */   int v5; // r1
/* line: 6 */   unsigned int v6; // r0
/* line: 7 */   float v7; // s2
/* line: 8 */   float *v8; // r0
/* line: 9 */   float v9; // s18
/* line: 10 */   float v10; // s20
/* line: 11 */   float v11; // s16
/* line: 12 */   float v12; // s22
/* line: 13 */   float v13; // s26
/* line: 14 */   float v14; // s24
/* line: 15 */   int v15; // r2
/* line: 16 */   int v16; // r2
/* line: 17 */   int v17; // r1
/* line: 18 */   int v18; // r1
/* line: 19 */   char v19; // r5
/* line: 20 */   int v20; // r8
/* line: 21 */   _BYTE *v21; // r7
/* line: 22 */   int v22; // r0
/* line: 23 */   int v23; // s0
/* line: 24 */   float *v24; // r1
/* line: 25 */   float v26; // s0
/* line: 26 */   float v27; // s2
/* line: 27 */   float v28; // s8
/* line: 28 */   float v29; // s0
/* line: 29 */   float v30; // s4
/* line: 30 */   float v31; // s2
/* line: 31 */   float v32; // s10
/* line: 32 */   float v33; // s6
/* line: 33 */   float v34; // s0
/* line: 34 */   float v35[4]; // [sp+8h] [bp-10h] BYREF
/* line: 35 */ 
/* line: 36, address: 0x6045fe18 */   v4 = *(_DWORD *)(a1 + 6680);
/* line: 37, address: 0x6045fe18 */   v2 = (_DWORD *)(a1 + 6680);
/* line: 38, address: 0x6045fe18 */   v3 = v4;
/* line: 39, address: 0x6045fe20 */   if ( v4 )
/* line: 40 */   {
/* line: 41, address: 0x6045fe24 */     v5 = v3 - 1;
/* line: 42, address: 0x6045fe2c */     *v2 = v5;
/* line: 43, address: 0x6045fe30 */     if ( v5 == 1 )
/* line: 44 */     {
/* line: 45, address: 0x6045fe3c */       *(_DWORD *)(a1 + 116) = 1156956160;
/* line: 46, address: 0x6045fe44 */       *v2 = 0;
/* line: 47 */     }
/* line: 48 */   }
/* line: 49, address: 0x6045fe4c */   CollisionActor__handleGravity((CollisionActor *)a1);
/* line: 50, address: 0x6045fe54 */   v6 = sub_6014C4A4(a1 + 648);
/* line: 51, address: 0x6045fe84 */   v7 = (float)(v6 & 0xFFFFFF);
/* line: 52, address: 0x6045fe88 */   v8 = (float *)(((v6 >> 20) & 0xFF0) + 11773060);
/* line: 53, address: 0x6045fea4 */   v9 = *(float *)(a1 + 120);
/* line: 54, address: 0x6045feac */   v10 = v8[2] + (float)((float)(v7 * 0.000000059605) * v8[3]);
/* line: 55, address: 0x6045feb0 */   v11 = *v8 + (float)(v8[1] * (float)(v7 * 0.000000059605));
/* line: 56, address: 0x6045febc */   if ( *(_BYTE *)(a1 + 6054) || *(_BYTE *)(a1 + 6053) )
/* line: 57, address: 0x6045fecc */     v9 = v9 * 0.5;
/* line: 58, address: 0x6045fed8 */   v12 = *(float *)(a1 + 124);
/* line: 59, address: 0x6045fee4 */   v13 = *(float *)(a1 + 6024);
/* line: 60, address: 0x6045fee8 */   v14 = *(float *)(a1 + 6028);
/* line: 61, address: 0x6045fef0 */   sub_600037A0(a1);
/* line: 62, address: 0x6045ff20 */   *(float *)(a1 + 108) = *(float *)(a1 + 108) + (float)((float)(v13 + (float)(v10 * v9)) + *(float *)(a1 + 6000));
/* line: 63, address: 0x6045ff2c */   *(float *)(a1 + 112) = (float)((float)(v12 + (float)(v11 * v9)) + v14) + *(float *)(a1 + 112);
/* line: 64, address: 0x6045ff30 */   if ( *(_BYTE *)(a1 + 6197) )
/* line: 65 */   {
/* line: 66, address: 0x6045ff44 */     v15 = *(_DWORD *)(a1 + 6204);
/* line: 67, address: 0x6045ff58 */     if ( !v15 || (v16 = v15 - 1, (*(_DWORD *)(a1 + 6204) = v16) == 0) )
/* line: 68, address: 0x6045ff60 */       *(_BYTE *)(a1 + 6197) = 0;
/* line: 69 */   }
/* line: 70, address: 0x6045ff70 */   if ( *(_DWORD *)(a1 + 6224) != 2 )
/* line: 71 */   {
/* line: 72, address: 0x6045ff7c */     v17 = *(_DWORD *)(a1 + 6228);
/* line: 73, address: 0x6045ff90 */     if ( !v17 || (v18 = v17 - 1, (*(_DWORD *)(a1 + 6228) = v18) == 0) )
/* line: 74, address: 0x6045ffb4 */       EffectWrapper_update(a1 + 6684, 90, a1 + 6124, 0, a1 + 144);
/* line: 75 */   }
/* line: 76, address: 0x6045ffd4 */   if ( *(_BYTE *)(a1 + 6255) && *(float *)(a1 + 124) < 0.0 )
/* line: 77, address: 0x6045ffdc */     *(_DWORD *)(a1 + 124) = 1082130432;
/* line: 78, address: 0x6045ffe8 */   v19 = CollisionActor__sub_600034C8((CollisionActor *)a1);
/* line: 79, address: 0x6045fff0 */   if ( (v19 & 1) != 0 )
/* line: 80 */   {
/* line: 81, address: 0x60460004 */     v22 = 0;
/* line: 82, address: 0x60460010 */     *(_DWORD *)(a1 + 80) = 0;
/* line: 83, address: 0x60460024 */     if ( *(float *)(a1 + 120) < 0.0 )
/* line: 84 */     {
/* line: 85, address: 0x60460024 */       v22 = 1;
/* line: 86, address: 0x60460028 */       *(_DWORD *)(a1 + 80) = 1;
/* line: 87 */     }
/* line: 88, address: 0x60460030 */     *(_DWORD *)(a1 + 120) = *(_DWORD *)(4 * v22 + 0xB025FC);
/* line: 89, address: 0x60460038 */     v21 = (_BYTE *)(a1 + 6196);
/* line: 90, address: 0x6046009c */     if ( *(_BYTE *)(a1 + 6196) || (v20 = 1, !*(_DWORD *)(a1 + 6192)) )
/* line: 91 */     {
/* line: 92, address: 0x6046004c */       if ( *(_BYTE *)(a1 + 86) == 1 )
/* line: 93 */       {
/* line: 94, address: 0x60460050 */         v23 = -987594752;
/* line: 95 */       }
/* line: 96 */       else
/* line: 97 */       {
/* line: 98, address: 0x60460060 */         v24 = &flt_60460238;
/* line: 99, address: 0x60460068 */         if ( *(_DWORD *)(a1 + 6168) == 5 )
/* line: 100, address: 0x60460068 */           v24 = &flt_6046023C;
/* line: 101, address: 0x6046006c */         v23 = *(_DWORD *)v24;
/* line: 102 */       }
/* line: 103, address: 0x60460074 */       *(_DWORD *)(a1 + 116) = v23;
/* line: 104, address: 0x60460078 */       sub_60462A58(a1);
/* line: 105, address: 0x60460088 */       (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 208))(a1);
/* line: 106, address: 0x6046008c */       v20 = 1;
/* line: 107 */     }
/* line: 108 */   }
/* line: 109 */   else
/* line: 110 */   {
/* line: 111, address: 0x6045fff8 */     v20 = 0;
/* line: 112, address: 0x6045fffc */     v21 = (_BYTE *)(a1 + 6196);
/* line: 113 */   }
/* line: 114, address: 0x604600b0 */   *v21 = 0;
/* line: 115, address: 0x604600b4 */   if ( (v19 & 4) != 0 )
/* line: 116 */   {
/* line: 117, address: 0x604600c0 */     *(_DWORD *)(a1 + 80) = *(unsigned __int8 *)(a1 + 80) ^ 1;
/* line: 118, address: 0x604600cc */     *(float *)(a1 + 120) = -*(float *)(a1 + 120);
/* line: 119 */   }
/* line: 120, address: 0x604600d4 */   if ( (v19 & 2) != 0 )
/* line: 121, address: 0x604600dc */     *(_DWORD *)(a1 + 124) = -1082130432;
/* line: 122, address: 0x604600e4 */   sub_60462370(a1);
/* line: 123, address: 0x604600f4 */   if ( sub_60003AE0(a1) == 1 )
/* line: 124, address: 0x60460110 */     return sub_60462798(a1, 1, 1);
/* line: 125, address: 0x60460134 */   if ( *(_DWORD *)(a1 + 6180) == 13 && *(float *)(a1 + 124) <= 0.0 )
/* line: 126 */   {
/* line: 127, address: 0x60460144 */     (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 244))(a1);
/* line: 128, address: 0x6046014c */     *(_DWORD *)(a1 + 6180) = 1;
/* line: 129 */   }
/* line: 130, address: 0x6046015c */   (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 224))(a1);
/* line: 131, address: 0x60460168 */   if ( (*(_BYTE *)(a1 + 2872) & 1) != 0 )
/* line: 132 */   {
/* line: 133, address: 0x6046016c */     v26 = *(float *)(a1 + 108);
/* line: 134, address: 0x60460178 */     v27 = *(float *)(a1 + 112);
/* line: 135, address: 0x60460188 */     v28 = v26 + 16.0;
/* line: 136, address: 0x6046018c */     v29 = v26 + -16.0;
/* line: 137, address: 0x60460190 */     v30 = v27 + 16.0;
/* line: 138, address: 0x60460194 */     v31 = v27 + -16.0;
/* line: 139, address: 0x604601a0 */     if ( v28 <= v29 )
/* line: 140, address: 0x604601a0 */       v32 = v28;
/* line: 141 */     else
/* line: 142, address: 0x604601a0 */       v32 = v29;
/* line: 143, address: 0x604601a4 */     if ( v28 > v29 )
/* line: 144, address: 0x604601a4 */       v29 = v28;
/* line: 145, address: 0x604601ac */     v35[0] = v32;
/* line: 146, address: 0x604601b4 */     v35[2] = v29;
/* line: 147, address: 0x604601b8 */     if ( v30 <= v31 )
/* line: 148, address: 0x604601b8 */       v33 = v30;
/* line: 149 */     else
/* line: 150, address: 0x604601b8 */       v33 = v31;
/* line: 151, address: 0x604601bc */     if ( v30 <= v31 )
/* line: 152, address: 0x604601bc */       v34 = v31;
/* line: 153 */     else
/* line: 154, address: 0x604601bc */       v34 = v30;
/* line: 155, address: 0x604601c0 */     v35[1] = v33;
/* line: 156, address: 0x604601c4 */     v35[3] = v34;
/* line: 157, address: 0x604601e0 */     if ( !sub_60007208(v35, &unk_60B0266C) && *(_BYTE *)(MEMORY[0xC9CF0C] + 1361) )
/* line: 158 */     {
/* line: 159, address: 0x604601ec */       if ( *(_BYTE *)(a1 + 6054) )
/* line: 160, address: 0x60460204 */         (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 248))(a1);
/* line: 161 */       else
/* line: 162, address: 0x60460210 */         *(_DWORD *)(a1 + 124) = 0x40000000;
/* line: 163 */     }
/* line: 164 */   }
/* line: 165, address: 0x60460218 */   *(_DWORD *)(a1 + 6192) = v20;
/* line: 166, address: 0x60460224 */   return 6192;
/* line: 167 */ }