#include "nsmbudx_prelude.h"
/* line: 0, address: 0x60461850 */ int __fastcall sub_60461850(int a1)
/* line: 1 */ {
/* line: 2 */   int v2; // r0
/* line: 3 */   int result; // r0
/* line: 4 */   int v4; // [sp+0h] [bp-10h] BYREF
/* line: 5 */   int v5; // [sp+4h] [bp-Ch]
/* line: 6 */   int v6; // [sp+8h] [bp-8h]
/* line: 7 */ 
/* line: 8, address: 0x60461868 */   if ( (*(_BYTE *)(a1 + 21) & 4) != 0 )
/* line: 9 */   {
/* line: 10, address: 0x604618a8 */     CollisionMgr_setSensor(a1 + 648, &unk_60B02648, 0);
/* line: 11, address: 0x604618b4 */     v5 = 1094713344;
/* line: 12, address: 0x604618b8 */     v2 = 1090519040;
/* line: 13 */   }
/* line: 14 */   else
/* line: 15 */   {
/* line: 16, address: 0x6046187c */     CollisionMgr_setSensor(a1 + 648, &unk_60B02654, 0);
/* line: 17, address: 0x60461888 */     v5 = 1094713344;
/* line: 18, address: 0x6046188c */     v2 = 1082130432;
/* line: 19 */   }
/* line: 20, address: 0x604618bc */   v4 = v2;
/* line: 21, address: 0x604618d0 */   v6 = -1057174323;
/* line: 22, address: 0x604618d8 */   CollisionMgr_setSensor(a1 + 648, &v4, 1);
/* line: 23, address: 0x604618e4 */   *(_DWORD *)(a1 + 3180) |= 2u;
/* line: 24, address: 0x604618ec */   result = *(_DWORD *)(a1 + 3188) | 2;
/* line: 25, address: 0x604618f0 */   *(_DWORD *)(a1 + 3188) = result;
/* line: 26, address: 0x604618f8 */   return result;
/* line: 27 */ }