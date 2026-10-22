#include "nsmbudx_prelude.h"

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607D1A3C(int a1, int a2);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607D1A3C(int a1, int a2);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607D1A3C(int a1, int a2);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607D1A3C(int a1, int a2);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607D1A3C(int a1, int a2);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607D1A3C(int a1, int a2);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607D1A3C(int a1, int a2);
/* line: 0, address: 0x607d1a3c */ int __fastcall sub_607D1A3C(int a1, int a2)
/* line: 1 */ {
/* line: 2 */   float v2; // s0
/* line: 3 */   int (__fastcall ***v5)(_DWORD, int); // r6
/* line: 4 */   int v6; // r0
/* line: 5 */   int v7; // r6
/* line: 6 */   int CurrentState; // r0
/* line: 7 */   int v9; // r7
/* line: 8 */   int v10; // r0
/* line: 9 */   bool v11; // zf
/* line: 10 */   float v12; // s16
/* line: 11 */   float v13; // s0
/* line: 12 */ 
/* line: 13, address: 0x607d1a6c */   v5 = (int (__fastcall ***)(_DWORD, int))ActorMgrRelated_getById(MEMORY[0xC7B400] + 27168);
/* line: 14, address: 0x607d1a8c */   if ( _cxa_guard_acquire_0(13087588) )
/* line: 15 */   {
/* line: 16, address: 0x607d1aac */     MEMORY[0xC7B360] = 12320920;
/* line: 17, address: 0x607d1ab8 */     _cxa_guard_release_0(13087588);
/* line: 18 */   }
/* line: 19, address: 0x607d1ae4 */   if ( !v5 || (v6 = (**v5)(v5, 13087584), v7 = 0, !v6) )
/* line: 20 */   {
/* line: 21, address: 0x607d1af0 */     CurrentState = StateMgr::getCurrentState((StateMgr *)(a1 + 11404));
/* line: 22, address: 0x607d1b00 */     v9 = (*(int (__fastcall **)(int))(*(_DWORD *)CurrentState + 8))(CurrentState);
/* line: 23, address: 0x607d1b18 */     v7 = 0;
/* line: 24, address: 0x607d1b20 */     if ( v9 != (*(int (**)(void))(MEMORY[0xCC5398] + 8))() )
/* line: 25 */     {
/* line: 26, address: 0x607d1b24 */       v10 = *(_DWORD *)(a2 + 64);
/* line: 27, address: 0x607d1b28 */       v11 = v10 == 0;
/* line: 28, address: 0x607d1b2c */       if ( v10 )
/* line: 29 */       {
/* line: 30, address: 0x607d1b2c */         v9 = *(_DWORD *)(v10 + 620);
/* line: 31, address: 0x607d1b30 */         v11 = v9 == 0;
/* line: 32 */       }
/* line: 33, address: 0x607d1b38 */       if ( !v11 && !*(_DWORD *)(v9 + 12) )
/* line: 34 */       {
/* line: 35, address: 0x607d1b44 */         v12 = *(float *)(a1 + 108);
/* line: 36, address: 0x607d1b54 */         ActiveCollider_getCenterX(a2);
/* line: 37, address: 0x607d1b60 */         v13 = fabsf(v12 - v2);
/* line: 38, address: 0x607d1b6c */         if ( *(float *)(a1 + 11476) > v13 )
/* line: 39 */         {
/* line: 40, address: 0x607d1b74 */           v7 = 1;
/* line: 41, address: 0x607d1b7c */           *(_DWORD *)(a1 + 11472) = a2;
/* line: 42, address: 0x607d1b80 */           *(float *)(a1 + 11476) = v13;
/* line: 43, address: 0x607d1b90 */           *(_BYTE *)(a1 + 11480) = *(_DWORD *)(v9 + 16) != 0;
/* line: 44 */         }
/* line: 45 */       }
/* line: 46 */     }
/* line: 47 */   }
/* line: 48, address: 0x607d1b9c */   return v7;
/* line: 49 */ }