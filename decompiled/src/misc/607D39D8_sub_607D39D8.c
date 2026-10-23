/* sub_607D39D8
 * address: 0x607D39D8   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607D39D8(int a1, _DWORD *a2)
{
  StateBase *CurrentState; // r0
  int v5; // r6
  int v6; // r1
  int result; // r0

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 9916));
  v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  v6 = (*((int (**)(void))stru_60CC55A8.vtable + 2))();
  result = 0;
  if ( v5 == v6 && (FIELD_U8(a1, 1210) & 1) != 0 )
  {
    sub_6076FDA4((_DWORD *)a1, a2);
    return 1;
  }
  return result;
}
