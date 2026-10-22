
// ---- addr: 0x60563e44 */ int __fastcall BlockBase::vf160(int a1)
/* line: 1 */ {
/* line: 2 */   int v2; // r0
/* line: 3 */   int v3; // r0
/* line: 4 */   int v4; // r1
/* line: 5 */ 
/* line: 6, address: 0x60563e70 */   v2 = sub_605B9FEC(MEMORY[0xCB061C], a1 + 6980, *(unsigned __int8 *)(MEMORY[0xC9A684] + 18));
/* line: 7, address: 0x60563e78 */   if ( v2 == 3 )
/* line: 8 */   {
/* line: 9, address: 0x60563ea8 */     if ( !*(_DWORD *)(a1 + 7372) )
/* line: 10 */     {
/* line: 11, address: 0x60563eb4 */       v3 = 6856;
/* line: 12, address: 0x60563eb8 */       v4 = 12;
/* line: 13, address: 0x60563eb8 */       goto LABEL_7;
/* line: 14 */     }
/* line: 15, address: 0x60563ec4 */     return 1;
/* line: 16 */   }
/* line: 17, address: 0x60563e80 */   if ( v2 != 2 )
/* line: 18 */   {
/* line: 19, address: 0x60563e88 */     if ( v2 == 1 )
/* line: 20 */     {
/* line: 21, address: 0x60563e94 */       *(_DWORD *)(a1 + 7368) = 2;
/* line: 22, address: 0x60563e98 */       v3 = 7296;
/* line: 23, address: 0x60563e9c */       v4 = 50;
/* line: 24 */ LABEL_7:
/* line: 25, address: 0x60563ebc */       *(_DWORD *)(a1 + v3) = v4;
/* line: 26, address: 0x60563ebc */       return 1;
/* line: 27 */     }
/* line: 28, address: 0x60563e88 */     return 1;
/* line: 29 */   }
/* line: 30, address: 0x60563ec4 */   return 0;
/* line: 31 */ }