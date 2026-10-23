/* sub_605DB894
 * address: 0x605DB894   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_605DB894(float *a1, float *a2)
{
  float v2; // s4
  float v3; // s0
  float v4; // s2
  float v5; // s6
  float v6; // s8
  float result; // s0

  v2 = a1[125] * 0.5;
  v3 = a1[27] + a1[123];
  v4 = a1[28] + a1[124];
  v5 = a1[126] * 0.5;
  v6 = v3 - v2;
  result = v3 + v2;
  *a2 = v6;
  a2[1] = v4 - v5;
  a2[2] = result;
  a2[3] = v4 + v5;
  return result;
}
