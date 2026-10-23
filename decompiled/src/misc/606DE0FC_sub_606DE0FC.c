/* sub_606DE0FC
 * address: 0x606DE0FC   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_606DE0FC(StateMethodExecuter *result)
{
  int currentState_high; // r2
  bool v2; // zf
  __int16 v3; // r2

  currentState_high = HIWORD(result[565].currentState);
  v2 = currentState_high == 0;
  if ( HIWORD(result[565].currentState) )
  {
    v3 = currentState_high - 1;
    HIWORD(result[565].currentState) = v3;
    v2 = v3 == 0;
  }
  if ( v2 )
    return StateMgr__changeState((StateMgr *)&result[507], (StateBase *)&dword_60CBBB6C);
  return result;
}
