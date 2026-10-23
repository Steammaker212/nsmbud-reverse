/* ShellEnemy__vf100
 * address: 0x6039FE58   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A2B8C
// 
// Overridden by: None
int __fastcall ShellEnemy__vf100(int a1, ActiveCollider *a2, int a3)
{
  int v6; // r0
  int v7; // r2
  int result; // r0
  StateBase *CurrentState; // r0
  int v10; // r4
  StateBase *v11; // r0
  int v12; // r4

  v6 = FIELD_U32(a3, 64);
  if ( !v6 || (v7 = FIELD_U32(v6, 8), result = 0, v7 != FIELD_U32(a1, 6424)) )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v10 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v10 == (*((int (**)(void))stru_60C8EA70._.vtable + 2))() )
    {
      if ( (FIELD_U8(a3, 149) & 2) == 0 )
        return Enemy__vf100((Enemy *)a1, a2, (ActiveCollider *)a3);
    }
    else
    {
      v11 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
      v12 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v11, 0x0) + 2))(v11);
      if ( v12 != (*((int (**)(void))ShellEnemy_StateID_slide._._.vtable + 2))() || (FIELD_U8(a3, 153) & 1) == 0 )
        return Enemy__vf100((Enemy *)a1, a2, (ActiveCollider *)a3);
    }
    if ( (*(int (__fastcall **)(int, ActiveCollider *, int))(*(_DWORD *)a1 + 312))(a1, a2, a3) != 1 )
      return Enemy__vf100((Enemy *)a1, a2, (ActiveCollider *)a3);
    FIELD_U8(a2, 0x6E) |= 2u;
    return 1;
  }
  return result;
}
