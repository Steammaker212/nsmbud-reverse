#include "nsmbudx_prelude.h"
/* line: 0, address: 0x607988f4 */ int __fastcall sub_607988F4(int a1)
/* line: 1 */ {
/* line: 2 */   _DWORD *v2; // r0
/* line: 3 */   int v3; // t1
/* line: 4 */   int v4; // r1
/* line: 5 */   int v5; // r1
/* line: 6 */   int v6; // r0
/* line: 7 */   int v7; // r1
/* line: 8 */   int v8; // r2
/* line: 9 */   int v9; // r0
/* line: 10 */   int result; // r0
/* line: 11 */   int *v11; // r5
/* line: 12 */   int v12; // r1
/* line: 13 */   char v13; // r3
/* line: 14 */   int v14; // r1
/* line: 15 */   int v15; // r1
/* line: 16 */   unsigned int v16; // r1
/* line: 17 */   int v17; // r2
/* line: 18 */   unsigned int v18; // r0
/* line: 19 */   int v19; // r1
/* line: 20 */   int v20; // r0
/* line: 21 */ 
/* line: 22, address: 0x60798908 */   v3 = *(_DWORD *)(a1 + 12212);
/* line: 23, address: 0x60798908 */   v2 = (_DWORD *)(a1 + 12212);
/* line: 24, address: 0x60798928 */   v4 = *(unsigned __int8 *)(MEMORY[0xC9CF0C] + 1404) & (1 << *((_BYTE *)v2 - 12128));
/* line: 25, address: 0x6079892c */   if ( v3 )
/* line: 26 */   {
/* line: 27, address: 0x60798934 */     if ( !v4 )
/* line: 28 */     {
/* line: 29, address: 0x60798940 */       *v2 = 0;
/* line: 30, address: 0x60798948 */       v5 = 156;
/* line: 31 */ LABEL_6:
/* line: 32, address: 0x6079896c */       sub_607948E8(a1 + 11356, v5);
/* line: 33 */     }
/* line: 34 */   }
/* line: 35, address: 0x60798954 */   else if ( v4 )
/* line: 36 */   {
/* line: 37, address: 0x60798960 */     *v2 = 1;
/* line: 38, address: 0x60798968 */     v5 = 155;
/* line: 39, address: 0x60798968 */     goto LABEL_6;
/* line: 40 */   }
/* line: 41, address: 0x60798974 */   v6 = *(_DWORD *)(a1 + 1236);
/* line: 42, address: 0x60798980 */   *(_DWORD *)(a1 + 1236) = v6 & 0xFFFFFFFB;
/* line: 43, address: 0x60798990 */   v7 = *(_DWORD *)(MEMORY[0xCBFA90] + 472);
/* line: 44, address: 0x60798998 */   if ( v7 )
/* line: 45 */   {
/* line: 46, address: 0x607989c8 */     if ( (v8 = *(_DWORD *)(MEMORY[0xC995D0] + 32)) != 0 && v8 == v7 || *(_DWORD *)(v7 + 20) || *(_DWORD *)(v7 + 16) )
/* line: 47, address: 0x607989d8 */       *(_DWORD *)(a1 + 1236) = v6 | 4;
/* line: 48 */   }
/* line: 49, address: 0x607989dc */   v9 = *(_DWORD *)(a1 + 1216);
/* line: 50, address: 0x607989ec */   if ( (v9 & 0x20000000) != 0 )
/* line: 51 */   {
/* line: 52, address: 0x60798a0c */     if ( *(char *)(MEMORY[0xC9CF0C] + 1404) >= 0 && !*(_BYTE *)(MEMORY[0xC9CF0C] + 1406) )
/* line: 53, address: 0x60798a24 */       sub_60817284(MEMORY[0xCC6B68]);
/* line: 54, address: 0x60798a40 */     if ( !*(_DWORD *)(a1 + 12208) && (*(_BYTE *)(a1 + 1206) & 1) == 0 )
/* line: 55 */     {
/* line: 56, address: 0x60798a50 */       *(_DWORD *)(MEMORY[0xCC62E4] + 108) = 196610;
/* line: 57, address: 0x60798a60 */       sub_603F48DC(MEMORY[0xC99D70]);
/* line: 58, address: 0x60798a6c */       *(_DWORD *)(a1 + 1204) |= 0x10000u;
/* line: 59 */     }
/* line: 60, address: 0x60798a70 */     v9 = *(_DWORD *)(a1 + 1216);
/* line: 61 */   }
/* line: 62, address: 0x60798a94 */   if ( v9 < 0 && !*(_DWORD *)(a1 + 12208) && (*(_BYTE *)(a1 + 1206) & 1) == 0 )
/* line: 63 */   {
/* line: 64, address: 0x60798aa4 */     *(_DWORD *)(MEMORY[0xCC62E4] + 108) = 196610;
/* line: 65, address: 0x60798ab4 */     sub_603F48DC(MEMORY[0xC99D70]);
/* line: 66, address: 0x60798ac0 */     *(_DWORD *)(a1 + 1204) |= 0x10000u;
/* line: 67 */   }
/* line: 68, address: 0x60798acc */   *(_DWORD *)(a1 + 160) = 0;
/* line: 69, address: 0x60798ad4 */   v11 = (int *)(a1 + 9940);
/* line: 70, address: 0x60798ad4 */   result = *(_DWORD *)(a1 + 9940);
/* line: 71, address: 0x60798aec */   switch ( result )
/* line: 72 */   {
/* line: 73, address: 0x60798aec */     case 0:
/* line: 74, address: 0x60798aec */     case 1:
/* line: 75, address: 0x60798aec */     case 6:
/* line: 76, address: 0x60798b10 */       if ( !*(_DWORD *)(a1 + 9944) )
/* line: 77 */       {
/* line: 78, address: 0x60798b20 */         v12 = *(char *)(a1 + 84);
/* line: 79, address: 0x60798b28 */         v13 = v12;
/* line: 80, address: 0x60798b30 */         if ( (unsigned __int8)v12 >= 6u )
/* line: 81, address: 0x60798b30 */           v12 = 0;
/* line: 82, address: 0x60798b3c */         v14 = MEMORY[0xC99DD4] + 72 * v12;
/* line: 83, address: 0x60798b54 */         if ( *(_BYTE *)(v14 + 292) && *(int *)(v14 + 296) < 1 )
/* line: 84 */         {
/* line: 85, address: 0x60798d18 */           *v11 = 5;
/* line: 86, address: 0x60798d14 */           result = 5;
/* line: 87 */         }
/* line: 88 */         else
/* line: 89 */         {
/* line: 90, address: 0x60798b60 */           *(_DWORD *)(a1 + 1224) |= 2u;
/* line: 91, address: 0x60798b6c */           *(_DWORD *)(a1 + 1204) &= ~0x4000u;
/* line: 92, address: 0x60798b70 */           v15 = *(_DWORD *)(a1 + 1216);
/* line: 93, address: 0x60798b78 */           if ( (v15 & 0x40000000) != 0 )
/* line: 94 */           {
/* line: 95, address: 0x60798b88 */             sub_60773630(a1, 17, 0);
/* line: 96, address: 0x60798b8c */             v13 = *(_BYTE *)(a1 + 84);
/* line: 97, address: 0x60798b90 */             result = *v11;
/* line: 98, address: 0x60798b94 */             v15 = *(_DWORD *)(a1 + 1216);
/* line: 99 */           }
/* line: 100, address: 0x60798ba0 */           v16 = v15 & 0xBFFFFFFF;
/* line: 101, address: 0x60798ba4 */           v17 = 0;
/* line: 102, address: 0x60798bac */           if ( result == 1 )
/* line: 103, address: 0x60798bac */             v17 = 2;
/* line: 104, address: 0x60798bb0 */           *(_DWORD *)(a1 + 1216) = v16;
/* line: 105, address: 0x60798bc0 */           sub_603F5B3C(MEMORY[0xC99D88], a1 + 108, v17, v13);
/* line: 106, address: 0x60798bc8 */           *v11 = 2;
/* line: 107, address: 0x60798bc4 */           result = 2;
/* line: 108 */         }
/* line: 109 */       }
/* line: 110, address: 0x60798bcc */       break;
/* line: 111, address: 0x60798aec */     case 2:
/* line: 112, address: 0x60798bd4 */       result = *(_DWORD *)(a1 + 1224) | 0x100000;
/* line: 113, address: 0x60798bd8 */       *(_DWORD *)(a1 + 1224) = result;
/* line: 114, address: 0x60798bdc */       break;
/* line: 115, address: 0x60798aec */     case 3:
/* line: 116, address: 0x60798bec */       result = MEMORY[0xC9CF0C];
/* line: 117, address: 0x60798bfc */       if ( *(char *)(MEMORY[0xC9CF0C] + 1404) >= 0 && !*(_BYTE *)(MEMORY[0xC9CF0C] + 1406) )
/* line: 118 */       {
/* line: 119, address: 0x60798c0c */         *v11 = 0;
/* line: 120, address: 0x60798c2c */         result = 30
/* line: 121 */                * ((5 * (unsigned __int64)(unsigned int)sead::Random::getU32((struct sead_Random *)(result + 1340))) >> 32);
/* line: 122, address: 0x60798c30 */         *(_DWORD *)(a1 + 9944) = result;
/* line: 123 */       }
/* line: 124, address: 0x60798c34 */       break;
/* line: 125, address: 0x60798aec */     case 4:
/* line: 126, address: 0x60798c48 */       *(_DWORD *)(a1 + 1224) |= 2u;
/* line: 127, address: 0x60798c50 */       *v11 = 2;
/* line: 128, address: 0x60798c68 */       result = sub_603F5B3C(MEMORY[0xC99D88], a1 + 108, 1, *(char *)(a1 + 84));
/* line: 129, address: 0x60798c68 */       break;
/* line: 130, address: 0x60798aec */     case 5:
/* line: 131, address: 0x60798c78 */       if ( !*(_BYTE *)(MEMORY[0xCC436C] + 148) )
/* line: 132, address: 0x60798c8c */         sub_60786048(a1 + 14980);
/* line: 133, address: 0x60798c90 */       v18 = *(unsigned __int8 *)(a1 + 84);
/* line: 134, address: 0x60798c94 */       v19 = 0;
/* line: 135, address: 0x60798c9c */       if ( v18 < 6 )
/* line: 136, address: 0x60798c9c */         v19 = (char)v18;
/* line: 137, address: 0x60798cb0 */       v20 = MEMORY[0xC99DD4] + 72 * v19;
/* line: 138, address: 0x60798cc8 */       if ( !*(_BYTE *)(v20 + 292) || (result = *(_DWORD *)(v20 + 296), result >= 1) )
/* line: 139 */       {
/* line: 140, address: 0x60798cd0 */         if ( sub_6075EDF8(a1) )
/* line: 141, address: 0x60798ce4 */           *(_DWORD *)(a1 + 1216) |= 0x40000000u;
/* line: 142 */         else
/* line: 143, address: 0x60798cf8 */           sub_60773630(a1, 17, 0);
/* line: 144, address: 0x60798d04 */         *v11 = 0;
/* line: 145, address: 0x60798d08 */         result = 9944;
/* line: 146, address: 0x60798d0c */         *(_DWORD *)(a1 + 9944) = 60;
/* line: 147 */       }
/* line: 148, address: 0x60798d0c */       break;
/* line: 149 */     default:
/* line: 150 */       return result;
/* line: 151 */   }
/* line: 152, address: 0x60798bcc */   return result;
/* line: 153 */ }