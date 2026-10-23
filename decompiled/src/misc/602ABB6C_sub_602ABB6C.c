/* sub_602ABB6C
 * address: 0x602ABB6C   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateActor *__fastcall sub_602ABB6C(StateActor *result)
{
  if ( !LOWORD(result[1]._._.field_B0) )
  {
    FIELD_U8(result, 0x218) = 1;
    return (StateActor *)StageActor__delete(result, 1);
  }
  return result;
}
