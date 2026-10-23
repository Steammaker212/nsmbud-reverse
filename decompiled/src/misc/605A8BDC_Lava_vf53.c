/* Lava_vf53
 * address: 0x605A8BDC   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Lava_vf53(int result)
{
  FIELD_U16(result, 6890) = 10 * (FIELD_U8(result, 23) & 0xF);
  return result;
}
