#include "nsmbudx_prelude.h"

/* ---- forward declarations for functions defined below ---- */
int __fastcall Player_changeState(int a1, int a2, int a3);

/* ---- forward declarations for functions defined below ---- */
int __fastcall Player_changeState(int a1, int a2, int a3);

/* ---- forward declarations for functions defined below ---- */
int __fastcall Player_changeState(int a1, int a2, int a3);

/* ---- forward declarations for functions defined below ---- */
int __fastcall Player_changeState(int a1, int a2, int a3);

/* ---- forward declarations for functions defined below ---- */
int __fastcall Player_changeState(int a1, int a2, int a3);

/* ---- forward declarations for functions defined below ---- */
int __fastcall Player_changeState(int a1, int a2, int a3);

/* ---- forward declarations for functions defined below ---- */
int __fastcall Player_changeState(int a1, int a2, int a3);
/* line: 0, address: 0x60773dc0 */ int __fastcall Player_changeState(int a1, int a2, int a3)
/* line: 1 */ {
/* line: 2 */   int result; // r0
/* line: 3 */ 
/* line: 4, address: 0x60773dd0 */   result = *(unsigned __int8 *)(a1 + 1204);
/* line: 5, address: 0x60773dd8 */   if ( (result & 0x10) == 0 )
/* line: 6 */   {
/* line: 7, address: 0x60773de8 */     sub_6040A1D8(MEMORY[0xC9A1F0]);
/* line: 8, address: 0x60773df4 */     *(_BYTE *)(a1 + 1296) = 0;
/* line: 9, address: 0x60773df8 */     *(_BYTE *)(a1 + 1314) = 0;
/* line: 10, address: 0x60773dfc */     *(_DWORD *)(a1 + 9940) = 0;
/* line: 11, address: 0x60773e04 */     *(_DWORD *)(a1 + 9944) = 0;
/* line: 12, address: 0x60773e0c */     *(_DWORD *)(a1 + 9948) = 0;
/* line: 13, address: 0x60773e18 */     *(_DWORD *)(a1 + 1228) &= 0xFFFFD3FF;
/* line: 14, address: 0x60773e24 */     *(_DWORD *)(a1 + 1208) &= ~8u;
/* line: 15, address: 0x60773e30 */     *(_DWORD *)(a1 + 1204) &= ~0x400u;
/* line: 16, address: 0x60773e38 */     *(_DWORD *)(a1 + 9932) = 0;
/* line: 17, address: 0x60773e44 */     *(_DWORD *)(a1 + 9936) = a3;
/* line: 18, address: 0x60773e50 */     StateMgr::changeState(a1 + 9916, a2);
/* line: 19, address: 0x60773e64 */     return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1044))(a1);
/* line: 20 */   }
/* line: 21, address: 0x60773dd8 */   return result;
/* line: 22 */ }