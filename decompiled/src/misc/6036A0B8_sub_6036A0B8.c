/* sub_6036A0B8
 * address: 0x6036A0B8   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6036A0B8(int a1, int a2, ActiveCollider *a3)
{
  StateMgr *v6; // r7
  StateBase *CurrentState; // r0
  int v8; // r5
  StateBase *v10; // r0
  int v11; // r5
  StageActor *owner; // r0
  float v13; // s0
  StateBase *v14; // r0
  int v15; // r5
  StateBase *v16; // r0
  int v17; // r5

  v6 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v8 == (*(int (**)(void))(dword_60C95D98 + 8))() )
    return 0;
  v10 = StateMgr__getCurrentState(v6);
  v11 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v10, 0x0) + 2))(v10);
  if ( v11 == (*(int (**)(void))(dword_60C95D38 + 8))() )
  {
    owner = FIELD_U32(a3, 0x40);
    if ( !owner
      || (v13 = FIELD_F32(a1, 120), (float)(v13 * FIELD_F32(a2, 180)) <= 0.0)
      || (float)(v13 * FIELD_U32(owner, 0x78).x) <= 0.0 )
    {
      SE_EMY_PENGUIN_DAMAGE_ref_2(a1, (ActiveCollider *)a2, a3);
      return 0;
    }
  }
  else
  {
    v14 = StateMgr__getCurrentState(v6);
    v15 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v14, 0x0) + 2))(v14);
    if ( v15 != (*(int (**)(void))(dword_60C95D58 + 8))() )
    {
      v16 = StateMgr__getCurrentState(v6);
      v17 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v16, 0x0) + 2))(v16);
      if ( v17 != (*(int (**)(void))(dword_60C95D78 + 8))() )
        return 0;
    }
  }
  return Enemy__collisionSlide(a1, a2, (int)a3);
}
