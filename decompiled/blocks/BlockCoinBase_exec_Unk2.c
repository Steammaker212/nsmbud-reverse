
// ---- addr: 0x605b682c */ _DWORD *__fastcall BlockCoinBase::executeState_BlockCoinBaseUnk2(_DWORD *result)
/* line: 1 */ {
/* line: 2 */   int v1; // r2
/* line: 3 */   int v2; // r2
/* line: 4 */ 
/* line: 5, address: 0x605b6834 */   v1 = result[1704];
/* line: 6, address: 0x605b683c */   if ( !v1 )
/* line: 7, address: 0x605b683c */     return (_DWORD *)(*(int (__fastcall **)(_DWORD *))(*result + 220))(result);
/* line: 8, address: 0x605b6840 */   v2 = v1 - 1;
/* line: 9, address: 0x605b6844 */   result[1704] = v2;
/* line: 10, address: 0x605b6848 */   if ( !v2 )
/* line: 11, address: 0x605b6854 */     return (_DWORD *)(*(int (__fastcall **)(_DWORD *))(*result + 220))(result);
/* line: 12, address: 0x605b6848 */   return result;
/* line: 13 */ }