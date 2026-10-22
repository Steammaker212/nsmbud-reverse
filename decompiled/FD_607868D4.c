#include "nsmbudx_prelude.h"
/* line: 0, address: 0x607868d4 */ int __fastcall sub_607868D4(int a1, _DWORD *a2)
/* line: 1 */ {
/* line: 2 */   int v2; // r2
/* line: 3 */   int result; // r0
/* line: 4 */ 
/* line: 5, address: 0x607868d4 */   v2 = *(_DWORD *)(a1 + 8);
/* line: 6, address: 0x607868dc */   if ( (v2 & 0x80) != 0 )
/* line: 7 */   {
/* line: 8, address: 0x6078691c */     result = 1;
/* line: 9, address: 0x60786920 */     if ( a2 )
/* line: 10, address: 0x60786924 */       *a2 = 0;
/* line: 11 */   }
/* line: 12 */   else
/* line: 13 */   {
/* line: 14, address: 0x607868e0 */     result = 0;
/* line: 15, address: 0x607868fc */     if ( (v2 & 0x40) != 0 && !*(_BYTE *)(MEMORY[0xC9A1F0] + 6521) )
/* line: 16 */     {
/* line: 17, address: 0x60786908 */       result = 1;
/* line: 18, address: 0x60786910 */       if ( a2 )
/* line: 19, address: 0x60786910 */         *a2 = 1;
/* line: 20 */     }
/* line: 21 */   }
/* line: 22, address: 0x607868e8 */   return result;
/* line: 23 */ }