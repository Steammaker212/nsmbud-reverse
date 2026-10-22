#include "nsmbudx_prelude.h"
/* line: 0, address: 0x6013ca14 */ int sub_6013CA14()
/* line: 1 */ {
/* line: 2 */   _DWORD v1[2]; // [sp+10h] [bp-8h] BYREF
/* line: 3 */ 
/* line: 4, address: 0x6013ca48 */   dword_60C87BF4 = 0;
/* line: 5, address: 0x6013ca4c */   dword_60C87BF8 = 0;
/* line: 6, address: 0x6013ca50 */   dword_60C87BFC = 0;
/* line: 7, address: 0x6013ca84 */   LODWORD(flt_60C87BE0) = (int)(float)((float)(MEMORY[0xB0E1E0] * 2.46) / MEMORY[0xB0E1D8]);
/* line: 8, address: 0x6013ca98 */   LODWORD(flt_60C87BE4) = (int)(float)((float)(MEMORY[0xB0E1E0] * 4.92) / MEMORY[0xB0E1D8]);
/* line: 9, address: 0x6013caac */   dword_60C87BE8 = (int)(float)((float)(MEMORY[0xB0E1E0] * 1.05) / MEMORY[0xB0E1D8]);
/* line: 10, address: 0x6013cabc */   dword_60C87BEC = (int)(float)((float)(MEMORY[0xB0E1E0] * 1.4) / MEMORY[0xB0E1D8]);
/* line: 11, address: 0x6013cac8 */   dword_60C87BF0 = (int)(float)((float)(MEMORY[0xB0E1E0] * 0.9) / MEMORY[0xB0E1D8]);
/* line: 12, address: 0x6013cad8 */   v1[0] = 12321336;
/* line: 13, address: 0x6013cae4 */   v1[1] = &unk_60ABEC88;
/* line: 14, address: 0x6013cb04 */   Profile__Profile(13138796, 1292884, MEMORY[0xAF372C], (int)v1, &unk_60AF6824, 160);
/* line: 15, address: 0x6013cb28 */   MEMORY[0xC87B88] = MEMORY[0xC7B788] + 1;
/* line: 16, address: 0x6013cb38 */   MEMORY[0xC87B84] = 12398176;
/* line: 17, address: 0x6013cb3c */   MEMORY[0xC87B8C] = 1292968;
/* line: 18, address: 0x6013cb44 */   MEMORY[0xC87B90] = 0;
/* line: 19, address: 0x6013cb4c */   MEMORY[0xC87B94] = 1293244;
/* line: 20, address: 0x6013cb54 */   MEMORY[0xC87B98] = 0;
/* line: 21, address: 0x6013cb5c */   MEMORY[0xC87B9C] = 1294424;
/* line: 22, address: 0x6013cb60 */   MEMORY[0xC87BA0] = 0;
/* line: 23, address: 0x6013cb68 */   MEMORY[0xC7B788] += 2;
/* line: 24, address: 0x6013cb74 */   MEMORY[0xC87BA8] = MEMORY[0xC7B788];
/* line: 25, address: 0x6013cb7c */   MEMORY[0xC87BA4] = 12398176;
/* line: 26, address: 0x6013cb84 */   MEMORY[0xC87BAC] = 1294428;
/* line: 27, address: 0x6013cb8c */   MEMORY[0xC87BB0] = 0;
/* line: 28, address: 0x6013cb94 */   MEMORY[0xC87BB4] = 1294556;
/* line: 29, address: 0x6013cb9c */   MEMORY[0xC87BB8] = 0;
/* line: 30, address: 0x6013cba4 */   MEMORY[0xC87BBC] = 1294968;
/* line: 31, address: 0x6013cba8 */   MEMORY[0xC87BC0] = 0;
/* line: 32, address: 0x6013cbb0 */   return 1294968;
/* line: 33 */ }