#include "nsmbudx_prelude.h"
/* line: 0, address: 0x60152ff4 */ int __fastcall sub_60152FF4(int a1, int a2)
/* line: 1 */ {
/* line: 2 */   float v2; // s0
/* line: 3 */   float v3; // s2
/* line: 4 */   int result; // r0
/* line: 5 */ 
/* line: 6, address: 0x60153020 */   v2 = (float)(*(float *)(*(_DWORD *)(a2 + 152) + 4) + *(float *)(a2 + 176)) + *(float *)(a2 + 208);
/* line: 7, address: 0x60153024 */   v3 = (float)(*(float *)(*(_DWORD *)(a1 + 152) + 4) + *(float *)(a1 + 176)) + *(float *)(a1 + 208);
/* line: 8, address: 0x60153030 */   result = v3 > v2;
/* line: 9, address: 0x60153034 */   if ( v3 < v2 )
/* line: 10, address: 0x60153034 */     return -1;
/* line: 11, address: 0x60153038 */   return result;
/* line: 12 */ }