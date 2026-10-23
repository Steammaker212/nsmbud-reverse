/* sub_605A32E4
 * address: 0x605A32E4   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605A32E4(int result)
{
  unsigned int v1; // r1

  v1 = FIELD_U32(result, 20);
  FIELD_U16(result, 6890) = 60 * (HIBYTE(v1) & 0xF);
  FIELD_U16(result, 72320) = 60 * ((v1 >> 20) & 0xF);
  return result;
}
