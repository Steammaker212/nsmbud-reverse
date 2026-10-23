/* sub_608525CC
 * address: 0x608525CC   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_608525CC(int a1)
{
  unsigned int result; // r0

  FIELD_U32(a1, 36) = 0;
  FIELD_F32(a1, 16) = (float)(unsigned int)sub_608502E4(a1);
  result = FIELD_U32(a1, 44) & 0xFFFFFFF8;
  FIELD_U32(a1, 44) = result;
  return result;
}
