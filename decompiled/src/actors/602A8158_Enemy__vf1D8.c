/* Enemy__vf1D8
 * address: 0x602A8158   size: 12   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
Enemy *__fastcall Enemy__vf1D8(Enemy *result)
{
  FIELD_U32(result, 0x0)._._._.isDeleted = 1;
  return result;
}
