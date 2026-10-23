/* sub_607A812C
 * address: 0x607A812C   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607A812C(StateMgr *a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5
  int result; // r0

  CurrentState = StateMgr__getCurrentState(a1 + 605);
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  result = (*(int (**)(void))(dword_60CC4B0C + 8))();
  if ( v3 == result )
  {
    result = (int)a1[606].currentMethodExecuter;
    if ( result == 1 )
    {
      sub_60773630((int)a1, 48, 0);
      a1[606].currentMethodExecuter = (StateMethodExecuter *)2;
      a1[607].executer = (StateExecuter *)30;
      return 9712;
    }
  }
  return result;
}
