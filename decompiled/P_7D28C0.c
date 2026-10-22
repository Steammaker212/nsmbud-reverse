#include "nsmbudx_prelude.h"
/* line: 0, address: 0x607d28c0 */ unsigned int __fastcall sub_607D28C0(int a1, int a2)
/* line: 1 */ {
/* line: 2 */   unsigned __int8 *v3; // r4
/* line: 3 */   int v4; // r6
/* line: 4 */   unsigned int result; // r0
/* line: 5 */   int v6; // r1
/* line: 6 */ 
/* line: 7, address: 0x607d28c8 */   v3 = *(unsigned __int8 **)(a2 + 64);
/* line: 8, address: 0x607d28d0 */   v4 = *(_DWORD *)(a1 + 64);
/* line: 9, address: 0x607d28d8 */   *(_BYTE *)(a1 + 110) |= 2u;
/* line: 10, address: 0x607d28e8 */   if ( (unsigned int)v3[533] - 1 > 1 )
/* line: 11 */   {
/* line: 12, address: 0x607d2994 */     result = Actor::getProfileId((Actor *)v3);
/* line: 13, address: 0x607d2998 */     v6 = *(_DWORD *)(v4 + 648);
/* line: 14, address: 0x607d29a0 */     if ( v6 == 1 )
/* line: 15 */     {
/* line: 16, address: 0x607d2a84 */       if ( result == MEMORY[0xAF3914] || result == MEMORY[0xAF349C] )
/* line: 17 */       {
/* line: 18, address: 0x607d2aa4 */         result = _cxa_guard_acquire_0(13116356);
/* line: 19, address: 0x607d2aac */         if ( result )
/* line: 20 */         {
/* line: 21, address: 0x607d2ac4 */           MEMORY[0xC823C0] = 12320992;
/* line: 22, address: 0x607d2ad0 */           result = _cxa_guard_release_0(13116356);
/* line: 23 */         }
/* line: 24, address: 0x607d2ad8 */         if ( v3 )
/* line: 25 */         {
/* line: 26, address: 0x607d2af0 */           result = (**(int (__fastcall ***)(unsigned __int8 *, int))v3)(v3, 13116352);
/* line: 27, address: 0x607d2af8 */           if ( result == 1 )
/* line: 28 */           {
/* line: 29, address: 0x607d2b08 */             (*(void (__fastcall **)(unsigned __int8 *))(*(_DWORD *)v3 + 240))(v3);
/* line: 30, address: 0x607d2b14 */             return sub_601362A0(v3);
/* line: 31 */           }
/* line: 32 */         }
/* line: 33 */       }
/* line: 34 */     }
/* line: 35, address: 0x607d29d0 */     else if ( !v6 && (result == MEMORY[0xAF391C] || result == MEMORY[0xAF3494]) )
/* line: 36 */     {
/* line: 37, address: 0x607d29f0 */       result = _cxa_guard_acquire_0(13116372);
/* line: 38, address: 0x607d29f8 */       if ( result )
/* line: 39 */       {
/* line: 40, address: 0x607d2a10 */         MEMORY[0xC823D0] = 12320992;
/* line: 41, address: 0x607d2a1c */         result = _cxa_guard_release_0(13116372);
/* line: 42 */       }
/* line: 43, address: 0x607d2a24 */       if ( v3 )
/* line: 44 */       {
/* line: 45, address: 0x607d2a3c */         result = (**(int (__fastcall ***)(unsigned __int8 *, int))v3)(v3, 13116368);
/* line: 46, address: 0x607d2a44 */         if ( result == 1 )
/* line: 47, address: 0x607d2a50 */           return sub_600424E0(v3);
/* line: 48 */       }
/* line: 49 */     }
/* line: 50 */   }
/* line: 51 */   else
/* line: 52 */   {
/* line: 53, address: 0x607d28f8 */     if ( *(unsigned __int8 *)(v4 + 84) == v3[84] )
/* line: 54, address: 0x607d28f8 */       goto LABEL_7;
/* line: 55, address: 0x607d2918 */     if ( _cxa_guard_acquire_0(13087612) )
/* line: 56 */     {
/* line: 57, address: 0x607d2938 */       MEMORY[0xC7B378] = 12320956;
/* line: 58, address: 0x607d2944 */       _cxa_guard_release_0(13087612);
/* line: 59 */     }
/* line: 60, address: 0x607d297c */     if ( (**(int (__fastcall ***)(unsigned __int8 *, int))v3)(v3, 13087608) == 1
/* line: 61 */       && (*(int (__fastcall **)(unsigned __int8 *))(*(_DWORD *)v3 + 1156))(v3) == 1 )
/* line: 62 */     {
/* line: 63 */ LABEL_7:
/* line: 64, address: 0x607d2984 */       result = *(_DWORD *)(a1 + 92) & 0xFFFFFFFE;
/* line: 65, address: 0x607d2988 */       *(_DWORD *)(a1 + 92) = result;
/* line: 66 */     }
/* line: 67 */     else
/* line: 68 */     {
/* line: 69, address: 0x607d2a5c */       return sub_607D2B74(v4);
/* line: 70 */     }
/* line: 71 */   }
/* line: 72, address: 0x607d298c */   return result;
/* line: 73 */ }