/* sub_604DF918
 * address: 0x604DF918   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604DF918(StateMethodExecuter *result)
{
  int currentState; // r1

  currentState = result[596].currentState;
  result[596].currentState = currentState + 1;
  if ( currentState >= 299 )
    return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CA5224);
  return result;
}
