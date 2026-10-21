/* line: 0, address: 0x604695b0 */ int __fastcall sub_604695B0(Actor *a1)
/* line: 1 */ {
/* line: 2 */   int v2; // r1
/* line: 3 */   int result; // r0
/* line: 4 */   int v4; // [sp+4h] [bp-4h] BYREF
/* line: 5 */ 
/* line: 6, address: 0x604695cc */   v2 = sub_60463998(a1, &v4, 7, 1);
/* line: 7, address: 0x604695d0 */   result = 0;
/* line: 8, address: 0x604695d8 */   if ( v2 == 1 )
/* line: 9, address: 0x604695ec */     return sub_60463CD0(a1, v4, *((_DWORD *)a1 + 1552));
/* line: 10, address: 0x604695f4 */   return result;
/* line: 11 */ }