/* sub_604E2D64
 * address: 0x604E2D64   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604E2D64(StateMethodExecuter *result)
{
  int v1; // r1
  StateMgr *v2; // r0
  int *v3; // r1

  v1 = result[1709].currentState - 1;
  result[1709].currentState = v1;
  if ( !v1 )
  {
    v2 = (StateMgr *)&result[2];
    if ( FIELD_U32(dword_60C99DEC, 508) == 1 )
      v3 = &dword_60CA572C;
    else
      v3 = &dword_60CA574C;
    return StateMgr__changeState(v2, (StateBase *)v3);
  }
  return result;
}
