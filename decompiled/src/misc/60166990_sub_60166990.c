/* sub_60166990
 * address: 0x60166990   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60166990(float *a1, unsigned int a2, float *a3)
{
  float v3; // s4
  float v4; // s6
  float v5; // s8
  float v6; // s10
  float *v7; // r1
  float v8; // s1
  float v9; // s12
  float v10; // s2
  float v11; // s4
  float v12; // s6
  float result; // s0

  v3 = a3[1];
  v4 = *a1 - *a3;
  v5 = a1[1] - v3;
  v6 = (float)(a2 & 0xFFFFFF);
  v7 = (float *)((char *)sinLutTable + ((a2 >> 20) & 0xFF0));
  v8 = v7[2] + (float)((float)(v6 * 0.000000059605) * v7[3]);
  v9 = *v7 + (float)((float)(v6 * 0.000000059605) * v7[1]);
  *a1 = *a3 + (float)((float)(v8 * v4) - (float)(v5 * v9));
  a1[1] = v3 + (float)((float)(v8 * v5) + (float)(v9 * v4));
  v10 = a3[1];
  v11 = a1[2] - *a3;
  v12 = a1[3] - v10;
  result = *a3 + (float)((float)(v8 * v11) - (float)(v12 * v9));
  a1[2] = result;
  a1[3] = v10 + (float)((float)(v8 * v12) + (float)(v9 * v11));
  return result;
}
