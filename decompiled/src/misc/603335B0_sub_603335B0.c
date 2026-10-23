/* sub_603335B0
 * address: 0x603335B0   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603335B0(int a1)
{
  int result; // r0
  bool v3; // zf
  StateBase *CurrentState; // r0
  int v5; // r5

  result = FIELD_U8(a1, 20);
  v3 = (result & 1) == 0;
  if ( (result & 1) == 0 )
  {
    result = FIELD_U8(a1, 536);
    v3 = result == 0;
  }
  if ( v3 )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    result = (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))();
    if ( v5 != result )
    {
      if ( sub_60001814((StageActor *)a1, a1 + 648) == 1 )
      {
        sub_6014B758(a1 + 648, 1);
        if ( !sub_600020BC() )
        {
          sub_6014B758(a1 + 648, 0);
          sub_600020BC();
        }
      }
      result = sub_60001B14((StageActor *)a1, a1 + 648);
      if ( result == 1 )
      {
        sub_6014B6F8(a1 + 648);
        result = sub_600020BC();
        if ( !result )
        {
          sub_6014B69C(a1 + 648);
          return sub_600020BC();
        }
      }
    }
  }
  return result;
}
