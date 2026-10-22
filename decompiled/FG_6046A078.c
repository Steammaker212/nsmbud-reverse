#include "nsmbudx_prelude.h"

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_6046A078(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_6046A078(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_6046A078(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_6046A078(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_6046A078(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_6046A078(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_6046A078(int a1);
/* line: 0, address: 0x6046a078 */ int __fastcall sub_6046A078(int a1)
/* line: 1 */ {
/* line: 2 */   int v2; // r5
/* line: 3 */   _DWORD *v3; // r6
/* line: 4 */   unsigned int v4; // r0
/* line: 5 */   int (__fastcall ***v5)(_DWORD, int); // r5
/* line: 6 */   int v6; // r0
/* line: 7 */   _BYTE v8[12]; // [sp+0h] [bp-10h] BYREF
/* line: 8 */   int v9; // [sp+Ch] [bp-4h] BYREF
/* line: 9 */ 
/* line: 10, address: 0x6046a090 */   v2 = 0;
/* line: 11, address: 0x6046a09c */   if ( sub_60463998((Actor *)a1, &v9, 1, 0) == 1 )
/* line: 12 */   {
/* line: 13, address: 0x6046a0a8 */     v3 = (_DWORD *)(a1 + 6208);
/* line: 14, address: 0x6046a0b0 */     sub_6046395C(a1, *(_DWORD *)(a1 + 6208));
/* line: 15, address: 0x6046a0b8 */     v4 = *(_DWORD *)(a1 + 6208);
/* line: 16, address: 0x6046a0c4 */     if ( v4 >= 4 )
/* line: 17, address: 0x6046a0c4 */       v4 = 0;
/* line: 18, address: 0x6046a0d0 */     v5 = *(int (__fastcall ****)(_DWORD, int))(MEMORY[0xCC436C] + 4 * v4 + 48);
/* line: 19, address: 0x6046a0f0 */     if ( _cxa_guard_acquire_0(13087604) )
/* line: 20 */     {
/* line: 21, address: 0x6046a110 */       MEMORY[0xC7B370] = 12320944;
/* line: 22, address: 0x6046a11c */       _cxa_guard_release_0(13087604);
/* line: 23 */     }
/* line: 24, address: 0x6046a144 */     if ( v5 && (**v5)(v5, 13087600) == 1 )
/* line: 25, address: 0x6046a14c */       sub_607AA630(v5);
/* line: 26, address: 0x6046a16c */     if ( sub_60022A80(MEMORY[0xC7F52C], v8, *v3) == 1 )
/* line: 27, address: 0x6046a188 */       sub_603F7A98(MEMORY[0xC99DC0], v8, 1, *v3);
/* line: 28, address: 0x6046a190 */     v6 = *v3;
/* line: 29, address: 0x6046a198 */     v2 = 1;
/* line: 30, address: 0x6046a1a4 */     if ( *v3 >= 4u )
/* line: 31, address: 0x6046a1a4 */       v6 = 0;
/* line: 32, address: 0x6046a1bc */     ++*(_DWORD *)(MEMORY[0xC9A1E0] + 36 * v6 + 556);
/* line: 33, address: 0x6046a1d4 */     sub_600221A0(MEMORY[0xC7F52C], 8, *v3, 1);
/* line: 34, address: 0x6046a1dc */     sub_604635F4(a1);
/* line: 35, address: 0x6046a1e8 */     if ( (*(_BYTE *)(a1 + 23) & 0x40) != 0 )
/* line: 36, address: 0x6046a1ec */       sub_60023B90();
/* line: 37, address: 0x6046a1f0 */     *(_BYTE *)(a1 + 19) = 1;
/* line: 38 */   }
/* line: 39, address: 0x6046a1fc */   return v2;
/* line: 40 */ }