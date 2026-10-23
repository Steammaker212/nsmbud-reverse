/* sub_6049F490
 * address: 0x6049F490   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6049F490(StateMethodExecuter *result)
{
  _BYTE *currentState; // r1
  _BYTE *vtable; // r1
  _BYTE *owner; // r1
  _BYTE *v4; // r1

  currentState = (_BYTE *)result[1689].currentState;
  if ( !currentState[2689] || !currentState[2691] && !currentState[2702] && !currentState[2690] )
  {
    vtable = result[1690].vtable;
    if ( !vtable[2689] || !vtable[2691] && !vtable[2702] && !vtable[2690] )
    {
      owner = result[1690].owner;
      if ( !owner[2689] || !owner[2691] && !owner[2702] && !owner[2690] )
      {
        v4 = (_BYTE *)result[1690].currentState;
        if ( !v4[2689] || !v4[2691] && !v4[2702] && !v4[2690] )
          return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CA0FEC);
      }
    }
  }
  return result;
}
