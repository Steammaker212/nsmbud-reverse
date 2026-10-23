/* sub_607AA02C
 * address: 0x607AA02C   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607AA02C(int a1, int a2)
{
  StateBase *CurrentState; // r0
  int v5; // r6
  int result; // r0

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 9916));
  v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  result = (*(int (**)(void))(dword_60CC510C + 8))();
  if ( v5 == result )
  {
    FIELD_U32(a1, 1224) |= 0x100000u;
    result = FIELD_U32(a1, 1236) | 0x20000000;
    FIELD_U32(a1, 1236) = result;
    if ( a2 )
      return (*(int (__fastcall **)(int, int))(*(_DWORD *)a2 + 1212))(a2, a1);
  }
  return result;
}
