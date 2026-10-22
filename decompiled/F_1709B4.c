#include "nsmbudx_prelude.h"
/* line: 0, address: 0x601709b4 */ int __fastcall sub_601709B4(int a1, int a2)
/* line: 1 */ {
/* line: 2 */   int v3; // r2
/* line: 3 */   int v4; // r0
/* line: 4 */ 
/* line: 5, address: 0x601709e4 */   *(_DWORD *)a1 = 12405944;
/* line: 6, address: 0x601709ec */   *(_DWORD *)(a1 + 44) = 1056964608;
/* line: 7, address: 0x601709ec */   *(_DWORD *)(a1 + 48) = 1128792064;
/* line: 8, address: 0x601709ec */   *(_DWORD *)(a1 + 52) = 1112014848;
/* line: 9, address: 0x601709ec */   *(_DWORD *)(a1 + 56) = 1028443341;
/* line: 10, address: 0x601709f0 */   *(_DWORD *)(a1 + 60) = a2;
/* line: 11, address: 0x601709fc */   memset((void *)(a1 + 64), 0, 0xB4u);
/* line: 12, address: 0x60170a08 */   *(_DWORD *)(a1 + 244) = 1;
/* line: 13, address: 0x60170a0c */   sub_601934DC(a1 + 248);
/* line: 14, address: 0x60170a18 */   memset((void *)(a1 + 312), 0, 0xB4u);
/* line: 15, address: 0x60170a24 */   *(_DWORD *)(a1 + 492) = -1;
/* line: 16, address: 0x60170a28 */   *(_DWORD *)(a1 + 496) = -1;
/* line: 17, address: 0x60170a2c */   *(_DWORD *)(a1 + 500) = -1;
/* line: 18, address: 0x60170a30 */   *(_DWORD *)(a1 + 504) = -1;
/* line: 19, address: 0x60170a34 */   *(_DWORD *)(a1 + 508) = -1;
/* line: 20, address: 0x60170a38 */   *(_DWORD *)(a1 + 512) = -1;
/* line: 21, address: 0x60170a40 */   memset((void *)(a1 + 516), 0, 0x56u);
/* line: 22, address: 0x60170a4c */   *(_BYTE *)(a1 + 602) = 1;
/* line: 23, address: 0x60170a50 */   *(_BYTE *)(a1 + 608) = 0;
/* line: 24, address: 0x60170a54 */   *(_BYTE *)(a1 + 607) = 0;
/* line: 25, address: 0x60170a58 */   *(_BYTE *)(a1 + 604) = 0;
/* line: 26, address: 0x60170a5c */   *(_BYTE *)(a1 + 609) = 0;
/* line: 27, address: 0x60170a60 */   *(_BYTE *)(a1 + 603) = 0;
/* line: 28, address: 0x60170a64 */   *(_BYTE *)(a1 + 606) = 0;
/* line: 29, address: 0x60170a68 */   *(_BYTE *)(a1 + 605) = 0;
/* line: 30, address: 0x60170a7c */   v3 = *(_DWORD *)(MEMORY[0xCC6D78] + 2116);
/* line: 31, address: 0x60170a80 */   v4 = *(_DWORD *)(MEMORY[0xCC6D78] + 2120);
/* line: 32, address: 0x60170a84 */   *(_DWORD *)(a1 + 172) = *(_DWORD *)(MEMORY[0xCC6D78] + 2112);
/* line: 33, address: 0x60170a88 */   *(_DWORD *)(a1 + 176) = v3;
/* line: 34, address: 0x60170a8c */   *(_DWORD *)(a1 + 180) = v4;
/* line: 35, address: 0x60170a98 */   memset((void *)(a1 + 4), 0, 0x28u);
/* line: 36, address: 0x60170aa0 */   return a1;
/* line: 37 */ }