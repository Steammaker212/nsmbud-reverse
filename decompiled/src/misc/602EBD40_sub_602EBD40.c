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
    FIELD_U32(result + (6) * 12, 0x8) = (int)FIELD_U32(result + (46) * 12, 0x4);
    FIELD_U32(result + (8) * 12, 0x4) = (void *)-1103101952;
    return StateMgr__changeState((StateMgr *)&result[507], &stru_60C92684);
  }
  return result;
}
