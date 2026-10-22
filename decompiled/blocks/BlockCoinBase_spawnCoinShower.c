#include "nsmbudx_prelude.h"

// ---- addr: 0x605b5958 */ int __fastcall BlockCoinBase_spawnCoinShower(int a1)
/* line: 1 */ {
/* line: 2 */   float v2; // r1
/* line: 3 */   int v3; // r2
/* line: 4 */   int v4; // r5
/* line: 5 */   int v5; // r1
/* line: 6 */   int v6; // r3
/* line: 7 */   int v8; // [sp+8h] [bp-20h] BYREF
/* line: 8 */   float v9; // [sp+Ch] [bp-1Ch]
/* line: 9 */   int v10; // [sp+10h] [bp-18h]
/* line: 10 */   _BYTE v11[8]; // [sp+18h] [bp-10h] BYREF
/* line: 11 */   _DWORD v12[2]; // [sp+20h] [bp-8h] BYREF
/* line: 12 */ 
/* line: 13, address: 0x605b596c */   v2 = *(float *)(a1 + 112);
/* line: 14, address: 0x605b596c */   v3 = *(_DWORD *)(a1 + 116);
/* line: 15, address: 0x605b5970 */   v8 = *(_DWORD *)(a1 + 108);
/* line: 16, address: 0x605b5970 */   v9 = v2;
/* line: 17, address: 0x605b5970 */   v10 = v3;
/* line: 18, address: 0x605b5990 */   if ( *(_BYTE *)(a1 + 6868) || *(_DWORD *)(a1 + 6864) == 2 )
/* line: 19 */   {
/* line: 20, address: 0x605b59ac */     v4 = MEMORY[0xC7F534];
/* line: 21, address: 0x605b59b0 */     v9 = v9 + 16.0;
/* line: 22, address: 0x605b59b8 */     v5 = *(_DWORD *)(a1 + 112);
/* line: 23, address: 0x605b59bc */     v12[0] = *(_DWORD *)(a1 + 108);
/* line: 24, address: 0x605b59c0 */     v12[1] = v5;
/* line: 25, address: 0x605b59cc */     mapPositionToScreen(v11, v12);
/* line: 26, address: 0x605b59e4 */     BasicSoundActor2_play(v4, "SE_OBJ_GET_COIN_SHOWER", v11, 0);
/* line: 27, address: 0x605b59e8 */     v6 = 2;
/* line: 28 */   }
/* line: 29 */   else
/* line: 30 */   {
/* line: 31, address: 0x605b59f8 */     v6 = 3;
/* line: 32, address: 0x605b5a00 */     v9 = v9 + -8.0;
/* line: 33 */   }
/* line: 34, address: 0x605b5a2c */   return ((int (__fastcall *)(_DWORD, int *, int, int, _DWORD, int))sub_605839E8)(
/* line: 35 */            MEMORY[0xCAF15C],
/* line: 36 */            &v8,
/* line: 37 */            5,
/* line: 38 */            v6,
/* line: 39 */            *(unsigned __int8 *)(a1 + 86),
/* line: 40 */            1);
/* line: 41 */ }