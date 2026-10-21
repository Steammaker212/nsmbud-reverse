/* line: 0, address: 0x607aaba0 */ void __fastcall sub_607AABA0(int a1, int a2)
/* line: 1 */ {
/* line: 2 */   int v4; // r0
/* line: 3 */   unsigned int v5; // r0
/* line: 4 */   int v6; // r2
/* line: 5 */   unsigned int v7; // r6
/* line: 6 */   int v8; // r0
/* line: 7 */   int v9; // r3
/* line: 8 */   int v10; // r0
/* line: 9 */   int v11; // r0
/* line: 10 */   int v12; // r3
/* line: 11 */   int v13; // r0
/* line: 12 */   float v14; // s18
/* line: 13 */   float v15; // s16
/* line: 14 */   float v16; // s20
/* line: 15 */   int v17; // r0
/* line: 16 */   int v18; // r0
/* line: 17 */   _DWORD v19[2]; // [sp+4h] [bp-74h] BYREF
/* line: 18 */   float v20[2]; // [sp+Ch] [bp-6Ch] BYREF
/* line: 19 */   float v21; // [sp+14h] [bp-64h]
/* line: 20 */   float v22[3]; // [sp+18h] [bp-60h] BYREF
/* line: 21 */   float v23; // [sp+24h] [bp-54h]
/* line: 22 */   float v24; // [sp+28h] [bp-50h]
/* line: 23 */   float v25; // [sp+2Ch] [bp-4Ch]
/* line: 24 */   float v26; // [sp+30h] [bp-48h]
/* line: 25 */   float v27; // [sp+34h] [bp-44h]
/* line: 26 */   float v28; // [sp+38h] [bp-40h]
/* line: 27 */   float v29; // [sp+3Ch] [bp-3Ch]
/* line: 28 */   float v30; // [sp+40h] [bp-38h]
/* line: 29 */   float v31; // [sp+44h] [bp-34h]
/* line: 30 */   _DWORD v32[12]; // [sp+48h] [bp-30h] BYREF
/* line: 31 */ 
/* line: 32, address: 0x607aabb4 */   v4 = *(_DWORD *)(a1 + 1320);
/* line: 33, address: 0x607aabbc */   if ( v4 == 2 )
/* line: 34 */   {
/* line: 35, address: 0x607aabc0 */     v5 = *(unsigned __int8 *)(a1 + 84);
/* line: 36, address: 0x607aabd0 */     v6 = (char)v5;
/* line: 37, address: 0x607aabd4 */     if ( v5 >= 4 )
/* line: 38, address: 0x607aabd4 */       v6 = 0;
/* line: 39, address: 0x607aabec */     if ( *(int *)(MEMORY[0xC7B420] + 8 * v6 + 100) < 6 )
/* line: 40, address: 0x607aabec */       goto LABEL_17;
/* line: 41, address: 0x607aabf0 */     sub_6000A2E8(MEMORY[0xC7B420], (char)v5);
/* line: 42, address: 0x607aabf4 */     v4 = *(_DWORD *)(a1 + 1320);
/* line: 43 */   }
/* line: 44, address: 0x607aabf8 */   v7 = v4 - 5;
/* line: 45, address: 0x607aac00 */   if ( (unsigned int)(v4 - 5) < 2 )
/* line: 46 */   {
/* line: 47, address: 0x607aac08 */     v8 = *(char *)(a1 + 84);
/* line: 48, address: 0x607aac14 */     v9 = v8;
/* line: 49, address: 0x607aac1c */     if ( (unsigned __int8)v8 >= 4u )
/* line: 50, address: 0x607aac1c */       v9 = 0;
/* line: 51, address: 0x607aac38 */     if ( *(int *)(MEMORY[0xC7B420] + 8 * v9 + 132) <= 5 && v7 < 2 )
/* line: 52 */     {
/* line: 53, address: 0x607aac40 */       if ( a2 )
/* line: 54, address: 0x607aac40 */         goto LABEL_15;
/* line: 55, address: 0x607aac48 */       if ( (unsigned __int8)v8 >= 4u )
/* line: 56, address: 0x607aac48 */         v8 = 0;
/* line: 57, address: 0x607aac58 */       if ( *(int *)(MEMORY[0xC7B420] + 8 * v8 + 136) < 2 )
/* line: 58 */       {
/* line: 59 */ LABEL_15:
/* line: 60, address: 0x607aac64 */         memset(v32, 0, 0x2Cu);
/* line: 61, address: 0x607aac84 */         sub_607734E8(a1, "SE_PLY_THROW_ICEBALL", 0, 0);
/* line: 62, address: 0x607aac8c */         v10 = 11482256;
/* line: 63 */ LABEL_25:
/* line: 64, address: 0x607aad18 */         v32[3] = Profile::get(*(_DWORD *)v10);
/* line: 65, address: 0x607aad34 */         v32[7] = sub_608336A8(*(_DWORD *)(a1 + 12048));
/* line: 66, address: 0x607aad90 */         v32[0] = ((*(_BYTE *)(a1 + 87) & 0xF) << 12)
/* line: 67 */                | (a2 << 16)
/* line: 68 */                | ((*(_BYTE *)(a1 + 86) & 0xF) << 8)
/* line: 69 */                | (unsigned __int8)(16 * *(_BYTE *)(a1 + 12048))
/* line: 70 */                | *(_BYTE *)(a1 + 84) & 0xF;
/* line: 71, address: 0x607aada0 */         v13 = *(_DWORD *)(a1 + 648);
/* line: 72, address: 0x607aada8 */         v20[0] = 1.7266e-38;
/* line: 73, address: 0x607aadb4 */         LODWORD(v20[1]) = "wrist_l1";
/* line: 74, address: 0x607aadc8 */         (*(void (__fastcall **)(_DWORD, float *, float *))(**(_DWORD **)(v13 + 4) + 144))(
/* line: 75 */           *(_DWORD *)(v13 + 4),
/* line: 76 */           v22,
/* line: 77 */           v20);
/* line: 78, address: 0x607aadec */         v14 = v23 + (float)((float)((float)(v22[1] * 4.0) - v22[0]) + (float)(v22[2] * 4.0));
/* line: 79, address: 0x607aadf0 */         v23 = v14;
/* line: 80, address: 0x607aae0c */         v15 = v27 + (float)((float)((float)(v25 * 4.0) - v24) + (float)(v26 * 4.0));
/* line: 81, address: 0x607aae10 */         v27 = v15;
/* line: 82, address: 0x607aae2c */         v16 = v31 + (float)((float)((float)(v29 * 4.0) - v28) + (float)(v30 * 4.0));
/* line: 83, address: 0x607aae30 */         v31 = v16;
/* line: 84, address: 0x607aae34 */         if ( a2 == 1 )
/* line: 85 */         {
/* line: 86, address: 0x607aae3c */           v17 = *(_DWORD *)(a1 + 648);
/* line: 87, address: 0x607aae4c */           v19[0] = 12321336;
/* line: 88, address: 0x607aae58 */           v19[1] = "skl_root";
/* line: 89, address: 0x607aae64 */           sub_60793F04(*(_DWORD *)(v17 + 4), v20, v19);
/* line: 90, address: 0x607aaeb0 */           v14 = v20[0]
/* line: 91 */               + (float)(sqrtf(
/* line: 92 */                           (float)((float)(v21 - v16) * (float)(v21 - v16))
/* line: 93 */                         + (float)((float)(v20[0] - v14) * (float)(v20[0] - v14)))
/* line: 94 */                       * *(float *)(4 * *(_DWORD *)(a1 + 12048) + 0xB0A898));
/* line: 95 */         }
/* line: 96, address: 0x607aaeb4 */         v18 = *(_DWORD *)(a1 + 116);
/* line: 97, address: 0x607aaeb8 */         *(float *)&v32[4] = v14;
/* line: 98, address: 0x607aaebc */         *(float *)&v32[5] = v15;
/* line: 99, address: 0x607aaec4 */         v32[6] = v18;
/* line: 100, address: 0x607aaed4 */         sub_600080BC(MEMORY[0xC7B400], v32);
/* line: 101, address: 0x607aaed4 */         return;
/* line: 102 */       }
/* line: 103 */     }
/* line: 104, address: 0x607aac58 */     return;
/* line: 105 */   }
/* line: 106, address: 0x607aac98 */   if ( v4 != 2 )
/* line: 107, address: 0x607aac98 */     return;
/* line: 108 */ LABEL_17:
/* line: 109, address: 0x607aac9c */   v11 = *(char *)(a1 + 84);
/* line: 110, address: 0x607aacac */   v12 = v11;
/* line: 111, address: 0x607aacb4 */   if ( (unsigned __int8)v11 >= 4u )
/* line: 112, address: 0x607aacb4 */     v12 = 0;
/* line: 113, address: 0x607aacc8 */   if ( *(int *)(MEMORY[0xC7B420] + 8 * v12 + 100) < 6 )
/* line: 114 */   {
/* line: 115, address: 0x607aacd0 */     if ( a2 )
/* line: 116, address: 0x607aacd0 */       goto LABEL_24;
/* line: 117, address: 0x607aacd8 */     if ( (unsigned __int8)v11 >= 4u )
/* line: 118, address: 0x607aacd8 */       v11 = 0;
/* line: 119, address: 0x607aace8 */     if ( *(int *)(MEMORY[0xC7B420] + 8 * v11 + 104) < 2 )
/* line: 120 */     {
/* line: 121 */ LABEL_24:
/* line: 122, address: 0x607aacf4 */       memset(v32, 0, 0x2Cu);
/* line: 123, address: 0x607aad0c */       sub_607734E8(a1, "SE_PLY_THROW_FIRE", 0, 0);
/* line: 124, address: 0x607aad14 */       v10 = 11482264;
/* line: 125, address: 0x607aad14 */       goto LABEL_25;
/* line: 126 */     }
/* line: 127 */   }
/* line: 128 */ }