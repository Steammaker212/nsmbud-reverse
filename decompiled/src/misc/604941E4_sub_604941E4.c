/* sub_604941E4
 * address: 0x604941E4   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604941E4(StateMethodExecuter *result)
{
  if ( !BYTE2(result[408].vtable) )
    return StateMgr__changeState((StateMgr *)&result[1].currentState, (StateBase *)&unk_60CA00B0);
  return result;
}
