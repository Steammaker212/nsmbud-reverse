/* sub_607AEB18
 * address: 0x607AEB18   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607AEB18(int a1, _DWORD *a2)
{
  StateMgr *v4; // r6
  StateBase *CurrentState; // r0
  int v6; // r7
  StateBase *v7; // r0
  int v8; // r6
  int v9; // r1
  int result; // r0

  v4 = (StateMgr *)(a1 + 9916);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 9916));
  v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v6 == (*(int (**)(void))(dword_60CC4CDC + 8))() && (FIELD_U8(a1, 1210) & 1) != 0
    || (v7 = StateMgr__getCurrentState(v4),
        v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v7, 0x0) + 2))(v7),
        v9 = (*(int (**)(void))(dword_60CC4F6C + 8))(),
        result = 0,
        v8 == v9)
    && (FIELD_U8(a1, 1210) & 0x10) != 0 )
  {
    sub_6076FDA4((_DWORD *)a1, a2);
    return 1;
  }
  return result;
}
