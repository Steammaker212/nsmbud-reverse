/* sub_604AE6A0
 * address: 0x604AE6A0   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604AE6A0(StateMethodExecuter *result)
{
  int currentState; // r2

  currentState = result[295].currentState;
  if ( result[295].owner > (void *)2 )
    currentState += 40;
  if ( *(float *)(*(_DWORD *)currentState + 44) == 0.0 )
    return StateMgr__changeState((StateMgr *)&result[1].currentState, (StateBase *)&dword_60CA17E8);
  return result;
}
