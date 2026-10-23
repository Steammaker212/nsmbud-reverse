/* sub_603094F4
 * address: 0x603094F4   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603094F4(int a1, _DWORD *a2)
{
  StateMgr *v4; // r6
  StateBase *CurrentState; // r0
  int v6; // r7
  StateBase *v7; // r0
  int v8; // r6

  v4 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v6 != (*(int (**)(void))(dword_60C92F88 + 8))() )
  {
    v7 = StateMgr__getCurrentState(v4);
    v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v7, 0x0) + 2))(v7);
    if ( v8 != (*(int (**)(void))(dword_60C92FA8 + 8))() )
    {
      FIELD_U8(a1, 6607) = 1;
      FIELD_U32(a1, 6528) = *a2;
      FIELD_U32(a1, 6532) = a2[1];
    }
  }
  return 1;
}
