/* ParaGoomba__vf280
 * address: 0x603638C4   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: GoombaBase : 0x6033D584
// 
// Overridden by: None
int __fastcall ParaGoomba__vf280(int a1)
{
  signed int v2; // r0
  int v3; // r6
  StateBase *CurrentState; // r0
  int v5; // r5
  int result; // r0

  v2 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  FIELD_U32(a1, 80) = v2;
  FIELD_U32(a1, 120) = dword_60B00238[v2];
  FIELD_U32(a1, 160) = Enemy_CommonRotations[v2];
  jnt_wing_ref(a1);
  v3 = FIELD_U8(a1, 6843);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v3 )
  {
    result = (*(int (**)(void))(dword_60C95910 + 8))();
    if ( v5 == result )
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C958F0);
  }
  else
  {
    result = (*(int (**)(void))(dword_60C94494 + 8))();
    if ( v5 == result )
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C94470);
  }
  return result;
}
