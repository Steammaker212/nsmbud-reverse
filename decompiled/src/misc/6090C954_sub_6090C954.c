/* sub_6090C954
 * address: 0x6090C954   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6090C954(int a1, float *a2)
{
  float v2; // s2
  float v3; // s0
  float v4; // s4
  float result; // s0

  v2 = a2[4] - a2[2];
  v3 = a2[3] - a2[1];
  v4 = v3 * -0.5;
  result = v3 * 0.5;
  FIELD_F32(a1, 156) = v2 * 0.5;
  FIELD_F32(a1, 160) = v2 * -0.5;
  FIELD_F32(a1, 164) = v4;
  FIELD_F32(a1, 168) = result;
  FIELD_U8(a1, 4) = 1;
  return result;
}
