#include "nsmbudx_prelude.h"
/* line: 0, address: 0x607cde30 */ int __fastcall sub_607CDE30(int a1, int a2)
/* line: 1 */ {
/* line: 2 */   int v4; // r5
/* line: 3 */   int result; // r0
/* line: 4 */ 
/* line: 5, address: 0x607cde40 */   v4 = *(_DWORD *)(a1 + 64);
/* line: 6, address: 0x607cde5c */   result = _cxa_guard_acquire_0(13087752);
/* line: 7, address: 0x607cde64 */   if ( result )
/* line: 8 */   {
/* line: 9, address: 0x607cde7c */     MEMORY[0xC7B404] = 12320944;
/* line: 10, address: 0x607cde88 */     result = _cxa_guard_release_0(13087752);
/* line: 11 */   }
/* line: 12, address: 0x607cde90 */   if ( v4 )
/* line: 13 */   {
/* line: 14, address: 0x607cdea8 */     result = (**(int (__fastcall ***)(int, int))v4)(v4, 13087748);
/* line: 15, address: 0x607cdeb0 */     if ( result == 1 )
/* line: 16 */     {
/* line: 17, address: 0x607cdeb8 */       result = *(_DWORD *)(v4 + 11360);
/* line: 18, address: 0x607cdec0 */       if ( result )
/* line: 19 */       {
/* line: 20, address: 0x607cdec8 */         result = sub_60766708(v4);
/* line: 21, address: 0x607cded0 */         if ( !result )
/* line: 22 */         {
/* line: 23, address: 0x607cded4 */           result = *(_DWORD *)(a1 + 140);
/* line: 24, address: 0x607cdedc */           if ( result == 15 )
/* line: 25 */           {
/* line: 26, address: 0x607cdef0 */             if ( sub_607D1A3C(v4, a2) == 1 )
/* line: 27 */             {
/* line: 28 */ LABEL_12:
/* line: 29, address: 0x607cdf14 */               result = *(unsigned __int8 *)(a2 + 110) | 2;
/* line: 30, address: 0x607cdf1c */               *(_BYTE *)(a2 + 110) = result;
/* line: 31, address: 0x607cdf1c */               return result;
/* line: 32 */             }
/* line: 33, address: 0x607cdef4 */             result = *(_DWORD *)(a1 + 140);
/* line: 34 */           }
/* line: 35, address: 0x607cdefc */           if ( result == 16 )
/* line: 36 */           {
/* line: 37, address: 0x607cdf08 */             result = sub_607D2194(v4, *(_DWORD *)(a2 + 64));
/* line: 38, address: 0x607cdf10 */             if ( result == 1 )
/* line: 39, address: 0x607cdf10 */               goto LABEL_12;
/* line: 40 */           }
/* line: 41 */         }
/* line: 42 */       }
/* line: 43 */     }
/* line: 44 */   }
/* line: 45, address: 0x607cdf10 */   return result;
/* line: 46 */ }