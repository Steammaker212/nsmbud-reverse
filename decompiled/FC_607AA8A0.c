#include "nsmbudx_prelude.h"
/* line: 0, address: 0x607aa8a0 */ int __fastcall sub_607AA8A0(_DWORD *a1, int a2)
/* line: 1 */ {
/* line: 2 */   int v3; // r0
/* line: 3 */   _DWORD *v4; // r2
/* line: 4 */ 
/* line: 5, address: 0x607aa8b4 */   v3 = (*(int (__fastcall **)(_DWORD *, _DWORD))(*a1 + 156))(a1, a1[330]);
/* line: 6, address: 0x607aa8c4 */   v4 = &unk_60B0CD90;
/* line: 7, address: 0x607aa8c8 */   if ( a2 )
/* line: 8, address: 0x607aa8c8 */     v4 = &unk_60B0CD9C;
/* line: 9, address: 0x607aa8d0 */   return v4[v3];
/* line: 10 */ }