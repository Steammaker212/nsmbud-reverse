/* Enemy__vf1AC
 * address: 0x602A3D38   size: 112   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x6033CD80 : GoombaBase
signed int __fastcall Enemy__vf1AC(Enemy *a1, int a2)
{
  StateBase *currState; // r0
  int v5; // r6
  signed int result; // r0

  if ( sub_602A588C((int)a1) )
    return sub_605D477C(a2, 0);
  currState = StateMgr__getCurrentState(&FIELD_U32(a1, 0x0).states.manager);
  v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(currState, 0x0) + 2))(currState);
  if ( v5 == (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() )
    return sub_605D477C(a2, 0);
  result = sub_600025B8((int)a1);
  if ( result == 1 )
    return sub_605D477C(a2, 0);
  return result;
}
