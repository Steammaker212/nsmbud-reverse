/* sub_6090CC48
 * address: 0x6090CC48   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6090CC48(float *a1, float *a2, float *a3)
{
  float v3; // s0
  float v4; // s2
  float v5; // s6
  float result; // s0

  a2[2] = -a1[37];
  *a2 = (float)((float)((float)(a1[42] - a1[41]) * *a3) * 0.5) + (float)((float)(a1[42] + a1[41]) * 0.5);
  v3 = a1[39];
  v4 = a1[40];
  v5 = v3 - v4;
  result = v3 + v4;
  a2[1] = (float)((float)(v5 * a3[1]) * 0.5) + (float)(result * 0.5);
  return result;
}
