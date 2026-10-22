#include "nsmbudx_prelude.h"

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607A1278(int a1, int a2, int a3);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607A1278(int a1, int a2, int a3);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607A1278(int a1, int a2, int a3);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607A1278(int a1, int a2, int a3);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607A1278(int a1, int a2, int a3);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607A1278(int a1, int a2, int a3);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607A1278(int a1, int a2, int a3);
/* line: 0, address: 0x607a1278 */ int __fastcall sub_607A1278(int a1, int a2, int a3)
/* line: 1 */ {
/* line: 2 */   int v6; // r0
/* line: 3 */   bool v7; // zf
/* line: 4 */   _BOOL4 v8; // r2
/* line: 5 */ 
/* line: 6, address: 0x607a1290 */   if ( a2 == 2 )
/* line: 7 */   {
/* line: 8, address: 0x607a1294 */     v6 = *(_DWORD *)(a1 + 1320);
/* line: 9, address: 0x607a1298 */     v7 = v6 == 0;
/* line: 10, address: 0x607a129c */     if ( v6 )
/* line: 11, address: 0x607a129c */       v7 = v6 == 3;
/* line: 12, address: 0x607a12a0 */     if ( v7 )
/* line: 13 */     {
/* line: 14, address: 0x607a1314 */       sub_60777FB4(MEMORY[0xCBFA90], a1, 0);
/* line: 15, address: 0x607a1320 */       return 1;
/* line: 16 */     }
/* line: 17, address: 0x607a12b4 */     sub_607A2894(a1, v6 != 1);
/* line: 18, address: 0x607a12c0 */     *(_DWORD *)(a1 + 9572) = 127;
/* line: 19 */   }
/* line: 20, address: 0x607a12cc */   v8 = 0;
/* line: 21, address: 0x607a12d0 */   if ( a3 )
/* line: 22 */   {
/* line: 23, address: 0x607a12d8 */     v8 = 0;
/* line: 24, address: 0x607a12dc */     if ( a2 != 5 )
/* line: 25 */     {
/* line: 26, address: 0x607a12e4 */       if ( a2 == 7 )
/* line: 27, address: 0x607a12f8 */         v8 = *(_DWORD *)(a3 + 80) == *(_DWORD *)(a1 + 80);
/* line: 28 */       else
/* line: 29, address: 0x607a1358 */         v8 = (float)((float)(*(float *)(a3 + 584) - *(float *)(a1 + 584))
/* line: 30 */                    * *(float *)(4 * *(_DWORD *)(a1 + 80) + 0xB0A898)) < 0.0;
/* line: 31 */     }
/* line: 32 */   }
/* line: 33, address: 0x607a1320 */   return (*(int (__fastcall **)(int, int, _BOOL4, _DWORD, _DWORD))(*(_DWORD *)a1 + 1420))(a1, a2, v8, 0, 0);
/* line: 34 */ }