/* sub_60348C00
 * address: 0x60348C00   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60348C00(Enemy *a1, ActiveCollider *a2, ActiveCollider *a3)
{
  StateBase *CurrentState; // r0
  int v7; // r7
  int result; // r0

  CurrentState = StateMgr__getCurrentState(&FIELD_U32(a1, 0x17C4));
  v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v7 == (*(int (**)(void))(dword_60C949D0 + 8))() )
    return (*(int (__fastcall **)(Enemy *, ActiveCollider *, ActiveCollider *))(FIELD_U32(a1, 0x0) + 648))(a1, a2, a3);
  result = sub_602726F8(a1, a2, a3);
  if ( !result )
    return Enemy__collisionPlayer((int)a1, (int)a2, (int)a3);
  return result;
}
