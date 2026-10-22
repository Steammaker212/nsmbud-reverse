#include "nsmbudx_prelude.h"
/* line: 0, address: 0x606af450 */ void __fastcall sub_606AF450(int a1)
/* line: 1 */ {
/* line: 2 */   int v2; // r5
/* line: 3 */   int v3; // r0
/* line: 4 */   int v4; // r3
/* line: 5 */   int v5; // r0
/* line: 6 */   unsigned __int8 v6; // r1
/* line: 7 */   _BYTE v7[12]; // [sp+Ch] [bp-3Ch] BYREF
/* line: 8 */   int v8; // [sp+18h] [bp-30h]
/* line: 9 */   float v9; // [sp+28h] [bp-20h]
/* line: 10 */   int v10; // [sp+38h] [bp-10h]
/* line: 11 */   int v11; // [sp+3Ch] [bp-Ch] BYREF
/* line: 12 */   float v12; // [sp+40h] [bp-8h]
/* line: 13 */   int v13; // [sp+44h] [bp-4h]
/* line: 14 */ 
/* line: 15, address: 0x606af45c */   if ( *(_BYTE *)(a1 + 1248) )
/* line: 16 */   {
/* line: 17, address: 0x606af474 */     *(_BYTE *)(a1 + 1248) = 0;
/* line: 18, address: 0x606af49c */     sub_603FD768(MEMORY[0xC99DF4], *(unsigned __int8 *)(MEMORY[0xC9A684] + 18), 1);
/* line: 19, address: 0x606af4ac */     (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
/* line: 20, address: 0x606af4b4 */     v2 = 4;
/* line: 21, address: 0x606af4c8 */     if ( *(_DWORD *)(MEMORY[0xC99DD4] + 764) != 1 )
/* line: 22 */     {
/* line: 23, address: 0x606af4d8 */       v3 = sub_603FC6A0(MEMORY[0xC99DE4]);
/* line: 24, address: 0x606af4e0 */       v2 = 4;
/* line: 25, address: 0x606af514 */       if ( v3 % 10 == v3 / 10 % 10 )
/* line: 26, address: 0x606af514 */         v2 = 8;
/* line: 27 */     }
/* line: 28, address: 0x606af530 */     (*(void (__fastcall **)(_DWORD, int, _BYTE *))(***(_DWORD ***)(a1 + 644) + 108))(**(_DWORD **)(a1 + 644), 4, v7);
/* line: 29, address: 0x606af53c */     v11 = v8;
/* line: 30, address: 0x606af544 */     v12 = v9;
/* line: 31, address: 0x606af548 */     v13 = v10;
/* line: 32, address: 0x606af54c */     if ( *(_BYTE *)(a1 + 1250) )
/* line: 33 */     {
/* line: 34, address: 0x606af568 */       v4 = 3;
/* line: 35, address: 0x606af574 */       v12 = v9 + -16.0;
/* line: 36, address: 0x606af578 */       v5 = MEMORY[0xCAF15C];
/* line: 37, address: 0x606af57c */       v6 = *(_BYTE *)(a1 + 86);
/* line: 38 */     }
/* line: 39 */     else
/* line: 40 */     {
/* line: 41, address: 0x606af588 */       v6 = *(_BYTE *)(a1 + 86);
/* line: 42, address: 0x606af590 */       v4 = 0;
/* line: 43, address: 0x606af598 */       v5 = MEMORY[0xCAF15C];
/* line: 44 */     }
/* line: 45, address: 0x606af5a8 */     sub_605839E8(v5, &v11, v2, v4, v6, 0);
/* line: 46 */   }
/* line: 47 */ }