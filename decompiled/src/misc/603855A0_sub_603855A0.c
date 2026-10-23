/* sub_603855A0
 * address: 0x603855A0   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603855A0(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5
  int v4; // r0

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v3 != (*(int (**)(void))(dword_60C96B64 + 8))() )
  {
    sub_60386340(FIELD_U32(a1, 6300), FIELD_U32(a1, 6304));
    v4 = FIELD_U32(a1, 6316);
    if ( v4 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
  }
  return 1;
}
