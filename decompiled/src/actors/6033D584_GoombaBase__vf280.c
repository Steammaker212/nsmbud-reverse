/* GoombaBase__vf280
 * address: 0x6033D584   size: 156   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x603638C4 : ParaGoomba
int __fastcall GoombaBase__vf280(StateActor *a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5

  FIELD_U32(a1, 0x50) = StageActor__directionToPlayerX(a1, &FIELD_U32(a1, 0x6C));
  CurrentState = StateMgr__getCurrentState(&FIELD_U32(a1, 0x17C4));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v3 == (*(int (**)(void))(dword_60C94494 + 8))() )
    (*(void (__fastcall **)(StateActor *, int *))(FIELD_U32(a1, 0x0) + 192))(a1, &dword_60C94470);
  FIELD_U32(a1, 0xA0) = Enemy_CommonRotations[FIELD_U32(a1, 0x50)];
  (*(void (__fastcall **)(StateActor *))(FIELD_U32(a1, 0x0) + 644))(a1);
  return sub_6033D008((int)a1, &a1[1]._._.aCollider.activeNode.owner->_.vtable);
}
