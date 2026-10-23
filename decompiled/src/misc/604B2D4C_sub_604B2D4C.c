/* sub_604B2D4C
 * address: 0x604B2D4C   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604B2D4C(int a1)
{
  StateMethodExecuter *result; // r0

  result = (StateMethodExecuter *)sub_604B2054((unsigned __int8 *)dword_60CA1910);
  if ( !result )
    return StateMgr__changeState((StateMgr *)(a1 + 516), (StateBase *)&dword_60CA1B94);
  return result;
}
