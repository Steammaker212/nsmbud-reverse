/* sub_602EBD40
 * address: 0x602EBD40   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_602EBD40(StateMethodExecuter *result)
{
  if ( (result[44].currentState & 0x10000) != 0 )
  {
    result[6].currentState = (int)result[46].owner;
    result[8].owner = (void *)-1103101952;
    return StateMgr__changeState((StateMgr *)&result[507], &stru_60C92684);
  }
  return result;
}
