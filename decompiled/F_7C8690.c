/* line: 0, address: 0x607c8690 */ int __fastcall sub_607C8690(_BYTE *a1, int a2, int a3)
/* line: 1 */ {
/* line: 2 */   bool v4; // zf
/* line: 3 */ 
/* line: 4, address: 0x607c8698 */   v4 = a3 == 1;
/* line: 5, address: 0x607c869c */   if ( a3 == 1 )
/* line: 6, address: 0x607c86a0 */     v4 = (a1[1219] & 4) == 0;
/* line: 7, address: 0x607c86a4 */   if ( !v4 )
/* line: 8, address: 0x607c86c0 */     return (*(int (__fastcall **)(_BYTE *, _DWORD, int))(*(_DWORD *)a1 + 1180))(a1, 0, 15);
/* line: 9, address: 0x607c86d4 */   Player_changeState((int)a1, 13388876, 1);
/* line: 10, address: 0x607c86e0 */   sub_60799BA0(a1, 1);
/* line: 11, address: 0x607c86e8 */   return 0;
/* line: 12 */ }