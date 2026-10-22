#include "nsmbudx_prelude.h"
/* line: 0, address: 0x60773630 */ int __fastcall sub_60773630(int a1, int a2, int a3)
/* line: 1 */ {
/* line: 2 */   int result; // r0
/* line: 3 */ 
/* line: 4, address: 0x6077364c */   if ( a3 != 1 || (result = *(unsigned __int8 *)(a1 + 1240), (result & 0x10) == 0) )
/* line: 5 */   {
/* line: 6, address: 0x60773650 */     result = *(unsigned __int8 *)(a1 + 1204);
/* line: 7, address: 0x60773658 */     if ( (result & 0x40) == 0 )
/* line: 8 */     {
/* line: 9, address: 0x60773668 */       result = sub_6040E538(MEMORY[0xC9A684]);
/* line: 10, address: 0x60773670 */       if ( !result )
/* line: 11, address: 0x60773688 */         return sub_60814A1C(a1 + 840, a2, 0);
/* line: 12 */     }
/* line: 13 */   }
/* line: 14, address: 0x60773658 */   return result;
/* line: 15 */ }