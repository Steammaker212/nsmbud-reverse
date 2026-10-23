/* DryBones__vfE0
 * address: 0x60314E44   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A33A8
// 
// Overridden by: None
int __fastcall DryBones__vfE0(Enemy *a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5

  CurrentState = StateMgr__getCurrentState(&FIELD_U32(a1, 0x0).states.manager);
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v3 == (*(int (**)(void))(dword_60C93500 + 8))() )
    return sub_60314EA0((int)a1);
  else
    return sub_60315140((float *)&FIELD_U32(a1, 0x0)._._._.vtable);
}
