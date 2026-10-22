#include "nsmbudx_prelude.h"
/* line: 0, address: 0x6046bb70 */ int __fastcall sub_6046BB70(Actor *a1)
/* line: 1 */ {
/* line: 2 */   int v2; // r0
/* line: 3 */   int *v3; // r5
/* line: 4 */   int v4; // r0
/* line: 5 */   int v6; // [sp+4h] [bp-4h] BYREF
/* line: 6 */ 
/* line: 7, address: 0x6046bb84 */   v3 = (int *)((char *)a1 + 6220);
/* line: 8, address: 0x6046bb84 */   v2 = *((_DWORD *)a1 + 1555);
/* line: 9, address: 0x6046bb8c */   if ( !v2 )
/* line: 10, address: 0x6046bb8c */     goto LABEL_5;
/* line: 11, address: 0x6046bb90 */   v4 = v2 - 1;
/* line: 12, address: 0x6046bb98 */   *v3 = v4;
/* line: 13, address: 0x6046bb9c */   if ( v4 == 1 )
/* line: 14 */   {
/* line: 15, address: 0x6046bbac */     (*(void (__fastcall **)(Actor *))(*(_DWORD *)a1 + 244))(a1);
/* line: 16, address: 0x6046bbb0 */     v4 = *v3;
/* line: 17 */   }
/* line: 18, address: 0x6046bbb8 */   if ( !v4 )
/* line: 19 */   {
/* line: 20 */ LABEL_5:
/* line: 21, address: 0x6046bbd4 */     if ( sub_60463998(a1, &v6, 4, 1) == 1 )
/* line: 22, address: 0x6046bbe8 */       sub_60463CD0(a1, v6, *((_DWORD *)a1 + 1552));
/* line: 23 */   }
/* line: 24, address: 0x6046bbf0 */   if ( !*((_BYTE *)a1 + 6856) )
/* line: 25 */   {
/* line: 26, address: 0x6046bc08 */     StageAcor_handleYspeed(a1);
/* line: 27, address: 0x6046bc18 */     *((float *)a1 + 27) = *((float *)a1 + 27) + *((float *)a1 + 30);
/* line: 28, address: 0x6046bc28 */     *((float *)a1 + 28) = *((float *)a1 + 28) + *((float *)a1 + 31);
/* line: 29, address: 0x6046bc38 */     *((float *)a1 + 29) = *((float *)a1 + 29) + *((float *)a1 + 32);
/* line: 30 */   }
/* line: 31, address: 0x6046bc40 */   sub_6046C3AC(a1);
/* line: 32, address: 0x6046bc50 */   return sub_60463584(a1);
/* line: 33 */ }