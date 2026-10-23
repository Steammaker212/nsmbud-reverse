/* sub_604046D4
 * address: 0x604046D4   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604046D4(StateMethodExecuter *result)
{
  float v1; // s0
  float v2; // s2
  float v3; // s4
  float v4; // s0

  result[40].vtable = (char *)result[40].vtable + (unsigned int)result[223].owner;
  result[36].currentState = 0;
  v1 = *(float *)&result[37].vtable + *(float *)&result[215].owner;
  *(float *)&result[37].vtable = v1;
  v2 = *(float *)&result[214].currentState;
  if ( v1 < v2 )
    *(float *)&result[37].vtable = v2;
  result[37].owner = 0;
  if ( v1 < v2 )
    v1 = v2;
  *(float *)&result[31].currentState = *(float *)&result[31].currentState + 0.0;
  v3 = *(float *)&result[32].vtable + v1;
  *(float *)&result[32].vtable = v3;
  *(float *)&result[32].owner = *(float *)&result[32].owner + 0.0;
  v4 = *(float *)&result[213].currentState;
  if ( v3 < v4 )
  {
    *(float *)&result[32].vtable = v4;
    return StateMgr__changeState((StateMgr *)&result[3].owner, (StateBase *)&dword_60C99F5C);
  }
  return result;
}
