/* sub_60378294
 * address: 0x60378294   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60378294(StateMethodExecuter *result)
{
  int currentState; // r2
  int v2; // r2

  currentState = result[508].currentState;
  if ( !currentState )
    return StateMgr__changeState((StateMgr *)&result[507], (StateBase *)&dword_60C964DC);
  v2 = currentState - 1;
  result[508].currentState = v2;
  if ( !v2 )
    return StateMgr__changeState((StateMgr *)&result[507], (StateBase *)&dword_60C964DC);
  return result;
}
