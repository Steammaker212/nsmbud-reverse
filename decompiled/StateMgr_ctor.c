#include "nsmbudx_prelude.h"
/* line: 0, address: 0x60818168 */ _DWORD *__fastcall StateMgr_ctor(_DWORD *result, int a2, int a3)
/* line: 1 */ {
/* line: 2, address: 0x60818168 */   *result = a2;
/* line: 3, address: 0x60818170 */   result[1] = 0;
/* line: 4, address: 0x60818174 */   result[2] = 0;
/* line: 5, address: 0x60818180 */   result[3] = 12755100;
/* line: 6, address: 0x6081818c */   if ( *(_DWORD *)(a3 + 4) != -1 )
/* line: 7, address: 0x6081818c */     result[1] = a3;
/* line: 8, address: 0x60818190 */   return result;
/* line: 9 */ }