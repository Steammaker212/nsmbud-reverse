#include "nsmbudx_prelude.h"
/* line: 0, address: 0x6078667c */ _DWORD *__fastcall sub_6078667C(_DWORD *result, int a2)
/* line: 1 */ {
/* line: 2 */   unsigned int v2; // r2
/* line: 3 */   unsigned int v3; // r2
/* line: 4 */ 
/* line: 5, address: 0x60786694 */   switch ( a2 )
/* line: 6 */   {
/* line: 7, address: 0x60786694 */     case 1:
/* line: 8, address: 0x60786694 */     case 10:
/* line: 9, address: 0x607866c4 */       result[2] = 0;
/* line: 10, address: 0x607866c8 */       result[3] = 0;
/* line: 11, address: 0x607866cc */       result[32] = 0;
/* line: 12, address: 0x607866d0 */       result[33] = 0;
/* line: 13, address: 0x607866d4 */       break;
/* line: 14, address: 0x60786694 */     case 2:
/* line: 15, address: 0x607866e0 */       result[2] &= 0xFFFFFF3F;
/* line: 16, address: 0x607866e8 */       v2 = result[3] & 0xFFFFFF3F;
/* line: 17, address: 0x607866ec */       goto LABEL_5;
/* line: 18, address: 0x60786694 */     case 3:
/* line: 19, address: 0x607866f8 */       result[2] &= ~8u;
/* line: 20, address: 0x60786700 */       v2 = result[3] & 0xFFFFFFF7;
/* line: 21 */ LABEL_5:
/* line: 22, address: 0x60786704 */       result[3] = v2;
/* line: 23, address: 0x60786708 */       break;
/* line: 24, address: 0x60786694 */     case 5:
/* line: 25, address: 0x60786710 */       v3 = result[1] & 0xFFFFFFBF;
/* line: 26, address: 0x60786714 */       goto LABEL_8;
/* line: 27, address: 0x60786694 */     case 6:
/* line: 28, address: 0x6078671c */       v3 = result[1] & 0xFFFFFFDF;
/* line: 29 */ LABEL_8:
/* line: 30, address: 0x60786720 */       result[1] = v3;
/* line: 31, address: 0x60786720 */       break;
/* line: 32 */     default:
/* line: 33 */       break;
/* line: 34 */   }
/* line: 35, address: 0x60786724 */   result[1] |= 1 << a2;
/* line: 36, address: 0x60786734 */   return result;
/* line: 37 */ }