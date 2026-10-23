/* sub_600D64FC
 * address: 0x600D64FC   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_600D64FC(StateMethodExecuter *result)
{
  float v1; // s2
  float v2; // s0

  *(float *)&result[9].vtable = *(float *)&result[9].vtable + *(float *)&result[10].vtable;
  v1 = *(float *)&result[9].owner + *(float *)&result[10].owner;
  *(float *)&result[9].owner = v1;
  *(float *)&result[9].currentState = *(float *)&result[9].currentState + *(float *)&result[10].currentState;
  v2 = *(float *)&result[54].owner;
  if ( v1 >= v2 )
  {
    *(float *)&result[9].owner = v2;
    return StateMgr__changeState((StateMgr *)&result[557].currentState, (StateBase *)&dword_60C843B8);
  }
  return result;
}
