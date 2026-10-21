/* line: 0, address: 0x604616a4 */ int __fastcall sub_604616A4(int a1)
/* line: 1 */ {
/* line: 2 */   int CurrentState; // r0
/* line: 3 */   int v3; // r6
/* line: 4 */   int result; // r0
/* line: 5 */   int v5; // r0
/* line: 6 */   int v6; // r6
/* line: 7 */   int v7; // r0
/* line: 8 */   int v8; // r5
/* line: 9 */ 
/* line: 10, address: 0x604616b8 */   if ( !*(_BYTE *)(MEMORY[0xCC6D8C] + 17) )
/* line: 11, address: 0x604616b8 */     goto LABEL_5;
/* line: 12, address: 0x604616d0 */   CurrentState = StateMgr::getCurrentState(a1 + 6084);
/* line: 13, address: 0x604616e0 */   v3 = (*(int (__fastcall **)(int))(*(_DWORD *)CurrentState + 8))(CurrentState);
/* line: 14, address: 0x604616f4 */   result = (*(int (**)(void))(MEMORY[0xC9D340] + 8))();
/* line: 15, address: 0x604616fc */   if ( v3 != result )
/* line: 16 */   {
/* line: 17, address: 0x60461704 */     v5 = StateMgr::getCurrentState(a1 + 6084);
/* line: 18, address: 0x60461714 */     v6 = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
/* line: 19, address: 0x60461728 */     result = (*(int (**)(void))(MEMORY[0xC9D364] + 8))();
/* line: 20, address: 0x60461730 */     if ( v6 != result )
/* line: 21 */     {
/* line: 22, address: 0x60461738 */       v7 = StateMgr::getCurrentState(a1 + 6084);
/* line: 23, address: 0x60461748 */       v8 = (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
/* line: 24, address: 0x6046175c */       result = (*(int (**)(void))(MEMORY[0xC9D31C] + 8))();
/* line: 25, address: 0x60461764 */       if ( v8 != result )
/* line: 26 */       {
/* line: 27 */ LABEL_5:
/* line: 28, address: 0x60461770 */         *(_DWORD *)(a1 + 124) = 1075838976;
/* line: 29, address: 0x60461768 */         return 1075838976;
/* line: 30 */       }
/* line: 31 */     }
/* line: 32 */   }
/* line: 33, address: 0x60461764 */   return result;
/* line: 34 */ }