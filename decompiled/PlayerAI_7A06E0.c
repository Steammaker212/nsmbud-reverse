#include "nsmbudx_prelude.h"
/* line: 0, address: 0x607a06e0 */ int __fastcall sub_607A06E0(int a1, _DWORD *a2)
/* line: 1 */ {
/* line: 2 */   _DWORD *v4; // r7
/* line: 3 */   _DWORD *v5; // r6
/* line: 4 */   int result; // r0
/* line: 5 */   int v7; // r7
/* line: 6 */ 
/* line: 7, address: 0x607a06f0 */   v4 = *(_DWORD **)(a1 + 64);
/* line: 8, address: 0x607a070c */   if ( _cxa_guard_acquire_0(13087604) )
/* line: 9 */   {
/* line: 10, address: 0x607a072c */     MEMORY[0xC7B370] = 12320944;
/* line: 11, address: 0x607a0738 */     _cxa_guard_release_0(13087604);
/* line: 12 */   }
/* line: 13, address: 0x607a0740 */   if ( v4 )
/* line: 14 */   {
/* line: 15, address: 0x607a075c */     v5 = (_DWORD *)(*(int (__fastcall **)(_DWORD *, int))*v4)(v4, 13087600);
/* line: 16, address: 0x607a0764 */     if ( v5 )
/* line: 17, address: 0x607a0764 */       v5 = v4;
/* line: 18 */   }
/* line: 19 */   else
/* line: 20 */   {
/* line: 21, address: 0x607a076c */     v5 = 0;
/* line: 22 */   }
/* line: 23, address: 0x607a0778 */   if ( *(_DWORD *)(a1 + 140) == 18 )
/* line: 24, address: 0x607a0788 */     return sub_6079E3C8(v5, a2);
/* line: 25, address: 0x607a0798 */   result = (*(int (__fastcall **)(_DWORD *))(*v5 + 1156))(v5);
/* line: 26, address: 0x607a07a0 */   if ( !result )
/* line: 27 */   {
/* line: 28, address: 0x607a07a8 */     v7 = a2[16];
/* line: 29, address: 0x607a07c4 */     result = _cxa_guard_acquire_0(13087612);
/* line: 30, address: 0x607a07cc */     if ( result )
/* line: 31 */     {
/* line: 32, address: 0x607a07e4 */       MEMORY[0xC7B378] = 12320956;
/* line: 33, address: 0x607a07f0 */       result = _cxa_guard_release_0(13087612);
/* line: 34 */     }
/* line: 35, address: 0x607a07f8 */     if ( v7 )
/* line: 36 */     {
/* line: 37, address: 0x607a0810 */       result = (**(int (__fastcall ***)(int, int))v7)(v7, 13087608);
/* line: 38, address: 0x607a0818 */       if ( result == 1 )
/* line: 39 */       {
/* line: 40, address: 0x607a081c */         result = 9580;
/* line: 41, address: 0x607a0820 */         if ( !v5[2395] )
/* line: 42 */         {
/* line: 43, address: 0x607a082c */           result = *(_DWORD *)(v7 + 9580);
/* line: 44, address: 0x607a0834 */           if ( !result )
/* line: 45 */           {
/* line: 46, address: 0x607a083c */             result = *(_DWORD *)(a1 + 140);
/* line: 47, address: 0x607a0844 */             if ( result == 10 )
/* line: 48 */             {
/* line: 49, address: 0x607a0850 */               if ( a2[35] == 10 )
/* line: 50 */               {
/* line: 51, address: 0x607a0888 */                 return sub_607B5350(v5, v7, 1);
/* line: 52 */               }
/* line: 53 */               else
/* line: 54 */               {
/* line: 55, address: 0x607a086c */                 result = a2[34] | 2;
/* line: 56, address: 0x607a0874 */                 if ( result == 2 )
/* line: 57, address: 0x607a0864 */                   return sub_607B5350(v5, v7, 0);
/* line: 58 */               }
/* line: 59 */             }
/* line: 60 */           }
/* line: 61 */         }
/* line: 62 */       }
/* line: 63 */     }
/* line: 64 */   }
/* line: 65, address: 0x607a0838 */   return result;
/* line: 66 */ }