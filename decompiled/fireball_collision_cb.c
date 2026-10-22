#include "nsmbudx_prelude.h"
/* line: 0, address: 0x60139988 */ int __fastcall sub_60139988(int a1, _DWORD *a2)
/* line: 1 */ {
/* line: 2 */   int v4; // r7
/* line: 3 */   int (__fastcall ***v5)(_DWORD, int); // r4
/* line: 4 */   int v6; // r5
/* line: 5 */   int result; // r0
/* line: 6 */   int v8; // r1
/* line: 7 */   int v9; // r4
/* line: 8 */   int v10; // r4
/* line: 9 */ 
/* line: 10, address: 0x60139998 */   v4 = a2[16];
/* line: 11, address: 0x6013999c */   v5 = *(int (__fastcall ****)(_DWORD, int))(a1 + 64);
/* line: 12, address: 0x601399b8 */   if ( _cxa_guard_acquire_0(13116356) )
/* line: 13 */   {
/* line: 14, address: 0x601399d8 */     MEMORY[0xC823C0] = 12320992;
/* line: 15, address: 0x601399e4 */     _cxa_guard_release_0(13116356);
/* line: 16 */   }
/* line: 17, address: 0x601399ec */   if ( v5 )
/* line: 18 */   {
/* line: 19, address: 0x60139a08 */     v6 = (**v5)(v5, 13116352);
/* line: 20, address: 0x60139a10 */     if ( v6 )
/* line: 21, address: 0x60139a10 */       v6 = (int)v5;
/* line: 22 */   }
/* line: 23 */   else
/* line: 24 */   {
/* line: 25, address: 0x60139a18 */     v6 = 0;
/* line: 26 */   }
/* line: 27, address: 0x60139a1c */   result = *(unsigned __int8 *)(v4 + 533);
/* line: 28, address: 0x60139a24 */   if ( result != 3 )
/* line: 29 */   {
/* line: 30, address: 0x60139a30 */     result = sub_602A25C0(a1);
/* line: 31, address: 0x60139a38 */     if ( !result )
/* line: 32 */     {
/* line: 33, address: 0x60139a3c */       result = *(unsigned __int8 *)(v4 + 533);
/* line: 34, address: 0x60139a54 */       switch ( *(_BYTE *)(v4 + 533) )
/* line: 35 */       {
/* line: 36, address: 0x60139a54 */         case 0:
/* line: 37, address: 0x60139a84 */           if ( Actor::getProfileId((Actor *)v4) == MEMORY[0xAF3490] )
/* line: 38, address: 0x60139a84 */             goto LABEL_35;
/* line: 39, address: 0x60139a8c */           result = Actor::getProfileId((Actor *)v4);
/* line: 40, address: 0x60139aa0 */           if ( result == MEMORY[0xAF34A0] )
/* line: 41, address: 0x60139aa0 */             goto LABEL_35;
/* line: 42, address: 0x60139aa0 */           break;
/* line: 43, address: 0x60139a54 */         case 1:
/* line: 44, address: 0x60139ac4 */           if ( _cxa_guard_acquire_0(13087612) )
/* line: 45 */           {
/* line: 46, address: 0x60139ae4 */             MEMORY[0xC7B378] = 12320956;
/* line: 47, address: 0x60139af0 */             _cxa_guard_release_0(13087612);
/* line: 48 */           }
/* line: 49, address: 0x60139b0c */           v9 = (**(int (__fastcall ***)(int, int))v4)(v4, 13087608);
/* line: 50, address: 0x60139b14 */           if ( v9 )
/* line: 51, address: 0x60139b14 */             v9 = v4;
/* line: 52, address: 0x60139b3c */           if ( sub_6075EDF8(v9, v8) != 1
/* line: 53 */             || (result = (*(int (__fastcall **)(int))(*(_DWORD *)v9 + 1204))(v9), result == 1) )
/* line: 54 */           {
/* line: 55, address: 0x60139b40 */             result = a2[34];
/* line: 56, address: 0x60139b48 */             if ( result != 15 )
/* line: 57 */             {
/* line: 58, address: 0x60139b58 */               if ( !(*(int (__fastcall **)(int))(*(_DWORD *)v9 + 1156))(v9) )
/* line: 59, address: 0x60139b78 */                 (*(void (__fastcall **)(int, int, _DWORD *))(*(_DWORD *)v9 + 1164))(v9, a1, a2);
/* line: 60, address: 0x60139b90 */               if ( (*(int (__fastcall **)(int))(*(_DWORD *)v9 + 1204))(v9) == 1 )
/* line: 61, address: 0x60139b90 */                 goto LABEL_35;
/* line: 62, address: 0x60139b90 */               goto LABEL_36;
/* line: 63 */             }
/* line: 64 */           }
/* line: 65, address: 0x60139b90 */           break;
/* line: 66, address: 0x60139a54 */         case 2:
/* line: 67, address: 0x60139b98 */           result = *(char *)(v4 + 84);
/* line: 68, address: 0x60139ba0 */           if ( result <= 3 )
/* line: 69 */           {
/* line: 70, address: 0x60139ba4 */             result = a2[35];
/* line: 71, address: 0x60139bac */             if ( result != 15 )
/* line: 72 */             {
/* line: 73, address: 0x60139bcc */               if ( _cxa_guard_acquire_0(13087752) )
/* line: 74 */               {
/* line: 75, address: 0x60139bec */                 MEMORY[0xC7B404] = 12320944;
/* line: 76, address: 0x60139bf8 */                 _cxa_guard_release_0(13087752);
/* line: 77 */               }
/* line: 78, address: 0x60139c14 */               v10 = (**(int (__fastcall ***)(int, int))v4)(v4, 13087748);
/* line: 79, address: 0x60139c1c */               if ( v10 )
/* line: 80, address: 0x60139c1c */                 v10 = v4;
/* line: 81, address: 0x60139c2c */               if ( !(*(int (__fastcall **)(int))(*(_DWORD *)v10 + 1156))(v10) )
/* line: 82, address: 0x60139c4c */                 (*(void (__fastcall **)(int, int, _DWORD *))(*(_DWORD *)v10 + 1164))(v10, a1, a2);
/* line: 83, address: 0x60139c58 */               *(_BYTE *)(a1 + 110) |= 2u;
/* line: 84, address: 0x60139c68 */               (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 240))(v6);
/* line: 85, address: 0x60139c74 */               result = sub_601362A0(v6);
/* line: 86 */             }
/* line: 87 */           }
/* line: 88, address: 0x60139c74 */           break;
/* line: 89, address: 0x60139a54 */         case 4:
/* line: 90, address: 0x60139c78 */           result = a2[35];
/* line: 91, address: 0x60139c80 */           if ( result == 3 )
/* line: 92 */           {
/* line: 93 */ LABEL_35:
/* line: 94, address: 0x60139c84 */             (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 240))(v6);
/* line: 95 */ LABEL_36:
/* line: 96, address: 0x60139c94 */             sub_601362A0(v6);
/* line: 97, address: 0x60139ca0 */             result = *(unsigned __int8 *)(a1 + 110) | 2;
/* line: 98, address: 0x60139ca4 */             *(_BYTE *)(a1 + 110) = result;
/* line: 99 */           }
/* line: 100, address: 0x60139ca4 */           break;
/* line: 101 */         default:
/* line: 102 */           return result;
/* line: 103 */       }
/* line: 104 */     }
/* line: 105 */   }
/* line: 106, address: 0x60139c80 */   return result;
/* line: 107 */ }