/* line: 0, address: 0x60818198 */ int __fastcall StateMgr::getCurrentState(int a1)
/* line: 1 */ {
/* line: 2 */   int v2; // r0
/* line: 3 */   int result; // r0
/* line: 4 */ 
/* line: 5, address: 0x6081819c */   v2 = *(_DWORD *)(a1 + 8);
/* line: 6, address: 0x608181a4 */   if ( v2 )
/* line: 7, address: 0x608181b4 */     return (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
/* line: 8, address: 0x608181bc */   result = *(_DWORD *)(a1 + 4);
/* line: 9, address: 0x608181c8 */   if ( !result )
/* line: 10, address: 0x608181c8 */     return 12755100;
/* line: 11, address: 0x608181cc */   return result;
/* line: 12 */ }