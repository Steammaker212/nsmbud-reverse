#include "nsmbudx_prelude.h"

// ---- addr: 0x60564834 */ int __fastcall sub_60564834(int a1)
/* line: 1 */ {
/* line: 2 */   float v1; // s0
/* line: 3 */   float v2; // s1
/* line: 4 */   float v3; // s2
/* line: 5 */   int *v5; // r5
/* line: 6 */   int v6; // r0
/* line: 7 */   unsigned int v7; // r5
/* line: 8 */   unsigned int v8; // r0
/* line: 9 */   int v9; // r0
/* line: 10 */   int v10; // r1
/* line: 11 */   float *v11; // r2
/* line: 12 */   int v12; // r0
/* line: 13 */   bool v14; // zf
/* line: 14 */   float *v15; // r0
/* line: 15 */   float v16; // [sp+4h] [bp-Ch] BYREF
/* line: 16 */   float v17; // [sp+8h] [bp-8h]
/* line: 17 */   float v18; // [sp+Ch] [bp-4h]
/* line: 18 */ 
/* line: 19, address: 0x6056484c */   v5 = (int *)(a1 + 6856);
/* line: 20, address: 0x60564858 */   (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 368))(a1);
/* line: 21, address: 0x60564860 */   v16 = v1;
/* line: 22, address: 0x60564864 */   v17 = v2;
/* line: 23, address: 0x60564868 */   v18 = v3;
/* line: 24, address: 0x6056486c */   v6 = *v5;
/* line: 25, address: 0x60564870 */   v7 = 1;
/* line: 26, address: 0x60564874 */   v8 = v6 - 15;
/* line: 27, address: 0x6056487c */   if ( v8 <= 8 )
/* line: 28, address: 0x6056488c */     v7 = (0xFAu >> v8) & 1;
/* line: 29, address: 0x6056489c */   v9 = sub_60465D48(MEMORY[0xC9D3E4]);
/* line: 30, address: 0x605648bc */   if ( v7 == 1 && v9 && !*(_DWORD *)(a1 + 7368) )
/* line: 31 */   {
/* line: 32, address: 0x60564968 */     if ( *(_BYTE *)(a1 + 6868) )
/* line: 33 */     {
/* line: 34, address: 0x6056497c */       *(_DWORD *)(a1 + 6864) = 2;
/* line: 35, address: 0x60564988 */       *(_BYTE *)(a1 + 6846) = 1;
/* line: 36, address: 0x6056498c */       v15 = (float *)(a1 + 7360);
/* line: 37 */     }
/* line: 38 */     else
/* line: 39 */     {
/* line: 40, address: 0x605649a0 */       v15 = (float *)(a1 + 7360);
/* line: 41, address: 0x605649a8 */       if ( *(_BYTE *)(a1 + 6846) == 2 )
/* line: 42, address: 0x605649a8 */         v15 = (float *)(a1 + 7364);
/* line: 43 */     }
/* line: 44, address: 0x605649c0 */     v17 = *v15 + v2;
/* line: 45, address: 0x605649c4 */     if ( *(_DWORD *)(a1 + 7304) )
/* line: 46, address: 0x605649d4 */       *(_DWORD *)(a1 + 6872) = 1;
/* line: 47, address: 0x605649ec */     return ((int (__fastcall *)(int, float *, _DWORD, int, _DWORD))sub_605B624C)(
/* line: 48 */              a1,
/* line: 49 */              &v16,
/* line: 50 */              0,
/* line: 51 */              1,
/* line: 52 */              *(unsigned __int8 *)(a1 + 6878));
/* line: 53 */   }
/* line: 54 */   else
/* line: 55 */   {
/* line: 56, address: 0x605648c8 */     v10 = *(unsigned __int8 *)(a1 + 6846);
/* line: 57, address: 0x605648d0 */     v11 = (float *)(a1 + 7352);
/* line: 58, address: 0x605648d8 */     if ( v10 == 2 )
/* line: 59, address: 0x605648d8 */       v11 = (float *)(a1 + 7356);
/* line: 60, address: 0x605648e8 */     v17 = *v11 + v2;
/* line: 61, address: 0x605648ec */     if ( *(_BYTE *)(a1 + 6878) )
/* line: 62 */     {
/* line: 63, address: 0x60564900 */       *(_DWORD *)(a1 + 6872) = 0;
/* line: 64, address: 0x60564904 */       v12 = 1;
/* line: 65 */     }
/* line: 66 */     else
/* line: 67 */     {
/* line: 68, address: 0x60564934 */       v12 = 0;
/* line: 69, address: 0x60564930 */       if ( *(_DWORD *)(a1 + 7304) )
/* line: 70 */       {
/* line: 71, address: 0x60564948 */         v14 = *(_BYTE *)(a1 + 7378) == 0;
/* line: 72, address: 0x60564944 */         if ( *(_BYTE *)(a1 + 7378) )
/* line: 73, address: 0x6056494c */           v14 = v10 == 1;
/* line: 74, address: 0x60564950 */         if ( v14 )
/* line: 75, address: 0x6056495c */           *(_DWORD *)(a1 + 6872) = 1;
/* line: 76 */       }
/* line: 77 */     }
/* line: 78, address: 0x6056491c */     return ((int (__fastcall *)(int, float *, _DWORD, int, int))sub_605B5D54)(a1, &v16, 0, 1, v12);
/* line: 79 */   }
/* line: 80 */ }