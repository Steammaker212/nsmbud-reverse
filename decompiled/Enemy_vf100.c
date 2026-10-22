#include "nsmbudx_prelude.h"

/* ---- forward declarations for functions defined below ---- */
bool __fastcall Enemy_vf100(int a1, int a2, int a3);

/* ---- forward declarations for functions defined below ---- */
bool __fastcall Enemy_vf100(int a1, int a2, int a3);

/* ---- forward declarations for functions defined below ---- */
bool __fastcall Enemy_vf100(int a1, int a2, int a3);

/* ---- forward declarations for functions defined below ---- */
bool __fastcall Enemy_vf100(int a1, int a2, int a3);

/* ---- forward declarations for functions defined below ---- */
bool __fastcall Enemy_vf100(int a1, int a2, int a3);

/* ---- forward declarations for functions defined below ---- */
bool __fastcall Enemy_vf100(int a1, int a2, int a3);

/* ---- forward declarations for functions defined below ---- */
bool __fastcall Enemy_vf100(int a1, int a2, int a3);
/* line: 0, address: 0x602a2b8c */ bool __fastcall Enemy_vf100(int a1, int a2, int a3)
/* line: 1 */ {
/* line: 2 */   int v6; // r0
/* line: 3 */   int v7; // r1
/* line: 4 */   _BOOL4 result; // r0
/* line: 5 */   int v9; // r1
/* line: 6 */   int v10; // r1
/* line: 7 */   int v11; // r1
/* line: 8 */   int v12; // r1
/* line: 9 */   int v13; // r1
/* line: 10 */ 
/* line: 11, address: 0x602a2b9c */   v6 = *(_DWORD *)(a3 + 140);
/* line: 12, address: 0x602a2ba4 */   if ( v6 == 9 )
/* line: 13 */   {
/* line: 14, address: 0x602a2bc0 */     v7 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a1 + 312))(a1, a2, a3);
/* line: 15, address: 0x602a2bc4 */     result = 1;
/* line: 16, address: 0x602a2bcc */     if ( v7 )
/* line: 17, address: 0x602a2bcc */       return result;
/* line: 18, address: 0x602a2bd0 */     v6 = *(_DWORD *)(a3 + 140);
/* line: 19 */   }
/* line: 20, address: 0x602a2bd8 */   if ( v6 == 1 )
/* line: 21 */   {
/* line: 22, address: 0x602a2be4 */     if ( (*(_BYTE *)(a2 + 148) & 2) == 0 )
/* line: 23, address: 0x602a2be4 */       return 0;
/* line: 24, address: 0x602a2c00 */     v9 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a1 + 316))(a1, a2, a3);
/* line: 25, address: 0x602a2c04 */     result = 1;
/* line: 26, address: 0x602a2c0c */     if ( v9 )
/* line: 27, address: 0x602a2c0c */       return result;
/* line: 28, address: 0x602a2c10 */     v6 = *(_DWORD *)(a3 + 140);
/* line: 29 */   }
/* line: 30, address: 0x602a2c18 */   if ( v6 == 20 )
/* line: 31 */   {
/* line: 32, address: 0x602a2c24 */     if ( (*(_BYTE *)(a2 + 150) & 0x10) == 0 )
/* line: 33, address: 0x602a2c24 */       return 0;
/* line: 34, address: 0x602a2c40 */     v10 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a1 + 328))(a1, a2, a3);
/* line: 35, address: 0x602a2c44 */     result = 1;
/* line: 36, address: 0x602a2c4c */     if ( v10 )
/* line: 37, address: 0x602a2c4c */       return result;
/* line: 38, address: 0x602a2c50 */     v6 = *(_DWORD *)(a3 + 140);
/* line: 39 */   }
/* line: 40, address: 0x602a2c58 */   if ( v6 == 14 )
/* line: 41 */   {
/* line: 42, address: 0x602a2c74 */     v11 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a1 + 316))(a1, a2, a3);
/* line: 43, address: 0x602a2c78 */     result = 1;
/* line: 44, address: 0x602a2c80 */     if ( v11 )
/* line: 45, address: 0x602a2c80 */       return result;
/* line: 46, address: 0x602a2c84 */     v6 = *(_DWORD *)(a3 + 140);
/* line: 47 */   }
/* line: 48, address: 0x602a2c8c */   if ( v6 == 2 )
/* line: 49 */   {
/* line: 50, address: 0x602a2c98 */     if ( (*(_BYTE *)(a2 + 148) & 4) == 0 )
/* line: 51, address: 0x602a2c98 */       return 0;
/* line: 52, address: 0x602a2cb4 */     v12 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a1 + 320))(a1, a2, a3);
/* line: 53, address: 0x602a2cb8 */     result = 1;
/* line: 54, address: 0x602a2cc0 */     if ( v12 )
/* line: 55, address: 0x602a2cc0 */       return result;
/* line: 56, address: 0x602a2cc4 */     v6 = *(_DWORD *)(a3 + 140);
/* line: 57 */   }
/* line: 58, address: 0x602a2ccc */   if ( v6 != 21 )
/* line: 59, address: 0x602a2ccc */     goto LABEL_23;
/* line: 60, address: 0x602a2cd8 */   if ( (*(_BYTE *)(a2 + 150) & 0x20) != 0 )
/* line: 61 */   {
/* line: 62, address: 0x602a2cf4 */     v13 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a1 + 320))(a1, a2, a3);
/* line: 63, address: 0x602a2cf8 */     result = 1;
/* line: 64, address: 0x602a2d00 */     if ( v13 )
/* line: 65, address: 0x602a2d00 */       return result;
/* line: 66, address: 0x602a2d04 */     v6 = *(_DWORD *)(a3 + 140);
/* line: 67 */ LABEL_23:
/* line: 68, address: 0x602a2d18 */     if ( v6 == 19 && (*(_BYTE *)(a2 + 150) & 8) != 0 )
/* line: 69, address: 0x602a2d48 */       return (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a1 + 324))(a1, a2, a3) != 0;
/* line: 70 */   }
/* line: 71, address: 0x602a2d00 */   return 0;
/* line: 72 */ }