/* sub_600D78F8
 * address: 0x600D78F8   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600D78F8(int a1, _DWORD *a2)
{
  StateMgr *v4; // r6
  StateBase *CurrentState; // r0
  int v6; // r7
  StateBase *v7; // r0
  int v8; // r6
  __int64 v9; // r0

  v4 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v6 == (*(int (**)(void))(dword_60C84640 + 8))()
    || (v7 = StateMgr__getCurrentState(v4),
        v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v7, 0x0) + 2))(v7),
        v8 == (*(int (**)(void))(dword_60C844B8 + 8))()) )
  {
    FIELD_U32(a1, 124) = 1077936128;
    LODWORD(v9) = 1077936128;
  }
  else
  {
    HIDWORD(v9) = *a2;
    FIELD_U32(a1, 124) = 1075838976;
    LODWORD(v9) = 0;
    FIELD_U64(a1, 104) = v9;
  }
  return v9;
}
