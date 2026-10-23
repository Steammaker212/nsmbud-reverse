/* sub_6053FBB0
 * address: 0x6053FBB0   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6053FBB0(StateMethodExecuter *result)
{
  if ( !LOBYTE(result[2736].currentState) )
    return StateMgr__changeState((StateMgr *)&result[2342].owner, (StateBase *)result[2343].currentState);
  return result;
}
