/* line: 0, address: 0x607a293c */ int __fastcall sub_607A293C(int a1)
/* line: 1 */ {
/* line: 2 */   int v2; // r5
/* line: 3 */   int v3; // r1
/* line: 4 */   int v4; // r2
/* line: 5 */   int v5; // r3
/* line: 6 */   int v7; // r0
/* line: 7 */   int v8; // r1
/* line: 8 */   int v9; // r5
/* line: 9 */   int v10; // r0
/* line: 10 */   bool v11; // zf
/* line: 11 */   int v12; // r0
/* line: 12 */   void (__fastcall *v13)(int, int, _DWORD); // r3
/* line: 13 */   int v14; // r1
/* line: 14 */   float v15; // s0
/* line: 15 */ 
/* line: 16, address: 0x607a2948 */   v2 = a1 + 11956;
/* line: 17, address: 0x607a2950 */   sub_6074EED0(a1 + 11956);
/* line: 18, address: 0x607a295c */   if ( !*(_DWORD *)(a1 + 11988) )
/* line: 19, address: 0x607a2994 */     return 0;
/* line: 20, address: 0x607a2970 */   if ( (*(_BYTE *)(a1 + 1219) & 2) == 0 )
/* line: 21 */   {
/* line: 22, address: 0x607a2980 */     if ( sub_6074F0C4(v2) == 1 )
/* line: 23 */     {
/* line: 24, address: 0x607a2988 */       sub_607A2AF8(a1, v3, v4, v5);
/* line: 25 */     }
/* line: 26 */     else
/* line: 27 */     {
/* line: 28, address: 0x607a29a8 */       *(_DWORD *)(a1 + 12000) = 0;
/* line: 29, address: 0x607a29bc */       if ( (*(_BYTE *)(a1 + 1213) & 0x40) != 0 )
/* line: 30, address: 0x607a29c8 */         *(_DWORD *)(a1 + 12000) = *(_DWORD *)(a1 + 11972);
/* line: 31, address: 0x607a29dc */       v7 = *(_DWORD *)(a1 + 11984);
/* line: 32, address: 0x607a29e0 */       v8 = *(_DWORD *)(a1 + 11980);
/* line: 33, address: 0x607a29e8 */       *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 11976);
/* line: 34, address: 0x607a29ec */       *(_DWORD *)(a1 + 148) = v8;
/* line: 35, address: 0x607a29f0 */       *(_DWORD *)(a1 + 152) = v7;
/* line: 36, address: 0x607a2a00 */       v9 = a1 + 11368;
/* line: 37, address: 0x607a2a04 */       sub_6078E608(*(_DWORD *)(a1 + 11368));
/* line: 38, address: 0x607a2a08 */       v10 = *(_DWORD *)(a1 + 11964);
/* line: 39, address: 0x607a2a10 */       if ( v10 == 6 )
/* line: 40 */       {
/* line: 41, address: 0x607a2a30 */         v12 = *(_DWORD *)v9;
/* line: 42, address: 0x607a2a38 */         v13 = *(void (__fastcall **)(int, int, _DWORD))(**(_DWORD **)v9 + 176);
/* line: 43, address: 0x607a2a3c */         v14 = 3;
/* line: 44 */       }
/* line: 45 */       else
/* line: 46 */       {
/* line: 47, address: 0x607a2a14 */         v11 = v10 == 2;
/* line: 48, address: 0x607a2a18 */         v12 = *(_DWORD *)v9;
/* line: 49, address: 0x607a2a20 */         v13 = *(void (__fastcall **)(int, int, _DWORD))(**(_DWORD **)v9 + 176);
/* line: 50, address: 0x607a2a24 */         if ( v11 )
/* line: 51, address: 0x607a2a28 */           v14 = 2;
/* line: 52 */         else
/* line: 53, address: 0x607a2a24 */           v14 = 1;
/* line: 54 */       }
/* line: 55, address: 0x607a2a44 */       v13(v12, v14, 0);
/* line: 56 */     }
/* line: 57 */   }
/* line: 58, address: 0x607a2a54 */   if ( (*(_BYTE *)(a1 + 6900) & 1) != 0 )
/* line: 59 */   {
/* line: 60, address: 0x607a2a60 */     v15 = *(float *)(a1 + 100) + *(float *)(a1 + 124);
/* line: 61, address: 0x607a2a64 */     *(float *)(a1 + 124) = v15;
/* line: 62, address: 0x607a2a70 */     *(float *)(a1 + 112) = v15 + *(float *)(a1 + 112);
/* line: 63 */   }
/* line: 64, address: 0x607a2a7c */   sub_60799BA0(a1, 0);
/* line: 65, address: 0x607a2a8c */   sub_607612CC(a1, 1);
/* line: 66, address: 0x607a2a98 */   if ( (*(_BYTE *)(a1 + 1217) & 0x80) != 0 )
/* line: 67, address: 0x607a2aa0 */     sub_6079EA38(a1);
/* line: 68, address: 0x607a2aac */   if ( *(_DWORD *)(a1 + 11988) == 2 )
/* line: 69 */   {
/* line: 70, address: 0x607a2ab8 */     if ( (*(_BYTE *)(a1 + 1219) & 2) != 0 )
/* line: 71, address: 0x607a2acc */       sub_6078E608(*(_DWORD *)(a1 + 11368));
/* line: 72, address: 0x607a2ad8 */     *(_DWORD *)(a1 + 9576) = 8;
/* line: 73, address: 0x607a2aec */     (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 628))(a1, 2);
/* line: 74 */   }
/* line: 75, address: 0x607a2998 */   return 1;
/* line: 76 */ }