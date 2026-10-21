/* line: 0, address: 0x60467f48 */ int __fastcall sub_60467F48(Actor *a1)
/* line: 1 */ {
/* line: 2 */   int v2; // r1
/* line: 3 */   int result; // r0
/* line: 4 */   int v4; // [sp+4h] [bp-4h] BYREF
/* line: 5 */ 
/* line: 6, address: 0x60467f64 */   v2 = sub_60463998(a1, &v4, 1, 1);
/* line: 7, address: 0x60467f68 */   result = 0;
/* line: 8, address: 0x60467f70 */   if ( v2 == 1 )
/* line: 9, address: 0x60467f84 */     return sub_60463CD0(a1, v4, *((_DWORD *)a1 + 1552));
/* line: 10, address: 0x60467f8c */   return result;
/* line: 11 */ }