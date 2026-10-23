/* sub_607F91A0
 * address: 0x607F91A0   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_607F91A0(StateMethodExecuter *result)
{
  bool v1; // zf
  int *v2; // r1
  int currentState; // [sp+0h] [bp-4h]

  currentState = result[7084].currentState;
  if ( currentState == 4 )
  {
    v2 = &dword_60CC6440;
    return StateMgr__changeState((StateMgr *)&result[62], (StateBase *)v2);
  }
  v1 = currentState == 7;
  if ( currentState != 7 )
    v1 = currentState == 5;
  if ( v1 )
  {
    BYTE2(result[3072].vtable) = 0;
    v2 = &dword_60CC6400;
    return StateMgr__changeState((StateMgr *)&result[62], (StateBase *)v2);
  }
  return result;
}
