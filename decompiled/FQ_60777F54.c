#include "nsmbudx_prelude.h"
/* line: 0, address: 0x60777f54 */ int __fastcall sub_60777F54(int a1, int a2)
/* line: 1 */ {
/* line: 2 */   int v2; // r2
/* line: 3 */   int result; // r0
/* line: 4 */   int v4; // r3
/* line: 5 */ 
/* line: 6, address: 0x60777f54 */   v2 = *(_DWORD *)(a1 + 468);
/* line: 7, address: 0x60777f60 */   result = MEMORY[0xC995D0];
/* line: 8, address: 0x60777f64 */   v4 = *(_DWORD *)(MEMORY[0xC995D0] + 32);
/* line: 9, address: 0x60777f8c */   if ( (!v4 || v4 != v2) && !*(_DWORD *)(v2 + 20) && a2 && !*(_DWORD *)(v2 + 16) )
/* line: 10, address: 0x60777fa4 */     return sub_603E552C(MEMORY[0xC995D0], *(_DWORD *)(a2 + 11952));
/* line: 11 */   return result;
/* line: 12 */ }