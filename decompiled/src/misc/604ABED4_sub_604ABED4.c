/* sub_604ABED4
 * address: 0x604ABED4   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604ABED4(int a1, int a2)
{
  StateBase *CurrentState; // r0
  int v5; // r6
  int v6; // r0
  int result; // r0

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 40));
  v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  v6 = (*(int (**)(void))(dword_60CA1670 + 8))();
  if ( v5 == v6 )
  {
    FIELD_U8(a1, 279732) = 1;
    return 279732;
  }
  else
  {
    sub_60834614(v6);
    FIELD_U32(a1, 16) |= 1u;
    FIELD_U32(a1, 279736) = a2;
    result = dword_60C99E24;
    if ( dword_60C99E24 )
      FIELD_U32(dword_60C99E24, 160480) = a2;
  }
  return result;
}
