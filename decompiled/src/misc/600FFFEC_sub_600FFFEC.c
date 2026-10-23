/* sub_600FFFEC
 * address: 0x600FFFEC   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600FFFEC(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5
  int result; // r0
  int v5; // r1
  int v6; // r1

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  result = (*(int (**)(void))(dword_60C85F34 + 8))();
  if ( v3 != result )
  {
    result = a1 + 9440;
    v5 = FIELD_U32(a1, 9440);
    if ( v5 )
    {
      v6 = v5 - 1;
      *(_DWORD *)result = v6;
      if ( !v6 )
      {
        FIELD_U32(a1, 9436) = -1;
        return 9436;
      }
    }
  }
  return result;
}
