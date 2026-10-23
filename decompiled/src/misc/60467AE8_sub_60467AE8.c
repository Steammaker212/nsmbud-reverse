/* sub_60467AE8
 * address: 0x60467AE8   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60467AE8(int result, float a2)
{
  FIELD_U8(result, 6198) = 0;
  FIELD_U32(result, 120) = FIELD_U32(result, 6104);
  FIELD_F32(result, 124) = a2;
  return result;
}
