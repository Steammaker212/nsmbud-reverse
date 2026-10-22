/* line: 0, address: 0x605641b4 */ unsigned int __fastcall sub_605641B4(int a1)
/* line: 1 */ {
/* line: 2 */   int v1; // s0
/* line: 3 */   float v2; // s1
/* line: 4 */   float v3; // s2
/* line: 5 */   unsigned int result; // r0
/* line: 6 */   unsigned int *v6; // r6
/* line: 7 */   int v7; // r5
/* line: 8 */   float v8; // s0
/* line: 9 */   float *v9; // r2
/* line: 10 */   float *v10; // r2
/* line: 11 */   int v11; // [sp+4h] [bp-Ch] BYREF
/* line: 12 */   float v12; // [sp+8h] [bp-8h]
/* line: 13 */   float v13; // [sp+Ch] [bp-4h]
/* line: 14 */ 
/* line: 15, address: 0x605641d4 */   *(_DWORD *)(a1 + 6860) = *(char *)(a1 + 6850);
/* line: 16, address: 0x605641dc */   v6 = (unsigned int *)(a1 + 6856);
/* line: 17, address: 0x605641dc */   result = *(_DWORD *)(a1 + 6856);
/* line: 18, address: 0x605641f8 */   if ( result <= 0x18 && ((1 << result) & 0x1883080) != 0 )
/* line: 19 */   {
/* line: 20, address: 0x60564210 */     (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 368))(a1);
/* line: 21, address: 0x60564218 */     v11 = v1;
/* line: 22, address: 0x6056421c */     v12 = v2;
/* line: 23, address: 0x60564220 */     v13 = v3;
/* line: 24, address: 0x60564224 */     if ( *(_DWORD *)(a1 + 7304) )
/* line: 25, address: 0x60564234 */       *(_DWORD *)(a1 + 6872) = 1;
/* line: 26, address: 0x60564248 */     v7 = sub_60465D48(MEMORY[0xC9D3E4]);
/* line: 27, address: 0x6056424c */     result = *v6;
/* line: 28, address: 0x60564254 */     if ( *v6 <= 0x18 )
/* line: 29 */     {
/* line: 30, address: 0x60564268 */       if ( ((1 << result) & 0x1803000) != 0 )
/* line: 31 */       {
/* line: 32, address: 0x60564278 */         if ( !v7 || result != 24 )
/* line: 33, address: 0x60564278 */           goto LABEL_9;
/* line: 34, address: 0x60564278 */         goto LABEL_24;
/* line: 35 */       }
/* line: 36, address: 0x605642b8 */       if ( result != 7 )
/* line: 37 */       {
/* line: 38, address: 0x605642c0 */         if ( result != 19 )
/* line: 39, address: 0x605642c0 */           return result;
/* line: 40, address: 0x605642d0 */         if ( sub_6078A168(MEMORY[0xCC436C]) )
/* line: 41 */         {
/* line: 42, address: 0x605642e0 */           if ( v7 )
/* line: 43, address: 0x605642e4 */             result = 22;
/* line: 44 */           else
/* line: 45, address: 0x605642e0 */             result = 23;
/* line: 46, address: 0x605642e0 */           goto LABEL_25;
/* line: 47 */         }
/* line: 48, address: 0x6056434c */         if ( !v7 )
/* line: 49 */         {
/* line: 50 */ LABEL_9:
/* line: 51, address: 0x6056427c */           v8 = *(float *)(a1 + 7352);
/* line: 52 */ LABEL_10:
/* line: 53, address: 0x60564288 */           v12 = v8 + v2;
/* line: 54, address: 0x605642b0 */           return sub_605B5BDC((_DWORD *)a1, &v11);
/* line: 55 */         }
/* line: 56 */ LABEL_24:
/* line: 57, address: 0x60564350 */         result = 3;
/* line: 58 */ LABEL_25:
/* line: 59, address: 0x60564354 */         *v6 = result;
/* line: 60, address: 0x60564354 */         return result;
/* line: 61 */       }
/* line: 62, address: 0x60564308 */       if ( sub_60465D70(MEMORY[0xC9D3E4], *(_DWORD *)(a1 + 6860)) != 1 )
/* line: 63, address: 0x60564308 */         goto LABEL_24;
/* line: 64, address: 0x60564318 */       if ( !v7 || *(_DWORD *)(a1 + 7368) )
/* line: 65 */       {
/* line: 66, address: 0x60564334 */         v9 = (float *)(a1 + 7352);
/* line: 67, address: 0x6056433c */         if ( *(_BYTE *)(a1 + 6846) == 2 )
/* line: 68, address: 0x6056433c */           v9 = (float *)(a1 + 7356);
/* line: 69, address: 0x60564340 */         v8 = *v9;
/* line: 70, address: 0x60564344 */         goto LABEL_10;
/* line: 71 */       }
/* line: 72, address: 0x6056436c */       v10 = (float *)(a1 + 7360);
/* line: 73, address: 0x60564380 */       if ( *(_BYTE *)(a1 + 6846) == 2 )
/* line: 74, address: 0x60564380 */         v10 = (float *)(a1 + 7364);
/* line: 75, address: 0x60564390 */       v12 = *v10 + v2;
/* line: 76, address: 0x605643a4 */       return ((int (__fastcall *)(int, int *, _DWORD, int, _DWORD))sub_605B6238)(a1, &v11, *(_DWORD *)(a1 + 6852), 1, 0);
/* line: 77 */     }
/* line: 78 */   }
/* line: 79, address: 0x60564360 */   return result;
/* line: 80 */ }