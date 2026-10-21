/* line: 0, address: 0x60158de8 */ int __fastcall ActiveCollider::init(int a1, int a2, int *a3, int a4)
/* line: 1 */ {
/* line: 2 */   _DWORD *v5; // r0
/* line: 3 */   _DWORD *v6; // r2
/* line: 4 */   int v7; // r4
/* line: 5 */   int v8; // r5
/* line: 6 */   int v9; // r6
/* line: 7 */   int v10; // r7
/* line: 8 */   int v11; // r12
/* line: 9 */   int v12; // r5
/* line: 10 */   int v13; // r6
/* line: 11 */   int v14; // r7
/* line: 12 */   int v15; // r12
/* line: 13 */   int v16; // lr
/* line: 14 */   int v17; // r5
/* line: 15 */   int result; // r0
/* line: 16 */ 
/* line: 17, address: 0x60158df0 */   *(_DWORD *)(a1 + 64) = a2;
/* line: 18, address: 0x60158df4 */   v5 = (_DWORD *)(a1 + 116);
/* line: 19, address: 0x60158df8 */   v7 = *a3;
/* line: 20, address: 0x60158df8 */   v8 = a3[1];
/* line: 21, address: 0x60158df8 */   v9 = a3[2];
/* line: 22, address: 0x60158df8 */   v10 = a3[3];
/* line: 23, address: 0x60158df8 */   v11 = a3[4];
/* line: 24, address: 0x60158df8 */   v6 = a3 + 5;
/* line: 25, address: 0x60158dfc */   *v5 = v7;
/* line: 26, address: 0x60158dfc */   v5[1] = v8;
/* line: 27, address: 0x60158dfc */   v5[2] = v9;
/* line: 28, address: 0x60158dfc */   v5[3] = v10;
/* line: 29, address: 0x60158dfc */   v5[4] = v11;
/* line: 30, address: 0x60158dfc */   v5 += 5;
/* line: 31, address: 0x60158e00 */   v12 = v6[1];
/* line: 32, address: 0x60158e00 */   v13 = v6[2];
/* line: 33, address: 0x60158e00 */   v14 = v6[3];
/* line: 34, address: 0x60158e00 */   v15 = v6[4];
/* line: 35, address: 0x60158e00 */   v16 = v6[5];
/* line: 36, address: 0x60158e04 */   *v5 = *v6;
/* line: 37, address: 0x60158e04 */   v5[1] = v12;
/* line: 38, address: 0x60158e04 */   v5[2] = v13;
/* line: 39, address: 0x60158e04 */   v5[3] = v14;
/* line: 40, address: 0x60158e04 */   v5[4] = v15;
/* line: 41, address: 0x60158e04 */   v5[5] = v16;
/* line: 42, address: 0x60158e0c */   *(_BYTE *)(a1 + 110) = 0;
/* line: 43, address: 0x60158e10 */   *(_DWORD *)(a1 + 112) = a4;
/* line: 44, address: 0x60158e18 */   *(_BYTE *)(a1 + 108) = *(_BYTE *)(a2 + 87);
/* line: 45, address: 0x60158e24 */   *(_BYTE *)(a1 + 109) = *(_BYTE *)(a2 + 86);
/* line: 46, address: 0x60158e30 */   v17 = MEMORY[0xC88234];
/* line: 47, address: 0x60158e54 */   if ( ActiveColliderMgr_isInActiveList(MEMORY[0xC88234], a1)
/* line: 48 */     || (result = ActiveColliderMgr_isInCreateList(v17, a1), result == 1) )
/* line: 49 */   {
/* line: 50, address: 0x60158e60 */     ActiveColldierMgr_removeFromActiveList(v17, a1);
/* line: 51, address: 0x60158e6c */     ActiveColldierMgr_removeFromCreateList(v17, a1);
/* line: 52, address: 0x60158e78 */     ActiveColldierMgr_removeFromList3(v17, a1);
/* line: 53, address: 0x60158e84 */     result = ActiveColliderMgr_isInActiveList(v17, a1);
/* line: 54, address: 0x60158e8c */     if ( !result )
/* line: 55 */     {
/* line: 56, address: 0x60158e98 */       result = ActiveColliderMgr_isInCreateList(v17, a1);
/* line: 57, address: 0x60158ea0 */       if ( !result )
/* line: 58, address: 0x60158eb4 */         return ActiveColliderMgr_addToCreateList(v17, a1);
/* line: 59 */     }
/* line: 60 */   }
/* line: 61, address: 0x60158e8c */   return result;
/* line: 62 */ }