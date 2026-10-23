/* KoopaTroopa_vf178
 * address: 0x6035CAF8   size: 112   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall KoopaTroopa_vf178(int a1)
{
  int result; // r0
  StateBase *CurrentState; // r0
  int v4; // r5

  result = FIELD_U32(a1, 6352);
  if ( result )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    result = (*((int (**)(void))KoopaTroopa_StateID_Walk._.vtable + 2))();
    if ( v4 == result )
      return (*(int (__fastcall **)(int, State *))(*(_DWORD *)a1 + 192))(a1, &KoopaTroopa_StateID_Turn);
  }
  return result;
}
