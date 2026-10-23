/* sub_6004B748
 * address: 0x6004B748   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall sub_6004B748(int a1, float a2, float a3)
{
  float *result; // r0

  FIELD_F32(a1, 7472) = a2;
  result = (float *)(a1 + 7476);
  *result = a3;
  return result;
}
