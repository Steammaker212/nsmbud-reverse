/* sub_60362E68
 * address: 0x60362E68   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60362E68(int result)
{
  FIELD_U32(result, 80) ^= 1u;
  FIELD_F32(result, 120) = -FIELD_F32(result, 120);
  FIELD_U32(result, 132) = 1065353216;
  FIELD_U32(result, 136) = -1065353216;
  FIELD_U32(result, 140) = 0;
  return result;
}
