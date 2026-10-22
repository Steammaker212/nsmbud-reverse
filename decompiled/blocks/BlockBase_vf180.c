#include "nsmbudx_prelude.h"

// ---- addr: 0x60564d8c */ bool __fastcall BlockBase_vf180(int a1)
/* line: 1 */ {
/* line: 2 */   int v1; // r4
/* line: 3 */   int CurrentState; // r0
/* line: 4 */   int v3; // r5
/* line: 5 */   int v5; // r0
/* line: 6 */   int v6; // r4
/* line: 7 */ 
/* line: 8, address: 0x60564d94 */   v1 = a1 + 6084;
/* line: 9, address: 0x60564d9c */   CurrentState = StateMgr::getCurrentState(a1 + 6084);
/* line: 10, address: 0x60564dac */   v3 = (*(int (__fastcall **)(int))(*(_DWORD *)CurrentState + 8))(CurrentState);
/* line: 11, address: 0x60564dc8 */   if ( v3 == (*(int (**)(void))(MEMORY[0xCB111C] + 8))() )
/* line: 12, address: 0x60564dcc */     return 1;
/* line: 13, address: 0x60564dd8 */   v5 = StateMgr::getCurrentState(v1);
/* line: 14, address: 0x60564de8 */   v6 = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
/* line: 15, address: 0x60564dd0 */   return v6 == (*(int (**)(void))(MEMORY[0xCAE2F8] + 8))();
/* line: 16 */ }