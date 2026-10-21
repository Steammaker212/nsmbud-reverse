/* line: 0, address: 0x6074f718 */ int __fastcall sub_6074F718(int a1)
/* line: 1 */ {
/* line: 2 */   int v2; // r2
/* line: 3 */   unsigned int v3; // r0
/* line: 4 */   unsigned int v4; // r1
/* line: 5 */   unsigned int v5; // r2
/* line: 6 */   float *v6; // r6
/* line: 7 */   float v7; // s0
/* line: 8 */   float v8; // s2
/* line: 9 */   float v9; // s4
/* line: 10 */   float v10; // s12
/* line: 11 */   float v11; // s5
/* line: 12 */   float v12; // s8
/* line: 13 */   float v13; // s1
/* line: 14 */   float v14; // s9
/* line: 15 */   float v15; // s13
/* line: 16 */   int result; // r0
/* line: 17 */   float v17; // s2
/* line: 18 */   int v18; // r1
/* line: 19 */   _DWORD v19[12]; // [sp+0h] [bp-60h] BYREF
/* line: 20 */   float v20[12]; // [sp+30h] [bp-30h] BYREF
/* line: 21 */ 
/* line: 22, address: 0x6074f730 */   v2 = a1 + 156;
/* line: 23, address: 0x6074f734 */   v3 = *(_DWORD *)(a1 + 156);
/* line: 24, address: 0x6074f734 */   v4 = *(_DWORD *)(v2 + 4);
/* line: 25, address: 0x6074f734 */   v5 = *(_DWORD *)(v2 + 8);
/* line: 26, address: 0x6074f74c */   v6 = (float *)((v5 >> 20) & 0xFF0);
/* line: 27, address: 0x6074f750 */   v5 &= 0xFFFFFFu;
/* line: 28, address: 0x6074f7ac */   v7 = (float)v5 * 0.000000059605;
/* line: 29, address: 0x6074f7b0 */   v8 = (float)(v4 & 0xFFFFFF) * 0.000000059605;
/* line: 30, address: 0x6074f7b4 */   v9 = (float)(v3 & 0xFFFFFF) * 0.000000059605;
/* line: 31, address: 0x6074f7b8 */   v10 = v6[2943267] + (float)(v7 * v6[2943268]);
/* line: 32, address: 0x6074f7bc */   v11 = *(float *)(((v4 >> 20) & 0xFF0) + 0xB3A48C) + (float)(v8 * *(float *)(((v4 >> 20) & 0xFF0) + 0xB3A490));
/* line: 33, address: 0x6074f7c0 */   v12 = v6[2943265] + (float)(v7 * v6[2943266]);
/* line: 34, address: 0x6074f7c4 */   v13 = *(float *)(((v4 >> 20) & 0xFF0) + 0xB3A484) + (float)(v8 * *(float *)(((v4 >> 20) & 0xFF0) + 0xB3A488));
/* line: 35, address: 0x6074f7c8 */   v14 = *(float *)(((v3 >> 20) & 0xFF0) + 0xB3A484) + (float)(v9 * *(float *)(((v3 >> 20) & 0xFF0) + 0xB3A488));
/* line: 36, address: 0x6074f7cc */   v15 = *(float *)(((v3 >> 20) & 0xFF0) + 0xB3A48C) + (float)(v9 * *(float *)(((v3 >> 20) & 0xFF0) + 0xB3A490));
/* line: 37, address: 0x6074f7f4 */   v20[0] = (float)(v11 * v10) + (float)(v14 * (float)(v13 * v12));
/* line: 38, address: 0x6074f7fc */   v20[4] = v15 * v12;
/* line: 39, address: 0x6074f808 */   v20[8] = (float)(v14 * (float)(v11 * v12)) - (float)(v13 * v10);
/* line: 40, address: 0x6074f810 */   v20[1] = (float)(v14 * (float)(v13 * v10)) - (float)(v11 * v12);
/* line: 41, address: 0x6074f814 */   v20[5] = v15 * v10;
/* line: 42, address: 0x6074f818 */   v20[9] = (float)(v13 * v12) + (float)(v14 * (float)(v11 * v10));
/* line: 43, address: 0x6074f81c */   v20[2] = v15 * v13;
/* line: 44, address: 0x6074f828 */   v20[6] = -v14;
/* line: 45, address: 0x6074f82c */   v20[10] = v15 * v11;
/* line: 46, address: 0x6074f834 */   v20[3] = *(float *)(a1 + 108);
/* line: 47, address: 0x6074f83c */   v20[7] = *(float *)(a1 + 112);
/* line: 48, address: 0x6074f844 */   v20[11] = *(float *)(a1 + 116);
/* line: 49, address: 0x6074f850 */   sub_60793FF0(*(_DWORD *)(*(_DWORD *)(a1 + 644) + 4), v20, v5);
/* line: 50, address: 0x6074f864 */   (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 644) + 4) + 148))(*(_DWORD *)(*(_DWORD *)(a1 + 644) + 4));
/* line: 51, address: 0x6074f86c */   ModelWrapper_updateAnims(*(_DWORD *)(a1 + 648));
/* line: 52, address: 0x6074f870 */   result = *(_DWORD *)(a1 + 700);
/* line: 53, address: 0x6074f878 */   if ( result == 2 )
/* line: 54 */   {
/* line: 55, address: 0x6074f88c */     result = 2;
/* line: 56, address: 0x6074f894 */     if ( (*(_BYTE *)(**(_DWORD **)(*(_DWORD *)(a1 + 648) + 12) + 28) & 0x20) != 0 )
/* line: 57 */     {
/* line: 58, address: 0x6074f894 */       result = 0;
/* line: 59, address: 0x6074f898 */       *(_DWORD *)(a1 + 700) = 0;
/* line: 60 */     }
/* line: 61 */   }
/* line: 62, address: 0x6074f8b0 */   v17 = *(float *)(MEMORY[0xCC6484] + 132);
/* line: 63, address: 0x6074f8b4 */   v18 = *(_DWORD *)(MEMORY[0xCC6484] + 120);
/* line: 64, address: 0x6074f8c0 */   *(_DWORD *)(a1 + 688) = v18;
/* line: 65, address: 0x6074f8c8 */   *(float *)(a1 + 692) = v17 + 56.0;
/* line: 66, address: 0x6074f8cc */   *(_DWORD *)(a1 + 696) = 1161527296;
/* line: 67, address: 0x6074f8d0 */   if ( result )
/* line: 68 */   {
/* line: 69, address: 0x6074f8dc */     v19[0] = 1065353216;
/* line: 70, address: 0x6074f8e0 */     v19[1] = 0;
/* line: 71, address: 0x6074f8e4 */     v19[2] = 0;
/* line: 72, address: 0x6074f8e8 */     v19[4] = 0;
/* line: 73, address: 0x6074f8ec */     v19[5] = 1065353216;
/* line: 74, address: 0x6074f8f0 */     v19[6] = 0;
/* line: 75, address: 0x6074f8f4 */     v19[8] = 0;
/* line: 76, address: 0x6074f8f8 */     v19[9] = 0;
/* line: 77, address: 0x6074f8fc */     v19[10] = 1065353216;
/* line: 78, address: 0x6074f900 */     v19[3] = v18;
/* line: 79, address: 0x6074f904 */     *(float *)&v19[7] = v17 + 56.0;
/* line: 80, address: 0x6074f908 */     v19[11] = 1161527296;
/* line: 81, address: 0x6074f920 */     (*(void (__fastcall **)(_DWORD, _DWORD *))(***(_DWORD ***)(a1 + 648) + 60))(**(_DWORD **)(a1 + 648), v19);
/* line: 82, address: 0x6074f928 */     return ModelWrapper_updateModel(*(_DWORD *)(a1 + 648));
/* line: 83 */   }
/* line: 84, address: 0x6074f930 */   return result;
/* line: 85 */ }