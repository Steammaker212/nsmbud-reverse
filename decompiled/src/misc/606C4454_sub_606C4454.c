/* sub_606C4454
 * address: 0x606C4454   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_606C4454(StateMethodExecuter *result)
{
  int v1; // r1

  *(float *)&result[5].currentState = *(float *)&result[6].vtable + *(float *)&result[5].currentState;
  v1 = result[6].currentState - 1;
  result[6].currentState = v1;
  if ( !v1 )
  {
    result[6].currentState = (int)result[7].owner;
    return StateMgr__changeState((StateMgr *)&result[1].currentState, (StateBase *)&dword_60CBAB60);
  }
  return result;
}
