#include "nsmbudx_prelude.h"
/* line: 0, address: 0x607d6c28 */ int sub_607D6C28()
/* line: 1 */ {
/* line: 2 */   int (__fastcall ***v0)(_DWORD, int); // r4
/* line: 3 */   int result; // r0
/* line: 4 */ 
/* line: 5, address: 0x607d6c4c */   v0 = (int (__fastcall ***)(_DWORD, int))ActorMgrRelated_getById(MEMORY[0xC7B400] + 27168);
/* line: 6, address: 0x607d6c6c */   if ( _cxa_guard_acquire_0(13087604) )
/* line: 7 */   {
/* line: 8, address: 0x607d6c8c */     MEMORY[0xC7B370] = 12320944;
/* line: 9, address: 0x607d6c98 */     _cxa_guard_release_0(13087604);
/* line: 10 */   }
/* line: 11, address: 0x607d6ca0 */   if ( !v0 )
/* line: 12, address: 0x607d6cc8 */     return 0;
/* line: 13, address: 0x607d6cb8 */   result = (**v0)(v0, 13087600);
/* line: 14, address: 0x607d6cc0 */   if ( result )
/* line: 15, address: 0x607d6cc0 */     return (int)v0;
/* line: 16, address: 0x607d6cc4 */   return result;
/* line: 17 */ }