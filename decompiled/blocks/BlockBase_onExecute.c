#include "nsmbudx_prelude.h"

// ---- addr: 0x605638c8 */ int __fastcall BlockBase_onExecute(_BYTE *a1)
/* line: 1 */ {
/* line: 2 */   _BYTE *v2; // r5
/* line: 3 */ 
/* line: 4, address: 0x605638d4 */   if ( a1[7312] )
/* line: 5 */   {
/* line: 6, address: 0x605638e4 */     v2 = a1 + 6120;
/* line: 7, address: 0x605638f0 */     if ( !sub_60003B88(a1, a1 + 6120) )
/* line: 8, address: 0x60563908 */       sub_6069B070(a1 + 7240, a1 + 108);
/* line: 9 */   }
/* line: 10 */   else
/* line: 11 */   {
/* line: 12, address: 0x60563914 */     v2 = a1 + 6120;
/* line: 13 */   }
/* line: 14, address: 0x60563920 */   StateMgr__execute((_DWORD *)a1 + 1521);
/* line: 15, address: 0x60563930 */   (*(void (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 372))(a1);
/* line: 16, address: 0x6056393c */   *((_DWORD *)a1 + 1591) = *((_DWORD *)a1 + 41);
/* line: 17, address: 0x60563944 */   ShapedCollider_execute(v2);
/* line: 18, address: 0x60563954 */   (*(void (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 388))(a1);
/* line: 19, address: 0x6056395c */   sub_605B2D70(a1);
/* line: 20, address: 0x60563964 */   if ( a1[7384] )
/* line: 21, address: 0x60563978 */     StageActor__cullCheck((StageActor *)a1, 0x10u);
/* line: 22, address: 0x60563980 */   return 1;
/* line: 23 */ }