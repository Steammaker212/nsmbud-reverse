/* line: 0, address: 0x607a26b8 */ int __fastcall sub_607A26B8(int a1, int a2)
/* line: 1 */ {
/* line: 2 */   int result; // r0
/* line: 3 */ 
/* line: 4, address: 0x607a26cc */   if ( a2 != 1 || !sub_6079DF08(a1) )
/* line: 5, address: 0x607a26dc */     sub_6079EA38(a1);
/* line: 6, address: 0x607a26e0 */   result = *(unsigned __int8 *)(a1 + 1234);
/* line: 7, address: 0x607a26e8 */   if ( (result & 0x10) != 0 )
/* line: 8, address: 0x607a26f4 */     return sub_607B6AE0(a1);
/* line: 9, address: 0x607a26e8 */   return result;
/* line: 10 */ }