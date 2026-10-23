/* sub_6090EA30
 * address: 0x6090EA30   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6090EA30(float *a1, float *a2, float *a3)
{
  float result; // s0

  *a2 = *a3 * (float)((float)(a1[3] - a1[1]) * 0.5);
  result = a3[1] * (float)((float)(a1[4] - a1[2]) * 0.5);
  a2[1] = result;
  return result;
}
