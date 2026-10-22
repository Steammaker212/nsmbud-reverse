#include "nsmbudx_prelude.h"

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607C83EC(int a1, int a2);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607C83EC(int a1, int a2);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607C83EC(int a1, int a2);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607C83EC(int a1, int a2);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607C83EC(int a1, int a2);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607C83EC(int a1, int a2);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607C83EC(int a1, int a2);
/* line: 0, address: 0x607c83ec */ int __fastcall sub_607C83EC(int a1, int a2)
/* line: 1 */ {
/* line: 2 */   int v4; // r6
/* line: 3 */   int v5; // r0
/* line: 4 */ 
/* line: 5, address: 0x607c840c */   v4 = 0;
/* line: 6, address: 0x607c8440 */   if ( !(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1156))(a1)
/* line: 7 */     && (*(_BYTE *)(a2 + 153) & 0x10) != 0
/* line: 8 */     && (*(int (__fastcall **)(int, _DWORD, int))(*(_DWORD *)a1 + 1180))(a1, *(_DWORD *)(a2 + 64), 2) == 1 )
/* line: 9 */   {
/* line: 10, address: 0x607c8444 */     v5 = *(_DWORD *)(a2 + 64);
/* line: 11, address: 0x607c8454 */     *(_DWORD *)(a1 + 256) = v5;
/* line: 12, address: 0x607c8458 */     *(_DWORD *)(a1 + 7204) = v5;
/* line: 13, address: 0x607c8464 */     *(_DWORD *)(a1 + 15096) = 60;
/* line: 14, address: 0x607c8480 */     AreaRumbleMgr_rumbleForPlayer(MEMORY[0xC99E3C], *(char *)(a1 + 84), 8, 0, 0);
/* line: 15, address: 0x607c8484 */     return 1;
/* line: 16 */   }
/* line: 17, address: 0x607c8490 */   return v4;
/* line: 18 */ }