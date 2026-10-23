/* CarryableEnemy__vf158
 * address: 0x60272CDC   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A7154
// 
// Overridden by: None
int __fastcall CarryableEnemy__vf158(int a1, _BYTE *a2, int a3, int a4)
{
  StateBase *CurrentState; // r0
  int v9; // r4

  if ( FIELD_U32(a3, 140) == 9 )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v9 == (*((int (**)(void))stru_60C8EA70._.vtable + 2))() )
      *a2 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a1 + 312))(a1, a3, a4);
  }
  return 1;
}
