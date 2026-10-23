/* sub_604972C0
 * address: 0x604972C0   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_WORD *__fastcall sub_604972C0(_WORD *result, int a2)
{
  *result = FIELD_U16(a2, 16);
  result[1] = FIELD_U16(a2, 18);
  return result;
}
