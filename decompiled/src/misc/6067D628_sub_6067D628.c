/* sub_6067D628
 * address: 0x6067D628   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6067D628(int a1, float *a2, int a3)
{
  float v3; // s4
  float v4; // s6
  float v5; // s0
  float v6; // s2
  float v7; // s8
  float v8; // s4
  float result; // s0

  v3 = FIELD_F32(a1, 308);
  v4 = FIELD_F32(a1, 312);
  v5 = flt_60B07D3C[a3] * 0.5;
  v6 = v3 - v5;
  v7 = v4 - v5;
  v8 = v5 + v3;
  result = v5 + v4;
  *a2 = v6;
  a2[1] = v7;
  a2[2] = v8;
  a2[3] = result;
  return result;
}
