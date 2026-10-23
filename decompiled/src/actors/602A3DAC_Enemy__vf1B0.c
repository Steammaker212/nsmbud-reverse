/* Enemy__vf1B0
 * address: 0x602A3DAC   size: 112   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
int __fastcall Enemy__vf1B0(int a1, int a2)
{
  StateBase *CurrentState; // r0
  int v5; // r6
  int result; // r0

  if ( sub_602A588C(a1) )
    return sub_605D477C(a2, 0);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v5 == (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() )
    return sub_605D477C(a2, 0);
  result = sub_600025B8(a1);
  if ( result == 1 )
    return sub_605D477C(a2, 0);
  return result;
}
