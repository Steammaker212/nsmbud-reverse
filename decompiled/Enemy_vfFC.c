#include "nsmbudx_prelude.h"

/* ---- forward declarations for functions defined below ---- */
bool __fastcall Enemy_vfFC(int a1, int a2, int a3);

/* ---- forward declarations for functions defined below ---- */
bool __fastcall Enemy_vfFC(int a1, int a2, int a3);

/* ---- forward declarations for functions defined below ---- */
bool __fastcall Enemy_vfFC(int a1, int a2, int a3);

/* ---- forward declarations for functions defined below ---- */
bool __fastcall Enemy_vfFC(int a1, int a2, int a3);

/* ---- forward declarations for functions defined below ---- */
bool __fastcall Enemy_vfFC(int a1, int a2, int a3);

/* ---- forward declarations for functions defined below ---- */
bool __fastcall Enemy_vfFC(int a1, int a2, int a3);

/* ---- forward declarations for functions defined below ---- */
bool __fastcall Enemy_vfFC(int a1, int a2, int a3);
/* line: 0, address: 0x602a2ab0 */ bool __fastcall Enemy_vfFC(int a1, int a2, int a3)
/* line: 1 */ {
/* line: 2 */   int v6; // r0
/* line: 3 */   int v7; // r1
/* line: 4 */   _BOOL4 result; // r0
/* line: 5 */   int v9; // r1
/* line: 6 */ 
/* line: 7, address: 0x602a2ac0 */   v6 = *(_DWORD *)(a3 + 140);
/* line: 8, address: 0x602a2ac8 */   if ( v6 == 3 )
/* line: 9 */   {
/* line: 10, address: 0x602a2ad4 */     if ( (*(_BYTE *)(a2 + 148) & 8) == 0 )
/* line: 11, address: 0x602a2ad4 */       return 0;
/* line: 12, address: 0x602a2af0 */     v7 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a1 + 340))(a1, a2, a3);
/* line: 13, address: 0x602a2af4 */     result = 1;
/* line: 14, address: 0x602a2afc */     if ( v7 )
/* line: 15, address: 0x602a2afc */       return result;
/* line: 16, address: 0x602a2b00 */     v6 = *(_DWORD *)(a3 + 140);
/* line: 17 */   }
/* line: 18, address: 0x602a2b08 */   if ( v6 != 24 )
/* line: 19, address: 0x602a2b08 */     goto LABEL_9;
/* line: 20, address: 0x602a2b14 */   if ( (*(_BYTE *)(a2 + 151) & 1) != 0 )
/* line: 21 */   {
/* line: 22, address: 0x602a2b30 */     v9 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a1 + 332))(a1, a2, a3);
/* line: 23, address: 0x602a2b34 */     result = 1;
/* line: 24, address: 0x602a2b3c */     if ( v9 )
/* line: 25, address: 0x602a2b3c */       return result;
/* line: 26, address: 0x602a2b40 */     v6 = *(_DWORD *)(a3 + 140);
/* line: 27 */ LABEL_9:
/* line: 28, address: 0x602a2b54 */     if ( v6 == 26 && (*(_BYTE *)(a2 + 151) & 4) != 0 )
/* line: 29, address: 0x602a2b84 */       return (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a1 + 336))(a1, a2, a3) != 0;
/* line: 30 */   }
/* line: 31, address: 0x602a2b3c */   return 0;
/* line: 32 */ }