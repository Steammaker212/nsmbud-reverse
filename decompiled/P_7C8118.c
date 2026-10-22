#include "nsmbudx_prelude.h"
/* line: 0, address: 0x607c8118 */ int __fastcall sub_607C8118(int a1)
/* line: 1 */ {
/* line: 2 */   int v1; // r2
/* line: 3 */   int v2; // r2
/* line: 4 */ 
/* line: 5, address: 0x607c8120 */   v1 = *(_DWORD *)(a1 + 15096);
/* line: 6, address: 0x607c8134 */   if ( !v1 || (v2 = v1 - 1, (*(_DWORD *)(a1 + 15096) = v2) == 0) )
/* line: 7 */   {
/* line: 8, address: 0x607c8140 */     *(_DWORD *)(a1 + 256) = 0;
/* line: 9, address: 0x607c8144 */     *(_DWORD *)(a1 + 7204) = 0;
/* line: 10 */   }
/* line: 11 */   return sub_607B3698(a1);
/* line: 12 */ }