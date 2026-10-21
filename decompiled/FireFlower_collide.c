/* line: 0, address: 0x60462018 */ int __fastcall sub_60462018(int a1)
/* line: 1 */ {
/* line: 2 */   int v2; // r3
/* line: 3 */   int v3; // r8
/* line: 4 */   float v4; // r2
/* line: 5 */   int v5; // lr
/* line: 6 */   unsigned int v6; // r3
/* line: 7 */   unsigned int v7; // r3
/* line: 8 */   unsigned int v8; // r5
/* line: 9 */   unsigned int v9; // r0
/* line: 10 */   float v10; // s0
/* line: 11 */   float v11; // s2
/* line: 12 */   float v12; // s4
/* line: 13 */   float v13; // s10
/* line: 14 */   float v14; // s5
/* line: 15 */   float v15; // s6
/* line: 16 */   float v16; // s1
/* line: 17 */   float v17; // s13
/* line: 18 */   float v18; // s9
/* line: 19 */   int **v19; // r5
/* line: 20 */   int v20; // r1
/* line: 21 */   int v21; // r0
/* line: 22 */   int (__fastcall *v22)(int, _DWORD *); // r2
/* line: 23 */   int v23; // r0
/* line: 24 */   int result; // r0
/* line: 25 */   _DWORD v25[11]; // [sp+0h] [bp-60h] BYREF
/* line: 26 */   int v26; // [sp+2Ch] [bp-34h]
/* line: 27 */   float v27; // [sp+30h] [bp-30h] BYREF
/* line: 28 */   float v28; // [sp+34h] [bp-2Ch]
/* line: 29 */   float v29; // [sp+38h] [bp-28h]
/* line: 30 */   int v30; // [sp+3Ch] [bp-24h]
/* line: 31 */   float v31; // [sp+40h] [bp-20h]
/* line: 32 */   float v32; // [sp+44h] [bp-1Ch]
/* line: 33 */   float v33; // [sp+48h] [bp-18h]
/* line: 34 */   float v34; // [sp+4Ch] [bp-14h]
/* line: 35 */   float v35; // [sp+50h] [bp-10h]
/* line: 36 */   float v36; // [sp+54h] [bp-Ch]
/* line: 37 */   float v37; // [sp+58h] [bp-8h]
/* line: 38 */   int v38; // [sp+5Ch] [bp-4h]
/* line: 39 */ 
/* line: 40, address: 0x60462028 */   v2 = *(_DWORD *)(a1 + 5952);
/* line: 41, address: 0x6046202c */   v3 = *(_DWORD *)(a1 + 108);
/* line: 42, address: 0x60462030 */   v4 = *(float *)(a1 + 112);
/* line: 43, address: 0x60462034 */   v5 = *(_DWORD *)(a1 + 116);
/* line: 44, address: 0x6046203c */   if ( (unsigned __int16)v2 == 0x10 )
/* line: 45 */   {
/* line: 46, address: 0x60462048 */     v6 = (unsigned __int8)__ROR4__(v2, 16) - 4;
/* line: 47, address: 0x60462064 */     if ( v6 <= 0xC && ((0x1005u >> v6) & 1) != 0 )
/* line: 48, address: 0x60462074 */       v4 = v4 + -1.0;
/* line: 49 */   }
/* line: 50, address: 0x6046207c */   if ( *(_BYTE *)(a1 + 6201) )
/* line: 51 */   {
/* line: 52, address: 0x60462098 */     v27 = 1.0;
/* line: 53, address: 0x6046209c */     v28 = 0.0;
/* line: 54, address: 0x604620a0 */     v29 = 0.0;
/* line: 55, address: 0x604620a4 */     v31 = 0.0;
/* line: 56, address: 0x604620a8 */     v32 = 1.0;
/* line: 57, address: 0x604620ac */     v33 = 0.0;
/* line: 58, address: 0x604620b0 */     v35 = 0.0;
/* line: 59, address: 0x604620b4 */     v36 = 0.0;
/* line: 60, address: 0x604620b8 */     v37 = 1.0;
/* line: 61, address: 0x604620bc */     v30 = v3;
/* line: 62, address: 0x604620c0 */     v34 = v4;
/* line: 63, address: 0x604620c4 */     v38 = v5;
/* line: 64, address: 0x604620c8 */     sub_60832C3C(&v27, a1 + 156);
/* line: 65 */   }
/* line: 66 */   else
/* line: 67 */   {
/* line: 68, address: 0x604620d8 */     v7 = *(_DWORD *)(a1 + 156);
/* line: 69, address: 0x604620e4 */     v8 = *(_DWORD *)(a1 + 160);
/* line: 70, address: 0x604620e8 */     v9 = *(_DWORD *)(a1 + 164);
/* line: 71, address: 0x60462128 */     v10 = (float)(v9 & 0xFFFFFF) * 0.000000059605;
/* line: 72, address: 0x6046212c */     v11 = (float)(v8 & 0xFFFFFF) * 0.000000059605;
/* line: 73, address: 0x60462168 */     v12 = (float)(v7 & 0xFFFFFF) * 0.000000059605;
/* line: 74, address: 0x6046216c */     v13 = *(float *)(((v9 >> 20) & 0xFF0) + 0xB3A48C) + (float)(v10 * *(float *)(((v9 >> 20) & 0xFF0) + 0xB3A490));
/* line: 75, address: 0x60462170 */     v14 = *(float *)(((v8 >> 20) & 0xFF0) + 0xB3A48C) + (float)(v11 * *(float *)(((v8 >> 20) & 0xFF0) + 0xB3A490));
/* line: 76, address: 0x60462174 */     v15 = *(float *)(((v9 >> 20) & 0xFF0) + 0xB3A484) + (float)(v10 * *(float *)(((v9 >> 20) & 0xFF0) + 0xB3A488));
/* line: 77, address: 0x60462178 */     v16 = *(float *)(((v8 >> 20) & 0xFF0) + 0xB3A484) + (float)(v11 * *(float *)(((v8 >> 20) & 0xFF0) + 0xB3A488));
/* line: 78, address: 0x6046217c */     v17 = *(float *)(((v7 >> 20) & 0xFF0) + 0xB3A48C) + (float)(v12 * *(float *)(((v7 >> 20) & 0xFF0) + 0xB3A490));
/* line: 79, address: 0x60462180 */     v18 = *(float *)(((v7 >> 20) & 0xFF0) + 0xB3A484) + (float)(v12 * *(float *)(((v7 >> 20) & 0xFF0) + 0xB3A488));
/* line: 80, address: 0x60462194 */     v27 = v14 * v13;
/* line: 81, address: 0x60462198 */     v31 = v14 * v15;
/* line: 82, address: 0x604621a4 */     v35 = -v16;
/* line: 83, address: 0x604621c0 */     v28 = (float)((float)(v18 * v16) * v13) - (float)(v17 * v15);
/* line: 84, address: 0x604621c4 */     v32 = (float)(v17 * v13) + (float)((float)(v18 * v16) * v15);
/* line: 85, address: 0x604621d0 */     v36 = v18 * v14;
/* line: 86, address: 0x604621d8 */     v29 = (float)(v16 * (float)(v17 * v13)) + (float)(v18 * v15);
/* line: 87, address: 0x604621dc */     v33 = (float)(v16 * (float)(v17 * v15)) - (float)(v18 * v13);
/* line: 88, address: 0x604621e0 */     v37 = v17 * v14;
/* line: 89, address: 0x604621e4 */     v30 = v3;
/* line: 90, address: 0x604621e8 */     v34 = v4;
/* line: 91, address: 0x604621ec */     v38 = v5;
/* line: 92 */   }
/* line: 93, address: 0x604621f8 */   v19 = (int **)(a1 + 6160);
/* line: 94, address: 0x6046220c */   (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(a1 + 6160) + 60))(**(_DWORD **)(a1 + 6160), &v27);
/* line: 95, address: 0x60462220 */   if ( *(_BYTE *)(a1 + 6256) )
/* line: 96, address: 0x60462230 */     v20 = a1 + 144;
/* line: 97 */   else
/* line: 98, address: 0x6046222c */     v20 = a1 + 6304;
/* line: 99, address: 0x60462234 */   (*(void (__fastcall **)(_DWORD, int))(***(_DWORD ***)(a1 + 6160) + 68))(**(_DWORD **)(a1 + 6160), v20);
/* line: 100, address: 0x6046223c */   ModelWrapper_updateAnims(*v19);
/* line: 101, address: 0x60462250 */   (*(void (__fastcall **)(int))(*(_DWORD *)**v19 + 52))(**v19);
/* line: 102, address: 0x60462264 */   (*(void (__fastcall **)(int))(*(_DWORD *)**v19 + 56))(**v19);
/* line: 103, address: 0x6046226c */   v21 = **v19;
/* line: 104, address: 0x60462274 */   v22 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v21 + 84);
/* line: 105, address: 0x60462284 */   v25[0] = 12321336;
/* line: 106, address: 0x60462290 */   v25[1] = "eff";
/* line: 107, address: 0x60462298 */   v23 = v22(v21, v25);
/* line: 108, address: 0x604622b4 */   (*(void (__fastcall **)(int, int, _DWORD *))(*(_DWORD *)**v19 + 108))(**v19, v23, v25);
/* line: 109, address: 0x604622c0 */   *(_DWORD *)(a1 + 6124) = v25[3];
/* line: 110, address: 0x604622cc */   *(_DWORD *)(a1 + 6128) = v25[7];
/* line: 111, address: 0x604622d4 */   result = v26;
/* line: 112, address: 0x604622d8 */   *(_DWORD *)(a1 + 6132) = v26;
/* line: 113, address: 0x604622e0 */   return result;
/* line: 114 */ }