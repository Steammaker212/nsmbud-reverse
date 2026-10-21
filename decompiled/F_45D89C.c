/* line: 0, address: 0x6045d89c */ int __fastcall sub_6045D89C(int a1)
/* line: 1 */ {
/* line: 2, address: 0x6045d8ac */   StateMgr::execute((StateMgr *)(a1 + 6084));
/* line: 3, address: 0x6045d8b8 */   ActorScaler_execute(a1 + 6300);
/* line: 4, address: 0x6045d8c0 */   sub_60462018(a1);
/* line: 5, address: 0x6045d8cc */   StageActor::cullCheck((StageActor *)a1, 0);
/* line: 6, address: 0x6045d8d4 */   sub_60461904(a1);
/* line: 7, address: 0x6045d8dc */   sub_604615A4(a1);
/* line: 8, address: 0x6045d8e4 */   return 1;
/* line: 9 */ }