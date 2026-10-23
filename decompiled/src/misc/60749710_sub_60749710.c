/* sub_60749710
 * address: 0x60749710   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60749710(StateMethodExecuter *result)
{
  if ( !LOBYTE(result[60].currentState) && !result[56].owner )
    return StateMgr__changeState((StateMgr *)&result[59].owner, (StateBase *)&dword_60CBE718);
  return result;
}
