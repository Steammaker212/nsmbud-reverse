/* line: 0, address: 0x607a09e8 */ int __fastcall sub_607A09E8(int a1)
/* line: 1 */ {
/* line: 2 */   int v2; // r1
/* line: 3 */   int result; // r0
/* line: 4 */   int v4; // r1
/* line: 5 */ 
/* line: 6, address: 0x607a09f4 */   v2 = *(_DWORD *)(a1 + 9580);
/* line: 7, address: 0x607a09f8 */   result = 0;
/* line: 8, address: 0x607a0a00 */   if ( !v2 )
/* line: 9 */   {
/* line: 10, address: 0x607a0a0c */     v4 = sub_60766708(a1);
/* line: 11, address: 0x607a0a10 */     result = 1;
/* line: 12, address: 0x607a0a30 */     if ( !v4 && !*(_DWORD *)(a1 + 9572) && !*(_DWORD *)(a1 + 9576) )
/* line: 13, address: 0x607a0a40 */       return *(_BYTE *)(a1 + 1205) & 1;
/* line: 14 */   }
/* line: 15, address: 0x607a0a38 */   return result;
/* line: 16 */ }