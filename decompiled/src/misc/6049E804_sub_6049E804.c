/* sub_6049E804
 * address: 0x6049E804   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6049E804(StateMethodExecuter *result)
{
  int currentState; // lr
  unsigned int v2; // r2
  unsigned int v3; // r3
  int v4; // r3

  currentState = result[1874].currentState;
  if ( currentState < 1 )
    return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CA0E2C);
  v2 = 0;
  while ( 1 )
  {
    v3 = 0;
    if ( v2 < 4 )
      v3 = v2;
    v4 = *(&result[1689].currentState + v3);
    if ( FIELD_U8(v4, 2689) )
    {
      if ( FIELD_U16(v4, 2690) )
        break;
    }
    if ( (int)++v2 >= currentState )
      return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CA0E2C);
  }
  return result;
}
