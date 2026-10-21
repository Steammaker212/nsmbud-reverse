/* line: 0, address: 0x607958a0 */ int __fastcall sub_607958A0(int a1)
/* line: 1 */ {
/* line: 2 */   int v2; // r1
/* line: 3 */   int result; // r0
/* line: 4 */ 
/* line: 5, address: 0x607958ac */   v2 = sub_6075E8F8();
/* line: 6, address: 0x607958b0 */   result = 0;
/* line: 7, address: 0x607958d8 */   if ( v2 == 1 && (!MEMORY[0xC99DD4] || *(_DWORD *)(MEMORY[0xC99DD4] + 764) != 3) )
/* line: 8 */   {
/* line: 9, address: 0x607958e0 */     sub_607C1E18(a1);
/* line: 10, address: 0x607958e4 */     return 1;
/* line: 11 */   }
/* line: 12, address: 0x607958d8 */   return result;
/* line: 13 */ }