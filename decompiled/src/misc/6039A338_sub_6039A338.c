/* sub_6039A338
 * address: 0x6039A338   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6039A338(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5
  int result; // r0

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  result = (*(int (**)(void))(dword_60C973E0 + 8))();
  if ( v3 != result )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
    CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), 0, 3);
    CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), 0, 2);
    CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), 0, 0);
    CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), 0, 1);
    CollisionMgr_vf14(a1 + 648);
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C973E0);
  }
  return result;
}
