#include "nsmbudx_prelude.h"

/* ---- forward declarations for functions defined below ---- */
unsigned int __fastcall sub_604663F4(int a1, _DWORD *a2, int a3, int a4, unsigned __int8 a5, int a6);

/* ---- forward declarations for functions defined below ---- */
unsigned int __fastcall sub_604663F4(int a1, _DWORD *a2, int a3, int a4, unsigned __int8 a5, int a6);

/* ---- forward declarations for functions defined below ---- */
unsigned int __fastcall sub_604663F4(int a1, _DWORD *a2, int a3, int a4, unsigned __int8 a5, int a6);

/* ---- forward declarations for functions defined below ---- */
unsigned int __fastcall sub_604663F4(int a1, _DWORD *a2, int a3, int a4, unsigned __int8 a5, int a6);

/* ---- forward declarations for functions defined below ---- */
unsigned int __fastcall sub_604663F4(int a1, _DWORD *a2, int a3, int a4, unsigned __int8 a5, int a6);

/* ---- forward declarations for functions defined below ---- */
unsigned int __fastcall sub_604663F4(int a1, _DWORD *a2, int a3, int a4, unsigned __int8 a5, int a6);
/* line: 0, address: 0x604663f4 */ unsigned int __fastcall sub_604663F4(int a1, _DWORD *a2, int a3, int a4, unsigned __int8 a5, int a6)
/* line: 1 */ {
/* line: 2 */   char v6; // r12
/* line: 3 */   unsigned int result; // r0
/* line: 4 */   int v11; // r6
/* line: 5 */   _DWORD v12[11]; // [sp+4h] [bp-2Ch] BYREF
/* line: 6 */ 
/* line: 7, address: 0x60466410 */   result = (unsigned int)&unk_60C9D3F0 & ~(1615225880 << v6);
/* line: 8, address: 0x60466418 */   if ( (result & 1) == 0 )
/* line: 9 */   {
/* line: 10, address: 0x60466424 */     result = _cxa_guard_acquire_0(&unk_60C9D3F0);
/* line: 11, address: 0x6046642c */     if ( result )
/* line: 12 */     {
/* line: 13, address: 0x60466444 */       dword_60C9D3F4 = MEMORY[0xAF3664];
/* line: 14, address: 0x60466454 */       dword_60C9D3F8 = MEMORY[0xAF3668];
/* line: 15, address: 0x60466464 */       dword_60C9D3FC = MEMORY[0xAF3A80];
/* line: 16, address: 0x60466474 */       dword_60C9D400 = MEMORY[0xAF366C];
/* line: 17, address: 0x60466484 */       dword_60C9D404 = MEMORY[0xAF3670];
/* line: 18, address: 0x60466494 */       dword_60C9D408 = MEMORY[0xAF3674];
/* line: 19, address: 0x604664a4 */       dword_60C9D40C = MEMORY[0xAF3678];
/* line: 20, address: 0x604664b4 */       dword_60C9D410 = MEMORY[0xAF367C];
/* line: 21, address: 0x604664c4 */       dword_60C9D414 = MEMORY[0xAF3680];
/* line: 22, address: 0x604664d4 */       dword_60C9D418 = MEMORY[0xAF3684];
/* line: 23, address: 0x604664e4 */       dword_60C9D41C = MEMORY[0xAF368C];
/* line: 24, address: 0x604664e8 */       result = _cxa_guard_release_0(&unk_60C9D3F0);
/* line: 25 */     }
/* line: 26 */   }
/* line: 27, address: 0x604664f0 */   if ( a4 != -1 )
/* line: 28 */   {
/* line: 29, address: 0x60466500 */     v11 = a4;
/* line: 30, address: 0x60466504 */     if ( a4 > 10 )
/* line: 31, address: 0x60466504 */       v11 = 0;
/* line: 32, address: 0x60466550 */     if ( *(_DWORD *)(MEMORY[0xC99DD4] + 764) == 1
/* line: 33 */       && MEMORY[0xC9A1E0]
/* line: 34 */       && (unsigned int)a4 <= 0xA
/* line: 35 */       && ((1 << a4) & 0x512) != 0
/* line: 36 */       && *(_DWORD *)(MEMORY[0xC9A1E0] + 532) == 4 )
/* line: 37 */     {
/* line: 38, address: 0x60466550 */       v11 = 6;
/* line: 39 */     }
/* line: 40, address: 0x60466564 */     memset(&v12[1], 0, 0x28u);
/* line: 41, address: 0x60466570 */     v12[0] = a3;
/* line: 42, address: 0x60466574 */     if ( a6 )
/* line: 43, address: 0x60466574 */       v12[2] = a6;
/* line: 44, address: 0x60466588 */     v12[3] = Profile__get(*((_DWORD *)&unk_60C9D3F0 + v11 + 1));
/* line: 45, address: 0x60466598 */     v12[4] = *a2;
/* line: 46, address: 0x604665a0 */     v12[5] = a2[1];
/* line: 47, address: 0x604665a8 */     v12[6] = a2[2];
/* line: 48, address: 0x604665b0 */     LOWORD(v12[8]) = a5;
/* line: 49, address: 0x604665b8 */     *(uint8_t *)((uint8_t *)&(v12[8]) + 2) = 0;
/* line: 50, address: 0x604665bc */     v12[10] = 0;
/* line: 51, address: 0x604665cc */     return (unsigned int)ActorMgr__create(MEMORY[0xC7B400], (int)v12, 0);
/* line: 52 */   }
/* line: 53, address: 0x604665d4 */   return result;
/* line: 54 */ }