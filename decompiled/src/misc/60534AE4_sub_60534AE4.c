/* sub_60534AE4
 * address: 0x60534AE4   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60534AE4(StateMethodExecuter *result)
{
  int currentState; // r1

  currentState = result[4372].currentState;
  if ( currentState )
  {
    if ( currentState == 2 )
      return StateMgr__changeState((StateMgr *)&result[3], (StateBase *)&dword_60CAB064);
    else
      return StateMgr__changeState((StateMgr *)&result[3], (StateBase *)&dword_60CAB044);
  }
  return result;
}
