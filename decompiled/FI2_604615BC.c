#include "nsmbudx_prelude.h"
/* line: 0, address: 0x604615bc */ int __fastcall sub_604615BC(int a1)
/* line: 1 */ {
/* line: 2 */   unsigned int v2; // r0
/* line: 3 */   float v3; // s18
/* line: 4 */   float v4; // s0
/* line: 5 */   float v5; // s20
/* line: 6 */   float v6; // s16
/* line: 7 */   float v7; // s22
/* line: 8 */   float v8; // s26
/* line: 9 */   float v9; // s24
/* line: 10 */ 
/* line: 11, address: 0x604615cc */   v2 = sub_6014C4A4(a1 + 648);
/* line: 12, address: 0x604615f0 */   v3 = *(float *)(a1 + 120);
/* line: 13, address: 0x60461610 */   v4 = (float)(v2 & 0xFFFFFF) * 0.000000059605;
/* line: 14, address: 0x60461618 */   v5 = *(float *)(((v2 >> 20) & 0xFF0) + 0xB3A48C) + (float)(v4 * *(float *)(((v2 >> 20) & 0xFF0) + 0xB3A490));
/* line: 15, address: 0x6046161c */   v6 = *(float *)(((v2 >> 20) & 0xFF0) + 0xB3A484) + (float)(*(float *)(((v2 >> 20) & 0xFF0) + 0xB3A488) * v4);
/* line: 16, address: 0x60461628 */   if ( *(_BYTE *)(a1 + 6054) || *(_BYTE *)(a1 + 6053) )
/* line: 17, address: 0x60461638 */     v3 = v3 * 0.5;
/* line: 18, address: 0x60461644 */   v7 = *(float *)(a1 + 124);
/* line: 19, address: 0x60461650 */   v8 = *(float *)(a1 + 6024);
/* line: 20, address: 0x60461654 */   v9 = *(float *)(a1 + 6028);
/* line: 21, address: 0x6046165c */   sub_600037A0(a1);
/* line: 22, address: 0x60461684 */   *(float *)(a1 + 108) = *(float *)(a1 + 108) + (float)((float)(v8 + (float)(v5 * v3)) + *(float *)(a1 + 6000));
/* line: 23, address: 0x60461690 */   *(float *)(a1 + 112) = (float)((float)(v7 + (float)(v6 * v3)) + v9) + *(float *)(a1 + 112);
/* line: 24, address: 0x60461698 */   return a1 + 6000;
/* line: 25 */ }