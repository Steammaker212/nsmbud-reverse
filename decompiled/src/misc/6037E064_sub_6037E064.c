/* sub_6037E064
 * address: 0x6037E064   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6037E064(int a1)
{
  unsigned int v1; // r1
  int v2; // s0
  float *v3; // r1
  float v4; // s14
  float v5; // s0
  float v6; // s8
  float v7; // s4

  v1 = FIELD_U32(a1, 164);
  v2 = v1 & 0xFFFFFF;
  v3 = (float *)((char *)sinLutTable + ((v1 >> 20) & 0xFF0));
  v4 = FIELD_F32(a1, 7500);
  v5 = (float)(unsigned int)v2 * 0.000000059605;
  v6 = v3[2] + (float)(v5 * v3[3]);
  v7 = *v3 + (float)(v3[1] * v5);
  FIELD_F32(a1, 108) = FIELD_F32(a1, 7512) + (float)((float)(v6 * 0.0) - (float)((float)(v4 + -32.0) * v7));
  FIELD_F32(a1, 112) = FIELD_F32(a1, 7516) + (float)((float)((float)(v4 + -32.0) * v6) + (float)(v7 * 0.0));
  return Enemy__vf268((Enemy *)a1);
}
