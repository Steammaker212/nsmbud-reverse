/* sub_6049EFB8
 * address: 0x6049EFB8   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6049EFB8(StateMethodExecuter *result)
{
  if ( !LOBYTE(result[389].currentState) )
    return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)result[3].owner);
  return result;
}
