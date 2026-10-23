/* sub_603E9BDC
 * address: 0x603E9BDC   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_603E9BDC(StateMethodExecuter *result)
{
  int currentState; // r1
  int v2; // r1

  currentState = result[2].currentState;
  if ( !currentState )
    return StateMgr__changeState((StateMgr *)&result[9], (StateBase *)&dword_60C999E0);
  v2 = currentState - 1;
  result[2].currentState = v2;
  if ( !v2 )
    return StateMgr__changeState((StateMgr *)&result[9], (StateBase *)&dword_60C999E0);
  return result;
}
