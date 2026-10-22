#include "nsmbudx_prelude.h"

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60465E4C(int a1, unsigned int a2, unsigned int a3, int a4);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60465E4C(int a1, unsigned int a2, unsigned int a3, int a4);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60465E4C(int a1, unsigned int a2, unsigned int a3, int a4);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60465E4C(int a1, unsigned int a2, unsigned int a3, int a4);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60465E4C(int a1, unsigned int a2, unsigned int a3, int a4);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60465E4C(int a1, unsigned int a2, unsigned int a3, int a4);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60465E4C(int a1, unsigned int a2, unsigned int a3, int a4);
/* line: 0, address: 0x60465e4c */ int __fastcall sub_60465E4C(int a1, unsigned int a2, unsigned int a3, int a4)
/* line: 1 */ {
/* line: 2 */   int v6; // r6
/* line: 3 */   unsigned int v7; // r0
/* line: 4 */ 
/* line: 5, address: 0x60465e58 */   if ( a4 == 1 )
/* line: 6, address: 0x60465e58 */     return arr_dword_60B0267C[a2];
/* line: 7, address: 0x60465e78 */   if ( a3 == 15 )
/* line: 8, address: 0x60465e78 */     return 0;
/* line: 9, address: 0x60465e94 */   if ( a2 > 0x19 || ((1 << a2) & 0x24004E0) == 0 )
/* line: 10, address: 0x60465e94 */     return arr_dword_60B0267C[a2];
/* line: 11, address: 0x60465ea4 */   if ( a3 >= 4 )
/* line: 12, address: 0x60465ea4 */     a3 = 0;
/* line: 13, address: 0x60465eb4 */   v6 = *(_DWORD *)(MEMORY[0xCC436C] + 4 * a3 + 48);
/* line: 14, address: 0x60465ed4 */   if ( _cxa_guard_acquire_0(13087612) )
/* line: 15 */   {
/* line: 16, address: 0x60465ef4 */     MEMORY[0xC7B378] = 12320956;
/* line: 17, address: 0x60465f00 */     _cxa_guard_release_0(13087612);
/* line: 18 */   }
/* line: 19, address: 0x60465f4c */   if ( v6
/* line: 20 */     && (**(int (__fastcall ***)(int, int))v6)(v6, 13087608) == 1
/* line: 21 */     && (v7 = *(_DWORD *)(v6 + 1320) - 1, v7 <= 8)
/* line: 22 */     && ((0x1FBu >> v7) & 1) != 0 )
/* line: 23 */   {
/* line: 24, address: 0x60465e68 */     return arr_dword_60B0267C[a2];
/* line: 25 */   }
/* line: 26 */   else
/* line: 27 */   {
/* line: 28, address: 0x6046601c */     return 0;
/* line: 29 */   }
/* line: 30 */ }