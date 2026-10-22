#include "nsmbudx_prelude.h"

/* ---- forward declarations for functions defined below ---- */
void __fastcall sub_605D4BF4(int a1, _DWORD *a2);

/* ---- forward declarations for functions defined below ---- */
void __fastcall sub_605D4BF4(int a1, _DWORD *a2);

/* ---- forward declarations for functions defined below ---- */
void __fastcall sub_605D4BF4(int a1, _DWORD *a2);

/* ---- forward declarations for functions defined below ---- */
void __fastcall sub_605D4BF4(int a1, _DWORD *a2);

/* ---- forward declarations for functions defined below ---- */
void __fastcall sub_605D4BF4(int a1, _DWORD *a2);

/* ---- forward declarations for functions defined below ---- */
void __fastcall sub_605D4BF4(int a1, _DWORD *a2);

/* ---- forward declarations for functions defined below ---- */
void __fastcall sub_605D4BF4(int a1, _DWORD *a2);
/* line: 0, address: 0x605d4bf4 */ void __fastcall sub_605D4BF4(int a1, _DWORD *a2)
/* line: 1 */ {
/* line: 2 */   float v4; // s0
/* line: 3 */   int v5; // r0
/* line: 4 */   char v6; // r0
/* line: 5 */   char v7; // r1
/* line: 6 */   int v8; // r0
/* line: 7 */   int v9; // r2
/* line: 8 */   int v10; // r2
/* line: 9 */   float v11; // s2
/* line: 10 */   unsigned __int8 v12; // r1
/* line: 11 */   unsigned __int8 v13; // r5
/* line: 12 */   int v14; // r0
/* line: 13 */   int i; // r10
/* line: 14 */   float v16; // s2
/* line: 15 */   float v17; // s0
/* line: 16 */   bool v18; // zf
/* line: 17 */   int v19; // r1
/* line: 18 */   float v20; // s14
/* line: 19 */   unsigned int v21; // r1
/* line: 20 */   float v22; // s4
/* line: 21 */   float v23; // r1
/* line: 22 */   int v24; // r2
/* line: 23 */   float v25; // [sp+Ch] [bp-9Ch] BYREF
/* line: 24 */   float v26; // [sp+10h] [bp-98h]
/* line: 25 */   int v27; // [sp+14h] [bp-94h]
/* line: 26 */   _DWORD v28[2]; // [sp+18h] [bp-90h] BYREF
/* line: 27 */   _DWORD v29[2]; // [sp+20h] [bp-88h] BYREF
/* line: 28 */   _BYTE v30[4]; // [sp+28h] [bp-80h] BYREF
/* line: 29 */   float v31; // [sp+2Ch] [bp-7Ch]
/* line: 30 */   float v32; // [sp+30h] [bp-78h]
/* line: 31 */   int v33; // [sp+34h] [bp-74h]
/* line: 32 */   int v34; // [sp+38h] [bp-70h]
/* line: 33 */   int v35; // [sp+44h] [bp-64h]
/* line: 34 */   float v36; // [sp+50h] [bp-58h] BYREF
/* line: 35 */   float v37; // [sp+54h] [bp-54h]
/* line: 36 */   int v38; // [sp+58h] [bp-50h]
/* line: 37 */   _BYTE v39[4]; // [sp+9Ch] [bp-Ch] BYREF
/* line: 38 */   int v40; // [sp+A0h] [bp-8h]
/* line: 39 */   int v41; // [sp+A4h] [bp-4h]
/* line: 40 */ 
/* line: 41, address: 0x605d4c0c */   if ( *(_BYTE *)(a1 + 752) )
/* line: 42 */   {
/* line: 43, address: 0x605d4c18 */     if ( *(_DWORD *)(a1 + 728) )
/* line: 44 */     {
/* line: 45, address: 0x605d4c24 */       v4 = *(float *)(a1 + 772);
/* line: 46, address: 0x605d4c2c */       v5 = *(_DWORD *)(a1 + 776);
/* line: 47, address: 0x605d4c34 */       v25 = *(float *)(a1 + 768);
/* line: 48, address: 0x605d4c3c */       v26 = v4 + -8.0;
/* line: 49, address: 0x605d4c40 */       v27 = v5;
/* line: 50, address: 0x605d4c50 */       if ( *(_BYTE *)(MEMORY[0xCC6D8C] + 17) )
/* line: 51 */       {
/* line: 52, address: 0x605d4c5c */         v6 = *(_BYTE *)(a1 + 86);
/* line: 53, address: 0x605d4c60 */         v7 = *(_BYTE *)(a1 + 87);
/* line: 54, address: 0x605d4c6c */         v39[0] = 0;
/* line: 55, address: 0x605d4c70 */         v39[1] = 1;
/* line: 56, address: 0x605d4c74 */         v39[2] = v6;
/* line: 57, address: 0x605d4c78 */         v39[3] = v7;
/* line: 58, address: 0x605d4c84 */         v40 = 0;
/* line: 59, address: 0x605d4c88 */         v41 = 0;
/* line: 60, address: 0x605d4c8c */         v8 = TileCheck_ctor(&v36, v39);
/* line: 61, address: 0x605d4c90 */         v33 = 0;
/* line: 62, address: 0x605d4c94 */         v34 = 0;
/* line: 63, address: 0x605d4c9c */         v9 = a2[1];
/* line: 64, address: 0x605d4ca0 */         v29[0] = *a2;
/* line: 65, address: 0x605d4ca4 */         v29[1] = v9;
/* line: 66, address: 0x605d4cac */         v10 = *(_DWORD *)(a1 + 772);
/* line: 67, address: 0x605d4cb0 */         v28[0] = *(_DWORD *)(a1 + 768);
/* line: 68, address: 0x605d4cb8 */         v28[1] = v10;
/* line: 69, address: 0x605d4cd0 */         if ( TileCheck_check(v8, v30, v29, v28, 15) == 1 )
/* line: 70 */         {
/* line: 71, address: 0x605d4cdc */           if ( (v30[0] & 8) != 0 )
/* line: 72 */           {
/* line: 73, address: 0x605d4ec0 */             if ( (v35 & 0xF) != 2 )
/* line: 74, address: 0x605d4ecc */               v26 = v32;
/* line: 75 */           }
/* line: 76, address: 0x605d4ce4 */           else if ( (v30[0] & 4) != 0 )
/* line: 77 */           {
/* line: 78, address: 0x605d4ee0 */             v26 = v32 + -16.0;
/* line: 79 */           }
/* line: 80 */           else
/* line: 81 */           {
/* line: 82, address: 0x605d4ce8 */             v11 = 8.0;
/* line: 83, address: 0x605d4cf4 */             if ( (v30[0] & 1) != 0 )
/* line: 84, address: 0x605d4cf4 */               v11 = -8.0;
/* line: 85, address: 0x605d4cfc */             v25 = v11 + v31;
/* line: 86 */           }
/* line: 87 */         }
/* line: 88 */       }
/* line: 89 */       else
/* line: 90 */       {
/* line: 91, address: 0x605d4e7c */         sub_605D4F08(a1, &v25, &v25, a2);
/* line: 92 */       }
/* line: 93, address: 0x605d4ea4 */       sub_60466B64(MEMORY[0xC9D3E4], &v25, dword_60B05934[*(_DWORD *)(a1 + 728)], *(unsigned __int8 *)(a1 + 86));
/* line: 94 */     }
/* line: 95 */     else
/* line: 96 */     {
/* line: 97, address: 0x605d4d04 */       v12 = *(_BYTE *)(a1 + 84);
/* line: 98, address: 0x605d4d08 */       v13 = v12;
/* line: 99, address: 0x605d4d38 */       if ( v12 <= 3u && (*(_WORD *)(MEMORY[0xCC436C] + 66) & (unsigned __int16)(1 << v12)) != 0 && sub_60788F54() )
/* line: 100 */       {
/* line: 101, address: 0x605d4d44 */         v14 = *(_DWORD *)(a1 + 744);
/* line: 102, address: 0x605d4d4c */         if ( v14 >= 1 )
/* line: 103 */         {
/* line: 104, address: 0x605d4d70 */           for ( i = 0; i < v14; ++i )
/* line: 105 */           {
/* line: 106, address: 0x605d4d84 */             v16 = *(float *)(a1 + 768);
/* line: 107, address: 0x605d4d88 */             v17 = *(float *)(a1 + 772);
/* line: 108, address: 0x605d4d8c */             v18 = v14 == 6;
/* line: 109, address: 0x605d4d90 */             if ( v14 == 6 )
/* line: 110, address: 0x605d4d94 */               v18 = i == 5;
/* line: 111, address: 0x605d4d98 */             if ( !v18 )
/* line: 112 */             {
/* line: 113, address: 0x605d4da0 */               v19 = 858993459;
/* line: 114, address: 0x605d4da8 */               if ( v14 >= 4 )
/* line: 115 */               {
/* line: 116, address: 0x605d4db4 */                 v20 = 16.0;
/* line: 117 */               }
/* line: 118 */               else
/* line: 119 */               {
/* line: 120, address: 0x605d4da8 */                 v19 = 1431655765;
/* line: 121, address: 0x605d4db4 */                 v20 = 8.0;
/* line: 122 */               }
/* line: 123, address: 0x605d4dbc */               v21 = v19 * i + 0x40000000;
/* line: 124, address: 0x605d4de4 */               v22 = (float)(v21 & 0xFFFFFF) * 0.000000059605;
/* line: 125, address: 0x605d4df0 */               v17 = v17
/* line: 126 */                   + (float)(v20
/* line: 127 */                           * (float)(*(float *)(((v21 >> 20) & 0xFF0) + 0xB3A484)
/* line: 128 */                                   + (float)(v22 * *(float *)(((v21 >> 20) & 0xFF0) + 0xB3A488))));
/* line: 129, address: 0x605d4df4 */               v16 = v16
/* line: 130 */                   + (float)(v20
/* line: 131 */                           * (float)(*(float *)(((v21 >> 20) & 0xFF0) + 0xB3A48C)
/* line: 132 */                                   + (float)(v22 * *(float *)(((v21 >> 20) & 0xFF0) + 0xB3A490))));
/* line: 133 */             }
/* line: 134, address: 0x605d4e08 */             v36 = v16;
/* line: 135, address: 0x605d4e10 */             v37 = v17;
/* line: 136, address: 0x605d4e18 */             sub_60584B74(MEMORY[0xCAF15C], &v36, 0, (char)v13, 0, 0);
/* line: 137, address: 0x605d4e1c */             v14 = *(_DWORD *)(a1 + 744);
/* line: 138 */           }
/* line: 139 */         }
/* line: 140 */       }
/* line: 141 */       else
/* line: 142 */       {
/* line: 143, address: 0x605d4e38 */         v23 = *(float *)(a1 + 772);
/* line: 144, address: 0x605d4e38 */         v24 = *(_DWORD *)(a1 + 776);
/* line: 145, address: 0x605d4e3c */         v36 = *(float *)(a1 + 768);
/* line: 146, address: 0x605d4e3c */         v37 = v23;
/* line: 147, address: 0x605d4e3c */         v38 = v24;
/* line: 148, address: 0x605d4e64 */         sub_605839E8(MEMORY[0xCAF15C], &v36, *(_DWORD *)(a1 + 744), 2, *(_BYTE *)(a1 + 86), 0);
/* line: 149 */       }
/* line: 150 */     }
/* line: 151 */   }
/* line: 152 */ }