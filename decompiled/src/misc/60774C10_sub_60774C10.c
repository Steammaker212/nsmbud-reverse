/* sub_60774C10
 * address: 0x60774C10   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60774C10(int a1, float a2, float a3)
{
  StateBase *CurrentState; // r0
  int v7; // r5
  int v8; // r1
  int result; // r0

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 9916));
  v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  v8 = (*((int (**)(void))stru_60CBF960.vtable + 2))();
  result = 0;
  if ( v7 == v8 )
  {
    FIELD_F32(a1, 9980) = a2;
    FIELD_F32(a1, 9984) = a3;
    return 1;
  }
  return result;
}
