#include "nsmbudx_prelude.h"

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60777FB4(int result, _DWORD *a2, int a3);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60777FB4(int result, _DWORD *a2, int a3);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60777FB4(int result, _DWORD *a2, int a3);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60777FB4(int result, _DWORD *a2, int a3);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60777FB4(int result, _DWORD *a2, int a3);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60777FB4(int result, _DWORD *a2, int a3);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60777FB4(int result, _DWORD *a2, int a3);
/* line: 0, address: 0x60777fb4 */ int __fastcall sub_60777FB4(int result, _DWORD *a2, int a3)
/* line: 1 */ {
/* line: 2 */   int v5; // r6
/* line: 3 */   int v6; // r1
/* line: 4 */ 
/* line: 5, address: 0x60777fc0 */   v5 = result;
/* line: 6, address: 0x60777fc8 */   if ( a2 )
/* line: 7 */   {
/* line: 8, address: 0x60777fd0 */     sub_6076DEAC(a2);
/* line: 9, address: 0x60777fd8 */     result = *(_DWORD *)(v5 + 468);
/* line: 10, address: 0x60777fe4 */     v6 = *(_DWORD *)(MEMORY[0xC995D0] + 32);
/* line: 11, address: 0x60777ff8 */     if ( (!v6 || v6 != result) && !*(_DWORD *)(result + 20) )
/* line: 12 */     {
/* line: 13, address: 0x60778004 */       result = *(_DWORD *)(result + 16);
/* line: 14, address: 0x6077800c */       if ( !result )
/* line: 15 */       {
/* line: 16, address: 0x60778020 */         (*(void (__fastcall **)(_DWORD *, int))(*a2 + 624))(a2, 1);
/* line: 17, address: 0x6077802c */         *(_DWORD *)(a2[3002] + 32) = a3;
/* line: 18, address: 0x60778040 */         return sub_603E552C(MEMORY[0xC995D0], a2[3002]);
/* line: 19 */       }
/* line: 20 */     }
/* line: 21 */   }
/* line: 22, address: 0x6077800c */   return result;
/* line: 23 */ }