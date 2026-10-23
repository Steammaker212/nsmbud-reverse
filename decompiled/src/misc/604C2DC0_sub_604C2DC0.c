/* sub_604C2DC0
 * address: 0x604C2DC0   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604C2DC0(StateMethodExecuter *result)
{
  if ( !LOBYTE(result[424].currentState) )
    return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)result[3].owner);
  return result;
}
