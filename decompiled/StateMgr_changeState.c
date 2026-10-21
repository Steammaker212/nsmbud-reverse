/* line: 0, address: 0x60818224 */ int __fastcall StateMgr::changeState(_DWORD *a1, int a2)
/* line: 1 */ {
/* line: 2 */   int v3; // r0
/* line: 3 */   _DWORD *v4; // r5
/* line: 4 */   int result; // r0
/* line: 5 */ 
/* line: 6, address: 0x6081822c */   a1[1] = a2;
/* line: 7, address: 0x60818234 */   v4 = a1 + 2;
/* line: 8, address: 0x60818234 */   v3 = a1[2];
/* line: 9, address: 0x60818264 */   if ( !v3
/* line: 10 */     || (a1[3] = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3),
/* line: 11 */         result = (*(int (__fastcall **)(_DWORD, _DWORD *))(*(_DWORD *)*a1 + 12))(*a1, v4),
/* line: 12 */         a1[1]) )
/* line: 13 */   {
/* line: 14, address: 0x6081827c */     result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*a1 + 8))(*a1);
/* line: 15, address: 0x60818284 */     a1[1] = 0;
/* line: 16, address: 0x60818288 */     a1[2] = result;
/* line: 17 */   }
/* line: 18, address: 0x6081826c */   return result;
/* line: 19 */ }