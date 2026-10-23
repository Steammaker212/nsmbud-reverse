/* sub_6067F108
 * address: 0x6067F108   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6067F108(int a1, float *a2)
{
  unsigned int v4; // r0
  float v5; // s2
  float *v6; // r0
  float v7; // s0
  float v8; // s2
  float v9; // s4
  float result; // s0

  v4 = sub_6000F350((LineFollower *)(a1 + 184));
  v5 = (float)(v4 & 0xFFFFFF);
  v6 = (float *)((char *)sinLutTable + ((v4 >> 20) & 0xFF0));
  v7 = v5 * 0.000000059605;
  v8 = FIELD_F32(a1, 3044);
  v9 = *v6 + (float)(v6[1] * v7);
  result = v8 * (float)(v6[2] + (float)(v7 * v6[3]));
  *a2 = result;
  a2[1] = v8 * v9;
  return result;
}
