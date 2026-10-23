/* EffectData_init_helper
 * address: 0x60881BA4   size: 12   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall EffectData_init_helper(int result)
{
  FIELD_U8(result, 5) = 1;
  return result;
}
