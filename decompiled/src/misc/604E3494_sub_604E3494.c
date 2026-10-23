/* sub_604E3494
 * address: 0x604E3494   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604E3494(StateMethodExecuter *result)
{
  int v1; // r2

  v1 = result[1709].currentState - 1;
  result[1709].currentState = v1;
  if ( !v1 || ((int)result[1541].owner & 0x2000) != 0 )
    return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&dword_60CA588C);
  return result;
}
