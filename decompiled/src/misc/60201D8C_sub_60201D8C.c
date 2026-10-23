/* sub_60201D8C
 * address: 0x60201D8C   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60201D8C(StateMethodExecuter *result)
{
  int currentState; // r1

  currentState = result[47].currentState;
  if ( !currentState )
    return StateMgr__changeState((StateMgr *)&result[23].currentState, &stru_60C8C3F8);
  result[47].currentState = currentState - 1;
  return result;
}
