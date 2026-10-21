/* line: 0, address: 0x60795814 */ bool sub_60795814()
/* line: 1 */ {
/* line: 2 */   int v0; // r1
/* line: 3 */   _BOOL4 result; // r0
/* line: 4 */ 
/* line: 5, address: 0x6079581c */   v0 = sub_6075ED80();
/* line: 6, address: 0x60795820 */   result = 0;
/* line: 7, address: 0x60795828 */   if ( v0 == 1 )
/* line: 8, address: 0x60795848 */     return !MEMORY[0xC99DD4] || *(_DWORD *)(MEMORY[0xC99DD4] + 764) != 3;
/* line: 9, address: 0x60795828 */   return result;
/* line: 10 */ }