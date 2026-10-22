#include "nsmbudx_prelude.h"

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607A0514(int a1, int a2);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607A0514(int a1, int a2);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607A0514(int a1, int a2);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607A0514(int a1, int a2);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607A0514(int a1, int a2);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607A0514(int a1, int a2);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607A0514(int a1, int a2);
/* line: 0, address: 0x607a0514 */ int __fastcall sub_607A0514(int a1, int a2)
/* line: 1 */ {
/* line: 2 */   _DWORD *v4; // r7
/* line: 3 */   _DWORD *v5; // r6
/* line: 4 */   _DWORD *v6; // r7
/* line: 5 */   int v7; // r4
/* line: 6 */   _DWORD *v8; // r5
/* line: 7 */   bool v9; // zf
/* line: 8 */ 
/* line: 9, address: 0x607a0524 */   v4 = *(_DWORD **)(a1 + 64);
/* line: 10, address: 0x607a0540 */   if ( _cxa_guard_acquire_0(13087604) )
/* line: 11 */   {
/* line: 12, address: 0x607a0560 */     MEMORY[0xC7B370] = 12320944;
/* line: 13, address: 0x607a056c */     _cxa_guard_release_0(13087604);
/* line: 14 */   }
/* line: 15, address: 0x607a0574 */   if ( v4 )
/* line: 16 */   {
/* line: 17, address: 0x607a0590 */     v5 = (_DWORD *)(*(int (__fastcall **)(_DWORD *, int))*v4)(v4, 13087600);
/* line: 18, address: 0x607a0598 */     if ( v5 )
/* line: 19, address: 0x607a0598 */       v5 = v4;
/* line: 20 */   }
/* line: 21 */   else
/* line: 22 */   {
/* line: 23, address: 0x607a05a0 */     v5 = 0;
/* line: 24 */   }
/* line: 25, address: 0x607a05a8 */   v6 = *(_DWORD **)(a2 + 64);
/* line: 26, address: 0x607a05c4 */   if ( _cxa_guard_acquire_0(13087604) )
/* line: 27 */   {
/* line: 28, address: 0x607a05e4 */     MEMORY[0xC7B370] = 12320944;
/* line: 29, address: 0x607a05f0 */     _cxa_guard_release_0(13087604);
/* line: 30 */   }
/* line: 31, address: 0x607a05f4 */   v7 = 0;
/* line: 32, address: 0x607a05fc */   if ( v6 )
/* line: 33 */   {
/* line: 34, address: 0x607a0618 */     v8 = (_DWORD *)(*(int (__fastcall **)(_DWORD *, int))*v6)(v6, 13087600);
/* line: 35, address: 0x607a0620 */     if ( v8 )
/* line: 36, address: 0x607a0620 */       v8 = v6;
/* line: 37, address: 0x607a0624 */     v9 = v5 == 0;
/* line: 38, address: 0x607a0628 */     if ( v5 )
/* line: 39, address: 0x607a0628 */       v9 = v8 == 0;
/* line: 40, address: 0x607a062c */     if ( !v9 )
/* line: 41 */     {
/* line: 42, address: 0x607a063c */       if ( sub_60766708(v8) != 1 )
/* line: 43 */       {
/* line: 44, address: 0x607a0658 */         (*(void (__fastcall **)(_DWORD *, _DWORD))(*v5 + 156))(v5, v5[330]);
/* line: 45, address: 0x607a0670 */         (*(void (__fastcall **)(_DWORD *, _DWORD))(*v8 + 156))(v8, v8[330]);
/* line: 46 */       }
/* line: 47, address: 0x607a069c */       sub_60765458(v5, a1, a2, 0);
/* line: 48, address: 0x607a06a0 */       return 1;
/* line: 49 */     }
/* line: 50 */   }
/* line: 51, address: 0x607a06a8 */   return v7;
/* line: 52 */ }