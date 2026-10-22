#include "nsmbudx_prelude.h"

/* ---- called here with a partial argument list: declared old-style so the call is legal ---- */
_BYTE * __fastcall ActorMgr__create();


/* ---- forward declarations for functions defined below ---- */
_BYTE * __fastcall sub_60582B14(int a1, _DWORD *a2, int a3, int a4);

/* ---- forward declarations for functions defined below ---- */
_BYTE * __fastcall sub_60582B14(int a1, _DWORD *a2, int a3, int a4);

/* ---- forward declarations for functions defined below ---- */
_BYTE * __fastcall sub_60582B14(int a1, _DWORD *a2, int a3, int a4);

/* ---- forward declarations for functions defined below ---- */
_BYTE * __fastcall sub_60582B14(int a1, _DWORD *a2, int a3, int a4);

/* ---- forward declarations for functions defined below ---- */
_BYTE * __fastcall sub_60582B14(int a1, _DWORD *a2, int a3, int a4);

/* ---- forward declarations for functions defined below ---- */
_BYTE * __fastcall sub_60582B14(int a1, _DWORD *a2, int a3, int a4);
/* line: 0, address: 0x60582b14 */ _BYTE *__fastcall sub_60582B14(int a1, _DWORD *a2, int a3, int a4)
/* line: 1 */ {
/* line: 2 */   _DWORD v8[11]; // [sp+4h] [bp-2Ch] BYREF
/* line: 3 */ 
/* line: 4, address: 0x60582b34 */   memset(&v8[1], 0, 0x24u);
/* line: 5, address: 0x60582b3c */   v8[0] = a4 | (16 * a3);
/* line: 6, address: 0x60582b50 */   v8[3] = Profile__get(MEMORY[0xAF3364]);
/* line: 7, address: 0x60582b60 */   v8[4] = *a2;
/* line: 8, address: 0x60582b68 */   v8[5] = a2[1];
/* line: 9, address: 0x60582b70 */   v8[6] = a2[2];
/* line: 10, address: 0x60582b78 */   LOWORD(v8[8]) = 0;
/* line: 11, address: 0x60582b80 */   *(uint8_t *)((uint8_t *)&(v8[8]) + 2) = 0;
/* line: 12, address: 0x60582b84 */   v8[10] = 0;
/* line: 13, address: 0x60582b9c */   return ActorMgr__create(MEMORY[0xC7B400], (int)v8, 0);
/* line: 14 */ }