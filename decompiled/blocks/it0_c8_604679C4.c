/* line: 0, address: 0x604679c4 */ int __fastcall sub_604679C4(StageActor *a1)
/* line: 1 */ {
/* line: 2, address: 0x604679d4 */   StateMgr::execute((_DWORD *)a1 + 1521);
/* line: 3, address: 0x604679e0 */   ActorScaler_execute((char *)a1 + 6300);
/* line: 4, address: 0x604679e8 */   sub_60462018((int)a1);
/* line: 5, address: 0x604679f4 */   StageActor::cullCheck(a1, 0);
/* line: 6, address: 0x604679fc */   sub_60461904((int)a1);
/* line: 7, address: 0x60467a04 */   sub_604615A4((int)a1);
/* line: 8, address: 0x60467a0c */   return 1;
/* line: 9 */ }