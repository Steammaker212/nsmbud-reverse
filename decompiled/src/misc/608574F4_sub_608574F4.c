/* sub_608574F4
 * address: 0x608574F4   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_608574F4(float *a1, int a2)
{
  float v2; // s0
  float v3; // s2
  float v4; // s8
  float result; // s0

  v2 = FIELD_F32(a2, 20);
  v3 = FIELD_F32(a2, 24);
  v4 = v2 * -0.5;
  result = v2 * 0.5;
  *a1 = v4;
  a1[1] = v3 * 0.5;
  a1[2] = result;
  a1[3] = v3 * -0.5;
  return result;
}
