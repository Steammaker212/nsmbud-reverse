#include "nsmbudx_prelude.h"
/* line: 0, address: 0x6046ab90 */ int __fastcall sub_6046AB90(Actor *a1)
/* line: 1 */ {
/* line: 2 */   int v2; // r1
/* line: 3 */   int result; // r0
/* line: 4 */   int v4; // [sp+4h] [bp-4h] BYREF
/* line: 5 */ 
/* line: 6, address: 0x6046abac */   v4 = 2;
/* line: 7, address: 0x6046abb8 */   v2 = sub_60463998(a1, &v4, 9, 1);
/* line: 8, address: 0x6046abbc */   result = 0;
/* line: 9, address: 0x6046abc4 */   if ( v2 == 1 )
/* line: 10, address: 0x6046abd8 */     return sub_60463CD0(a1, v4, *((_DWORD *)a1 + 1552));
/* line: 11, address: 0x6046abe0 */   return result;
/* line: 12 */ }