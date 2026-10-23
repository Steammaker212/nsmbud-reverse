/* sub_6062F7B4
 * address: 0x6062F7B4   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6062F7B4(StateMethodExecuter *result)
{
  int currentState; // r2
  int v2; // r2

  if ( !result[508].owner )
  {
    currentState = result[508].currentState;
    if ( !currentState )
      return StateMgr__changeState((StateMgr *)&result[507], (StateBase *)&dword_60CB4148);
    v2 = currentState - 1;
    result[508].currentState = v2;
    if ( !v2 )
      return StateMgr__changeState((StateMgr *)&result[507], (StateBase *)&dword_60CB4148);
  }
  return result;
}
