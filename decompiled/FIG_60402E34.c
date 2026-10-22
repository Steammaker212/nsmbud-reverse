#include "nsmbudx_prelude.h"

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60402E34(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60402E34(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60402E34(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60402E34(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60402E34(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60402E34(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60402E34(int a1);
/* line: 0, address: 0x60402e34 */ int __fastcall sub_60402E34(int a1)
/* line: 1 */ {
/* line: 2 */   int v2; // r1
/* line: 3 */   int result; // r0
/* line: 4 */   int CurrentState; // r0
/* line: 5 */   int v5; // r6
/* line: 6 */   int v6; // r0
/* line: 7 */   _DWORD *v7; // r4
/* line: 8 */   int v8; // r0
/* line: 9 */   int v9; // r5
/* line: 10 */ 
/* line: 11, address: 0x60402e3c */   v2 = *(unsigned __int8 *)(a1 + 2692);
/* line: 12, address: 0x60402e40 */   result = *(unsigned __int8 *)(a1 + 2689);
/* line: 13, address: 0x60402e48 */   if ( v2 )
/* line: 14 */   {
/* line: 15, address: 0x60402e50 */     if ( result )
/* line: 16 */     {
/* line: 17, address: 0x60402e64 */       (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 16) + 4) + 148))(*(_DWORD *)(*(_DWORD *)(a1 + 16)
/* line: 18 */                                                                                                  + 4));
/* line: 19 */ LABEL_4:
/* line: 20, address: 0x60402e68 */       sub_604028B8(a1);
/* line: 21, address: 0x60402e74 */       sub_60403080(a1);
/* line: 22, address: 0x60402e80 */       return sub_604032A0(a1);
/* line: 23 */     }
/* line: 24 */   }
/* line: 25 */   else
/* line: 26 */   {
/* line: 27, address: 0x60402e8c */     if ( result )
/* line: 28 */     {
/* line: 29, address: 0x60402e84 */       if ( *(_BYTE *)(a1 + 2697) )
/* line: 30 */       {
/* line: 31, address: 0x60402ea0 */         CurrentState = StateMgr__getCurrentState(a1 + 40);
/* line: 32, address: 0x60402eb0 */         v5 = (*(int (__fastcall **)(int))(*(_DWORD *)CurrentState + 8))(CurrentState);
/* line: 33, address: 0x60402ecc */         if ( v5 != (*(int (**)(void))(MEMORY[0xC99E7C] + 8))() )
/* line: 34, address: 0x60402edc */           StateMgr__changeState((_DWORD *)(a1 + 40), 13213340);
/* line: 35 */       }
/* line: 36, address: 0x60402ee4 */       StateMgr__execute((_DWORD *)(a1 + 40));
/* line: 37, address: 0x60402ef8 */       (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 16) + 4) + 148))(*(_DWORD *)(*(_DWORD *)(a1 + 16)
/* line: 38 */                                                                                                  + 4));
/* line: 39, address: 0x60402f18 */       if ( *(_BYTE *)(a1 + 2709) && sub_60793CA8(*(_DWORD *)(*(_DWORD *)(a1 + 16) + 4)) == 1 )
/* line: 40 */       {
/* line: 41, address: 0x60402f2c */         (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 16) + 4) + 168))(*(_DWORD *)(*(_DWORD *)(a1 + 16) + 4));
/* line: 42, address: 0x60402f34 */         *(_DWORD *)(a1 + 504) = 9;
/* line: 43, address: 0x60402f40 */         if ( *(_DWORD *)(a1 + 376) != 8 )
/* line: 44, address: 0x60402f50 */           sub_6078E608(*(_DWORD *)(*(_DWORD *)(a1 + 16) + 12));
/* line: 45, address: 0x60402f74 */         (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(*(_DWORD *)(a1 + 16) + 4) + 84))(
/* line: 46 */           *(_DWORD *)(*(_DWORD *)(a1 + 16) + 4),
/* line: 47 */           233);
/* line: 48, address: 0x60402f88 */         (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 16) + 4) + 164))(*(_DWORD *)(*(_DWORD *)(a1 + 16) + 4));
/* line: 49, address: 0x60402f90 */         *(_BYTE *)(a1 + 2709) = 0;
/* line: 50, address: 0x60402f98 */         *(_BYTE *)(a1 + 2710) = 1;
/* line: 51 */       }
/* line: 52, address: 0x60402fb8 */       if ( *(_BYTE *)(a1 + 2710) && sub_60793CA8(*(_DWORD *)(*(_DWORD *)(a1 + 16) + 4)) == 1 )
/* line: 53 */       {
/* line: 54, address: 0x60402fbc */         v6 = *(_DWORD *)(a1 + 16);
/* line: 55, address: 0x60402fc4 */         if ( v6 )
/* line: 56 */         {
/* line: 57, address: 0x60402fe4 */           (*(void (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(v6 + 4) + 84))(*(_DWORD *)(v6 + 4), 0);
/* line: 58, address: 0x60402fe8 */           v6 = *(_DWORD *)(a1 + 16);
/* line: 59 */         }
/* line: 60, address: 0x60402ff8 */         (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(v6 + 4) + 168))(*(_DWORD *)(v6 + 4));
/* line: 61, address: 0x60403000 */         *(_BYTE *)(a1 + 2710) = 0;
/* line: 62 */       }
/* line: 63, address: 0x60403004 */       goto LABEL_4;
/* line: 64 */     }
/* line: 65, address: 0x60402e84 */     if ( *(_BYTE *)(a1 + 2697) )
/* line: 66 */     {
/* line: 67, address: 0x60403010 */       v7 = (_DWORD *)(a1 + 40);
/* line: 68, address: 0x60403018 */       v8 = StateMgr__getCurrentState((int)v7);
/* line: 69, address: 0x60403028 */       v9 = (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
/* line: 70, address: 0x6040303c */       result = (*(int (**)(void))(MEMORY[0xC99E7C] + 8))();
/* line: 71, address: 0x60403044 */       if ( v9 != result )
/* line: 72 */       {
/* line: 73, address: 0x60403058 */         StateMgr__changeState(v7, 13213340);
/* line: 74, address: 0x60403064 */         return StateMgr__execute(v7);
/* line: 75 */       }
/* line: 76 */     }
/* line: 77 */   }
/* line: 78, address: 0x6040300c */   return result;
/* line: 79 */ }