/* line: 0, address: 0x6079e3c8 */ float *__fastcall sub_6079E3C8(float *result, int a2)
/* line: 1 */ {
/* line: 2 */   float v2; // s0
/* line: 3 */   float *v4; // r4
/* line: 4 */   float *v5; // r5
/* line: 5 */   float v6; // s2
/* line: 6 */   float v7; // s0
/* line: 7 */   bool v8; // cc
/* line: 8 */ 
/* line: 9, address: 0x6079e3d0 */   v4 = result;
/* line: 10, address: 0x6079e3d4 */   v5 = *(float **)(a2 + 64);
/* line: 11, address: 0x6079e3dc */   if ( v5 )
/* line: 12 */   {
/* line: 13, address: 0x6079e3ec */     result = (float *)(*(int (__fastcall **)(float *))(*(_DWORD *)v5 + 88))(v5);
/* line: 14, address: 0x6079e3f4 */     if ( result == (float *)1 )
/* line: 15 */     {
/* line: 16, address: 0x6079e40c */       result = (float *)(*(int (__fastcall **)(float *, float *, _DWORD))(*(_DWORD *)v4 + 1432))(v4, v5, 0);
/* line: 17, address: 0x6079e414 */       if ( result == (float *)1 )
/* line: 18 */       {
/* line: 19, address: 0x6079e41c */         ActiveCollider_getCenterX(a2);
/* line: 20, address: 0x6079e440 */         result = v4 + 3038;
/* line: 21, address: 0x6079e444 */         v6 = v4[3038];
/* line: 22, address: 0x6079e448 */         v7 = (float)(v2 - v4[27]) * *(float *)(4 * *((_DWORD *)v4 + 20) + 0xB0A898);
/* line: 23, address: 0x6079e454 */         if ( v6 < 0.0 )
/* line: 24 */         {
/* line: 25, address: 0x6079e460 */           if ( v7 < v6 )
/* line: 26, address: 0x6079e460 */             return result;
/* line: 27 */ LABEL_10:
/* line: 28, address: 0x6079e47c */           v4[3037] = v5[2];
/* line: 29, address: 0x6079e488 */           *result = v7;
/* line: 30, address: 0x6079e488 */           return result;
/* line: 31 */         }
/* line: 32, address: 0x6079e46c */         v8 = v7 <= 0.0;
/* line: 33, address: 0x6079e470 */         if ( v7 >= 0.0 )
/* line: 34, address: 0x6079e474 */           v8 = v6 <= v7;
/* line: 35, address: 0x6079e478 */         if ( !v8 )
/* line: 36, address: 0x6079e478 */           goto LABEL_10;
/* line: 37 */       }
/* line: 38 */     }
/* line: 39 */   }
/* line: 40, address: 0x6079e414 */   return result;
/* line: 41 */ }