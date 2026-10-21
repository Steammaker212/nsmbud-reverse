/* line: 0, address: 0x607d2194 */ int __fastcall sub_607D2194(_DWORD *a1, int a2)
/* line: 1 */ {
/* line: 2 */   int (__fastcall ***v5)(_DWORD, int); // r7
/* line: 3 */   int CurrentState; // r0
/* line: 4 */   int v7; // r7
/* line: 5 */   int v8; // r0
/* line: 6 */   int v9; // r0
/* line: 7 */ 
/* line: 8, address: 0x607d21a8 */   if ( a1[2864] )
/* line: 9, address: 0x607d21a8 */     return 0;
/* line: 10, address: 0x607d21e0 */   v5 = (int (__fastcall ***)(_DWORD, int))ActorMgrRelated_getById(MEMORY[0xC7B400] + 27168);
/* line: 11, address: 0x607d2200 */   if ( _cxa_guard_acquire_0(13087588) )
/* line: 12 */   {
/* line: 13, address: 0x607d2220 */     MEMORY[0xC7B360] = 12320920;
/* line: 14, address: 0x607d222c */     _cxa_guard_release_0(13087588);
/* line: 15 */   }
/* line: 16, address: 0x607d224c */   if ( v5 && (**v5)(v5, 13087584) )
/* line: 17, address: 0x607d224c */     return 0;
/* line: 18, address: 0x607d2264 */   CurrentState = StateMgr::getCurrentState((StateMgr *)(a1 + 2851));
/* line: 19, address: 0x607d2274 */   v7 = (*(int (__fastcall **)(int))(*(_DWORD *)CurrentState + 8))(CurrentState);
/* line: 20, address: 0x607d2288 */   v8 = (*(int (**)(void))(MEMORY[0xCC5398] + 8))();
/* line: 21, address: 0x607d2290 */   if ( !a2 )
/* line: 22, address: 0x607d2290 */     return 0;
/* line: 23, address: 0x607d2298 */   if ( v7 != v8 )
/* line: 24, address: 0x607d2298 */     return 0;
/* line: 25, address: 0x607d229c */   v9 = *(_DWORD *)(a2 + 620);
/* line: 26, address: 0x607d22b4 */   if ( !v9 || *(_DWORD *)(v9 + 12) || !*(_DWORD *)(v9 + 16) )
/* line: 27, address: 0x607d21b4 */     return 0;
/* line: 28, address: 0x607d22c8 */   a1[2839] = *(_DWORD *)(a2 + 8);
/* line: 29, address: 0x607d22d0 */   a1[2857] = 0;
/* line: 30, address: 0x607d22e0 */   StateMgr::changeState(a1 + 2851, 13390840);
/* line: 31, address: 0x607d21b8 */   return 1;
/* line: 32 */ }