/* line: 0, address: 0x60461c50 */ int __fastcall sub_60461C50(int a1)
/* line: 1 */ {
/* line: 2 */   int result; // r0
/* line: 3 */   float v3; // s0
/* line: 4 */   int v4; // r1
/* line: 5 */   int v5; // r5
/* line: 6 */   int v6; // s0
/* line: 7 */   int v7; // r0
/* line: 8 */   int v8; // r0
/* line: 9 */   int v9; // r1
/* line: 10 */   float *v10; // r1
/* line: 11 */   float v11; // s0
/* line: 12 */   _BYTE v12[8]; // [sp+0h] [bp-10h] BYREF
/* line: 13 */   _DWORD v13[2]; // [sp+8h] [bp-8h] BYREF
/* line: 14 */ 
/* line: 15, address: 0x60461c64 */   result = *(_BYTE *)(a1 + 23) & 0x1F;
/* line: 16, address: 0x60461c6c */   *(_DWORD *)(a1 + 6180) = result;
/* line: 17, address: 0x60461c80 */   switch ( result )
/* line: 18 */   {
/* line: 19, address: 0x60461c80 */     case 0:
/* line: 20, address: 0x60461cc0 */       v3 = *(float *)(a1 + 112);
/* line: 21, address: 0x60461ccc */       if ( *(_DWORD *)(a1 + 6188) == 3 )
/* line: 22 */       {
/* line: 23, address: 0x60461ce4 */         *(float *)(a1 + 6660) = v3 + -16.0;
/* line: 24, address: 0x60461cf0 */         if ( *(_DWORD *)(a1 + 6168) == 6 )
/* line: 25, address: 0x60461cfc */           *(float *)(a1 + 6660) = v3 + -12.0;
/* line: 26, address: 0x60461d08 */         *(_DWORD *)(a1 + 6172) = 1;
/* line: 27, address: 0x60461d1c */         return (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 192))(a1, 13226424);
/* line: 28 */       }
/* line: 29 */       else
/* line: 30 */       {
/* line: 31, address: 0x60461f1c */         *(float *)(a1 + 6660) = v3 + 16.0;
/* line: 32, address: 0x60461f30 */         return (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 192))(a1, 13226392);
/* line: 33 */       }
/* line: 34, address: 0x60461c80 */     case 1:
/* line: 35, address: 0x60461e10 */       return (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 192))(a1, 13226744);
/* line: 36, address: 0x60461c80 */     case 3:
/* line: 37, address: 0x60461e18 */       v7 = *(_DWORD *)(a1 + 6216);
/* line: 38, address: 0x60461e20 */       if ( v7 == 1 )
/* line: 39 */       {
/* line: 40, address: 0x60461f38 */         v8 = *(_DWORD *)(a1 + 80);
/* line: 41, address: 0x60461f3c */         v9 = (int)&flt_60AF1EA0;
/* line: 42, address: 0x60461f3c */         goto LABEL_27;
/* line: 43 */       }
/* line: 44, address: 0x60461e28 */       if ( !v7 )
/* line: 45 */       {
/* line: 46, address: 0x60461e30 */         v8 = *(_DWORD *)(a1 + 80);
/* line: 47, address: 0x60461e34 */         v9 = 11544060;
/* line: 48 */ LABEL_27:
/* line: 49, address: 0x60461f40 */         v11 = *(float *)(v9 + 4 * v8);
/* line: 50, address: 0x60461f48 */         goto LABEL_29;
/* line: 51 */       }
/* line: 52, address: 0x60461f7c */       v11 = (float)(COERCE_FLOAT((sead::Random::getU32((sead::Random *)(MEMORY[0xC9CF0C] + 1340)) >> 9) | 0x3F800000)
/* line: 53 */                   + -1.0)
/* line: 54 */           * 0.2;
/* line: 55 */ LABEL_29:
/* line: 56, address: 0x60461f80 */       *(float *)(a1 + 120) = v11;
/* line: 57, address: 0x60461f90 */       *(_DWORD *)(a1 + 124) = 1082130432;
/* line: 58, address: 0x60461f94 */       *(_DWORD *)(a1 + 128) = 0;
/* line: 59, address: 0x60461fa0 */       *(_BYTE *)(a1 + 6056) = 1;
/* line: 60 */       return (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 192))(a1, 13226780);
/* line: 61, address: 0x60461c80 */     case 4:
/* line: 62, address: 0x60461d28 */       *(_BYTE *)(a1 + 6056) = 1;
/* line: 63, address: 0x60461d3c */       return (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 192))(a1, 13226816);
/* line: 64, address: 0x60461c80 */     case 5:
/* line: 65, address: 0x60461d48 */       *(_BYTE *)(a1 + 6056) = 1;
/* line: 66, address: 0x60461d5c */       return (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 192))(a1, 13226852);
/* line: 67, address: 0x60461c80 */     case 6:
/* line: 68, address: 0x60461d70 */       return (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 192))(a1, 13226488);
/* line: 69, address: 0x60461c80 */     case 7:
/* line: 70, address: 0x60461e4c */       return (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 192))(a1, 13226520);
/* line: 71, address: 0x60461c80 */     case 8:
/* line: 72, address: 0x60461e58 */       *(_BYTE *)(a1 + 6056) = 1;
/* line: 73, address: 0x60461e6c */       return (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 192))(a1, 13226888);
/* line: 74, address: 0x60461c80 */     case 9:
/* line: 75, address: 0x60461e80 */       return (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 192))(a1, 13226648);
/* line: 76, address: 0x60461c80 */     case 11:
/* line: 77, address: 0x60461e94 */       return (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 192))(a1, 13226584);
/* line: 78, address: 0x60461c80 */     case 13:
/* line: 79, address: 0x60461d78 */       v4 = *(_DWORD *)(a1 + 112);
/* line: 80, address: 0x60461d84 */       v5 = MEMORY[0xC7F534];
/* line: 81, address: 0x60461d8c */       v13[0] = *(_DWORD *)(a1 + 108);
/* line: 82, address: 0x60461d90 */       v13[1] = v4;
/* line: 83, address: 0x60461d9c */       mapPositionToScreen(v12, v13);
/* line: 84, address: 0x60461db8 */       BasicSoundActor2_play(v5, "SE_OBJ_ITEM_APPEAR", v12, 0);
/* line: 85, address: 0x60461dc8 */       *(_DWORD *)(a1 + 6228) = 0;
/* line: 86, address: 0x60461dd0 */       *(_DWORD *)(a1 + 6224) = 0;
/* line: 87, address: 0x60461dd8 */       *(_DWORD *)(a1 + 132) = 1065353216;
/* line: 88, address: 0x60461dd8 */       *(_DWORD *)(a1 + 136) = -1056964608;
/* line: 89, address: 0x60461dd8 */       *(_DWORD *)(a1 + 140) = 0;
/* line: 90, address: 0x60461de4 */       *(_DWORD *)(a1 + 100) = -1103101952;
/* line: 91, address: 0x60461de8 */       *(_DWORD *)(a1 + 124) = 0;
/* line: 92, address: 0x60461df4 */       if ( *(_BYTE *)(a1 + 86) == 1 )
/* line: 93 */       {
/* line: 94, address: 0x60461df8 */         v6 = -987594752;
/* line: 95 */       }
/* line: 96 */       else
/* line: 97 */       {
/* line: 98, address: 0x60461ea0 */         v10 = &flt_60461FDC;
/* line: 99, address: 0x60461ea8 */         if ( *(_DWORD *)(a1 + 6168) == 5 )
/* line: 100, address: 0x60461ea8 */           v10 = &flt_60461FE0;
/* line: 101, address: 0x60461eac */         v6 = *(_DWORD *)v10;
/* line: 102 */       }
/* line: 103, address: 0x60461eb8 */       *(_DWORD *)(a1 + 116) = v6;
/* line: 104, address: 0x60461ebc */       *(_BYTE *)(a1 + 6056) = 1;
/* line: 105, address: 0x60461ecc */       (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 196))(a1);
/* line: 106, address: 0x60461ee8 */       *(_DWORD *)(a1 + 120) = *(_DWORD *)(4 * *(_DWORD *)(a1 + 80) + 0xB025FC);
/* line: 107, address: 0x60461ee8 */       *(_DWORD *)(a1 + 124) = -1090519040;
/* line: 108, address: 0x60461ee8 */       *(_DWORD *)(a1 + 128) = 0;
/* line: 109, address: 0x60461ef0 */       result = *(_DWORD *)(a1 + 6188);
/* line: 110, address: 0x60461ef8 */       if ( result == 2 )
/* line: 111 */       {
/* line: 112, address: 0x60461ef8 */         result = 1082130432;
/* line: 113, address: 0x60461f00 */         *(_DWORD *)(a1 + 124) = 1082130432;
/* line: 114 */       }
/* line: 115, address: 0x60461f00 */       return result;
/* line: 116 */     default:
/* line: 117 */       return result;
/* line: 118 */   }
/* line: 119 */ }