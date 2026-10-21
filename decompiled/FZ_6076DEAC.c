/* line: 0, address: 0x6076deac */ bool __fastcall sub_6076DEAC(int a1)
/* line: 1 */ {
/* line: 2 */   _BOOL4 result; // r0
/* line: 3 */ 
/* line: 4, address: 0x6076dec4 */   if ( *(_BYTE *)(MEMORY[0xC9A1F0] + 6519) )
/* line: 5 */   {
/* line: 6, address: 0x6076dee0 */     sub_6040B2B4(MEMORY[0xC9A1F0], *(_DWORD *)(MEMORY[0xC99DD4] + 724));
/* line: 7, address: 0x6076df00 */     result = *(unsigned __int8 *)(MEMORY[0xC9A1F0] + 6559) == 2;
/* line: 8 */   }
/* line: 9 */   else
/* line: 10 */   {
/* line: 11, address: 0x6076df08 */     result = 0;
/* line: 12 */   }
/* line: 13, address: 0x6076df10 */   *(_BYTE *)(a1 + 11352) = result;
/* line: 14, address: 0x6076df14 */   return result;
/* line: 15 */ }