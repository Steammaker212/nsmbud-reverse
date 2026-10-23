/* sub_6037C504
 * address: 0x6037C504   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6037C504(int a1)
{
  float v1; // s14
  float v2; // s0
  float *v3; // r1
  float v4; // s8
  float v5; // s4

  v1 = FIELD_F32(a1, 7608);
  v2 = (float)(FIELD_U32(a1, 164) & 0xFFFFFF) * 0.000000059605;
  v3 = (float *)((char *)sinLutTable + ((FIELD_U32(a1, 164) >> 20) & 0xFF0));
  v4 = v3[2] + (float)(v2 * v3[3]);
  v5 = *v3 + (float)(v3[1] * v2);
  FIELD_F32(a1, 108) = FIELD_F32(a1, 7616) + (float)((float)(v4 * 0.0) - (float)((float)(v1 + -32.0) * v5));
  FIELD_F32(a1, 112) = FIELD_F32(a1, 7620) + (float)((float)((float)(v1 + -32.0) * v4) + (float)(v5 * 0.0));
  return Enemy__vf268((Enemy *)a1);
}
