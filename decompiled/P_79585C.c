#include "nsmbudx_prelude.h"
/* line: 0, address: 0x6079585c */ int __fastcall sub_6079585C(int a1)
/* line: 1 */ {
/* line: 2 */   int v2; // r0
/* line: 3 */ 
/* line: 4, address: 0x60795864 */   v2 = *(_DWORD *)(a1 + 1224);
/* line: 5, address: 0x6079586c */   if ( (v2 & 0x200000) != 0 )
/* line: 6 */   {
/* line: 7, address: 0x60795894 */     *(_DWORD *)(a1 + 1224) = v2 & 0xFFDFFFFF;
/* line: 8 */   }
/* line: 9 */   else
/* line: 10 */   {
/* line: 11, address: 0x60795878 */     sub_607949E8(a1 + 11356);
/* line: 12, address: 0x60795884 */     sub_60750560(a1 + 10636);
/* line: 13 */   }
/* line: 14, address: 0x6079588c */   return 1;
/* line: 15 */ }