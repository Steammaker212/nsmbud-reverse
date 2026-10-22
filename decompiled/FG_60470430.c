#include "nsmbudx_prelude.h"

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60470430(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60470430(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60470430(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60470430(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60470430(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60470430(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60470430(int a1);
/* line: 0, address: 0x60470430 */ int __fastcall sub_60470430(int a1)
/* line: 1 */ {
/* line: 2 */   int v1; // r5
/* line: 3 */   _DWORD *v3; // r6
/* line: 4 */   unsigned int v4; // r0
/* line: 5 */   int v5; // r0
/* line: 6 */   int v6; // r7
/* line: 7 */   int v7; // r0
/* line: 8 */   _DWORD v9[3]; // [sp+0h] [bp-10h] BYREF
/* line: 9 */   int v10; // [sp+Ch] [bp-4h] BYREF
/* line: 10 */ 
/* line: 11, address: 0x60470438 */   v1 = 0;
/* line: 12, address: 0x6047044c */   v10 = 0;
/* line: 13, address: 0x60470458 */   if ( sub_60463998((Actor *)a1, &v10, 1, 0) == 1 )
/* line: 14 */   {
/* line: 15, address: 0x60470464 */     v3 = (_DWORD *)(a1 + 6208);
/* line: 16, address: 0x6047046c */     sub_6046395C(a1, *(_DWORD *)(a1 + 6208));
/* line: 17, address: 0x60470474 */     v4 = *(_DWORD *)(a1 + 6208);
/* line: 18, address: 0x60470478 */     v1 = 0;
/* line: 19, address: 0x60470484 */     if ( v4 >= 4 )
/* line: 20, address: 0x60470484 */       v4 = 0;
/* line: 21, address: 0x60470490 */     v5 = *(_DWORD *)(MEMORY[0xCC436C] + 4 * v4 + 48);
/* line: 22, address: 0x60470498 */     if ( v5 )
/* line: 23 */     {
/* line: 24, address: 0x6047049c */       sub_607AA630(v5);
/* line: 25, address: 0x604704a4 */       v6 = 0;
/* line: 26, address: 0x604704ac */       memset(v9, 0, sizeof(v9));
/* line: 27, address: 0x604704cc */       if ( sub_60022A80(MEMORY[0xC7F52C], v9, *v3) == 1 )
/* line: 28, address: 0x604704e8 */         sub_603F7A98(MEMORY[0xC99DC0], v9, 2, *v3);
/* line: 29, address: 0x604704fc */       v1 = 1;
/* line: 30, address: 0x60470508 */       sub_600221A0(MEMORY[0xC7F52C], 9, *v3, 1);
/* line: 31, address: 0x6047051c */       if ( *v3 < 4u )
/* line: 32, address: 0x6047051c */         v6 = *v3;
/* line: 33, address: 0x60470534 */       *(_DWORD *)(MEMORY[0xC9A1E0] + 36 * v6 + 556) += 3;
/* line: 34, address: 0x60470548 */       sub_603FFE10(MEMORY[0xC99DD4] + 852);
/* line: 35, address: 0x60470550 */       v7 = sub_604635F4(a1);
/* line: 36, address: 0x60470554 */       sub_60023B90(v7);
/* line: 37, address: 0x60470558 */       *(_BYTE *)(a1 + 19) = 1;
/* line: 38 */     }
/* line: 39 */   }
/* line: 40, address: 0x60470564 */   return v1;
/* line: 41 */ }