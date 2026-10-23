/* sub_607A5B1C
 * address: 0x607A5B1C   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_607A5B1C(int a1)
{
  int v2; // r1
  _BOOL4 result; // r0
  StateBase *CurrentState; // r0
  int v5; // r5

  v2 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 708))(a1);
  result = 0;
  if ( v2 == 1 )
  {
    if ( sub_607869AC(a1 + 688)
      && (CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 9680)),
          v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState),
          v5 == (*((int (**)(void))stru_60CBF37C.vtable + 2))()) )
    {
      return (FIELD_U8(a1, 6912) & 1) != 0;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
