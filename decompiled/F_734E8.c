/* line: 0, address: 0x607734e8 */ int __fastcall sub_607734E8(unsigned __int8 *a1, int a2, int a3, int a4)
/* line: 1 */ {
/* line: 2 */   int result; // r0
/* line: 3 */   int v8; // r2
/* line: 4 */ 
/* line: 5, address: 0x60773508 */   if ( a3 != 1 || (result = a1[1240], (result & 0x10) == 0) )
/* line: 6 */   {
/* line: 7, address: 0x6077350c */     result = a1[1204];
/* line: 8, address: 0x60773514 */     if ( (result & 0x40) == 0 )
/* line: 9 */     {
/* line: 10, address: 0x60773524 */       result = sub_6040E538(MEMORY[0xC9A684]);
/* line: 11, address: 0x6077352c */       if ( !result )
/* line: 12 */       {
/* line: 13, address: 0x60773544 */         if ( a1[84] == 255 )
/* line: 14, address: 0x60773548 */           v8 = 0;
/* line: 15 */         else
/* line: 16, address: 0x60773544 */           v8 = a4;
/* line: 17, address: 0x60773550 */         return sub_60814010(a1 + 840, a2, v8);
/* line: 18 */       }
/* line: 19 */     }
/* line: 20 */   }
/* line: 21, address: 0x60773514 */   return result;
/* line: 22 */ }