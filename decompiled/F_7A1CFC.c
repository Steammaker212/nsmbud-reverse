#include "nsmbudx_prelude.h"
/* line: 0, address: 0x607a1cfc */ int __fastcall sub_607A1CFC(int a1)
/* line: 1 */ {
/* line: 2 */   int (__fastcall ***v2)(_DWORD, int); // r5
/* line: 3 */   int result; // r0
/* line: 4 */ 
/* line: 5, address: 0x607a1d24 */   v2 = (int (__fastcall ***)(_DWORD, int))ActorMgrRelated_getById(MEMORY[0xC7B400] + 27168);
/* line: 6, address: 0x607a1d44 */   if ( _cxa_guard_acquire_0(13386488) )
/* line: 7 */   {
/* line: 8, address: 0x607a1d64 */     MEMORY[0xCC42F4] = 12320956;
/* line: 9, address: 0x607a1d70 */     _cxa_guard_release_0(13386488);
/* line: 10 */   }
/* line: 11, address: 0x607a1d98 */   if ( !v2 || (result = (**v2)(v2, 13386484)) == 0 )
/* line: 12 */   {
/* line: 13, address: 0x607a1da8 */     *(_DWORD *)(a1 + 1204) &= ~0x10u;
/* line: 14, address: 0x607a1dbc */     return Player_changeState(a1, 13388732, 0);
/* line: 15 */   }
/* line: 16, address: 0x607a1d98 */   return result;
/* line: 17 */ }