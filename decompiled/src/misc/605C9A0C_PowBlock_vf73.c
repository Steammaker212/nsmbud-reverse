/* PowBlock_vf73
 * address: 0x605C9A0C   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall PowBlock_vf73(int a1, int a2, int a3)
{
  StateBase *CurrentState; // r0
  int v6; // r6
  int result; // r0

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  result = (*((int (**)(void))stru_60CB0F14._._.vtable + 2))();
  if ( v6 == result )
  {
    result = FIELD_U32(a1, 80);
    if ( result != a3 )
      return sub_605CC8F8(a1);
  }
  return result;
}
