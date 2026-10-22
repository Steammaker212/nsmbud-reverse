#include "nsmbudx_prelude.h"

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607C849C(int a1, int a2, int a3);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607C849C(int a1, int a2, int a3);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607C849C(int a1, int a2, int a3);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607C849C(int a1, int a2, int a3);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607C849C(int a1, int a2, int a3);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607C849C(int a1, int a2, int a3);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607C849C(int a1, int a2, int a3);
/* line: 0, address: 0x607c849c */ int __fastcall sub_607C849C(int a1, int a2, int a3)
/* line: 1 */ {
/* line: 2 */   int result; // r0
/* line: 3 */   int v6; // r0
/* line: 4 */   int v7; // r1
/* line: 5 */   int v8; // r1
/* line: 6 */   int v9; // r2
/* line: 7 */ 
/* line: 8, address: 0x607c84a8 */   result = 0;
/* line: 9, address: 0x607c84c0 */   if ( (*(_DWORD *)(a1 + 1204) & 0x24000) == 0 && (*(_BYTE *)(a1 + 1219) & 8) == 0 )
/* line: 10 */   {
/* line: 11, address: 0x607c84d8 */     switch ( a3 )
/* line: 12 */     {
/* line: 13, address: 0x607c84d8 */       case 0:
/* line: 14, address: 0x607c84d8 */       case 1:
/* line: 15, address: 0x607c84d8 */       case 9:
/* line: 16, address: 0x607c84d8 */       case 11:
/* line: 17, address: 0x607c84d8 */       case 12:
/* line: 18 */         return result;
/* line: 19, address: 0x607c84d8 */       case 2:
/* line: 20, address: 0x607c855c */         v6 = *(_DWORD *)a1;
/* line: 21, address: 0x607c8560 */         v7 = 4;
/* line: 22, address: 0x607c8564 */         return (*(int (__fastcall **)(int, int, int))(v6 + 1416))(a1, v7, a2);
/* line: 23, address: 0x607c84d8 */       case 3:
/* line: 24, address: 0x607c8568 */         v6 = *(_DWORD *)a1;
/* line: 25, address: 0x607c856c */         v7 = 6;
/* line: 26, address: 0x607c8570 */         return (*(int (__fastcall **)(int, int, int))(v6 + 1416))(a1, v7, a2);
/* line: 27, address: 0x607c84d8 */       case 4:
/* line: 28, address: 0x607c84d8 */       case 5:
/* line: 29, address: 0x607c84d8 */       case 6:
/* line: 30, address: 0x607c84d8 */       case 7:
/* line: 31, address: 0x607c84d8 */       case 8:
/* line: 32, address: 0x607c852c */         v6 = *(_DWORD *)a1;
/* line: 33, address: 0x607c8530 */         v7 = a3;
/* line: 34, address: 0x607c8548 */         return (*(int (__fastcall **)(int, int, int))(v6 + 1416))(a1, v7, a2);
/* line: 35, address: 0x607c84d8 */       case 10:
/* line: 36, address: 0x607c857c */         sub_607A1198(a1, 10);
/* line: 37, address: 0x607c8580 */         return 1;
/* line: 38, address: 0x607c84d8 */       case 13:
/* line: 39, address: 0x607c8594 */         Player_changeState(a1, 13389516, 0);
/* line: 40, address: 0x607c8598 */         return 1;
/* line: 41, address: 0x607c84d8 */       case 14:
/* line: 42, address: 0x607c85a0 */         v8 = a1;
/* line: 43, address: 0x607c85a4 */         v9 = 3;
/* line: 44, address: 0x607c85ac */         goto LABEL_14;
/* line: 45, address: 0x607c84d8 */       case 15:
/* line: 46, address: 0x607c85b4 */         v8 = a1;
/* line: 47, address: 0x607c85b8 */         v9 = 0;
/* line: 48, address: 0x607c85c0 */         goto LABEL_14;
/* line: 49, address: 0x607c84d8 */       case 16:
/* line: 50, address: 0x607c85c8 */         v8 = a1;
/* line: 51, address: 0x607c85cc */         v9 = 4;
/* line: 52 */ LABEL_14:
/* line: 53, address: 0x607c85d4 */         sub_60777FB4(MEMORY[0xCBFA90], v8, v9);
/* line: 54, address: 0x607c85dc */         break;
/* line: 55, address: 0x607c84d8 */       case 17:
/* line: 56, address: 0x607c84d8 */       case 18:
/* line: 57, address: 0x607c8554 */         sub_607A7AA4(a1, a2);
/* line: 58, address: 0x607c8558 */         break;
/* line: 59, address: 0x607c84d8 */       case 19:
/* line: 60, address: 0x607c85e4 */         sub_60765E4C(a1);
/* line: 61, address: 0x607c85e4 */         break;
/* line: 62 */       default:
/* line: 63 */         return 1;
/* line: 64 */     }
/* line: 65, address: 0x607c85e8 */     return 1;
/* line: 66 */   }
/* line: 67, address: 0x607c84c0 */   return result;
/* line: 68 */ }