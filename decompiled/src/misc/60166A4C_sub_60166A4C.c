/* sub_60166A4C
 * address: 0x60166A4C   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__n128 __fastcall sub_60166A4C(float *a1, float *a2, float *a3)
{
  float v3; // s2
  float v4; // s6
  float v5; // s4
  float v6; // s2
  float v7; // s2
  float v8; // s6
  float v9; // s4
  __n128 result; // q0

  v3 = a3[1];
  v4 = a1[1] - v3;
  v5 = *a1 - *a3;
  v6 = v3 + (float)((float)(v4 * a2[3]) + (float)(v5 * a2[2]));
  *a1 = *a3 + (float)((float)(v4 * a2[1]) + (float)(v5 * *a2));
  a1[1] = v6;
  v7 = a3[1];
  v8 = a1[3] - v7;
  v9 = a1[2] - *a3;
  result.n128_f32[0] = *a3 + (float)((float)(v8 * a2[1]) + (float)(v9 * *a2));
  result.n128_f32[2] = v7 + (float)((float)(v8 * a2[3]) + (float)(v9 * a2[2]));
  a1[2] = result.n128_f32[0];
  a1[3] = result.n128_f32[2];
  return result;
}
