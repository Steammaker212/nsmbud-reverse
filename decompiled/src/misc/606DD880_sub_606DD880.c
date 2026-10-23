/* sub_606DD880
 * address: 0x606DD880   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_606DD880(StateMethodExecuter *result)
{
  if ( !LOWORD(result[565].currentState) )
    return StateMgr__changeState((StateMgr *)&result[507], (StateBase *)&dword_60CBBB6C);
  return result;
}
