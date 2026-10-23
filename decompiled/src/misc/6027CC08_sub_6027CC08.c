/* sub_6027CC08
 * address: 0x6027CC08   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6027CC08(int a1, int a2, int a3)
{
  StateBase *CurrentState; // r0
  int v7; // r7
  unsigned int v8; // r1
  int v9; // r0

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  FIELD_U32(a1, 8856) = CurrentState;
  v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v7 == (*(int (**)(void))(dword_60C8EE78 + 8))() )
    FIELD_U32(a1, 8860) = *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 6300) + 12) + 24);
  v8 = FIELD_U32(a1, 6304);
  if ( v8 )
  {
    v9 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v8);
    if ( v9 )
      FIELD_U8(v9, 10566) = 1;
    FIELD_U32(a1, 6304) = 0;
  }
  Enemy__collisionIceball((Enemy *)a1, a2, a3);
  return 1;
}
