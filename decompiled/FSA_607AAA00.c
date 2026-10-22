#include "nsmbudx_prelude.h"

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607AAA00(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607AAA00(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607AAA00(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607AAA00(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607AAA00(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607AAA00(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607AAA00(int a1);
/* line: 0, address: 0x607aaa00 */ int __fastcall sub_607AAA00(int a1)
/* line: 1 */ {
/* line: 2 */   int v2; // r6
/* line: 3 */   int v3; // r0
/* line: 4 */   unsigned int v4; // r0
/* line: 5 */   int v5; // r1
/* line: 6 */   unsigned int v6; // r0
/* line: 7 */   int v7; // r1
/* line: 8 */   int CurrentState; // r0
/* line: 9 */   int v9; // r6
/* line: 10 */   int v10; // r7
/* line: 11 */ 
/* line: 12, address: 0x607aaa18 */   v2 = 0;
/* line: 13, address: 0x607aaa40 */   if ( !(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1064))(a1)
/* line: 14 */     && (*(_BYTE *)(a1 + 1225) & 2) != 0
/* line: 15 */     && sub_60786670(a1 + 688) == 1 )
/* line: 16 */   {
/* line: 17, address: 0x607aaa44 */     v3 = *(_DWORD *)(a1 + 1320);
/* line: 18, address: 0x607aaa50 */     if ( (unsigned int)(v3 - 5) >= 2 )
/* line: 19 */     {
/* line: 20, address: 0x607aaa8c */       if ( v3 != 2 )
/* line: 21, address: 0x607aaa8c */         return v2;
/* line: 22, address: 0x607aaa90 */       v6 = *(unsigned __int8 *)(a1 + 84);
/* line: 23, address: 0x607aaa94 */       v7 = 0;
/* line: 24, address: 0x607aaa98 */       v2 = 0;
/* line: 25, address: 0x607aaaa0 */       if ( v6 < 4 )
/* line: 26, address: 0x607aaaa0 */         v7 = (char)v6;
/* line: 27, address: 0x607aaabc */       if ( *(int *)(MEMORY[0xC7B420] + 8 * v7 + 104) >= 2 )
/* line: 28, address: 0x607aaabc */         return v2;
/* line: 29 */     }
/* line: 30 */     else
/* line: 31 */     {
/* line: 32, address: 0x607aaa54 */       v4 = *(unsigned __int8 *)(a1 + 84);
/* line: 33, address: 0x607aaa58 */       v5 = 0;
/* line: 34, address: 0x607aaa5c */       v2 = 0;
/* line: 35, address: 0x607aaa64 */       if ( v4 < 4 )
/* line: 36, address: 0x607aaa64 */         v5 = (char)v4;
/* line: 37, address: 0x607aaa80 */       if ( *(int *)(MEMORY[0xC7B420] + 8 * v5 + 136) > 1 )
/* line: 38, address: 0x607aaa80 */         return v2;
/* line: 39 */     }
/* line: 40, address: 0x607aaae0 */     if ( (*(_BYTE *)(a1 + 1207) & 0x40) == 0 || (*(_BYTE *)(a1 + 6905) & 0x80) == 0 || (v2 = 0, !sub_60763E28(a1)) )
/* line: 41 */     {
/* line: 42, address: 0x607aaaf8 */       CurrentState = StateMgr__getCurrentState(a1 + 9916);
/* line: 43, address: 0x607aab08 */       v9 = (*(int (__fastcall **)(int))(*(_DWORD *)CurrentState + 8))(CurrentState);
/* line: 44, address: 0x607aab24 */       if ( v9 == (*(int (**)(void))(MEMORY[0xCC4BE0] + 8))() )
/* line: 45 */       {
/* line: 46, address: 0x607aab34 */         v10 = sub_607865A4(a1 + 688, 5);
/* line: 47, address: 0x607aab48 */         Player_changeState(a1, 13389164, 0);
/* line: 48, address: 0x607aab4c */         v2 = 1;
/* line: 49, address: 0x607aab54 */         if ( v10 == 1 )
/* line: 50 */         {
/* line: 51, address: 0x607aab60 */           sub_6078667C((_DWORD *)(a1 + 688), 5);
/* line: 52, address: 0x607aab68 */           return 1;
/* line: 53 */         }
/* line: 54 */       }
/* line: 55 */       else
/* line: 56 */       {
/* line: 57, address: 0x607aab7c */         Player_changeState(a1, 13389164, 0);
/* line: 58, address: 0x607aab80 */         return 1;
/* line: 59 */       }
/* line: 60 */     }
/* line: 61 */   }
/* line: 62, address: 0x607aab68 */   return v2;
/* line: 63 */ }