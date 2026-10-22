#include "nsmbudx_prelude.h"

/* ---- forward declarations for functions defined below ---- */
bool __fastcall sub_607A26F8(int a1, int a2);

/* ---- forward declarations for functions defined below ---- */
bool __fastcall sub_607A26F8(int a1, int a2);

/* ---- forward declarations for functions defined below ---- */
bool __fastcall sub_607A26F8(int a1, int a2);

/* ---- forward declarations for functions defined below ---- */
bool __fastcall sub_607A26F8(int a1, int a2);

/* ---- forward declarations for functions defined below ---- */
bool __fastcall sub_607A26F8(int a1, int a2);

/* ---- forward declarations for functions defined below ---- */
bool __fastcall sub_607A26F8(int a1, int a2);

/* ---- forward declarations for functions defined below ---- */
bool __fastcall sub_607A26F8(int a1, int a2);
/* line: 0, address: 0x607a26f8 */ bool __fastcall sub_607A26F8(int a1, int a2)
/* line: 1 */ {
/* line: 2 */   int v2; // r12
/* line: 3 */   _BOOL4 result; // r0
/* line: 4 */   bool v4; // zf
/* line: 5 */ 
/* line: 6, address: 0x607a2710 */   v2 = *(_DWORD *)(a1 + 11388);
/* line: 7, address: 0x607a2720 */   switch ( a2 )
/* line: 8 */   {
/* line: 9, address: 0x607a2720 */     case 1:
/* line: 10, address: 0x607a2758 */       v4 = v2 == 0;
/* line: 11, address: 0x607a275c */       result = 1;
/* line: 12, address: 0x607a2760 */       if ( v2 )
/* line: 13, address: 0x607a2760 */         v4 = v2 == 3;
/* line: 14, address: 0x607a2764 */       if ( !v4 )
/* line: 15, address: 0x607a2768 */         result = 0;
/* line: 16, address: 0x607a276c */       break;
/* line: 17, address: 0x607a2720 */     case 2:
/* line: 18, address: 0x607a2720 */     case 3:
/* line: 19, address: 0x607a2720 */     case 4:
/* line: 20, address: 0x607a2720 */     case 5:
/* line: 21, address: 0x607a2720 */     case 6:
/* line: 22, address: 0x607a2720 */     case 8:
/* line: 23, address: 0x607a2750 */       result = v2 != a2;
/* line: 24, address: 0x607a2754 */       break;
/* line: 25, address: 0x607a2720 */     case 7:
/* line: 26, address: 0x607a277c */       result = (unsigned int)(v2 - 7) > 1;
/* line: 27, address: 0x607a2780 */       break;
/* line: 28, address: 0x607a2720 */     case 9:
/* line: 29, address: 0x607a279c */       result = sub_6075EE0C(a1) && v2 != 9;
/* line: 30, address: 0x607a279c */       break;
/* line: 31 */   }
/* line: 32 */   return result;
/* line: 33 */ }