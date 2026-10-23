/* sub_60534044
 * address: 0x60534044   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60534044(StateMethodExecuter *result)
{
  if ( LOBYTE(result[6969].currentState) )
    return StateMgr__changeState((StateMgr *)&result[3], (StateBase *)&dword_60CAAEC4);
  return result;
}
