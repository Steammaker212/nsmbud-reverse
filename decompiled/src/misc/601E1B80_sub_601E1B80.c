/* sub_601E1B80
 * address: 0x601E1B80   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_601E1B80(StateMgr *a1)
{
  StateMgr *v1; // r4
  StateBase *CurrentState; // r0
  int v3; // r4

  v1 = a1;
  sub_6018EA14((int)a1);
  v1 = (StateMgr *)((char *)v1 + 284);
  StateMgr__execute(v1);
  CurrentState = StateMgr__getCurrentState(v1);
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  return v3 == (*(int (**)(void))(dword_60C89624 + 8))();
}
