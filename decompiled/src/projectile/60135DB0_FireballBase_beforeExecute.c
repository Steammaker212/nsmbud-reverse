/* FireballBase_beforeExecute
 * address: 0x60135DB0   size: 144   group: projectile
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall FireballBase_beforeExecute(FireballBase *a1)
{
  signed int v2; // r0
  bool v3; // zf
  int v4; // r4
  StateMgr *p_manager; // r5
  StateBase *CurrentState; // r0
  int v8; // r6

  v2 = StageActor__beforeExecute(&FIELD_U32(a1, 0x0)._._);
  v3 = v2 == 1;
  v4 = 0;
  if ( v2 == 1 )
    v3 = FIELD_U32(a1, 0x0)._._._.isDeleted == 0;
  if ( !v3 )
    return v4;
  v4 = 1;
  if ( !FIELD_U8(a1, 0x1860) )
    return v4;
  p_manager = &FIELD_U32(a1, 0x0).states.manager;
  CurrentState = StateMgr__getCurrentState(p_manager);
  v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v8 == (*((int (**)(void))stru_60C877FC._._.vtable + 2))() )
    return v4;
  StateMgr__changeState(p_manager, &stru_60C877FC._._);
  return 1;
}
