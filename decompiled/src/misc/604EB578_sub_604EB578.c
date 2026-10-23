/* sub_604EB578
 * address: 0x604EB578   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604EB578(StateMethodExecuter *result)
{
  if ( !BYTE2(result[1286].owner) )
  {
    if ( HIBYTE(result[1286].owner) )
      return StateMgr__changeState((StateMgr *)&result[1].currentState, (StateBase *)&dword_60CA6080);
  }
  return result;
}
