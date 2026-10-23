/* sub_606C43D8
 * address: 0x606C43D8   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_606C43D8(StateMethodExecuter *result)
{
  float v1; // s0
  int v2; // r1
  void *vtable; // r1

  v1 = *(float *)&result[6].vtable + *((float *)&result[3].owner + 4 * LOBYTE(result[8].vtable));
  *(float *)&result[6].vtable = v1;
  *(float *)&result[5].currentState = v1 + *(float *)&result[5].currentState;
  v2 = result[6].currentState - 1;
  result[6].currentState = v2;
  if ( !v2 )
  {
    vtable = result[7].vtable;
    if ( vtable )
    {
      result[6].currentState = (int)vtable;
      return StateMgr__changeState((StateMgr *)&result[1].currentState, (StateBase *)&dword_60CBAB40);
    }
    else
    {
      result[6].currentState = (int)result[7].owner;
      return StateMgr__changeState((StateMgr *)&result[1].currentState, (StateBase *)&dword_60CBAB60);
    }
  }
  return result;
}
