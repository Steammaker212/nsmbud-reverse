/* line: 0, address: 0x60256cfc */ bool __fastcall sub_60256CFC(int a1, int a2, float *a3)
/* line: 1 */ {
/* line: 2 */   char v3; // r12
/* line: 3 */   unsigned int v7; // r2
/* line: 4 */   int v8; // r1
/* line: 5 */   int v9; // r0
/* line: 6 */   unsigned int v10; // r2
/* line: 7 */   int v11; // r1
/* line: 8 */   float v12; // s18
/* line: 9 */   float v13; // s16
/* line: 10 */   float v14; // s20
/* line: 11 */   float v15; // s0
/* line: 12 */   float v16; // s0
/* line: 13 */ 
/* line: 14, address: 0x60256d34 */   if ( ((unsigned int)&unk_60C8E048 & ~(1613065508 << v3) & 1) == 0 && _cxa_guard_acquire_0(&unk_60C8E048) )
/* line: 15 */   {
/* line: 16, address: 0x60256d4c */     dword_60C8E044 = 0x40000000;
/* line: 17, address: 0x60256d54 */     _cxa_guard_release_0(&unk_60C8E048);
/* line: 18 */   }
/* line: 19, address: 0x60256d58 */   v7 = *(_DWORD *)(a2 + 104);
/* line: 20, address: 0x60256d70 */   if ( (v7 & 1) != 0 || a3[31] >= 0.0 )
/* line: 21, address: 0x60256eb4 */     return 0;
/* line: 22, address: 0x60256d7c */   v8 = 0;
/* line: 23, address: 0x60256d88 */   v9 = a1 + 6316;
/* line: 24, address: 0x60256d84 */   if ( v7 >> 1 )
/* line: 25 */   {
/* line: 26, address: 0x60256d90 */     v10 = v7 >> 1;
/* line: 27, address: 0x60256d9c */     if ( (v10 & 3) != 0 )
/* line: 28 */     {
/* line: 29, address: 0x60256da0 */       v8 = 0;
/* line: 30, address: 0x60256db0 */       do
/* line: 31 */       {
/* line: 32, address: 0x60256da4 */         v9 = *(_DWORD *)(v9 + 184);
/* line: 33, address: 0x60256da8 */         ++v8;
/* line: 34 */       }
/* line: 35, address: 0x60256db0 */       while ( (v10 & 3) != v8 );
/* line: 36 */     }
/* line: 37, address: 0x60256db8 */     if ( v10 - 1 >= 3 )
/* line: 38 */     {
/* line: 39, address: 0x60256dbc */       v11 = v10 - v8;
/* line: 40, address: 0x60256dd4 */       do
/* line: 41 */       {
/* line: 42, address: 0x60256dc4 */         v11 -= 4;
/* line: 43, address: 0x60256dd0 */         v9 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v9 + 184) + 184) + 184) + 184);
/* line: 44 */       }
/* line: 45, address: 0x60256dd4 */       while ( v11 );
/* line: 46 */     }
/* line: 47 */   }
/* line: 48, address: 0x60256de4 */   v12 = 0.0;
/* line: 49, address: 0x60256dec */   v13 = a3[27] - *(float *)(v9 + 8);
/* line: 50, address: 0x60256df0 */   v14 = a3[28] - (float)(*(float *)(v9 + 12) + 32.0);
/* line: 51, address: 0x60256e00 */   v15 = sqrtf((float)((float)(v14 * v14) + (float)(v13 * v13)) + 0.0);
/* line: 52, address: 0x60256e20 */   if ( v15 > 0.0 )
/* line: 53 */   {
/* line: 54, address: 0x60256e2c */     v16 = 1.0 / v15;
/* line: 55, address: 0x60256e30 */     v14 = v16 * v14;
/* line: 56, address: 0x60256e34 */     v13 = v13 * v16;
/* line: 57, address: 0x60256e38 */     v12 = v16 * 0.0;
/* line: 58 */   }
/* line: 59, address: 0x60256eb0 */   return (float)((float)((float)(v14 * MEMORY[0xB3B978]) + (float)(v13 * MEMORY[0xB3B974]))
/* line: 60 */                + (float)(v12 * MEMORY[0xB3B97C])) >= (float)(*(float *)((((unsigned int)dword_60C8E044 >> 20) & 0xFF0)
/* line: 61 */                                                                       + 0xB3A48C)
/* line: 62 */                                                            + (float)((float)((float)(dword_60C8E044 & 0xFFFFFF)
/* line: 63 */                                                                            * *(float *)((((unsigned int)dword_60C8E044 >> 20)
/* line: 64 */                                                                                        & 0xFF0)
/* line: 65 */                                                                                       + 0xB3A490))
/* line: 66 */                                                                    * 0.000000059605));
/* line: 67 */ }