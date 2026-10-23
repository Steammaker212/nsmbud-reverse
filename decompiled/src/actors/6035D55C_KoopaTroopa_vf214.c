/* KoopaTroopa_vf214
 * address: 0x6035D55C   size: 124   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall KoopaTroopa_vf214(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5
  int result; // r0
  StateVirtual *v5; // r1

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  result = (*((int (**)(void))KoopTroopa_StateID_FrozenRelated._.vtable + 2))();
  if ( v3 == result )
  {
    if ( FIELD_U32(a1, 6352) )
      v5 = (StateVirtual *)&KoopaTroopa_StateID_Walk;
    else
      v5 = &KoopaTroopa_StateID_InShell;
    return (*(int (__fastcall **)(int, StateVirtual *))(*(_DWORD *)a1 + 192))(a1, v5);
  }
  return result;
}
