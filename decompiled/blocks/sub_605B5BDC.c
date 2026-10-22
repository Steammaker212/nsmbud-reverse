#include "nsmbudx_prelude.h"
/* line: 0, address: 0x605b5bdc */ int __fastcall sub_605B5BDC(_DWORD *a1, _DWORD *a2)
/* line: 1 */ {
/* line: 2 */   int *v4; // r6
/* line: 3 */   int result; // r0
/* line: 4 */   int v6; // r3
/* line: 5 */   int v7; // r2
/* line: 6 */ 
/* line: 7, address: 0x605b5bf0 */   v4 = a1 + 1714;
/* line: 8, address: 0x605b5bf4 */   result = a1[1714] - 7;
/* line: 9, address: 0x605b5c0c */   switch ( result )
/* line: 10 */   {
/* line: 11, address: 0x605b5c0c */     case 0:
/* line: 12, address: 0x605b5cc4 */       return sub_605B5A3C(a1, a2);
/* line: 13, address: 0x605b5c0c */     case 5:
/* line: 14, address: 0x605b5c0c */     case 6:
/* line: 15, address: 0x605b5c5c */       v6 = a1[1715];
/* line: 16, address: 0x605b5c64 */       v7 = a1[1716];
/* line: 17, address: 0x605b5c70 */       return (int)sub_60582B14(MEMORY[0xCAF15C], a2, v7, v6);
/* line: 18, address: 0x605b5c0c */     case 12:
/* line: 19, address: 0x605b5c0c */     case 17:
/* line: 20, address: 0x605b5c8c */       if ( sub_60465D70(MEMORY[0xC9D3E4], a1[1715]) )
/* line: 21 */       {
/* line: 22, address: 0x605b5c9c */         *v4 = 12;
/* line: 23, address: 0x605b5ca4 */         v7 = a1[1716];
/* line: 24, address: 0x605b5cac */         v6 = a1[1715];
/* line: 25, address: 0x605b5cb4 */         return (int)sub_60582B14(MEMORY[0xCAF15C], a2, v7, v6);
/* line: 26 */       }
/* line: 27, address: 0x605b5d00 */       result = 3;
/* line: 28, address: 0x605b5d00 */       goto LABEL_10;
/* line: 29, address: 0x605b5c0c */     case 16:
/* line: 30, address: 0x605b5cf4 */       if ( *(_DWORD *)(MEMORY[0xC99DD4] + 764) == 4 || sub_6078A168(MEMORY[0xCC436C]) != 1 )
/* line: 31 */       {
/* line: 32, address: 0x605b5d10 */         *v4 = 12;
/* line: 33, address: 0x605b5d18 */         v6 = a1[1715];
/* line: 34, address: 0x605b5d20 */         v7 = a1[1716];
/* line: 35, address: 0x605b5d2c */         return (int)sub_60582B14(MEMORY[0xCAF15C], a2, v7, v6);
/* line: 36 */       }
/* line: 37 */       else
/* line: 38 */       {
/* line: 39, address: 0x605b5cf8 */         result = 23;
/* line: 40 */ LABEL_10:
/* line: 41, address: 0x605b5d04 */         *v4 = result;
/* line: 42 */       }
/* line: 43 */       return result;
/* line: 44 */     default:
/* line: 45 */       return result;
/* line: 46 */   }
/* line: 47 */ }