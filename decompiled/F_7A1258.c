#include "nsmbudx_prelude.h"

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607A1198(int a1, int a2);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607A1198(int a1, int a2);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607A1198(int a1, int a2);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607A1198(int a1, int a2);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607A1198(int a1, int a2);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607A1198(int a1, int a2);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607A1198(int a1, int a2);
/* line: 0, address: 0x607a1198 */ int __fastcall sub_607A1198(int a1, int a2)
/* line: 1 */ {
/* line: 2 */   const char *v3; // r1
/* line: 3 */   int v4; // r0
/* line: 4 */   int v5; // r0
/* line: 5 */   int v6; // r1
/* line: 6 */   _BYTE v8[76]; // [sp+4h] [bp-4Ch] BYREF
/* line: 7 */ 
/* line: 8, address: 0x607a11a8 */   if ( a2 == 9 )
/* line: 9 */   {
/* line: 10, address: 0x607a1208 */     v4 = *(_DWORD *)(a1 + 1320);
/* line: 11, address: 0x607a1210 */     if ( v4 != 3 )
/* line: 12 */     {
/* line: 13, address: 0x607a1218 */       if ( v4 == 1 )
/* line: 14 */       {
/* line: 15, address: 0x607a1240 */         v5 = a1;
/* line: 16, address: 0x607a1244 */         v6 = 0;
/* line: 17 */       }
/* line: 18 */       else
/* line: 19 */       {
/* line: 20, address: 0x607a1220 */         if ( !v4 )
/* line: 21, address: 0x607a1220 */           goto LABEL_9;
/* line: 22, address: 0x607a124c */         v5 = a1;
/* line: 23, address: 0x607a1250 */         v6 = 1;
/* line: 24 */       }
/* line: 25, address: 0x607a1254 */       sub_607A2894(v5, v6);
/* line: 26, address: 0x607a1254 */       return 1;
/* line: 27 */     }
/* line: 28 */ LABEL_9:
/* line: 29, address: 0x607a1224 */     sub_60777FB4(MEMORY[0xCBFA90], a1, 2);
/* line: 30, address: 0x607a123c */     return 1;
/* line: 31 */   }
/* line: 32, address: 0x607a11b0 */   if ( a2 == 10 )
/* line: 33 */   {
/* line: 34, address: 0x607a11c8 */     sub_60777FB4(MEMORY[0xCBFA90], a1, 2);
/* line: 35, address: 0x607a11dc */     v3 = "false";
/* line: 36, address: 0x607a11d8 */     if ( *(_BYTE *)(a1 + 15076) )
/* line: 37, address: 0x607a11ec */       v3 = "true";
/* line: 38, address: 0x607a1200 */     sub_6016ACE0(v8, "[LavaDown] type=%d,mode=%d,IsPassingDown=%s", *(_DWORD *)(a1 + 1316), *(_DWORD *)(a1 + 1320), v3);
/* line: 39 */   }
/* line: 40, address: 0x607a1260 */   return 1;
/* line: 41 */ }