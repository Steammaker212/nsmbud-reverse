/* line: 0, address: 0x608181d4 */ int __fastcall StateMgr::execute(_DWORD *a1)
/* line: 1 */ {
/* line: 2 */   int result; // r0
/* line: 3 */ 
/* line: 4, address: 0x608181dc */   if ( a1[1] )
/* line: 5 */   {
/* line: 6, address: 0x608181f4 */     result = (*(int (**)(void))(*(_DWORD *)*a1 + 8))();
/* line: 7, address: 0x608181fc */     a1[1] = 0;
/* line: 8, address: 0x60818200 */     a1[2] = result;
/* line: 9 */   }
/* line: 10 */   else
/* line: 11 */   {
/* line: 12, address: 0x60818208 */     result = a1[2];
/* line: 13 */   }
/* line: 14, address: 0x60818210 */   if ( result )
/* line: 15, address: 0x60818220 */     return (*(int (__fastcall **)(int))(*(_DWORD *)result + 12))(result);
/* line: 16, address: 0x60818210 */   return result;
/* line: 17 */ }