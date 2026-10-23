/* sub_605F95B0
 * address: 0x605F95B0   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_605F95B0(int a1)
{
  _BOOL4 v2; // r1
  _BOOL4 result; // r0
  StateBase *CurrentState; // r0
  int v5; // r4

  if ( !(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 736))(a1) || (v2 = sub_603FBEA8(dword_60C99DD4), result = 0, !v2) )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    return v5 == (*(int (**)(void))(dword_60CB2430 + 8))();
  }
  return result;
}
