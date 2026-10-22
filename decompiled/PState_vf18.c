#include "nsmbudx_prelude.h"
/* line: 0, address: 0x607a61f0 */ int __fastcall sub_607A61F0(int a1)
/* line: 1 */ {
/* line: 2 */   float v2; // s4
/* line: 3 */   float v3; // s0
/* line: 4 */   float v4; // s2
/* line: 5 */   _BOOL4 v5; // r1
/* line: 6 */   _BOOL4 v6; // r0
/* line: 7 */   float v7; // s0
/* line: 8 */   float v8; // s4
/* line: 9 */   float v9; // s2
/* line: 10 */   _BOOL4 v10; // r2
/* line: 11 */   _BOOL4 v11; // r1
/* line: 12 */   float v12; // s4
/* line: 13 */   float v13; // s0
/* line: 14 */   float v14; // s2
/* line: 15 */   _BOOL4 v15; // r1
/* line: 16 */   _BOOL4 v16; // r0
/* line: 17 */   float v17; // s4
/* line: 18 */   float v18; // s0
/* line: 19 */   float v19; // s2
/* line: 20 */   _BOOL4 v20; // r1
/* line: 21 */   _BOOL4 v21; // r0
/* line: 22 */   int result; // r0
/* line: 23 */   int v23; // r0
/* line: 24 */   _DWORD *v24; // r0
/* line: 25 */   int v25; // t1
/* line: 26 */   unsigned int v26; // [sp+4h] [bp-4h] BYREF
/* line: 27 */ 
/* line: 28, address: 0x607a620c */   v26 = 0x80000000;
/* line: 29, address: 0x607a6218 */   sub_60773F88(a1, &v26);
/* line: 30, address: 0x607a621c */   v2 = *(float *)(a1 + 656);
/* line: 31, address: 0x607a6220 */   v3 = 2.0;
/* line: 32, address: 0x607a622c */   if ( v2 >= 2.0 )
/* line: 33 */   {
/* line: 34, address: 0x607a625c */     if ( v2 <= 2.0 )
/* line: 35, address: 0x607a625c */       goto LABEL_10;
/* line: 36, address: 0x607a626c */     v4 = v2 + -0.2;
/* line: 37, address: 0x607a627c */     v5 = v2 < (float)(v2 + -0.2);
/* line: 38, address: 0x607a6284 */     v6 = (float)(v2 + -0.2) <= 2.0;
/* line: 39 */   }
/* line: 40 */   else
/* line: 41 */   {
/* line: 42, address: 0x607a623c */     v4 = v2 + 0.2;
/* line: 43, address: 0x607a624c */     v5 = (float)(v2 + 0.2) < v2;
/* line: 44, address: 0x607a6254 */     v6 = (float)(v2 + 0.2) >= 2.0;
/* line: 45 */   }
/* line: 46, address: 0x607a628c */   if ( v6 )
/* line: 47, address: 0x607a628c */     v4 = 2.0;
/* line: 48, address: 0x607a6294 */   if ( !v5 )
/* line: 49, address: 0x607a6294 */     v3 = v4;
/* line: 50, address: 0x607a6298 */   *(float *)(a1 + 656) = v3;
/* line: 51 */ LABEL_10:
/* line: 52, address: 0x607a629c */   v7 = 1.0;
/* line: 53, address: 0x607a62a8 */   v8 = *(float *)(a1 + 9884);
/* line: 54, address: 0x607a62b4 */   if ( v8 >= 1.0 )
/* line: 55 */   {
/* line: 56, address: 0x607a62e4 */     if ( v8 <= 1.0 )
/* line: 57, address: 0x607a62e4 */       goto LABEL_19;
/* line: 58, address: 0x607a62f4 */     v9 = v8 + -0.06;
/* line: 59, address: 0x607a6304 */     v10 = v8 < (float)(v8 + -0.06);
/* line: 60, address: 0x607a630c */     v11 = (float)(v8 + -0.06) <= 1.0;
/* line: 61 */   }
/* line: 62 */   else
/* line: 63 */   {
/* line: 64, address: 0x607a62c4 */     v9 = v8 + 0.06;
/* line: 65, address: 0x607a62d4 */     v10 = (float)(v8 + 0.06) < v8;
/* line: 66, address: 0x607a62dc */     v11 = (float)(v8 + 0.06) >= 1.0;
/* line: 67 */   }
/* line: 68, address: 0x607a6314 */   if ( v11 )
/* line: 69, address: 0x607a6314 */     v9 = 1.0;
/* line: 70, address: 0x607a631c */   if ( !v10 )
/* line: 71, address: 0x607a631c */     v7 = v9;
/* line: 72, address: 0x607a6320 */   *(float *)(a1 + 9884) = v7;
/* line: 73 */ LABEL_19:
/* line: 74, address: 0x607a6328 */   if ( *(_DWORD *)(a1 + 9888) )
/* line: 75, address: 0x607a6330 */     goto LABEL_29;
/* line: 76, address: 0x607a6338 */   v12 = *(float *)(a1 + 108);
/* line: 77, address: 0x607a6340 */   v13 = *(float *)(a1 + 9824);
/* line: 78, address: 0x607a634c */   if ( v12 >= v13 )
/* line: 79 */   {
/* line: 80, address: 0x607a637c */     if ( v12 <= v13 )
/* line: 81, address: 0x607a637c */       goto LABEL_29;
/* line: 82, address: 0x607a638c */     v14 = v12 + -0.4;
/* line: 83, address: 0x607a639c */     v15 = v12 < (float)(v12 + -0.4);
/* line: 84, address: 0x607a63a4 */     v16 = (float)(v12 + -0.4) <= v13;
/* line: 85 */   }
/* line: 86 */   else
/* line: 87 */   {
/* line: 88, address: 0x607a635c */     v14 = v12 + 0.4;
/* line: 89, address: 0x607a636c */     v15 = (float)(v12 + 0.4) < v12;
/* line: 90, address: 0x607a6374 */     v16 = (float)(v12 + 0.4) >= v13;
/* line: 91 */   }
/* line: 92, address: 0x607a63ac */   if ( v16 )
/* line: 93, address: 0x607a63ac */     v14 = *(float *)(a1 + 9824);
/* line: 94, address: 0x607a63b4 */   if ( !v15 )
/* line: 95, address: 0x607a63b4 */     v13 = v14;
/* line: 96, address: 0x607a63b8 */   *(float *)(a1 + 108) = v13;
/* line: 97 */ LABEL_29:
/* line: 98, address: 0x607a63bc */   v17 = *(float *)(a1 + 112);
/* line: 99, address: 0x607a63c8 */   v18 = *(float *)(a1 + 9828);
/* line: 100, address: 0x607a63d4 */   if ( v17 >= v18 )
/* line: 101 */   {
/* line: 102, address: 0x607a6400 */     if ( v17 <= v18 )
/* line: 103, address: 0x607a6400 */       goto LABEL_38;
/* line: 104, address: 0x607a6410 */     v19 = v17 + -0.5;
/* line: 105, address: 0x607a6420 */     v20 = v17 < (float)(v17 + -0.5);
/* line: 106, address: 0x607a6428 */     v21 = (float)(v17 + -0.5) <= v18;
/* line: 107 */   }
/* line: 108 */   else
/* line: 109 */   {
/* line: 110, address: 0x607a63d8 */     v19 = v17 + 0.5;
/* line: 111, address: 0x607a63f0 */     v20 = (float)(v17 + 0.5) < v17;
/* line: 112, address: 0x607a63f8 */     v21 = (float)(v17 + 0.5) >= v18;
/* line: 113 */   }
/* line: 114, address: 0x607a6430 */   if ( v21 )
/* line: 115, address: 0x607a6430 */     v19 = *(float *)(a1 + 9828);
/* line: 116, address: 0x607a6438 */   if ( !v20 )
/* line: 117, address: 0x607a6438 */     v18 = v19;
/* line: 118, address: 0x607a643c */   *(float *)(a1 + 112) = v18;
/* line: 119 */ LABEL_38:
/* line: 120, address: 0x607a6440 */   result = *(_DWORD *)(a1 + 9712);
/* line: 121, address: 0x607a6450 */   if ( !result )
/* line: 122 */   {
/* line: 123, address: 0x607a6458 */     if ( *(_BYTE *)(a1 + 9892) )
/* line: 124 */     {
/* line: 125, address: 0x607a6474 */       *(_BYTE *)(MEMORY[0xC99D88] + 31) = 0;
/* line: 126, address: 0x607a6480 */       *(_DWORD *)(a1 + 9704) = 4;
/* line: 127, address: 0x607a6490 */       v23 = sub_6077AFCC(MEMORY[0xCBFBC0]);
/* line: 128, address: 0x607a6498 */       if ( v23 )
/* line: 129 */       {
/* line: 130, address: 0x607a64a0 */         v25 = *(_DWORD *)(v23 + 6304);
/* line: 131, address: 0x607a64a0 */         v24 = (_DWORD *)(v23 + 6304);
/* line: 132, address: 0x607a64ac */         if ( (unsigned int)(v25 - 1) <= 1 )
/* line: 133, address: 0x607a64b0 */           *v24 = 3;
/* line: 134 */       }
/* line: 135 */     }
/* line: 136 */     else
/* line: 137 */     {
/* line: 138, address: 0x607a64c0 */       *(_DWORD *)(a1 + 9704) = 3;
/* line: 139 */     }
/* line: 140, address: 0x607a64d0 */     (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1216))(a1);
/* line: 141, address: 0x607a64d8 */     *(_DWORD *)(a1 + 656) = 0;
/* line: 142, address: 0x607a64e4 */     *(_DWORD *)(a1 + 1224) |= 0x100000u;
/* line: 143, address: 0x607a64ec */     *(_DWORD *)(a1 + 9712) = 20;
/* line: 144, address: 0x607a64e8 */     return 20;
/* line: 145 */   }
/* line: 146, address: 0x607a64f8 */   return result;
/* line: 147 */ }