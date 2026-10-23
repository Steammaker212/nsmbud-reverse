/* sub_607C3524
 * address: 0x607C3524   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_607C3524(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 9916));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  return v3 == (*(int (**)(void))(dword_60CC4F2C + 8))() && FIELD_U32(a1, 9940) == 3;
}
