/* line: 0, address: 0x60835704 */ int __fastcall sub_60835704(int a1, int a2)
/* line: 1 */ {
/* line: 2 */   int v4; // r7
/* line: 3 */   int v5; // r0
/* line: 4 */   int v6; // r6
/* line: 5 */   int v7; // r0
/* line: 6 */   int v8; // r5
/* line: 7 */   int v9; // r2
/* line: 8 */ 
/* line: 9, address: 0x60835710 */   if ( !*(_BYTE *)(a2 + 1) )
/* line: 10 */   {
/* line: 11, address: 0x60835724 */     sub_60835934(a1, a2 + 80);
/* line: 12, address: 0x60835728 */     v4 = *(unsigned __int8 *)(a2 + 77);
/* line: 13, address: 0x6083572c */     v5 = *(_DWORD *)(a1 + 184);
/* line: 14, address: 0x60835728 */     if ( *(_BYTE *)(a2 + 77) )
/* line: 15 */     {
/* line: 16, address: 0x6083573c */       v6 = *(_DWORD *)(a2 + 40);
/* line: 17, address: 0x6083575c */       do
/* line: 18 */       {
/* line: 19, address: 0x6083574c */         MEMORY[0xCC77F8](v5, v6);
/* line: 20, address: 0x60835750 */         v5 = *(_DWORD *)(a1 + 184);
/* line: 21, address: 0x60835754 */         v6 += 8;
/* line: 22, address: 0x60835758 */         --v4;
/* line: 23 */       }
/* line: 24, address: 0x6083575c */       while ( v4 );
/* line: 25 */     }
/* line: 26, address: 0x60835770 */     MEMORY[0xCC77FC](v5, a2 + 52);
/* line: 27, address: 0x60835788 */     MEMORY[0xCC7800](*(_DWORD *)(a1 + 184), a2 + 48);
/* line: 28, address: 0x608357a0 */     MEMORY[0xCC78F0](*(_DWORD *)(a1 + 184), a2 + 56);
/* line: 29, address: 0x608357b8 */     MEMORY[0xCC780C](*(_DWORD *)(a1 + 184), a2 + 128);
/* line: 30, address: 0x608357d4 */     MEMORY[0xCC78E4](*(_DWORD *)(a1 + 184), 3, *(_DWORD *)(a2 + 136));
/* line: 31, address: 0x608357f0 */     MEMORY[0xCC78E8](*(_DWORD *)(a1 + 184), 3, *(_DWORD *)(a2 + 140));
/* line: 32, address: 0x6083580c */     MEMORY[0xCC78EC](*(_DWORD *)(a1 + 184), 2, *(_DWORD *)(a2 + 144));
/* line: 33, address: 0x60835820 */     MEMORY[0xCC78EC](*(_DWORD *)(a1 + 184), 1, *(_DWORD *)(a2 + 148));
/* line: 34, address: 0x6083582c */     if ( (*(_BYTE *)(a2 + 154) & 8) == 0 )
/* line: 35, address: 0x6083584c */       MEMORY[0xCC78C4](*(_DWORD *)(a1 + 184), 0);
/* line: 36, address: 0x60835868 */     MEMORY[0xCC7810](*(_DWORD *)(a1 + 184), *(_DWORD *)(a2 + 16), *(_DWORD *)(a2 + 32));
/* line: 37, address: 0x60835884 */     MEMORY[0xCC7814](*(_DWORD *)(a1 + 184), *(_DWORD *)(a2 + 12), *(_DWORD *)(a2 + 24));
/* line: 38, address: 0x60835890 */     if ( (*(_BYTE *)(a2 + 2) & 1) != 0 )
/* line: 39, address: 0x608358a8 */       MEMORY[0xCC784C](*(_DWORD *)(a1 + 184), *(_DWORD *)(a2 + 160));
/* line: 40 */   }
/* line: 41, address: 0x608358ac */   v7 = *(_DWORD *)(a2 + 168);
/* line: 42, address: 0x608358b4 */   if ( !v7 )
/* line: 43 */   {
/* line: 44, address: 0x608358d0 */     v8 = 0;
/* line: 45, address: 0x608358d0 */     goto LABEL_13;
/* line: 46 */   }
/* line: 47, address: 0x608358bc */   v8 = *(_DWORD *)(v7 + 8);
/* line: 48, address: 0x608358c4 */   if ( (*(_BYTE *)(v7 + 1) & 1) != 0 )
/* line: 49 */   {
/* line: 50 */ LABEL_13:
/* line: 51, address: 0x608358d4 */     v9 = sub_6083AC38(63);
/* line: 52, address: 0x608358dc */     return MEMORY[0xCC7818](*(_DWORD *)(a1 + 184), v8, v9);
/* line: 53 */   }
/* line: 54, address: 0x608358c8 */   v9 = *(_DWORD *)(v7 + 4);
/* line: 55 */   return MEMORY[0xCC7818](*(_DWORD *)(a1 + 184), v8, v9);
/* line: 56 */ }