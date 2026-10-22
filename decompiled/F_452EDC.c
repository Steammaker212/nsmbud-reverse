#include "nsmbudx_prelude.h"
/* line: 0, address: 0x60452edc */ int __fastcall sub_60452EDC(int a1)
/* line: 1 */ {
/* line: 2 */   int result; // r0
/* line: 3 */   int v3; // r5
/* line: 4 */   int v4; // r0
/* line: 5 */   int v5; // r0
/* line: 6 */   _BYTE *v6; // r1
/* line: 7 */   int v7; // r0
/* line: 8 */   _BYTE v8[8]; // [sp+0h] [bp-8h] BYREF
/* line: 9 */ 
/* line: 10, address: 0x60452eec */   *(_BYTE *)(a1 + 1320) = 0;
/* line: 11, address: 0x60452ef0 */   if ( *(_BYTE *)(a1 + 1394) )
/* line: 12 */   {
/* line: 13, address: 0x60452efc */     *(_BYTE *)(a1 + 1394) = 0;
/* line: 14, address: 0x60452f00 */     result = *(unsigned __int8 *)(a1 + 1393);
/* line: 15, address: 0x60452f04 */     *(_BYTE *)(a1 + 1392) = result;
/* line: 16 */   }
/* line: 17 */   else
/* line: 18 */   {
/* line: 19, address: 0x60452f1c */     v3 = *(_DWORD *)(MEMORY[0xC995D0] + 32);
/* line: 20, address: 0x60452f3c */     if ( _cxa_guard_acquire_0(13163568) )
/* line: 21 */     {
/* line: 22, address: 0x60452f5c */       MEMORY[0xC8DC2C] = 12424368;
/* line: 23, address: 0x60452f68 */       _cxa_guard_release_0(13163568);
/* line: 24 */     }
/* line: 25, address: 0x60452f88 */     if ( v3 && (*(int (__fastcall **)(int, int))(*(_DWORD *)v3 + 8))(v3, 13163564) )
/* line: 26, address: 0x60452f88 */       goto LABEL_15;
/* line: 27, address: 0x60452fb0 */     if ( _cxa_guard_acquire_0(13163560) )
/* line: 28 */     {
/* line: 29, address: 0x60452fd0 */       MEMORY[0xC8DC24] = 12424368;
/* line: 30, address: 0x60452fdc */       _cxa_guard_release_0(13163560);
/* line: 31 */     }
/* line: 32, address: 0x60452ffc */     if ( v3 && (*(int (__fastcall **)(int, int))(*(_DWORD *)v3 + 8))(v3, 13163556) )
/* line: 33, address: 0x60452ffc */       goto LABEL_15;
/* line: 34, address: 0x60453024 */     if ( _cxa_guard_acquire_0(13211080) )
/* line: 35 */     {
/* line: 36, address: 0x60453044 */       MEMORY[0xC995C4] = 12424368;
/* line: 37, address: 0x60453050 */       _cxa_guard_release_0(13211080);
/* line: 38 */     }
/* line: 39, address: 0x60453078 */     if ( v3 && (*(int (__fastcall **)(int, int))(*(_DWORD *)v3 + 8))(v3, 13211076) == 1 )
/* line: 40 */     {
/* line: 41 */ LABEL_15:
/* line: 42, address: 0x60453080 */       *(_DWORD *)(a1 + 1284) = *(_DWORD *)(a1 + 20);
/* line: 43, address: 0x60453088 */       *(_DWORD *)(a1 + 1288) = *(_DWORD *)(a1 + 332);
/* line: 44, address: 0x60453090 */       *(_DWORD *)(a1 + 1292) = *(_DWORD *)(a1 + 644);
/* line: 45, address: 0x60453098 */       *(_DWORD *)(a1 + 1296) = *(_DWORD *)(a1 + 956);
/* line: 46 */     }
/* line: 47, address: 0x6045309c */     v4 = *(_DWORD *)(a1 + 1316);
/* line: 48, address: 0x604530a4 */     if ( v4 == 2 )
/* line: 49 */     {
/* line: 50, address: 0x60453114 */       v7 = *(_DWORD *)(a1 + 1388);
/* line: 51, address: 0x60453118 */       if ( *(_BYTE *)(v7 + 208) )
/* line: 52 */       {
/* line: 53, address: 0x60453130 */         sub_60454858(a1, v8);
/* line: 54, address: 0x60453144 */         sub_60454B60(a1, *(_DWORD *)(a1 + 1388) + 212, v8);
/* line: 55, address: 0x60453148 */         v7 = *(_DWORD *)(a1 + 1388);
/* line: 56 */       }
/* line: 57, address: 0x6045314c */       sub_604564D4(v7);
/* line: 58 */     }
/* line: 59, address: 0x604530ac */     else if ( v4 == 1 )
/* line: 60 */     {
/* line: 61, address: 0x604530bc */       sub_60456458(*(_DWORD *)(a1 + 1388), 0, *(unsigned __int8 *)(a1 + 326));
/* line: 62, address: 0x604530cc */       sub_60456458(*(_DWORD *)(a1 + 1388), 1, *(unsigned __int8 *)(a1 + 638));
/* line: 63, address: 0x604530dc */       sub_60456458(*(_DWORD *)(a1 + 1388), 2, *(unsigned __int8 *)(a1 + 950));
/* line: 64, address: 0x604530ec */       sub_60456458(*(_DWORD *)(a1 + 1388), 3, *(unsigned __int8 *)(a1 + 1262));
/* line: 65, address: 0x60453104 */       if ( (*(_BYTE *)(MEMORY[0xC99DD4] + 1052) & 0xF) != 0 )
/* line: 66 */       {
/* line: 67, address: 0x60453108 */         v5 = *(_DWORD *)(a1 + 1388);
/* line: 68, address: 0x6045310c */         v6 = 0;
/* line: 69 */       }
/* line: 70 */       else
/* line: 71 */       {
/* line: 72, address: 0x60453160 */         sub_60454858(a1, v8);
/* line: 73, address: 0x60453164 */         v5 = *(_DWORD *)(a1 + 1388);
/* line: 74, address: 0x60453168 */         v6 = v8;
/* line: 75 */       }
/* line: 76, address: 0x6045316c */       sub_604564E0(v5, v6);
/* line: 77 */     }
/* line: 78, address: 0x60453174 */     *(_BYTE *)(a1 + 1392) = *(_BYTE *)(a1 + 1393);
/* line: 79, address: 0x60453184 */     result = *(_DWORD *)(MEMORY[0xC99DD4] + 764);
/* line: 80, address: 0x6045318c */     if ( result == 3 )
/* line: 81, address: 0x60453198 */       return sub_604AEEF8(a1 + 1444);
/* line: 82 */   }
/* line: 83, address: 0x60452f0c */   return result;
/* line: 84 */ }