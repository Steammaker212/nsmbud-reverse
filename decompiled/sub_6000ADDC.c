#include "nsmbudx_prelude.h"
/* line: 0, address: 0x6000addc */ bool __fastcall sub_6000ADDC(int a1, int a2)
/* line: 1 */ {
/* line: 2 */   float v2; // s16
/* line: 3 */   float v3; // s0
/* line: 4 */   float v4; // s2
/* line: 5 */   _BOOL4 result; // r0
/* line: 6 */ 
/* line: 7, address: 0x6000adf8 */   if ( !MEMORY[0xC99D70] )
/* line: 8, address: 0x6000aea4 */     return 0;
/* line: 9, address: 0x6000ae14 */   v2 = *(float *)(a2 + 108) + *(float *)(a2 + 572);
/* line: 10, address: 0x6000ae18 */   v3 = *(float *)(a1 + 108) + *(float *)(a1 + 572);
/* line: 11, address: 0x6000ae20 */   if ( (unsigned int)(*(_DWORD *)(MEMORY[0xC99D70] + 1828) - 1) > 1 )
/* line: 12, address: 0x6000aebc */     return v3 < v2;
/* line: 13, address: 0x6000ae24 */   ((void (*)(void))AreaTask_getWrappedXPos)();
/* line: 14, address: 0x6000ae3c */   AreaTask_getWrappedXPos(MEMORY[0xC99D70]);
/* line: 15, address: 0x6000ae70 */   v4 = (float)(*(float *)(MEMORY[0xC99D70] + 1820) - *(float *)(MEMORY[0xC99D70] + 1812)) * 0.5;
/* line: 16, address: 0x6000ae90 */   result = (float)(v3 - v2) > v4;
/* line: 17, address: 0x6000ae98 */   if ( v3 < v2 )
/* line: 18, address: 0x6000ae98 */     return (float)(v2 - v3) <= v4;
/* line: 19, address: 0x6000aea0 */   return result;
/* line: 20 */ }