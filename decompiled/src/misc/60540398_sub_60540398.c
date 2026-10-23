/* sub_60540398
 * address: 0x60540398   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60540398(StateMethodExecuter *result)
{
  if ( !BYTE1(result[2893].currentState) )
    return StateMgr__changeState((StateMgr *)&result[2342].owner, (StateBase *)&dword_60CABA9C);
  return result;
}
