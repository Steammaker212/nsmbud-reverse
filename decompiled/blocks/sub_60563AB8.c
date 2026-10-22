#include "nsmbudx_prelude.h"

/* ---- addr: 0x60563ab8 */ int __fastcall sub_60563AB8(_DWORD *a1)
/* line: 1 */ {
/* line: 2 */   int result; // r0
/* line: 3 */   int v3; // r5
/* line: 4 */   int v4; // r6
/* line: 5 */   unsigned int v5; // r0
/* line: 6 */   _DWORD v6[2]; // [sp+0h] [bp-8h] BYREF
/* line: 7 */ 
/* line: 8, address: 0x60563ac8 */   result = a1[1842];
/* line: 9, address: 0x60563ad0 */   if ( result == 1 )
/* line: 10 */   {
/* line: 11, address: 0x60563ae0 */     result = (*(int (__fastcall **)(_DWORD *))(*a1 + 360))(a1);
/* line: 12, address: 0x60563ae8 */     if ( result )
/* line: 13 */     {
/* line: 14, address: 0x60563af4 */       v3 = a1[1606];
/* line: 15, address: 0x60563b00 */       v4 = a1[1607];
/* line: 16, address: 0x60563b0c */       v5 = (*(int (__fastcall **)(_DWORD *))(*a1 + 360))(a1);
/* line: 17, address: 0x60563b1c */       v6[1] = v4 | HIWORD(v5);
/* line: 18, address: 0x60563b24 */       v6[0] = v3 & 0xFF00FFFF | (v5 << 16);
/* line: 19, address: 0x60563b30 */       return sub_601604FC(a1 + 1530, v6);
/* line: 20 */     }
/* line: 21 */   }
/* line: 22, address: 0x60563b38 */   return result;
/* line: 23 */ }