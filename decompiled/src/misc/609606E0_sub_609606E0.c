/* sub_609606E0
 * address: 0x609606E0   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_609606E0(int a1, float *a2, float *a3)
{
  float v3; // s6
  float v4; // s2
  float v5; // s4
  float result; // s0

  v3 = a3[3];
  v4 = a3[1];
  v5 = a3[2];
  result = v3 + *a3;
  *a2 = *a3 - v3;
  a2[1] = v4 - v3;
  a2[2] = v5 - v3;
  a2[3] = result;
  a2[4] = v3 + v4;
  a2[5] = v3 + v5;
  return result;
}
