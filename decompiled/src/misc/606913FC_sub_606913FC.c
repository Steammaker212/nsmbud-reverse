/* sub_606913FC
 * address: 0x606913FC   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall sub_606913FC(float *a1)
{
  float v1; // s0
  float *result; // r0

  v1 = sqrtf(
         (float)((float)(-774.5 - a1[28]) * (float)(-774.5 - a1[28]))
       + (float)((float)(1272.7 - a1[27]) * (float)(1272.7 - a1[27])));
  result = a1 + 1542;
  *result = v1;
  return result;
}
