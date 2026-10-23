/* sub_601BD364
 * address: 0x601BD364   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_601BD364(int a1)
{
  StateBase *CurrentState; // r0
  int v2; // r4

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 904));
  v2 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  return v2 == (*(int (**)(void))(dword_60C8AD18 + 8))();
}
