/* sub_60833200
 * address: 0x60833200   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall sub_60833200(float *result, float *a2)
{
  float v2; // s18
  float v3; // s2

  v2 = sqrtf((float)((float)(a2[5] * a2[5]) + (float)(a2[4] * a2[4])) + (float)(a2[6] * a2[6]));
  v3 = sqrtf((float)((float)(a2[9] * a2[9]) + (float)(a2[8] * a2[8])) + (float)(a2[10] * a2[10]));
  *result = sqrtf((float)((float)(a2[1] * a2[1]) + (float)(*a2 * *a2)) + (float)(a2[2] * a2[2]));
  result[1] = v2;
  result[2] = v3;
  return result;
}
