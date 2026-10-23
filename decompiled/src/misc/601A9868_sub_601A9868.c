/* sub_601A9868
 * address: 0x601A9868   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_601A9868(int a1)
{
  float result; // s0

  result = (float)(FIELD_F32(a1, 384) + 72.0) + 1.0;
  FIELD_F32(a1, 84) = result;
  FIELD_U32(a1, 396) = 72;
  return result;
}
