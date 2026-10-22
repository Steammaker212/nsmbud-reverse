#include "nsmbudx_prelude.h"
/* line: 0, address: 0x603f62c0 */ int __fastcall sub_603F62C0(int a1)
/* line: 1 */ {
/* line: 2 */   int result; // r0
/* line: 3 */   int v3; // r0
/* line: 4 */   int v4; // r0
/* line: 5 */ 
/* line: 6, address: 0x603f62cc */   StateMgr::execute((_DWORD *)(a1 + 80));
/* line: 7, address: 0x603f62d0 */   result = *(unsigned __int8 *)(a1 + 48);
/* line: 8, address: 0x603f62d0 */   if ( *(_BYTE *)(a1 + 48) )
/* line: 9 */   {
/* line: 10, address: 0x603f62dc */     if ( *(_BYTE *)(a1 + 424) )
/* line: 11 */     {
/* line: 12, address: 0x603f62ec */       v3 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4);
/* line: 13, address: 0x603f6304 */       if ( *(_DWORD *)(v3 + 28) == 187 && sub_60793CA8(v3) == 1 )
/* line: 14, address: 0x603f6328 */         (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(*(_DWORD *)(a1 + 4) + 4) + 84))(
/* line: 15 */           *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4),
/* line: 16 */           188);
/* line: 17, address: 0x603f6330 */       v4 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4);
/* line: 18, address: 0x603f6348 */       if ( *(_DWORD *)(v4 + 28) == 189 && sub_60793CA8(v4) == 1 )
/* line: 19, address: 0x603f636c */         (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(*(_DWORD *)(a1 + 4) + 4) + 84))(
/* line: 20 */           *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4),
/* line: 21 */           190);
/* line: 22 */     }
/* line: 23, address: 0x603f6380 */     (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 4) + 4) + 148))(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 4));
/* line: 24, address: 0x603f638c */     return sub_603FDC64(a1);
/* line: 25 */   }
/* line: 26, address: 0x603f62d8 */   return result;
/* line: 27 */ }