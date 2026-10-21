/* line: 0, address: 0x602a29ac */ bool __fastcall Enemy::vfF8(int a1, int a2, int a3)
/* line: 1 */ {
/* line: 2 */   int v6; // r0
/* line: 3 */   int v7; // r1
/* line: 4 */   _BOOL4 result; // r0
/* line: 5 */   int v9; // r1
/* line: 6 */   unsigned int v10; // r0
/* line: 7 */ 
/* line: 8, address: 0x602a29bc */   v6 = *(_DWORD *)(a3 + 140);
/* line: 9, address: 0x602a29c4 */   if ( v6 == 3 )
/* line: 10 */   {
/* line: 11, address: 0x602a29d0 */     if ( (*(_BYTE *)(a2 + 148) & 8) == 0 )
/* line: 12, address: 0x602a29d0 */       return 0;
/* line: 13, address: 0x602a29ec */     v7 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a1 + 276))(a1, a2, a3);
/* line: 14, address: 0x602a29f0 */     result = 1;
/* line: 15, address: 0x602a29f8 */     if ( v7 )
/* line: 16, address: 0x602a29f8 */       return result;
/* line: 17, address: 0x602a29fc */     v6 = *(_DWORD *)(a3 + 140);
/* line: 18 */   }
/* line: 19, address: 0x602a2a04 */   if ( v6 != 7 )
/* line: 20 */   {
/* line: 21 */ LABEL_12:
/* line: 22, address: 0x602a2a78 */     if ( v6 == 5 && (*(_BYTE *)(a2 + 148) & 0x20) != 0 )
/* line: 23, address: 0x602a2aa8 */       return (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a1 + 280))(a1, a2, a3) != 0;
/* line: 24, address: 0x602a2a80 */     return 0;
/* line: 25 */   }
/* line: 26, address: 0x602a2a10 */   if ( (*(_BYTE *)(a2 + 148) & 0x80) == 0 )
/* line: 27, address: 0x602a2a10 */     return 0;
/* line: 28, address: 0x602a2a30 */   if ( !(*(int (__fastcall **)(int, int, int))(*(_DWORD *)a1 + 296))(a1, a2, a3) )
/* line: 29 */   {
/* line: 30, address: 0x602a2a64 */     v6 = *(_DWORD *)(a3 + 140);
/* line: 31, address: 0x602a2a64 */     goto LABEL_12;
/* line: 32 */   }
/* line: 33, address: 0x602a2a38 */   v9 = 0;
/* line: 34, address: 0x602a2a40 */   v10 = *(unsigned __int8 *)(*(_DWORD *)(a3 + 64) + 84);
/* line: 35, address: 0x602a2a48 */   if ( v10 < 4 )
/* line: 36, address: 0x602a2a48 */     v9 = (char)v10;
/* line: 37, address: 0x602a2a58 */   *(_WORD *)(*(_DWORD *)(a2 + 64) + 2 * v9 + 6140) = 5;
/* line: 38, address: 0x602a29f8 */   return 1;
/* line: 39 */ }