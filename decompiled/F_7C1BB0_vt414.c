/* line: 0, address: 0x607c1bb0 */ int __fastcall sub_607C1BB0(int result)
/* line: 1 */ {
/* line: 2 */   int v1; // r1
/* line: 3 */ 
/* line: 4, address: 0x607c1bb0 */   v1 = *(_DWORD *)(result + 1208);
/* line: 5, address: 0x607c1bb8 */   if ( (v1 & 0x800) != 0 )
/* line: 6 */   {
/* line: 7, address: 0x607c1bc4 */     *(_DWORD *)(result + 1208) = v1 & 0xFFFFF7FF;
/* line: 8, address: 0x607c1bd0 */     if ( (*(_DWORD *)(result + 1204) & 0x24000) != 0 )
/* line: 9, address: 0x607c1bd4 */       return sub_6079EA38(result);
/* line: 10 */     else
/* line: 11, address: 0x607c1bdc */       return sub_607C195C();
/* line: 12 */   }
/* line: 13, address: 0x607c1bb8 */   return result;
/* line: 14 */ }