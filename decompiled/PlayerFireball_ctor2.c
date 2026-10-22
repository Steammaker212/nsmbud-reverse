#include "nsmbudx_prelude.h"

/* ---- forward declarations for functions defined below ---- */
int __fastcall PlayerFireball_ctor(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall PlayerFireball_ctor(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall PlayerFireball_ctor(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall PlayerFireball_ctor(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall PlayerFireball_ctor(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall PlayerFireball_ctor(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall PlayerFireball_ctor(int a1);
/* line: 0, address: 0x6013a7a4 */ int __fastcall PlayerFireball_ctor(int a1)
/* line: 1 */ {
/* line: 2 */   int v2; // r0
/* line: 3 */   int result; // r0
/* line: 4 */   int v4; // r1
/* line: 5 */ 
/* line: 6, address: 0x6013a7b0 */   v2 = operator new(6776);
/* line: 7, address: 0x6013a7b8 */   result = FireballBase_ctor(v2, a1);
/* line: 8, address: 0x6013a7cc */   *(_DWORD *)result = 12397132;
/* line: 9, address: 0x6013a7d4 */   *(_DWORD *)(result + 6760) = 0;
/* line: 10, address: 0x6013a7dc */   *(_DWORD *)(result + 6764) = 0;
/* line: 11, address: 0x6013a7e8 */   v4 = *(_DWORD *)(result + 20) & 0xF;
/* line: 12, address: 0x6013a7ec */   *(_DWORD *)(result + 6768) = v4;
/* line: 13, address: 0x6013a7f0 */   *(_BYTE *)(result + 84) = v4;
/* line: 14, address: 0x6013a7f4 */   return result;
/* line: 15 */ }