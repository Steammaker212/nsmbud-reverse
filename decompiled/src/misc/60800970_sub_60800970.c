/* sub_60800970
 * address: 0x60800970   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60800970(int result, int a2)
{
  float v2; // s0

  v2 = FIELD_F32(a2, 16);
  FIELD_F32(result, 16) = v2;
  FIELD_F32(result, 20) = v2 * 398.22;
  FIELD_F32(result, 24) = v2 * 224.0;
  FIELD_U32(result, 28) = FIELD_U32(a2, 28);
  FIELD_U32(result, 32) = FIELD_U32(a2, 32);
  return result;
}
