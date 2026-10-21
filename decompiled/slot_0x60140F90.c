/* line: 0, address: 0x60140f90 */ int __fastcall sub_60140F90(int a1, unsigned int a2)
/* line: 1 */ {
/* line: 2 */   float v4; // s2
/* line: 3 */   float v5; // s0
/* line: 4 */   int v6; // r0
/* line: 5 */   int v7; // r1
/* line: 6 */   int v9; // r0
/* line: 7 */   int v10; // r0
/* line: 8 */   unsigned int v11; // r6
/* line: 9 */   unsigned int v12; // r0
/* line: 10 */   int v13; // r0
/* line: 11 */   _DWORD v14[3]; // [sp+14h] [bp-Ch] BYREF
/* line: 12 */ 
/* line: 13, address: 0x60140fa4 */   if ( a2 != 2 )
/* line: 14, address: 0x60140fa4 */     return CollisionActor::afterCreate((CollisionActor *)a1, a2);
/* line: 15, address: 0x60140fac */   v4 = *(float *)(a1 + 108);
/* line: 16, address: 0x60140fb8 */   v5 = *(float *)(MEMORY[0xCC6484] + 120);
/* line: 17, address: 0x60140fd4 */   if ( v4 <= v5 && v4 >= *(float *)(MEMORY[0xCC6484] + 112) )
/* line: 18 */   {
/* line: 19, address: 0x6014107c */     if ( *(_DWORD *)(MEMORY[0xC99D70] + 1828) )
/* line: 20 */     {
/* line: 21, address: 0x60141088 */       *(float *)(a1 + 584) = v4;
/* line: 22, address: 0x60141090 */       *(_DWORD *)(a1 + 588) = *(_DWORD *)(a1 + 112);
/* line: 23, address: 0x60141094 */       v9 = *(_DWORD *)(a1 + 116);
/* line: 24 */     }
/* line: 25 */     else
/* line: 26 */     {
/* line: 27, address: 0x601410b4 */       sub_6075DE94(MEMORY[0xCBF354], v14, *(_DWORD *)(a1 + 6744));
/* line: 28, address: 0x601410bc */       *(_DWORD *)(a1 + 584) = v14[0];
/* line: 29, address: 0x601410c4 */       *(_DWORD *)(a1 + 588) = v14[1];
/* line: 30, address: 0x601410c8 */       v9 = v14[2];
/* line: 31 */     }
/* line: 32, address: 0x601410d0 */     *(_DWORD *)(a1 + 592) = v9;
/* line: 33, address: 0x601410dc */     CollisionMgr_process((unsigned __int8 *)(a1 + 648));
/* line: 34, address: 0x601410e0 */     v10 = *(_DWORD *)(a1 + 2872);
/* line: 35, address: 0x60141118 */     if ( ((v10 & 0x440000) == 0 || (v10 & 0x10000000) != 0)
/* line: 36 */       && ((v10 & 0x880000) == 0 || (v10 & 0x20000000) != 0)
/* line: 37 */       && (v10 & 0x10400) != 0x400 )
/* line: 38 */     {
/* line: 39, address: 0x60141120 */       if ( (v10 & 1) == 0 )
/* line: 40, address: 0x6014123c */         return CollisionActor::afterCreate((CollisionActor *)a1, a2);
/* line: 41, address: 0x60141154 */       v11 = (int)(float)((float)(MEMORY[0xB0E1E0] * 63.4) / MEMORY[0xB0E1D8]);
/* line: 42, address: 0x60141158 */       v12 = sub_6014C508(a1 + 648, *(_DWORD *)(a1 + 80));
/* line: 43, address: 0x601411bc */       if ( (float)(*(float *)(((v12 >> 20) & 0xFF0) + 0xB3A484)
/* line: 44 */                  + (float)((float)((float)(v12 & 0xFFFFFF) * *(float *)(((v12 >> 20) & 0xFF0) + 0xB3A488))
/* line: 45 */                          * 0.000000059605)) < (float)(*(float *)(((v11 >> 20) & 0xFF0) + 0xB3A484)
/* line: 46 */                                                     + (float)((float)((float)(v11 & 0xFFFFFF)
/* line: 47 */                                                                     * *(float *)(((v11 >> 20) & 0xFF0) + 0xB3A488))
/* line: 48 */                                                             * 0.000000059605)) )
/* line: 49 */       {
/* line: 50, address: 0x601411d0 */         StateMgr::changeState(a1 + 6084, 13139332);
/* line: 51, address: 0x601411d4 */         return CollisionActor::afterCreate((CollisionActor *)a1, a2);
/* line: 52 */       }
/* line: 53 */     }
/* line: 54, address: 0x601411e4 */     v13 = *(_DWORD *)(a1 + 6112);
/* line: 55, address: 0x601411f0 */     *(_DWORD *)(a1 + 108) = *(_DWORD *)(a1 + 6108);
/* line: 56, address: 0x601411f4 */     *(_DWORD *)(a1 + 112) = v13;
/* line: 57, address: 0x601411fc */     *(_DWORD *)(a1 + 116) = 1166843904;
/* line: 58, address: 0x60141200 */     sub_600424E0(a1);
/* line: 59, address: 0x60141230 */     LightSource_update1(a1 + 6356, 1, a1 + 108, 0, 0, 0, 0, 0, 0);
/* line: 60, address: 0x60141230 */     return CollisionActor::afterCreate((CollisionActor *)a1, a2);
/* line: 61 */   }
/* line: 62, address: 0x60140fe4 */   if ( *(_DWORD *)(MEMORY[0xC99D70] + 1828) )
/* line: 63 */   {
/* line: 64, address: 0x60140ff8 */     if ( v4 > v5 )
/* line: 65, address: 0x60140ff8 */       v5 = *(float *)(MEMORY[0xCC6484] + 112);
/* line: 66, address: 0x60140ffc */     *(float *)(a1 + 108) = v5;
/* line: 67, address: 0x60141000 */     v6 = *(_DWORD *)(a1 + 112);
/* line: 68, address: 0x60141004 */     v7 = *(_DWORD *)(a1 + 116);
/* line: 69, address: 0x60141008 */     *(float *)(a1 + 584) = v5;
/* line: 70, address: 0x6014100c */     *(_DWORD *)(a1 + 588) = v6;
/* line: 71, address: 0x60141010 */     *(_DWORD *)(a1 + 592) = v7;
/* line: 72, address: 0x60141014 */     *(float *)(a1 + 608) = v5;
/* line: 73, address: 0x60141018 */     *(_DWORD *)(a1 + 612) = v6;
/* line: 74, address: 0x6014101c */     *(_DWORD *)(a1 + 616) = v7;
/* line: 75, address: 0x60141030 */     return CollisionActor::afterCreate((CollisionActor *)a1, 2u);
/* line: 76 */   }
/* line: 77 */   else
/* line: 78 */   {
/* line: 79, address: 0x6014103c */     CollisionActor::afterCreate((CollisionActor *)a1, 2u);
/* line: 80, address: 0x60141054 */     (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
/* line: 81, address: 0x6014106c */     return StateMgr::changeState(a1 + 6084, 13139436);
/* line: 82 */   }
/* line: 83 */ }