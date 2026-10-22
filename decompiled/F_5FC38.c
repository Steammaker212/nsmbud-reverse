#include "nsmbudx_prelude.h"

/* ---- forward declarations for functions defined below ---- */
bool __fastcall sub_6075FC38(int a1);

/* ---- forward declarations for functions defined below ---- */
bool __fastcall sub_6075FC38(int a1);

/* ---- forward declarations for functions defined below ---- */
bool __fastcall sub_6075FC38(int a1);

/* ---- forward declarations for functions defined below ---- */
bool __fastcall sub_6075FC38(int a1);

/* ---- forward declarations for functions defined below ---- */
bool __fastcall sub_6075FC38(int a1);

/* ---- forward declarations for functions defined below ---- */
bool __fastcall sub_6075FC38(int a1);

/* ---- forward declarations for functions defined below ---- */
bool __fastcall sub_6075FC38(int a1);
/* line: 0, address: 0x6075fc38 */ bool __fastcall sub_6075FC38(int a1)
/* line: 1 */ {
/* line: 2 */   int v2; // r0
/* line: 3 */   int v3; // r5
/* line: 4 */   _DWORD v5[2]; // [sp+4h] [bp-Ch] BYREF
/* line: 5 */   char v6; // [sp+Ch] [bp-4h]
/* line: 6 */ 
/* line: 7, address: 0x6075fc48 */   v2 = *(_DWORD *)(a1 + 6900);
/* line: 8, address: 0x6075fc50 */   if ( (v2 & 1) == 0 )
/* line: 9, address: 0x6075fc50 */     return 0;
/* line: 10, address: 0x6075fc5c */   if ( *(_DWORD *)(a1 + 1316) == 5 )
/* line: 11 */   {
/* line: 12, address: 0x6075fc64 */     if ( (v2 & 0x40000) != 0 )
/* line: 13, address: 0x6075fc64 */       return 0;
/* line: 14 */   }
/* line: 15, address: 0x6075fc7c */   else if ( *(_DWORD *)(a1 + 6904) & 0x800000 | v2 & 0x40000 )
/* line: 16 */   {
/* line: 17, address: 0x6075fc80 */     return 0;
/* line: 18 */   }
/* line: 19, address: 0x6075fc8c */   if ( (*(_BYTE *)(a1 + 1222) & 8) != 0 )
/* line: 20, address: 0x6075fc8c */     return 0;
/* line: 21, address: 0x6075fca8 */   if ( (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(a1 + 648) + 4) + 196) & 1) == 0 || !sub_60763E28(a1) )
/* line: 22 */   {
/* line: 23, address: 0x6075fce0 */     if ( sub_6078663C(a1 + 688) == 1 )
/* line: 24 */     {
/* line: 25, address: 0x6075fce8 */       v3 = 1;
/* line: 26, address: 0x6075fcf0 */       v5[0] = 0;
/* line: 27, address: 0x6075fcf8 */       v5[1] = 1;
/* line: 28, address: 0x6075fcfc */       v6 = 1;
/* line: 29, address: 0x6075fd08 */       sub_60773E6C(a1, 13367360, v5);
/* line: 30, address: 0x6075fd0c */       return v3;
/* line: 31 */     }
/* line: 32, address: 0x6075fd10 */     return 0;
/* line: 33 */   }
/* line: 34, address: 0x6075fd1c */   return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1024))(a1) != 0;
/* line: 35 */ }