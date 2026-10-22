#include "nsmbudx_prelude.h"
/* line: 0, address: 0x60461788 */ int __fastcall sub_60461788(int a1)
/* line: 1 */ {
/* line: 2 */   char v3[4]; // [sp+8h] [bp-8h] BYREF
/* line: 3 */   char v4[4]; // [sp+Ch] [bp-4h] BYREF
/* line: 4 */ 
/* line: 5, address: 0x604617a8 */   v4[0] = 3;
/* line: 6, address: 0x604617b8 */   ActiveCollider_init2(a1 + 188, a1, &unk_60BFB7A8, v4, 0);
/* line: 7, address: 0x604617c8 */   v3[0] = 3;
/* line: 8, address: 0x604617e4 */   return ActiveCollider_init2(a1 + 6332, a1, &unk_60B02604, v3, 0);
/* line: 9 */ }