/* IceBro_vf180
 * address: 0x602F1C98   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall IceBro_vf180(int result)
{
  FIELD_F32(result, 120) = flt_60AF1F80[FIELD_U8(result, 6604)];
  FIELD_U32(result, 124) = 0;
  FIELD_U32(result, 128) = 0;
  return result;
}
