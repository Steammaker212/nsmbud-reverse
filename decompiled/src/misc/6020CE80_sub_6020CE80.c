/* sub_6020CE80
 * address: 0x6020CE80   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6020CE80(StateMethodExecuter *result)
{
  int currentState; // r1

  currentState = result[36].currentState;
  if ( !currentState )
    return StateMgr__changeState((StateMgr *)&result[23].currentState, (StateBase *)&unk_60C8CC6C);
  result[36].currentState = currentState - 1;
  return result;
}
