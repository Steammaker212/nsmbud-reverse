/* sub_6059CBBC
 * address: 0x6059CBBC   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6059CBBC(StateMethodExecuter *result)
{
  int currentState; // r2
  int v2; // r2

  currentState = result[594].currentState;
  if ( !currentState )
    return StateMgr__changeState((StateMgr *)&result[507], &stru_60CAFAE8);
  v2 = currentState - 1;
  result[594].currentState = v2;
  if ( !v2 )
    return StateMgr__changeState((StateMgr *)&result[507], &stru_60CAFAE8);
  return result;
}
