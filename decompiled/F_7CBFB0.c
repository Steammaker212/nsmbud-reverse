#include "nsmbudx_prelude.h"
/* line: 0, address: 0x607cbfb0 */ int __fastcall sub_607CBFB0(int a1)
/* line: 1 */ {
/* line: 2 */   int result; // r0
/* line: 3 */   _DWORD *v3; // r6
/* line: 4 */   int v4; // r5
/* line: 5 */   _BYTE v5[8]; // [sp+0h] [bp-8h] BYREF
/* line: 6 */ 
/* line: 7, address: 0x607cbfbc */   result = *(unsigned __int8 *)(a1 + 1204);
/* line: 8, address: 0x607cbfc4 */   if ( (result & 2) != 0 )
/* line: 9 */   {
/* line: 10, address: 0x607cbfcc */     sub_607D1BC0(a1);
/* line: 11, address: 0x607cbfd4 */     if ( *(_BYTE *)(a1 + 11492) )
/* line: 12 */     {
/* line: 13, address: 0x607cbfec */       sub_607D2314(a1, a1 + 11484);
/* line: 14, address: 0x607cbff4 */       v3 = (_DWORD *)(a1 + 11368);
/* line: 15 */     }
/* line: 16 */     else
/* line: 17 */     {
/* line: 18, address: 0x607cc028 */       v3 = (_DWORD *)(a1 + 11368);
/* line: 19, address: 0x607cc028 */       v4 = *(_DWORD *)(a1 + 11368);
/* line: 20, address: 0x607cc048 */       if ( _cxa_guard_acquire_0(13388656) )
/* line: 21 */       {
/* line: 22, address: 0x607cc068 */         MEMORY[0xCC4B6C] = 12729944;
/* line: 23, address: 0x607cc074 */         _cxa_guard_release_0(13388656);
/* line: 24 */       }
/* line: 25, address: 0x607cc0b0 */       if ( v4 && (*(int (__fastcall **)(int, int))(*(_DWORD *)v4 + 8))(v4, 13388652) == 1 && sub_607D6144(v4, v5) == 1 )
/* line: 26, address: 0x607cc0bc */         sub_607D2314(a1, v5);
/* line: 27 */     }
/* line: 28, address: 0x607cbffc */     sub_607D19F8(a1);
/* line: 29, address: 0x607cc004 */     sub_60760908(a1);
/* line: 30, address: 0x607cc00c */     sub_60794210(*v3);
/* line: 31, address: 0x607cc014 */     return sub_6076DE34(a1);
/* line: 32 */   }
/* line: 33, address: 0x607cc01c */   return result;
/* line: 34 */ }