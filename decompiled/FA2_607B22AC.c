#include "nsmbudx_prelude.h"

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607B22AC(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607B22AC(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607B22AC(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607B22AC(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607B22AC(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607B22AC(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607B22AC(int a1);
/* line: 0, address: 0x607b22ac */ int __fastcall sub_607B22AC(int a1)
/* line: 1 */ {
/* line: 2 */   float v2; // s16
/* line: 3 */   int result; // r0
/* line: 4 */   int v4; // r1
/* line: 5 */   int v5; // r1
/* line: 6 */   int v6; // r2
/* line: 7 */   int v7; // r6
/* line: 8 */   int v8; // r0
/* line: 9 */   float v9; // s0
/* line: 10 */   float v10; // s2
/* line: 11 */   float v11; // s0
/* line: 12 */   float v12; // s0
/* line: 13 */   _DWORD *v13; // r0
/* line: 14 */   _DWORD *v14; // r6
/* line: 15 */   int v15; // r0
/* line: 16 */   int v16; // r1
/* line: 17 */   _DWORD v17[6]; // [sp+0h] [bp-28h] BYREF
/* line: 18 */   __int16 v18; // [sp+18h] [bp-10h]
/* line: 19 */ 
/* line: 20, address: 0x607b22d0 */   *(_DWORD *)(a1 + 1212) |= 0x20000u;
/* line: 21, address: 0x607b22d8 */   v17[3] = 0;
/* line: 22, address: 0x607b22dc */   v17[4] = 0;
/* line: 23, address: 0x607b22ec */   if ( sub_601559B8(a1 + 1328, a1 + 108, v17) == 1 )
/* line: 24 */   {
/* line: 25, address: 0x607b22f0 */     v2 = *(float *)(a1 + 112);
/* line: 26, address: 0x607b22f8 */     sub_6079B208(a1);
/* line: 27, address: 0x607b2314 */     if ( *(float *)&v17[2] > (float)(v2 - 64.0) && v18 != 0x14 )
/* line: 28 */     {
/* line: 29, address: 0x607b2378 */       *(float *)(a1 + 112) = v2 - 64.0;
/* line: 30, address: 0x607b2380 */       *(_DWORD *)(a1 + 11480) = 10;
/* line: 31, address: 0x607b2394 */       return Player_changeState(a1, 13388732, 0);
/* line: 32 */     }
/* line: 33 */   }
/* line: 34, address: 0x607b2320 */   result = sub_607B29BC(a1);
/* line: 35, address: 0x607b2328 */   if ( !result )
/* line: 36 */   {
/* line: 37, address: 0x607b2330 */     result = sub_607C20E8(a1);
/* line: 38, address: 0x607b2338 */     if ( !result )
/* line: 39 */     {
/* line: 40, address: 0x607b234c */       if ( (*(_BYTE *)(a1 + 6900) & 1) == 0 )
/* line: 41 */       {
/* line: 42, address: 0x607b2360 */         sub_607948E8(a1 + 11356, 66);
/* line: 43, address: 0x607b2364 */         result = 9940;
/* line: 44, address: 0x607b2368 */         v4 = 4;
/* line: 45 */ LABEL_35:
/* line: 46, address: 0x607b2628 */         *(_DWORD *)(a1 + 9940) = v4;
/* line: 47, address: 0x607b2628 */         return result;
/* line: 48 */       }
/* line: 49, address: 0x607b25d8 */       if ( *(_DWORD *)(a1 + 12884) == 1 && !*(_DWORD *)(a1 + 12880) && *(_BYTE *)(a1 + 12892) )
/* line: 50 */       {
/* line: 51, address: 0x607b25e8 */         sub_6079EA38(a1);
/* line: 52, address: 0x607b25f8 */         *(_DWORD *)(a1 + 160) = 0x80000000;
/* line: 53, address: 0x607b2600 */         *(_DWORD *)(a1 + 88) = 0;
/* line: 54, address: 0x607b260c */         sub_607948E8(a1 + 11356, 72);
/* line: 55, address: 0x607b261c */         sub_60773630(a1, 32, 0);
/* line: 56, address: 0x607b2620 */         result = 9940;
/* line: 57, address: 0x607b2624 */         v4 = 2;
/* line: 58, address: 0x607b2624 */         goto LABEL_35;
/* line: 59 */       }
/* line: 60, address: 0x607b23cc */       if ( sub_607868D4(a1 + 688, v17) == 1 )
/* line: 61 */       {
/* line: 62, address: 0x607b23e0 */         v7 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1204))(a1);
/* line: 63, address: 0x607b23e8 */         v8 = sub_607868A0(a1 + 688);
/* line: 64, address: 0x607b23f0 */         v6 = v17[0];
/* line: 65, address: 0x607b23f4 */         v9 = 1.3;
/* line: 66, address: 0x607b2410 */         if ( v8 )
/* line: 67 */         {
/* line: 68, address: 0x607b2414 */           v10 = 1.0;
/* line: 69 */         }
/* line: 70 */         else
/* line: 71 */         {
/* line: 72, address: 0x607b2410 */           v9 = 1.05;
/* line: 73, address: 0x607b2414 */           v10 = 0.8;
/* line: 74 */         }
/* line: 75, address: 0x607b241c */         v5 = 4 * v17[0] + 11577496;
/* line: 76, address: 0x607b2420 */         if ( !v7 )
/* line: 77, address: 0x607b2420 */           v9 = v10;
/* line: 78, address: 0x607b242c */         v11 = (float)(v9 * *(float *)(4 * v17[0] + 0xB0A898)) * 1.2;
/* line: 79 */       }
/* line: 80 */       else
/* line: 81 */       {
/* line: 82, address: 0x607b2434 */         v11 = 0.0;
/* line: 83 */       }
/* line: 84, address: 0x607b243c */       *(float *)(a1 + 92) = v11;
/* line: 85, address: 0x607b2440 */       sub_60772240(a1, v5, v6);
/* line: 86, address: 0x607b2444 */       v12 = *(float *)(a1 + 92);
/* line: 87, address: 0x607b244c */       *(float *)(a1 + 88) = v12;
/* line: 88, address: 0x607b2454 */       if ( v12 == 0.0 )
/* line: 89 */       {
/* line: 90, address: 0x607b2514 */         v15 = *(_DWORD *)(a1 + 11360);
/* line: 91, address: 0x607b2518 */         v16 = *(_DWORD *)(v15 + 28);
/* line: 92, address: 0x607b253c */         if ( v16 != 66 && (v16 != 72 || sub_60793CA8(v15) == 1) )
/* line: 93, address: 0x607b254c */           sub_607948E8(a1 + 11356, 66);
/* line: 94 */       }
/* line: 95 */       else
/* line: 96 */       {
/* line: 97, address: 0x607b249c */         v14 = (_DWORD *)(a1 + 11360);
/* line: 98, address: 0x607b249c */         v13 = *(_DWORD **)(a1 + 11360);
/* line: 99, address: 0x607b24b8 */         if ( v13[7] != arr_dword_60AF2280[*(_DWORD *)(a1 + 80)] )
/* line: 100 */         {
/* line: 101, address: 0x607b24d0 */           (*(void (__fastcall **)(_DWORD *))(*v13 + 84))(v13);
/* line: 102, address: 0x607b24d4 */           v13 = (_DWORD *)*v14;
/* line: 103 */         }
/* line: 104, address: 0x607b24dc */         sub_60793088(v13);
/* line: 105, address: 0x607b24f0 */         if ( sub_60793DA0(*v14) == 1 )
/* line: 106, address: 0x607b2508 */           sub_607734E8((unsigned __int8 *)a1, (int)"SE_PLY_HANG_MOVE", 0, 0);
/* line: 107 */       }
/* line: 108, address: 0x607b2550 */       result = *(unsigned __int8 *)(a1 + 6900);
/* line: 109, address: 0x607b2558 */       if ( (result & 2) == 0 )
/* line: 110 */       {
/* line: 111, address: 0x607b2590 */         if ( sub_60786738(a1 + 688)
/* line: 112 */           || (result = sub_607868D4(a1 + 688, v17), result == 1) && (result = sub_60762E88(a1, v17[0]), result == 1) )
/* line: 113 */         {
/* line: 114, address: 0x607b2598 */           sub_6079EA38(a1);
/* line: 115, address: 0x607b25a8 */           *(_DWORD *)(a1 + 88) = 0;
/* line: 116, address: 0x607b25b4 */           sub_607948E8(a1 + 11356, 65);
/* line: 117, address: 0x607b25c4 */           sub_60773630(a1, 33, 0);
/* line: 118, address: 0x607b25c8 */           result = 9940;
/* line: 119, address: 0x607b25cc */           v4 = 5;
/* line: 120, address: 0x607b25d0 */           goto LABEL_35;
/* line: 121 */         }
/* line: 122 */       }
/* line: 123 */     }
/* line: 124 */   }
/* line: 125, address: 0x607b2634 */   return result;
/* line: 126 */ }