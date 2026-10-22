#include "nsmbudx_prelude.h"
/* line: 0, address: 0x60461a1c */ int __fastcall sub_60461A1C(int a1)
/* line: 1 */ {
/* line: 2 */   float v2; // s0
/* line: 3 */   int v3; // r0
/* line: 4 */   int result; // r0
/* line: 5 */   _BYTE v5[76]; // [sp+4h] [bp-74h] BYREF
/* line: 6 */   _DWORD v6[5]; // [sp+50h] [bp-28h] BYREF
/* line: 7 */   _DWORD v7[2]; // [sp+64h] [bp-14h] BYREF
/* line: 8 */   __int16 v8; // [sp+6Ch] [bp-Ch] BYREF
/* line: 9 */   char v9; // [sp+6Eh] [bp-Ah]
/* line: 10 */   char v10; // [sp+6Fh] [bp-9h]
/* line: 11 */   int v11; // [sp+70h] [bp-8h]
/* line: 12 */   int v12; // [sp+74h] [bp-4h]
/* line: 13 */ 
/* line: 14, address: 0x60461a30 */   v8 = 0;
/* line: 15, address: 0x60461a38 */   v9 = *(_BYTE *)(a1 + 86);
/* line: 16, address: 0x60461a40 */   v10 = *(_BYTE *)(a1 + 87);
/* line: 17, address: 0x60461a44 */   v11 = 0;
/* line: 18, address: 0x60461a48 */   v12 = 0;
/* line: 19, address: 0x60461a50 */   v2 = *(float *)(a1 + 112);
/* line: 20, address: 0x60461a58 */   v7[0] = *(_DWORD *)(a1 + 108);
/* line: 21, address: 0x60461a64 */   *(float *)&v7[1] = v2 + 8.0;
/* line: 22, address: 0x60461a68 */   v3 = TileCheck_ctor(v5, &v8);
/* line: 23, address: 0x60461a74 */   sub_6015DD58(v3, v6, v7);
/* line: 24, address: 0x60461a84 */   result = v6[0] & 0xFFFFFF;
/* line: 25, address: 0x60461a88 */   if ( (v6[0] & 0xFFFFFF) == 0x4000D )
/* line: 26 */   {
/* line: 27, address: 0x60461a94 */     *(_BYTE *)(a1 + 6053) = 1;
/* line: 28, address: 0x60461a8c */     return 6053;
/* line: 29 */   }
/* line: 30, address: 0x60461a9c */   return result;
/* line: 31 */ }