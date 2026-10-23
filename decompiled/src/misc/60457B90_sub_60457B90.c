/* sub_60457B90
 * address: 0x60457B90   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60457B90(StateMethodExecuter *result)
{
  int currentState; // r1

  currentState = result[19].currentState;
  if ( currentState <= 0 )
    return StateMgr__changeState((StateMgr *)&result[18], (StateBase *)&dword_60C9CF24);
  result[19].currentState = currentState - 8;
  return result;
}
