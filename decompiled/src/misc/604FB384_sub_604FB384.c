/* sub_604FB384
 * address: 0x604FB384   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604FB384(StateMethodExecuter *result)
{
  int currentState; // r1

  currentState = result[3132].currentState;
  if ( currentState )
  {
    if ( FIELD_U8(currentState, 65) == 255 )
      return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CA7118);
  }
  return result;
}
