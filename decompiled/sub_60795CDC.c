/* line: 0, address: 0x60795cdc */ int __fastcall sub_60795CDC(int a1, int a2, int a3)
/* line: 1 */ {
/* line: 2 */   int v5; // r2
/* line: 3 */   float v6; // r0
/* line: 4 */   float v7; // s0
/* line: 5 */   int v8; // r0
/* line: 6 */   float v9; // s2
/* line: 7 */   float v10; // s0
/* line: 8 */   _BOOL4 v11; // r1
/* line: 9 */   float v12; // s0
/* line: 10 */   float v13; // s4
/* line: 11 */   float v14; // s2
/* line: 12 */   _BOOL4 v15; // r2
/* line: 13 */   int v16; // r0
/* line: 14 */   int v17; // r7
/* line: 15 */   int v18; // r6
/* line: 16 */   int v19; // r0
/* line: 17 */   int v20; // r1
/* line: 18 */   int v21; // r0
/* line: 19 */   int v22; // r0
/* line: 20 */   int v23; // r7
/* line: 21 */   int v24; // r1
/* line: 22 */   int v25; // r0
/* line: 23 */   _WORD *v26; // r1
/* line: 24 */   __int16 v27; // r2
/* line: 25 */   int result; // r0
/* line: 26 */   unsigned int v29; // r0
/* line: 27 */   int v30; // r1
/* line: 28 */ 
/* line: 29, address: 0x60795cf0 */   *(_DWORD *)(a1 + 11384) = *(_DWORD *)(a1 + 1320);
/* line: 30, address: 0x60795cf4 */   *(_DWORD *)(a1 + 1320) = a2;
/* line: 31, address: 0x60795d00 */   sub_6078E608(*(_DWORD *)(a1 + 11368));
/* line: 32, address: 0x60795d0c */   *(_DWORD *)(a1 + 492) = 0;
/* line: 33, address: 0x60795d18 */   *(_DWORD *)(a1 + 496) = 1101004800;
/* line: 34, address: 0x60795d24 */   *(_DWORD *)(a1 + 500) = 1097859072;
/* line: 35, address: 0x60795d30 */   *(_DWORD *)(a1 + 504) = 1102053376;
/* line: 36, address: 0x60795d38 */   v5 = *(_DWORD *)(a1 + 1320);
/* line: 37, address: 0x60795d40 */   v6 = flt_60B0C2BC[v5];
/* line: 38, address: 0x60795d44 */   *(float *)(a1 + 1244) = v6;
/* line: 39, address: 0x60795d48 */   v7 = v6;
/* line: 40, address: 0x60795d50 */   v8 = *(_DWORD *)(*(_DWORD *)(a1 + 11360) + 196);
/* line: 41, address: 0x60795d58 */   if ( (v8 & 1) != 0 )
/* line: 42 */   {
/* line: 43, address: 0x60795d7c */     v10 = v7 * 0.25;
/* line: 44 */   }
/* line: 45 */   else
/* line: 46 */   {
/* line: 47, address: 0x60795d68 */     v9 = v7 * -0.5;
/* line: 48, address: 0x60795d6c */     v10 = v7 * 0.5;
/* line: 49, address: 0x60795d70 */     if ( (v8 & 4) != 0 )
/* line: 50, address: 0x60795d70 */       v10 = v9;
/* line: 51 */   }
/* line: 52, address: 0x60795d84 */   v11 = 0;
/* line: 53, address: 0x60795d90 */   *(_DWORD *)(a1 + 572) = 0;
/* line: 54, address: 0x60795d94 */   *(float *)(a1 + 576) = v10;
/* line: 55, address: 0x60795d98 */   v12 = 16.0;
/* line: 56, address: 0x60795d9c */   *(_DWORD *)(a1 + 580) = 0;
/* line: 57, address: 0x60795da4 */   v13 = *(float *)(a1 + 7068);
/* line: 58, address: 0x60795da8 */   if ( v5 == 3 )
/* line: 59, address: 0x60795da8 */     v12 = 8.0;
/* line: 60, address: 0x60795db4 */   if ( v13 >= v12 )
/* line: 61 */   {
/* line: 62, address: 0x60795de0 */     if ( v13 <= v12 )
/* line: 63, address: 0x60795de0 */       goto LABEL_19;
/* line: 64, address: 0x60795df0 */     v14 = v13 + -0.1;
/* line: 65, address: 0x60795e00 */     v15 = v13 < (float)(v13 + -0.1);
/* line: 66, address: 0x60795e08 */     v11 = (float)(v13 + -0.1) <= v12;
/* line: 67 */   }
/* line: 68 */   else
/* line: 69 */   {
/* line: 70, address: 0x60795dc0 */     v14 = v13 + 0.1;
/* line: 71, address: 0x60795dd0 */     v15 = (float)(v13 + 0.1) < v13;
/* line: 72, address: 0x60795dd8 */     if ( (float)(v13 + 0.1) >= v12 )
/* line: 73, address: 0x60795dd8 */       v11 = 1;
/* line: 74 */   }
/* line: 75, address: 0x60795e10 */   if ( v11 )
/* line: 76, address: 0x60795e10 */     v14 = v12;
/* line: 77, address: 0x60795e18 */   if ( !v15 )
/* line: 78, address: 0x60795e18 */     v12 = v14;
/* line: 79, address: 0x60795e1c */   *(float *)(a1 + 7068) = v12;
/* line: 80 */ LABEL_19:
/* line: 81, address: 0x60795e20 */   v16 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 152))(a1);
/* line: 82, address: 0x60795e30 */   v17 = *(_DWORD *)(a1 + 1320);
/* line: 83, address: 0x60795e34 */   v18 = v16;
/* line: 84, address: 0x60795e3c */   v19 = sub_6075EE0C(a1);
/* line: 85, address: 0x60795e44 */   if ( v18 == 1 )
/* line: 86 */   {
/* line: 87, address: 0x60795e4c */     if ( v17 == 3 )
/* line: 88 */     {
/* line: 89, address: 0x60795e50 */       v20 = 2;
/* line: 90, address: 0x60795e58 */       if ( v19 )
/* line: 91, address: 0x60795e58 */         v20 = 6;
/* line: 92 */     }
/* line: 93 */     else
/* line: 94 */     {
/* line: 95, address: 0x60795e78 */       v20 = 7;
/* line: 96, address: 0x60795e80 */       if ( !v19 )
/* line: 97 */       {
/* line: 98, address: 0x60795e88 */         v21 = sub_6075EDF8(a1, 7);
/* line: 99, address: 0x60795e8c */         v20 = 3;
/* line: 100, address: 0x60795e94 */         if ( v21 )
/* line: 101, address: 0x60795e94 */           v20 = 9;
/* line: 102 */       }
/* line: 103 */     }
/* line: 104 */   }
/* line: 105, address: 0x60795e64 */   else if ( v17 == 3 )
/* line: 106 */   {
/* line: 107, address: 0x60795e6c */     if ( v19 )
/* line: 108, address: 0x60795e6c */       v19 = 4;
/* line: 109, address: 0x60795e70 */     v20 = v19;
/* line: 110 */   }
/* line: 111 */   else
/* line: 112 */   {
/* line: 113, address: 0x60795e9c */     v20 = 5;
/* line: 114, address: 0x60795ea4 */     if ( !v19 )
/* line: 115 */     {
/* line: 116, address: 0x60795eac */       v22 = sub_6075EDF8(a1, 5);
/* line: 117, address: 0x60795eb0 */       v20 = 1;
/* line: 118, address: 0x60795eb8 */       if ( v22 )
/* line: 119, address: 0x60795eb8 */         v20 = 8;
/* line: 120 */     }
/* line: 121 */   }
/* line: 122, address: 0x60795ed4 */   *(_DWORD *)(a1 + 1276) = 240 * v20 + 11580596;
/* line: 123, address: 0x60795edc */   *(_DWORD *)(a1 + 1280) = 240 * v20 + 11580716;
/* line: 124, address: 0x60795edc */   v23 = a1 + 1280;
/* line: 125, address: 0x60795eec */   if ( !(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1204))(a1) )
/* line: 126, address: 0x60795ef4 */     v23 = a1 + 1276;
/* line: 127, address: 0x60795f00 */   *(_DWORD *)(a1 + 104) = *(_DWORD *)(*(_DWORD *)v23 + 32);
/* line: 128, address: 0x60795f14 */   *(_DWORD *)(a1 + 1284) = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1100))(a1);
/* line: 129, address: 0x60795f18 */   v24 = *(_DWORD *)(a1 + 1228);
/* line: 130, address: 0x60795f24 */   *(_DWORD *)(a1 + 1228) = v24 & 0xFFF7FFFF;
/* line: 131, address: 0x60795f28 */   v25 = *(_DWORD *)(a1 + 1320);
/* line: 132, address: 0x60795f34 */   if ( (unsigned int)(v25 - 7) < 3 )
/* line: 133 */   {
/* line: 134, address: 0x60795f40 */     *(_BYTE *)(a1 + 12917) = 1;
/* line: 135 */ LABEL_46:
/* line: 136, address: 0x60795f9c */     v26 = (_WORD *)(a1 + 6690);
/* line: 137, address: 0x60795fa8 */     v27 = *(_WORD *)(a1 + 6690) & 0xFFF7;
/* line: 138, address: 0x60795fa8 */     goto LABEL_47;
/* line: 139 */   }
/* line: 140, address: 0x60795f4c */   if ( v25 == 5 )
/* line: 141 */   {
/* line: 142, address: 0x60795f94 */     *(_DWORD *)(a1 + 1228) = v24 | 0x80000;
/* line: 143, address: 0x60795f94 */     goto LABEL_46;
/* line: 144 */   }
/* line: 145, address: 0x60795f54 */   if ( v25 == 4 )
/* line: 146 */   {
/* line: 147, address: 0x60795f5c */     sub_607AE108(a1);
/* line: 148, address: 0x60795f68 */     *(_BYTE *)(a1 + 12453) = 1;
/* line: 149, address: 0x60795f6c */     v25 = *(_DWORD *)(a1 + 1320);
/* line: 150 */   }
/* line: 151, address: 0x60795f7c */   v26 = (_WORD *)(a1 + 6690);
/* line: 152, address: 0x60795f84 */   v27 = *(_WORD *)(a1 + 6690) & 0xFFF7;
/* line: 153, address: 0x60795f88 */   if ( v25 == 3 )
/* line: 154, address: 0x60795f88 */     v27 = *(_WORD *)(a1 + 6690) | 8;
/* line: 155 */ LABEL_47:
/* line: 156, address: 0x60795fac */   *v26 = v27;
/* line: 157, address: 0x60795fb0 */   result = sub_600243A0();
/* line: 158, address: 0x60795fb8 */   *(_DWORD *)(a1 + 1152) = result;
/* line: 159, address: 0x60795fbc */   if ( !a3 )
/* line: 160 */   {
/* line: 161, address: 0x60795fc0 */     v29 = *(unsigned __int8 *)(a1 + 84);
/* line: 162, address: 0x60795fc4 */     v30 = 0;
/* line: 163, address: 0x60795fcc */     if ( v29 < 6 )
/* line: 164, address: 0x60795fcc */       v30 = (char)v29;
/* line: 165, address: 0x60795fe0 */     result = MEMORY[0xC99DD4] + 72 * v30;
/* line: 166, address: 0x60795fe8 */     *(_DWORD *)(result + 300) = *(_DWORD *)(a1 + 1320);
/* line: 167 */   }
/* line: 168, address: 0x60795fbc */   return result;
/* line: 169 */ }