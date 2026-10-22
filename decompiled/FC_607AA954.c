#include "nsmbudx_prelude.h"

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607AA954(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607AA954(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607AA954(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607AA954(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607AA954(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607AA954(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607AA954(int a1);
/* line: 0, address: 0x607aa954 */ int __fastcall sub_607AA954(int a1)
/* line: 1 */ {
/* line: 2 */   int v2; // r1
/* line: 3 */   int result; // r0
/* line: 4 */   int v4; // r1
/* line: 5 */   unsigned int v5; // r1
/* line: 6 */   int v6; // r2
/* line: 7 */   unsigned int v7; // r1
/* line: 8 */   int v8; // r2
/* line: 9 */ 
/* line: 10, address: 0x607aa964 */   v2 = sub_60786670(a1 + 688);
/* line: 11, address: 0x607aa968 */   result = 0;
/* line: 12, address: 0x607aa970 */   if ( v2 == 1 )
/* line: 13 */   {
/* line: 14, address: 0x607aa974 */     v4 = *(_DWORD *)(a1 + 1320);
/* line: 15, address: 0x607aa980 */     if ( (unsigned int)(v4 - 5) >= 2 )
/* line: 16 */     {
/* line: 17, address: 0x607aa9c0 */       if ( v4 == 2 )
/* line: 18 */       {
/* line: 19, address: 0x607aa9c4 */         v7 = *(unsigned __int8 *)(a1 + 84);
/* line: 20, address: 0x607aa9c8 */         v8 = 0;
/* line: 21, address: 0x607aa9cc */         result = 0;
/* line: 22, address: 0x607aa9d4 */         if ( v7 < 4 )
/* line: 23, address: 0x607aa9d4 */           v8 = (char)v7;
/* line: 24, address: 0x607aa9f0 */         if ( *(int *)(MEMORY[0xC7B420] + 8 * v8 + 104) < 2 )
/* line: 25, address: 0x607aa9f0 */           return 1;
/* line: 26 */       }
/* line: 27 */     }
/* line: 28 */     else
/* line: 29 */     {
/* line: 30, address: 0x607aa984 */       v5 = *(unsigned __int8 *)(a1 + 84);
/* line: 31, address: 0x607aa988 */       v6 = 0;
/* line: 32, address: 0x607aa98c */       result = 0;
/* line: 33, address: 0x607aa994 */       if ( v5 < 4 )
/* line: 34, address: 0x607aa994 */         v6 = (char)v5;
/* line: 35, address: 0x607aa9b0 */       if ( *(int *)(MEMORY[0xC7B420] + 8 * v6 + 136) <= 1 )
/* line: 36, address: 0x607aa9b4 */         return 1;
/* line: 37 */     }
/* line: 38 */   }
/* line: 39, address: 0x607aa970 */   return result;
/* line: 40 */ }