#include "nsmbudx_prelude.h"

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_6046CE38(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_6046CE38(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_6046CE38(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_6046CE38(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_6046CE38(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_6046CE38(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_6046CE38(int a1);
/* line: 0, address: 0x6046ce38 */ int __fastcall sub_6046CE38(int a1)
/* line: 1 */ {
/* line: 2 */   float v2; // s0
/* line: 3 */   float v3; // s2
/* line: 4 */   int result; // r0
/* line: 5 */   int v5; // [sp+4h] [bp-4h] BYREF
/* line: 6 */ 
/* line: 7, address: 0x6046ce48 */   if ( !*(_BYTE *)(a1 + 6856) )
/* line: 8 */   {
/* line: 9, address: 0x6046ce54 */     v2 = *(float *)(a1 + 124);
/* line: 10, address: 0x6046ce58 */     v3 = *(float *)(a1 + 136);
/* line: 11, address: 0x6046ce64 */     if ( v2 >= v3 )
/* line: 12 */     {
/* line: 13, address: 0x6046ce80 */       if ( v2 > v3 )
/* line: 14 */       {
/* line: 15, address: 0x6046ce88 */         v2 = v2 - *(float *)(a1 + 100);
/* line: 16, address: 0x6046ce94 */         if ( v2 < v3 )
/* line: 17, address: 0x6046ce98 */           v2 = *(float *)(a1 + 136);
/* line: 18 */       }
/* line: 19 */     }
/* line: 20 */     else
/* line: 21 */     {
/* line: 22, address: 0x6046ce6c */       v2 = v2 + *(float *)(a1 + 100);
/* line: 23, address: 0x6046ce78 */       if ( v2 > v3 )
/* line: 24, address: 0x6046ce78 */         v2 = *(float *)(a1 + 136);
/* line: 25 */     }
/* line: 26, address: 0x6046cea0 */     *(float *)(a1 + 124) = v2;
/* line: 27, address: 0x6046cea4 */     CollisionActor__handleSpeed((CollisionActor *)a1);
/* line: 28 */   }
/* line: 29, address: 0x6046ceac */   sub_6046313C(a1);
/* line: 30, address: 0x6046ceb4 */   sub_60463584(a1);
/* line: 31, address: 0x6046cebc */   result = *(unsigned __int8 *)(a1 + 6197);
/* line: 32, address: 0x6046cebc */   if ( !*(_BYTE *)(a1 + 6197) )
/* line: 33 */   {
/* line: 34, address: 0x6046cee0 */     if ( sub_60463998((Actor *)a1, &v5, 4, 1) == 1 )
/* line: 35, address: 0x6046cef4 */       sub_60463CD0(a1, v5, *(_DWORD *)(a1 + 6208));
/* line: 36, address: 0x6046cefc */     return sub_6046C3AC(a1);
/* line: 37 */   }
/* line: 38, address: 0x6046cf04 */   return result;
/* line: 39 */ }