/* sub_606C4498
 * address: 0x606C4498   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_606C4498(StateMethodExecuter *result)
{
  char *v1; // r1
  float v2; // s0
  int v3; // r2

  v1 = (char *)result + 16 * LOBYTE(result[8].vtable);
  v2 = *(float *)&result[6].vtable - *((float *)v1 + 10);
  *(float *)&result[6].vtable = v2;
  *(float *)&result[5].currentState = v2 + *(float *)&result[5].currentState;
  v3 = result[6].currentState - 1;
  result[6].currentState = v3;
  if ( !v3 )
  {
    result[6].currentState = *((_DWORD *)v1 + 12);
    return StateMgr__changeState((StateMgr *)&result[1].currentState, (StateBase *)&dword_60CBAB80);
  }
  return result;
}
