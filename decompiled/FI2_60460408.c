#include "nsmbudx_prelude.h"

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60460408(int a1, int a2, int a3, int a4);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60460408(int a1, int a2, int a3, int a4);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60460408(int a1, int a2, int a3, int a4);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60460408(int a1, int a2, int a3, int a4);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60460408(int a1, int a2, int a3, int a4);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60460408(int a1, int a2, int a3, int a4);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60460408(int a1, int a2, int a3, int a4);
/* line: 0, address: 0x60460408 */ int __fastcall sub_60460408(int a1, int a2, int a3, int a4)
/* line: 1 */ {
/* line: 2 */   float32x2_t v4; // d0
/* line: 3 */   float32x2_t v5; // d8
/* line: 4 */   int v7; // r3
/* line: 5 */   int v8; // r3
/* line: 6 */   unsigned __int32 v9; // s0
/* line: 7 */   _DWORD *v10; // r0
/* line: 8 */   int v11; // r1
/* line: 9 */   int v12; // r1
/* line: 10 */   unsigned int v13; // r0
/* line: 11 */   float v14; // s2
/* line: 12 */   float *v15; // r0
/* line: 13 */   float v16; // s20
/* line: 14 */   float v17; // s22
/* line: 15 */   float v18; // s18
/* line: 16 */   float v19; // s24
/* line: 17 */   float v20; // s28
/* line: 18 */   float v21; // s26
/* line: 19 */   int v22; // r2
/* line: 20 */   int v23; // r2
/* line: 21 */   int v24; // r1
/* line: 22 */   int v25; // r1
/* line: 23 */   char v26; // r5
/* line: 24 */   int v27; // r8
/* line: 25 */   _BYTE *v28; // r7
/* line: 26 */   int v29; // s0
/* line: 27 */   float *v30; // r1
/* line: 28 */   float v31; // s0
/* line: 29 */   int v32; // r6
/* line: 30 */   int v33; // r0
/* line: 31 */   int v34; // r8
/* line: 32 */   int v35; // r0
/* line: 33 */   int v36; // r0
/* line: 34 */   float v37; // s0
/* line: 35 */   int v38; // r6
/* line: 36 */   int v39; // r1
/* line: 37 */   int v40; // r7
/* line: 38 */   int v41; // r0
/* line: 39 */   float v43; // s0
/* line: 40 */   float v44; // s2
/* line: 41 */   float v45; // s8
/* line: 42 */   float v46; // s0
/* line: 43 */   float v47; // s4
/* line: 44 */   float v48; // s2
/* line: 45 */   float v49; // s10
/* line: 46 */   float v50; // s6
/* line: 47 */   float v51; // s0
/* line: 48 */   int v52; // [sp+4h] [bp-14h] BYREF
/* line: 49 */   _DWORD v53[4]; // [sp+8h] [bp-10h] BYREF
/* line: 50 */ 
/* line: 51, address: 0x6046042c */   v53[0] = 0;
/* line: 52, address: 0x60460430 */   v52 = 0x4000000;
/* line: 53, address: 0x60460434 */   moveValueTo(a1 + 156, v53, &v52, a4);
/* line: 54, address: 0x60460444 */   v53[0] = 0;
/* line: 55, address: 0x60460448 */   v52 = 0x4000000;
/* line: 56, address: 0x6046044c */   moveValueTo(a1 + 160, v53, &v52, v7);
/* line: 57, address: 0x6046045c */   v53[0] = 0;
/* line: 58, address: 0x60460460 */   v52 = 0x4000000;
/* line: 59, address: 0x60460464 */   moveValueTo(a1 + 164, v53, &v52, v8);
/* line: 60, address: 0x60460468 */   v4.n64_u32[0] = *(_DWORD *)(a1 + 144);
/* line: 61, address: 0x6046046c */   v5.n64_u32[0] = 1.0;
/* line: 62, address: 0x60460478 */   if ( v4.n64_f32[0] < 1.0 )
/* line: 63 */   {
/* line: 64, address: 0x60460480 */     v4.n64_f32[0] = v4.n64_f32[0] + 0.1;
/* line: 65, address: 0x60460484 */     v9 = vmin_f32(v4, v5).n64_u32[0];
/* line: 66, address: 0x60460488 */     *(_DWORD *)(a1 + 144) = v9;
/* line: 67, address: 0x6046048c */     *(_DWORD *)(a1 + 148) = v9;
/* line: 68, address: 0x60460490 */     *(_DWORD *)(a1 + 152) = v9;
/* line: 69 */   }
/* line: 70, address: 0x6046049c */   v10 = (_DWORD *)(a1 + 6680);
/* line: 71, address: 0x6046049c */   v11 = *(_DWORD *)(a1 + 6680);
/* line: 72, address: 0x604604a4 */   if ( v11 )
/* line: 73 */   {
/* line: 74, address: 0x604604a8 */     v12 = v11 - 1;
/* line: 75, address: 0x604604b0 */     *v10 = v12;
/* line: 76, address: 0x604604b4 */     if ( v12 == 1 )
/* line: 77 */     {
/* line: 78, address: 0x604604c0 */       *(_DWORD *)(a1 + 116) = 1156956160;
/* line: 79, address: 0x604604c8 */       *v10 = 0;
/* line: 80 */     }
/* line: 81 */   }
/* line: 82, address: 0x604604d0 */   CollisionActor__handleGravity((CollisionActor *)a1);
/* line: 83, address: 0x604604d8 */   v13 = sub_6014C4A4(a1 + 648);
/* line: 84, address: 0x60460508 */   v14 = (float)(v13 & 0xFFFFFF);
/* line: 85, address: 0x6046050c */   v15 = (float *)(((v13 >> 20) & 0xFF0) + 11773060);
/* line: 86, address: 0x60460528 */   v16 = *(float *)(a1 + 120);
/* line: 87, address: 0x60460530 */   v17 = v15[2] + (float)((float)(v14 * 0.000000059605) * v15[3]);
/* line: 88, address: 0x60460534 */   v18 = *v15 + (float)(v15[1] * (float)(v14 * 0.000000059605));
/* line: 89, address: 0x60460540 */   if ( *(_BYTE *)(a1 + 6054) || *(_BYTE *)(a1 + 6053) )
/* line: 90, address: 0x60460550 */     v16 = v16 * 0.5;
/* line: 91, address: 0x6046055c */   v19 = *(float *)(a1 + 124);
/* line: 92, address: 0x60460568 */   v20 = *(float *)(a1 + 6024);
/* line: 93, address: 0x6046056c */   v21 = *(float *)(a1 + 6028);
/* line: 94, address: 0x60460574 */   sub_600037A0(a1);
/* line: 95, address: 0x604605a4 */   *(float *)(a1 + 108) = *(float *)(a1 + 108) + (float)((float)(v20 + (float)(v17 * v16)) + *(float *)(a1 + 6000));
/* line: 96, address: 0x604605b0 */   *(float *)(a1 + 112) = (float)((float)(v19 + (float)(v18 * v16)) + v21) + *(float *)(a1 + 112);
/* line: 97, address: 0x604605b4 */   if ( *(_BYTE *)(a1 + 6197) )
/* line: 98 */   {
/* line: 99, address: 0x604605c8 */     v22 = *(_DWORD *)(a1 + 6204);
/* line: 100, address: 0x604605dc */     if ( !v22 || (v23 = v22 - 1, (*(_DWORD *)(a1 + 6204) = v23) == 0) )
/* line: 101, address: 0x604605e4 */       *(_BYTE *)(a1 + 6197) = 0;
/* line: 102 */   }
/* line: 103, address: 0x604605f4 */   if ( *(_DWORD *)(a1 + 6224) != 2 )
/* line: 104 */   {
/* line: 105, address: 0x60460600 */     v24 = *(_DWORD *)(a1 + 6228);
/* line: 106, address: 0x60460614 */     if ( !v24 || (v25 = v24 - 1, (*(_DWORD *)(a1 + 6228) = v25) == 0) )
/* line: 107, address: 0x60460638 */       EffectWrapper_update(a1 + 6684, 90, a1 + 6124, 0, a1 + 144);
/* line: 108 */   }
/* line: 109, address: 0x60460658 */   if ( *(_BYTE *)(a1 + 6255) && *(float *)(a1 + 124) < 0.0 )
/* line: 110, address: 0x60460660 */     *(_DWORD *)(a1 + 124) = 1082130432;
/* line: 111, address: 0x6046066c */   v26 = CollisionActor__sub_600034C8((CollisionActor *)a1);
/* line: 112, address: 0x60460674 */   if ( (v26 & 1) != 0 )
/* line: 113 */   {
/* line: 114, address: 0x6046069c */     *(_DWORD *)(a1 + 120) = *(_DWORD *)(4 * *(_DWORD *)(a1 + 80) + 0xB025FC);
/* line: 115, address: 0x604606a4 */     v28 = (_BYTE *)(a1 + 6196);
/* line: 116, address: 0x60460788 */     if ( *(_BYTE *)(a1 + 6196) || (v27 = 1, !*(_DWORD *)(a1 + 6192)) )
/* line: 117 */     {
/* line: 118, address: 0x604606b8 */       if ( *(_BYTE *)(a1 + 86) == 1 )
/* line: 119 */       {
/* line: 120, address: 0x604606bc */         v29 = -987594752;
/* line: 121 */       }
/* line: 122 */       else
/* line: 123 */       {
/* line: 124, address: 0x604606cc */         v30 = &flt_60460978;
/* line: 125, address: 0x604606d4 */         if ( *(_DWORD *)(a1 + 6168) == 5 )
/* line: 126, address: 0x604606d4 */           v30 = &flt_6046097C;
/* line: 127, address: 0x604606d8 */         v29 = *(_DWORD *)v30;
/* line: 128 */       }
/* line: 129, address: 0x604606e0 */       *(_DWORD *)(a1 + 116) = v29;
/* line: 130, address: 0x604606e4 */       sub_60462A58(a1);
/* line: 131, address: 0x604606f4 */       v31 = -1.0;
/* line: 132, address: 0x604606f8 */       v32 = a1 + 6160;
/* line: 133, address: 0x60460704 */       if ( *(_DWORD *)(a1 + 80) != 1 )
/* line: 134, address: 0x60460704 */         v31 = 1.0;
/* line: 135, address: 0x60460708 */       v33 = **(_DWORD **)(*(_DWORD *)(a1 + 6160) + 12);
/* line: 136, address: 0x6046070c */       v34 = *(_DWORD *)(v33 + 20);
/* line: 137, address: 0x60460710 */       *(float *)(v33 + 24) = v31;
/* line: 138, address: 0x60460724 */       sub_6041838C(**(_DWORD **)(*(_DWORD *)v32 + 12) + 4);
/* line: 139, address: 0x60460730 */       v35 = **(_DWORD **)(*(_DWORD *)v32 + 12);
/* line: 140, address: 0x60460734 */       *(_DWORD *)(v35 + 20) = v34;
/* line: 141, address: 0x60460740 */       *(_DWORD *)(v35 + 28) |= 2u;
/* line: 142, address: 0x60460748 */       *(_DWORD *)(a1 + 156) = 0;
/* line: 143, address: 0x6046074c */       *(_DWORD *)(a1 + 160) = 0;
/* line: 144, address: 0x60460750 */       *(_DWORD *)(a1 + 164) = 0;
/* line: 145, address: 0x60460760 */       (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 196))(a1);
/* line: 146, address: 0x60460768 */       v27 = 1;
/* line: 147, address: 0x60460770 */       if ( (*(_BYTE *)(a1 + 2872) & 8) != 0 )
/* line: 148, address: 0x60460778 */         *(_DWORD *)(a1 + 124) = 1082130432;
/* line: 149 */     }
/* line: 150 */   }
/* line: 151 */   else
/* line: 152 */   {
/* line: 153, address: 0x6046067c */     v27 = 0;
/* line: 154, address: 0x60460680 */     v28 = (_BYTE *)(a1 + 6196);
/* line: 155 */   }
/* line: 156, address: 0x6046079c */   *v28 = 0;
/* line: 157, address: 0x604607a0 */   if ( (v26 & 4) != 0 )
/* line: 158 */   {
/* line: 159, address: 0x604607a4 */     v36 = *(unsigned __int8 *)(a1 + 80);
/* line: 160, address: 0x604607b4 */     *(_DWORD *)(a1 + 80) = v36 ^ 1;
/* line: 161, address: 0x604607c4 */     *(float *)(a1 + 120) = -*(float *)(a1 + 120);
/* line: 162, address: 0x604607c8 */     v37 = -1.0;
/* line: 163, address: 0x604607cc */     v38 = a1 + 6160;
/* line: 164, address: 0x604607d0 */     if ( v36 )
/* line: 165, address: 0x604607d0 */       v37 = 1.0;
/* line: 166, address: 0x604607d8 */     v39 = **(_DWORD **)(*(_DWORD *)(a1 + 6160) + 12);
/* line: 167, address: 0x604607dc */     v40 = *(_DWORD *)(v39 + 20);
/* line: 168, address: 0x604607e0 */     *(float *)(v39 + 24) = v37;
/* line: 169, address: 0x604607f4 */     sub_6041838C(**(_DWORD **)(*(_DWORD *)v38 + 12) + 4);
/* line: 170, address: 0x60460800 */     v41 = **(_DWORD **)(*(_DWORD *)v38 + 12);
/* line: 171, address: 0x60460804 */     *(_DWORD *)(v41 + 20) = v40;
/* line: 172, address: 0x60460810 */     *(_DWORD *)(v41 + 28) |= 2u;
/* line: 173 */   }
/* line: 174, address: 0x60460818 */   if ( (v26 & 2) != 0 )
/* line: 175, address: 0x60460820 */     *(_DWORD *)(a1 + 124) = -1082130432;
/* line: 176, address: 0x60460828 */   sub_60462370(a1);
/* line: 177, address: 0x60460838 */   if ( sub_60003AE0(a1) == 1 )
/* line: 178, address: 0x60460848 */     return sub_60462798(a1, 1, 1);
/* line: 179, address: 0x60460878 */   if ( *(_DWORD *)(a1 + 6180) == 13 && *(float *)(a1 + 124) <= 0.0 )
/* line: 180 */   {
/* line: 181, address: 0x60460888 */     (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 244))(a1);
/* line: 182, address: 0x60460890 */     *(_DWORD *)(a1 + 6180) = 1;
/* line: 183 */   }
/* line: 184, address: 0x604608a0 */   (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 224))(a1);
/* line: 185, address: 0x604608ac */   if ( (*(_BYTE *)(a1 + 2872) & 1) != 0 )
/* line: 186 */   {
/* line: 187, address: 0x604608b0 */     v43 = *(float *)(a1 + 108);
/* line: 188, address: 0x604608bc */     v44 = *(float *)(a1 + 112);
/* line: 189, address: 0x604608cc */     v45 = v43 + 16.0;
/* line: 190, address: 0x604608d0 */     v46 = v43 + -16.0;
/* line: 191, address: 0x604608d4 */     v47 = v44 + 16.0;
/* line: 192, address: 0x604608d8 */     v48 = v44 + -16.0;
/* line: 193, address: 0x604608e4 */     if ( v45 <= v46 )
/* line: 194, address: 0x604608e4 */       v49 = v45;
/* line: 195 */     else
/* line: 196, address: 0x604608e4 */       v49 = v46;
/* line: 197, address: 0x604608e8 */     if ( v45 > v46 )
/* line: 198, address: 0x604608e8 */       v46 = v45;
/* line: 199, address: 0x604608f0 */     *(float *)v53 = v49;
/* line: 200, address: 0x604608f8 */     *(float *)&v53[2] = v46;
/* line: 201, address: 0x604608fc */     if ( v47 <= v48 )
/* line: 202, address: 0x604608fc */       v50 = v47;
/* line: 203 */     else
/* line: 204, address: 0x604608fc */       v50 = v48;
/* line: 205, address: 0x60460900 */     if ( v47 <= v48 )
/* line: 206, address: 0x60460900 */       v51 = v48;
/* line: 207 */     else
/* line: 208, address: 0x60460900 */       v51 = v47;
/* line: 209, address: 0x60460904 */     *(float *)&v53[1] = v50;
/* line: 210, address: 0x60460908 */     *(float *)&v53[3] = v51;
/* line: 211, address: 0x60460924 */     if ( !sub_60007208(v53, &unk_60B0266C) && *(_BYTE *)(MEMORY[0xC9CF0C] + 1361) )
/* line: 212 */     {
/* line: 213, address: 0x60460930 */       if ( *(_BYTE *)(a1 + 6054) )
/* line: 214, address: 0x60460948 */         (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 248))(a1);
/* line: 215 */       else
/* line: 216, address: 0x60460954 */         *(_DWORD *)(a1 + 124) = 0x40000000;
/* line: 217 */     }
/* line: 218 */   }
/* line: 219, address: 0x6046095c */   *(_DWORD *)(a1 + 6192) = v27;
/* line: 220, address: 0x60460968 */   return 6192;
/* line: 221 */ }