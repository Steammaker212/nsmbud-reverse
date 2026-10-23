/* sub_6059A758
 * address: 0x6059A758   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6059A758(int a1)
{
  int v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r6
  int v5; // r0
  _DWORD *v6; // r1

  v2 = 0;
  if ( (FIELD_U8(a1, 6262) & 2) != 0 )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 13452));
    v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    v5 = (*(int (**)(void))(dword_60CAF9DC + 8))();
    v6 = (_DWORD *)(a1 + 13468);
    if ( v4 == v5 )
    {
      *v6 = 1;
      (*(void (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 13452) + 24))(
        FIELD_U32(a1, 13452),
        FIELD_U32(a1, 13460));
      return 1;
    }
    *v6 = 3;
    StateMgr__changeState((StateMgr *)(a1 + 13452), (StateBase *)&dword_60CAFA3C);
    return 1;
  }
  return v2;
}
