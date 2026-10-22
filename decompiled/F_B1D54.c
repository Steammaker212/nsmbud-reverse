#include "nsmbudx_prelude.h"
/* line: 0, address: 0x607b1d54 */ int __fastcall sub_607B1D54(_DWORD *a1)
/* line: 1 */ {
/* line: 2 */   int result; // r0
/* line: 3 */   __int64 v3; // r0
/* line: 4 */   int *v4; // r5
/* line: 5 */   int v5; // r0
/* line: 6 */ 
/* line: 7, address: 0x607b1d64 */   if ( sub_607C1600() == 1 )
/* line: 8, address: 0x607b1d70 */     return sub_6079EA38(a1);
/* line: 9, address: 0x607b1d7c */   HIDWORD(v3) = a1[3220];
/* line: 10, address: 0x607b1d80 */   LODWORD(v3) = 0;
/* line: 11, address: 0x607b1d84 */   *((_QWORD *)a1 + 1610) = v3;
/* line: 12, address: 0x607b1d98 */   if ( (*((_BYTE *)a1 + 6905) & 8) != 0 )
/* line: 13 */   {
/* line: 14, address: 0x607b1da4 */     a1[3220] = 1;
/* line: 15, address: 0x607b1dac */     *((_BYTE *)a1 + 12892) = 0;
/* line: 16, address: 0x607b1dc8 */     if ( *((float *)a1 + 3222) > *((float *)a1 + 28) )
/* line: 17, address: 0x607b1dc8 */       *((_BYTE *)a1 + 12892) = 1;
/* line: 18 */   }
/* line: 19, address: 0x607b1dd4 */   a1[306] &= ~0x40u;
/* line: 20, address: 0x607b1de0 */   a1[302] &= ~0x2000u;
/* line: 21, address: 0x607b1dec */   a1[303] &= ~0x20000u;
/* line: 22, address: 0x607b1df0 */   a1[23] = 0;
/* line: 23, address: 0x607b1df4 */   a1[26] = 0;
/* line: 24, address: 0x607b1e0c */   a1[25] = *(_DWORD *)(*(int (__fastcall **)(_DWORD *))(*a1 + 1100))(a1);
/* line: 25, address: 0x607b1e1c */   (*(void (__fastcall **)(_DWORD *))(*a1 + 1104))(a1);
/* line: 26, address: 0x607b1e2c */   (*(void (__fastcall **)(_DWORD *))(*a1 + 1092))(a1);
/* line: 27, address: 0x607b1e38 */   v4 = a1 + 2485;
/* line: 28, address: 0x607b1e38 */   if ( a1[2485] )
/* line: 29 */   {
/* line: 30, address: 0x607b1e54 */     (*(void (__fastcall **)(_DWORD *))(*a1 + 1084))(a1);
/* line: 31, address: 0x607b1e70 */     switch ( *v4 )
/* line: 32 */     {
/* line: 33, address: 0x607b1e70 */       case 0:
/* line: 34 */         goto LABEL_8;
/* line: 35, address: 0x607b1e70 */       case 1:
/* line: 36, address: 0x607b1eec */         sub_607B21D4(a1);
/* line: 37, address: 0x607b1ef0 */         break;
/* line: 38, address: 0x607b1e70 */       case 2:
/* line: 39, address: 0x607b1eac */         a1[303] |= 0x20000u;
/* line: 40, address: 0x607b1eb8 */         sub_60793DA0(a1[2840]);
/* line: 41, address: 0x607b1ec0 */         sub_60793184(a1[2840]);
/* line: 42, address: 0x607b1ed0 */         if ( 3.0 <= 9.0 )
/* line: 43, address: 0x607b1ed0 */           break;
/* line: 44, address: 0x607b1ed4 */         v5 = 3;
/* line: 45 */ LABEL_16:
/* line: 46, address: 0x607b1f44 */         *v4 = v5;
/* line: 47, address: 0x607b1f44 */         break;
/* line: 48, address: 0x607b1e70 */       case 3:
/* line: 49, address: 0x607b1ef8 */         sub_607B22AC(a1);
/* line: 50, address: 0x607b1efc */         break;
/* line: 51, address: 0x607b1e70 */       case 4:
/* line: 52, address: 0x607b1ee0 */         sub_607B2660(a1);
/* line: 53, address: 0x607b1ee4 */         break;
/* line: 54, address: 0x607b1e70 */       case 5:
/* line: 55, address: 0x607b1f04 */         sub_607B2824(a1);
/* line: 56, address: 0x607b1f08 */         break;
/* line: 57, address: 0x607b1e70 */       case 6:
/* line: 58, address: 0x607b1f10 */         sub_6079EA38(a1);
/* line: 59, address: 0x607b1f20 */         a1[22] = 0;
/* line: 60, address: 0x607b1f2c */         sub_607948E8(a1 + 2839, 65);
/* line: 61, address: 0x607b1f3c */         sub_60773630((int)a1, 33, 0);
/* line: 62, address: 0x607b1f40 */         v5 = 5;
/* line: 63, address: 0x607b1f40 */         goto LABEL_16;
/* line: 64 */       default:
/* line: 65 */         break;
/* line: 66 */     }
/* line: 67 */   }
/* line: 68 */   else
/* line: 69 */   {
/* line: 70 */ LABEL_8:
/* line: 71, address: 0x607b1e90 */     sub_607B1F60(a1);
/* line: 72 */   }
/* line: 73, address: 0x607b1f48 */   result = a1[28];
/* line: 74, address: 0x607b1f50 */   a1[3222] = result;
/* line: 75, address: 0x607b1f54 */   return result;
/* line: 76 */ }