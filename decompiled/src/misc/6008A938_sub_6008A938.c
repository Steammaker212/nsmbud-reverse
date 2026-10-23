/* sub_6008A938
 * address: 0x6008A938   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6008A938(Enemy *a1, ActiveCollider *a2, ActiveCollider *a3)
{
  StageActor *owner; // r7
  StateBase *CurrentState; // r0
  int v8; // r8
  int playerId; // r2
  int direction; // r1
  StageActor *v11; // r0

  owner = FIELD_U32(a3, 0x40);
  if ( !owner )
    return 0;
  if ( Actor__getProfileId(&FIELD_U32(a3, 0x40)) == 392 )
  {
    if ( FIELD_U32(a3, 0x8C) != 9 )
    {
      direction = FIELD_U32(owner, 0x50);
      v11 = owner;
      playerId = -1;
      goto LABEL_8;
    }
    CurrentState = StateMgr__getCurrentState((StateMgr *)&owner[9].aCollider.field_64);
    v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v8 == (*(int (**)(void))(stru_60C92664 + 8))() )
    {
      playerId = FIELD_U8(owner, 0x54);
      direction = FIELD_U32(owner, 0x50);
      v11 = owner;
LABEL_8:
      sub_602EE7B8(v11, direction, playerId);
    }
  }
  return Enemy__vf100(a1, a2, a3);
}
