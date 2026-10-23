/* sub_607ECAE4
 * address: 0x607ECAE4   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_607ECAE4(StateMethodExecuter *result)
{
  int currentState; // [sp+0h] [bp-4h]

  if ( !LOBYTE(result[1197].owner) )
  {
    currentState = result[1197].currentState;
    if ( currentState )
    {
      if ( currentState == 1 )
      {
        FIELD_U32(dword_60C99DEC, 508) = 3;
        return StateMgr__changeState((StateMgr *)&result[18], (StateBase *)&dword_60CC5D6C);
      }
      else if ( currentState == 2 )
      {
        return StateMgr__changeState((StateMgr *)&result[18], (StateBase *)&dword_60CC5C2C);
      }
    }
    else
    {
      return StateMgr__changeState((StateMgr *)&result[18], (StateBase *)&dword_60CC5BCC);
    }
  }
  return result;
}
