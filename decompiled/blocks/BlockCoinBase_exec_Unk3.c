#include "nsmbudx_prelude.h"

/* ---- addr: 0x605b6c54 */ int __fastcall BlockCoinBase_executeState_BlockCoinUnk3(_DWORD *a1)
/* line: 1 */ {
/* line: 2 */   _DWORD *v2; // r0
/* line: 3 */   int v3; // r1
/* line: 4 */   int v4; // t1
/* line: 5 */   int v5; // r1
/* line: 6 */ 
/* line: 7, address: 0x605b6c60 */   v4 = a1[1704];
/* line: 8, address: 0x605b6c60 */   v2 = a1 + 1704;
/* line: 9, address: 0x605b6c60 */   v3 = v4;
/* line: 10, address: 0x605b6c74 */   if ( !v4 || (v5 = v3 - 1, (*v2 = v5) == 0) )
/* line: 11, address: 0x605b6c84 */     (*(void (__fastcall **)(_DWORD *))(*a1 + 228))(a1);
/* line: 12 */   return (*(int (__fastcall **)(_DWORD *))(*a1 + 244))(a1);
/* line: 13 */ }