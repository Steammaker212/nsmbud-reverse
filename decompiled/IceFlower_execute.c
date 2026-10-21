/* line: 0, address: 0x6045e414 */ int __fastcall sub_6045E414(int a1)
/* line: 1 */ {
/* line: 2, address: 0x6045e424 */   StateMgr::execute((StateMgr *)(a1 + 6084));
/* line: 3, address: 0x6045e430 */   ActorScaler_execute(a1 + 6300);
/* line: 4, address: 0x6045e438 */   sub_60462018(a1);
/* line: 5, address: 0x6045e444 */   StageActor::cullCheck((StageActor *)a1, 0);
/* line: 6, address: 0x6045e44c */   sub_60461904(a1);
/* line: 7, address: 0x6045e454 */   sub_604615A4(a1);
/* line: 8, address: 0x6045e45c */   return 1;
/* line: 9 */ }